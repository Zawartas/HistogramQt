#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>
#include <QPainter>
#include <QRect>
#include <QDebug>

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = nullptr);

signals:

public slots:

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

};

#endif // RENDERAREA_H
