package org.cowpoop.moooooo;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class Moooooo extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_moooooo);

    // Example of a call to a native method
    TextView titleInfoText = (TextView) findViewById(R.id.textInfo);
        titleInfoText.setText(txtInfo());
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String txtInfo();

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("global-text");
        System.loadLibrary("native-lib");
    }
}
