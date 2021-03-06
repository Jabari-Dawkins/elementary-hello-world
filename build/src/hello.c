/* hello.c generated by valac 0.36.14, the Vala compiler
 * generated from hello.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_HELLO_WORLD_APP (hello_world_app_get_type ())
#define HELLO_WORLD_APP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_HELLO_WORLD_APP, HelloWorldApp))
#define HELLO_WORLD_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_HELLO_WORLD_APP, HelloWorldAppClass))
#define IS_HELLO_WORLD_APP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_HELLO_WORLD_APP))
#define IS_HELLO_WORLD_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_HELLO_WORLD_APP))
#define HELLO_WORLD_APP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_HELLO_WORLD_APP, HelloWorldAppClass))

typedef struct _HelloWorldApp HelloWorldApp;
typedef struct _HelloWorldAppClass HelloWorldAppClass;
typedef struct _HelloWorldAppPrivate HelloWorldAppPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _HelloWorldApp {
	GtkApplication parent_instance;
	HelloWorldAppPrivate * priv;
};

struct _HelloWorldAppClass {
	GtkApplicationClass parent_class;
};

struct _HelloWorldAppPrivate {
	GtkApplicationWindow* main_window;
	GtkHeaderBar* main_header;
	GtkAboutDialog* about_dialog;
	GtkMenuButton* menu_button;
};


static gpointer hello_world_app_parent_class = NULL;

GType hello_world_app_get_type (void) G_GNUC_CONST;
#define HELLO_WORLD_APP_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_HELLO_WORLD_APP, HelloWorldAppPrivate))
enum  {
	HELLO_WORLD_APP_0_PROPERTY
};
HelloWorldApp* hello_world_app_new (void);
HelloWorldApp* hello_world_app_construct (GType object_type);
static void hello_world_app_real_activate (GApplication* base);
static void hello_world_app_setup_menu (HelloWorldApp* self);
static void hello_world_app_setup_about_dialog (HelloWorldApp* self);
static void hello_world_app_setup_header_bar (HelloWorldApp* self);
static void hello_world_app_setup_main_window (HelloWorldApp* self);
static void _gtk_main_quit_gtk_widget_destroy (GtkWidget* _sender, gpointer self);
gint hello_world_app_main (gchar** args, int args_length1);
static void hello_world_app_finalize (GObject * obj);


HelloWorldApp* hello_world_app_construct (GType object_type) {
	HelloWorldApp * self = NULL;
#line 17 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	self = (HelloWorldApp*) g_object_new (object_type, "application-id", "com.github.jabari-dawkins.hello-gtk", "flags", G_APPLICATION_FLAGS_NONE, NULL);
#line 16 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	return self;
#line 68 "hello.c"
}


HelloWorldApp* hello_world_app_new (void) {
#line 16 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	return hello_world_app_construct (TYPE_HELLO_WORLD_APP);
#line 75 "hello.c"
}


static void hello_world_app_real_activate (GApplication* base) {
	HelloWorldApp * self;
	GtkApplicationWindow* _tmp0_;
#line 23 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	self = (HelloWorldApp*) base;
#line 24 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	hello_world_app_setup_menu (self);
#line 25 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	hello_world_app_setup_about_dialog (self);
#line 26 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	hello_world_app_setup_header_bar (self);
#line 27 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	hello_world_app_setup_main_window (self);
#line 28 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp0_ = self->priv->main_window;
#line 28 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	gtk_widget_show_all ((GtkWidget*) _tmp0_);
#line 96 "hello.c"
}


static void hello_world_app_setup_menu (HelloWorldApp* self) {
	GtkMenuButton* _tmp0_;
	GtkMenuButton* _tmp1_;
	GtkImage* _tmp2_;
	GtkImage* _tmp3_;
	GtkMenuButton* _tmp4_;
#line 31 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	g_return_if_fail (self != NULL);
#line 32 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp0_ = (GtkMenuButton*) gtk_menu_button_new ();
#line 32 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	g_object_ref_sink (_tmp0_);
#line 32 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_g_object_unref0 (self->priv->menu_button);
#line 32 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	self->priv->menu_button = _tmp0_;
#line 33 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp1_ = self->priv->menu_button;
#line 33 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp2_ = (GtkImage*) gtk_image_new_from_icon_name ("open-menu", GTK_ICON_SIZE_LARGE_TOOLBAR);
#line 33 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	g_object_ref_sink (_tmp2_);
#line 33 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp3_ = _tmp2_;
#line 33 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	gtk_button_set_image ((GtkButton*) _tmp1_, (GtkWidget*) _tmp3_);
#line 33 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_g_object_unref0 (_tmp3_);
#line 34 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp4_ = self->priv->menu_button;
#line 34 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	gtk_widget_set_valign ((GtkWidget*) _tmp4_, GTK_ALIGN_CENTER);
#line 132 "hello.c"
}


static void hello_world_app_setup_about_dialog (HelloWorldApp* self) {
	GtkAboutDialog* _tmp0_;
	GtkAboutDialog* _tmp1_;
	GtkAboutDialog* _tmp2_;
	GtkApplicationWindow* _tmp3_;
	GtkAboutDialog* _tmp4_;
#line 37 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	g_return_if_fail (self != NULL);
#line 38 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp0_ = (GtkAboutDialog*) gtk_about_dialog_new ();
#line 38 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	g_object_ref_sink (_tmp0_);
#line 38 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_g_object_unref0 (self->priv->about_dialog);
#line 38 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	self->priv->about_dialog = _tmp0_;
#line 39 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp1_ = self->priv->about_dialog;
#line 39 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	gtk_window_set_destroy_with_parent ((GtkWindow*) _tmp1_, TRUE);
#line 40 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp2_ = self->priv->about_dialog;
#line 40 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp3_ = self->priv->main_window;
#line 40 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	gtk_window_set_transient_for ((GtkWindow*) _tmp2_, (GtkWindow*) _tmp3_);
#line 41 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp4_ = self->priv->about_dialog;
#line 41 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	gtk_window_set_modal ((GtkWindow*) _tmp4_, TRUE);
#line 166 "hello.c"
}


static void hello_world_app_setup_header_bar (HelloWorldApp* self) {
	GtkHeaderBar* _tmp0_;
	GtkHeaderBar* _tmp1_;
	GtkHeaderBar* _tmp2_;
	GtkHeaderBar* _tmp3_;
	GtkMenuButton* _tmp4_;
#line 44 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	g_return_if_fail (self != NULL);
#line 45 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp0_ = (GtkHeaderBar*) gtk_header_bar_new ();
#line 45 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	g_object_ref_sink (_tmp0_);
#line 45 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_g_object_unref0 (self->priv->main_header);
#line 45 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	self->priv->main_header = _tmp0_;
#line 46 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp1_ = self->priv->main_header;
#line 46 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	gtk_header_bar_set_title (_tmp1_, "Hello World");
#line 47 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp2_ = self->priv->main_header;
#line 47 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	gtk_header_bar_set_show_close_button (_tmp2_, TRUE);
#line 48 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp3_ = self->priv->main_header;
#line 48 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp4_ = self->priv->menu_button;
#line 48 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	gtk_header_bar_pack_end (_tmp3_, (GtkWidget*) _tmp4_);
#line 200 "hello.c"
}


static void _gtk_main_quit_gtk_widget_destroy (GtkWidget* _sender, gpointer self) {
#line 58 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	gtk_main_quit ();
#line 207 "hello.c"
}


static void hello_world_app_setup_main_window (HelloWorldApp* self) {
	GtkLabel* label = NULL;
	GtkLabel* _tmp0_;
	GtkApplicationWindow* _tmp1_;
	GtkApplicationWindow* _tmp2_;
	GtkApplicationWindow* _tmp3_;
	GtkApplicationWindow* _tmp4_;
	GtkHeaderBar* _tmp5_;
	GtkApplicationWindow* _tmp6_;
	GtkApplicationWindow* _tmp7_;
#line 51 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	g_return_if_fail (self != NULL);
#line 52 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp0_ = (GtkLabel*) gtk_label_new ("Hello World!");
#line 52 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	g_object_ref_sink (_tmp0_);
#line 52 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	label = _tmp0_;
#line 53 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp1_ = (GtkApplicationWindow*) gtk_application_window_new ((GtkApplication*) self);
#line 53 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	g_object_ref_sink (_tmp1_);
#line 53 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_g_object_unref0 (self->priv->main_window);
#line 53 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	self->priv->main_window = _tmp1_;
#line 54 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp2_ = self->priv->main_window;
#line 54 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	g_object_set ((GtkWindow*) _tmp2_, "default-width", 1000, NULL);
#line 55 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp3_ = self->priv->main_window;
#line 55 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	g_object_set ((GtkWindow*) _tmp3_, "default-height", 800, NULL);
#line 56 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp4_ = self->priv->main_window;
#line 56 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp5_ = self->priv->main_header;
#line 56 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	gtk_window_set_titlebar ((GtkWindow*) _tmp4_, (GtkWidget*) _tmp5_);
#line 57 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp6_ = self->priv->main_window;
#line 57 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	gtk_container_add ((GtkContainer*) _tmp6_, (GtkWidget*) label);
#line 58 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp7_ = self->priv->main_window;
#line 58 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	g_signal_connect ((GtkWidget*) _tmp7_, "destroy", (GCallback) _gtk_main_quit_gtk_widget_destroy, NULL);
#line 51 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_g_object_unref0 (label);
#line 261 "hello.c"
}


gint hello_world_app_main (gchar** args, int args_length1) {
	gint result = 0;
	HelloWorldApp* app = NULL;
	HelloWorldApp* _tmp0_;
	gchar** _tmp1_;
	gint _tmp1__length1;
	gint _tmp2_;
#line 62 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp0_ = hello_world_app_new ();
#line 62 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	app = _tmp0_;
#line 63 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp1_ = args;
#line 63 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp1__length1 = args_length1;
#line 63 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_tmp2_ = g_application_run ((GApplication*) app, _tmp1__length1, _tmp1_);
#line 63 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	result = _tmp2_;
#line 63 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_g_object_unref0 (app);
#line 63 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	return result;
#line 288 "hello.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 61 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	return hello_world_app_main (argv, argc);
#line 298 "hello.c"
}


static void hello_world_app_class_init (HelloWorldAppClass * klass) {
#line 9 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	hello_world_app_parent_class = g_type_class_peek_parent (klass);
#line 9 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	g_type_class_add_private (klass, sizeof (HelloWorldAppPrivate));
#line 9 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	((GApplicationClass *) klass)->activate = (void (*) (GApplication *)) hello_world_app_real_activate;
#line 9 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	G_OBJECT_CLASS (klass)->finalize = hello_world_app_finalize;
#line 311 "hello.c"
}


static void hello_world_app_instance_init (HelloWorldApp * self) {
#line 9 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	self->priv = HELLO_WORLD_APP_GET_PRIVATE (self);
#line 318 "hello.c"
}


static void hello_world_app_finalize (GObject * obj) {
	HelloWorldApp * self;
#line 9 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_HELLO_WORLD_APP, HelloWorldApp);
#line 10 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_g_object_unref0 (self->priv->main_window);
#line 11 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_g_object_unref0 (self->priv->main_header);
#line 12 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_g_object_unref0 (self->priv->about_dialog);
#line 13 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	_g_object_unref0 (self->priv->menu_button);
#line 9 "/home/jabari/Development/elementary-apps/elementary-hello-world/src/hello.vala"
	G_OBJECT_CLASS (hello_world_app_parent_class)->finalize (obj);
#line 336 "hello.c"
}


GType hello_world_app_get_type (void) {
	static volatile gsize hello_world_app_type_id__volatile = 0;
	if (g_once_init_enter (&hello_world_app_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (HelloWorldAppClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) hello_world_app_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (HelloWorldApp), 0, (GInstanceInitFunc) hello_world_app_instance_init, NULL };
		GType hello_world_app_type_id;
		hello_world_app_type_id = g_type_register_static (gtk_application_get_type (), "HelloWorldApp", &g_define_type_info, 0);
		g_once_init_leave (&hello_world_app_type_id__volatile, hello_world_app_type_id);
	}
	return hello_world_app_type_id__volatile;
}



