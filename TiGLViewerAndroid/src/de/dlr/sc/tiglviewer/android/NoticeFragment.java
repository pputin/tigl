package de.dlr.sc.tiglviewer.android;
import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.app.DialogFragment;
import android.content.DialogInterface;
import android.os.Bundle;

  public class NoticeFragment extends DialogFragment {
        
        public interface noticeFragmentsListener{
            public void onYesClick(DialogFragment dialog);
            public void onNoClick(DialogFragment dialog);
        }
        
        
        noticeFragmentsListener listener;
        
        
        public void onAttach(Activity activity){
            super.onAttach(activity);
            
            try{
                
                listener = (noticeFragmentsListener) activity;
            }
            catch(ClassCastException e){
                
                throw new ClassCastException(activity.toString() + "must implement the listener first");
            }
        }
        
        @Override
        public Dialog onCreateDialog(Bundle savedState){
            
            AlertDialog.Builder builder = new AlertDialog.Builder(getActivity());
            builder.setMessage("There are no files to view. Would you like to download some sample models?")
                   .setPositiveButton("Yes", new DialogInterface.OnClickListener() {
                    @Override
                    public void onClick(DialogInterface dialog, int which) {
                        listener.onYesClick(NoticeFragment.this);
                    }
                    })
                   .setNegativeButton("No", new DialogInterface.OnClickListener() {
                    @Override
                    public void onClick(DialogInterface dialog, int which) {
                        listener.onNoClick(NoticeFragment.this);
                    }
                    });
            
            return builder.create();
        }
        
}