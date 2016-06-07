#ifndef BASE_H
#define BASE_H
#include <string>
using std::string;
namespace Israfil {
namespace Netease {
const string NEBase            = "http://music.163.com";
const string NEApiBase         = NEBase + "/api";
const string NEWeApiBase       = NEBase + "/weapi";
const string NESearchURL       = NEApiBase + "/search/get";
const string NESongInfo        = NEApiBase + "/song/detail?ids=[{0}]";
const string NEGetArtistAlbums = NEApiBase + "/artist/albums/{0}?offset={1}&limit={2}";
const string NEGetAlbumSongs   = NEApiBase + "/album/{0}";
const string NEMagicKey        = "3go8&$8*3*3h0k(2)2";
} // namespace Netease
} // namespace Israfil
#endif // ifndef BASE_H