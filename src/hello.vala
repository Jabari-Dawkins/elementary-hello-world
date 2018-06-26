using Gtk;

/* Potential Names:
- NotePass
- Chalkboard
- Psst
*/

class HelloWorldApp : Gtk.Application {
    private Gtk.ApplicationWindow main_window;
    private Gtk.HeaderBar main_header;
    private Gtk.AboutDialog about_dialog;
    private Gtk.MenuButton menu_button;
    //private Gtk.Button send_button;

    public HelloWorldApp() {
        Object(
            application_id: "com.github.jabari-dawkins.hello-gtk",
            flags: ApplicationFlags.FLAGS_NONE
        );
    }

    protected override void activate() {
        setup_menu();
        setup_about_dialog();
        setup_header_bar();
        setup_main_window();
        main_window.show_all();
    }

    private void setup_menu() {
        menu_button = new Gtk.MenuButton();
        menu_button.image = new Gtk.Image.from_icon_name("open-menu", Gtk.IconSize.LARGE_TOOLBAR);
        menu_button.valign = Gtk.Align.CENTER;
    }

    private void setup_about_dialog() {
        about_dialog = new Gtk.AboutDialog();
        about_dialog.set_destroy_with_parent(true);
        about_dialog.set_transient_for (main_window);
        about_dialog.set_modal (true);
    }

    private void setup_header_bar() {
        main_header = new Gtk.HeaderBar();
        main_header.set_title("Hello World");
        main_header.set_show_close_button(true);
        main_header.pack_end(menu_button);
    }
    
    private void setup_main_window() {
        var label = new Gtk.Label("Hello World!");
        main_window = new Gtk.ApplicationWindow(this);
        main_window.default_width = 1000;
        main_window.default_height = 800;
        main_window.set_titlebar(main_header);
        main_window.add(label);
        main_window.destroy.connect(Gtk.main_quit);
    }

    public static int main(string[] args) {
        var app = new HelloWorldApp();
        return app.run(args);
    }
}

/*
int main(string[] args) {
    Gtk.init(ref args);

    var header = new Gtk.HeaderBar();
    var window = new Gtk.Window();

    header.set_show_close_button(true);
    window.set_titlebar(header);
    window.destroy.connect(Gtk.main_quit);
    window.set_default_size(350, 70);
    window.border_width = 10;

    window.add(new Gtk.Button.with_label("Hello Elementary"));
    window.show_all();
    

    Gtk.main();

    return 0;
}
*/