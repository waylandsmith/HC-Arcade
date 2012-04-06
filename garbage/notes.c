#include <Elementary.h>

static void
on_done(void *data, Evas_Object *obj, void *event_info)
{
	/* quit the mainloop (elm_run) */
	elm_exit();
}

EAPI int
elm_main(int argc, char **argv)
{
	Evas_Object *win, *bg, *box, *lab, *btn;

	win = elm _win_add(NULL, "Hello", ELM_WIN_BASIC);
	elm_win_title_set(win, "Hello");

	bg = elm_bg_add(win);
	evas_object_size_hint_weight_set(bg, 0.0, 0.0);
	elm_win_resize_object_add(win, bg);
	evas_object_show(bg);

	box = elm_box_add(win);
	elm_box_horizontal_set(box, EINA_TRUE);
	evas_object_size_hint_weight_set(box, 0.0, 0.0);
	elm_win_resize_object_add(win, box);
	evas_object_show(box);

	lab = elm_label_add(win);
	elm_label_label_set(lab, "These are my notes");
	evas_object_size_hint_weight_set(lab, 0.0, 0.0);
	elm_box_pack_end(box, lab);
	evas_object_show(lab);

	evas_object_show(win);

	elm_run();
	return 0;
}
ELM_MAIN()
