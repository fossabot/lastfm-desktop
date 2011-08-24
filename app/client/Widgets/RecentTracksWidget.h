#ifndef RECENT_TRACKS_WIDGET_H_
#define RECENT_TRACKS_WIDGET_H_

#include <QWidget>

namespace lastfm { class Track; }
using lastfm::Track;

class RecentTracksWidget : public QWidget 
{
    Q_OBJECT
    public:
        RecentTracksWidget( QWidget* parent = 0 );

    protected slots:
        void onTrackClicked( const Track& track );
        void onBackClicked();
        void onMoveFinished( class QLayoutItem* i );

    protected:
        class SideBySideLayout* layout;
        class ActivityListWidget* activityList;
};

#endif //RECENT_TRACKS_WIDGET_H_
