#ifndef SCREENHANDLER_H
#define SCREENHANDLER_H

class ScreenHandler
{
public:
    ScreenHandler ();
    virtual void left4clicked ();
    virtual void left3clicked ();
    virtual void left2clicked ();
    virtual void left1clicked ();

    virtual void right4clicked ();
    virtual void right3clicked ();
    virtual void right2clicked ();
    virtual void right1clicked ();

    virtual void okClicked ();
    virtual void backspaceClicked ();
    virtual ~ScreenHandler() = 0{};
};

#endif // SCREENHANDLER_H
