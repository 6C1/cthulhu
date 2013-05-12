/*  This file is part of CTHULHU.                                     
                                                                      
    CTHULHU is free software: you can redistribute it and/or modify   
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    CTHULHU is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the     
    GNU General Public License for more details.                      
                                                                      
    You should have received a copy of the GNU General Public License 
    along with CTHULHU.  If not, see <http://www.gnu.org/licenses/>.  
*/

#include "cthulhu.h"

int main(int argc, char* argv[]) {
  dstr_t d;
  dstr_init(&d, "This is a string.\n");
  
  printf(d.str);
  printf("\nString length: %d \tString size: %d",strlen(d.str), d.n);

  dstr_append(&d, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed interdum, quam sit amet placerat convallis, velit risus pharetra dolor, nec tempor sem justo vel nisi. Nunc placerat elit elit. Nullam ac sapien libero, eget auctor nisi. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut laoreet imperdiet elit, et elementum metus dapibus vitae. Aenean auctor, orci at feugiat iaculis, lacus neque lobortis enim, eu tristique diam purus in erat. Aliquam erat volutpat. Aenean est ligula, congue quis rutrum adipiscing, lobortis eu metus. Cras sollicitudin suscipit nulla non dignissim. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed consequat lacinia dignissim. Integer a odio nibh. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Integer mattis libero a augue vulputate eu bibendum eros tristique. Curabitur vulputate, dui eu varius interdum, arcu enim laoreet velit, vel vehicula eros urna eu eros. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Vestibulum pharetra, ligula non tincidunt scelerisque, leo augue sollicitudin lorem, id congue massa ligula ac lectus. Praesent gravida, dui a bibendum eleifend, nisi erat ornare arcu, sed tincidunt eros diam sit amet nulla. Sed quam elit, euismod et sagittis non, tempus eu eros. Phasellus at lacus nibh, euismod adipiscing massa. Nullam tempor, lacus sit amet vehicula feugiat, tortor leo convallis lorem, quis pellentesque nunc nisi nec nulla. In ut tellus vitae erat egestas dapibus vel et turpis. Etiam dolor lorem, egestas vel faucibus id, laoreet a nisl. Morbi eros erat, feugiat at adipiscing ut, lacinia id nibh. Curabitur sit amet nisl non urna viverra egestas in sit amet velit. Phasellus semper lectus egestas nibh pretium tincidunt. Curabitur id quam turpis. Phasellus pretium facilisis urna commodo vulputate. Morbi in orci ac orci porttitor dictum. Donec ipsum lectus, volutpat id auctor et, ornare a sapien. Aliquam mattis lectus eu nisi ultrices eu pharetra magna mattis. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Curabitur elementum pretium leo eu congue. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. In quis odio at eros feugiat lobortis quis eget nisi. Ut ac neque quam, id pellentesque sapien. Phasellus scelerisque metus ut dolor ultrices ac sagittis diam pretium. Mauris lacus eros, commodo vitae adipiscing et, semper sagittis orci. Sed viverra fringilla convallis. Praesent commodo vehicula bibendum. Vestibulum facilisis rhoncus odio et porta. Praesent arcu ipsum, lacinia vel placerat ut, interdum vitae nibh. Integer erat dui, tincidunt id mattis eu, auctor non turpis. Aenean scelerisque hendrerit libero a consequat. Sed mauris metus, pulvinar at ultrices id, facilisis vel urna. Phasellus porta vulputate nisi, ac tempus eros pulvinar posuere. Nulla ipsum eros, sollicitudin vitae condimentum quis, bibendum ac arcu. Quisque sodales suscipit eros ut posuere. Sed suscipit malesuada ipsum, in iaculis elit scelerisque at. Aenean congue dapibus sem, non pharetra ligula condimentum ut. Sed nec mauris non risus eleifend tempor at vel nibh. Etiam tellus arcu, varius at aliquet id, fermentum et turpis. Pellentesque condimentum tempor eros, sed hendrerit nisi pulvinar quis. Etiam dictum consectetur elit ut fermentum. In mattis fringilla pretium. Duis eget nunc turpis, a iaculis dui. Phasellus non mauris turpis, vitae congue arcu. Nullam iaculis pharetra enim vel aliquam. Ut ultrices ipsum vel est laoreet rhoncus. In ac odio enim, eu eleifend neque. Pellentesque eget nibh libero. Nullam vitae eros at ipsum vulputate vestibulum quis non odio. Quisque vel erat vitae arcu tempor convallis ut varius augue. Vivamus blandit vulputate convallis. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Pellentesque molestie felis ut ante rutrum elementum. Donec vitae est ligula. Sed laoreet volutpat nibh, vitae porta arcu ornare sit amet. Nullam malesuada magna at ligula blandit eleifend euismod ipsum scelerisque. Nam sit amet nulla enim. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Etiam tincidunt lacus quis quam porttitor luctus. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Ut lacus nunc, sodales non convallis et, mollis a metus. Ut blandit convallis elit, vitae semper urna ornare eget. Sed in nisl eget libero vehicula mollis. Fusce mauris urna, rutrum sed auctor ac, sodales nec sapien. Fusce quis neque at dolor semper fringilla. Aliquam erat volutpat. Praesent vulputate pulvinar dolor, nec lacinia orci placerat eget. Nunc bibendum, nunc nec lacinia venenatis, velit libero fringilla erat, ac hendrerit sapien erat vel lectus. Proin dignissim enim vel lectus hendrerit mattis. Maecenas accumsan erat ligula. Suspendisse ac enim risus, vitae sollicitudin magna. Aenean et commodo mi. Aenean et augue eget metus eleifend consequat. Praesent malesuada, risus sed pharetra egestas, diam augue fringilla tellus, et condimentum arcu massa non turpis. Integer nec ipsum vitae nibh adipiscing fermentum. Sed sed justo varius elit malesuada ultrices sit amet vitae nisi. Nam urna orci, ornare sed accumsan sit amet, accumsan non sapien. Etiam consequat, quam sed tincidunt porta, ante augue bibendum dui, eget ultricies nisi tellus sed eros. Nunc a est at ligula accumsan porta sit amet suscipit lorem. Vestibulum commodo consequat velit eget porta. Mauris tristique nulla bibendum diam ultricies sed faucibus eros condimentum. Vestibulum nec pulvinar leo. Nullam non odio sed odio interdum tincidunt. Aenean in metus odio, in condimentum enim. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Donec pretium vulputate lectus, ac adipiscing erat porttitor in. Mauris ornare fringilla ipsum, nec posuere urna sodales in. Praesent pharetra libero in ipsum condimentum iaculis. Praesent ultrices, augue in fringilla eleifend, metus eros semper ligula, sit amet scelerisque lorem dolor vel elit. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Integer in dui ante, vitae aliquet quam. Donec quis nisl urna. Ut mattis urna quis felis pretium sit amet porttitor ligula euismod. Aliquam in metus vitae purus interdum pretium. Quisque viverra, augue sit amet accumsan auctor, ligula nunc rutrum risus, adipiscing consectetur nisi dolor vel leo. In lorem enim, auctor ut sagittis et, varius sed elit. Aliquam erat volutpat. Aenean consectetur urna eget enim convallis molestie. Etiam lacinia, diam vitae varius dapibus, quam leo consectetur erat, ut dignissim risus augue at ligula. Vestibulum ligula lacus, laoreet sed iaculis non, facilisis ac neque. Duis sagittis lacinia diam ac euismod. Sed orci elit, ultrices non vestibulum vitae, egestas ut augue. Maecenas sagittis porta ligula, vel ultricies mauris tincidunt vel. Suspendisse elit elit, mollis non suscipit in, vestibulum a ligula. Phasellus sed leo erat, et ultricies nunc. Vivamus aliquet, urna ut placerat tempus, sem libero volutpat libero, nec molestie leo risus quis nisi. Maecenas et libero nibh, sit amet rutrum augue. Vivamus quis odio est. Morbi lobortis tincidunt enim, vitae porta mauris viverra dignissim. Donec egestas ultrices diam, sit amet lobortis mauris malesuada nec. Maecenas est elit, posuere non volutpat egestas, gravida non ipsum. Quisque mattis blandit lorem, vel commodo elit vestibulum ac. Aliquam eget magna felis, a tempor sapien. In ut nunc felis. Aliquam sit amet nunc orci. Aenean commodo hendrerit nunc id molestie. Aliquam ipsum ante, ultricies et porta non, pellentesque nec erat. Sed a massa risus, ac egestas tellus. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. In rutrum erat quis magna lobortis dapibus. Pellentesque non sapien bibendum massa rutrum porttitor sed et urna. Donec rhoncus, mi eget consectetur congue, arcu neque interdum eros, quis pretium metus velit id augue. Nulla viverra, leo at faucibus feugiat, nunc neque viverra lorem, sit amet eleifend eros arcu a ipsum. Donec dui sapien, molestie vel sollicitudin eget, ornare sit amet nisl. Mauris quam ipsum, lacinia vel pretium quis, euismod in dui. Sed dapibus elit non ante eleifend adipiscing. Sed vitae mauris a tortor vulputate pulvinar. Mauris vitae tellus in sapien imperdiet euismod vitae nec tellus. Donec porttitor cursus sodales. Donec adipiscing lacus et sem commodo eget porta arcu aliquet. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Curabitur ac eros magna, at gravida elit. Praesent neque neque, cursus vitae pellentesque at, aliquam non mauris. Donec semper interdum orci, vel porttitor justo facilisis in. Donec a dapibus odio. Sed magna magna, suscipit vel viverra eu, sagittis eget diam. Nulla pulvinar pretium turpis a ultricies. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; In dui nunc, convallis sed interdum vitae, tempus sed tellus. Nullam aliquam fermentum ultricies. Integer varius libero ut enim accumsan non vehicula sapien commodo. Praesent eget sapien dapibus velit euismod tempus consectetur ut lacus. Nulla vulputate magna eget augue laoreet a lacinia est faucibus. In pellentesque risus quam. Fusce facilisis, tellus sed fermentum pretium, ligula velit tempor ipsum, ac cursus nibh elit id lacus. Cras dignissim, tortor vitae sollicitudin mattis, ligula tortor posuere nulla, sed convallis mauris elit non elit. Sed accumsan fermentum dapibus. Nulla accumsan tincidunt nibh, eget vulputate eros interdum a. Etiam quis enim vel odio tristique viverra ut ac mi. Duis feugiat ligula nec magna ornare sit amet ullamcorper justo auctor. Donec risus lacus, cursus vel venenatis vitae, gravida eu ante. Nulla tristique pharetra mi suscipit ultricies. Sed id ligula orci, a pharetra turpis. Cras nec lectus tincidunt purus tempor pretium. Aliquam vitae metus vel felis vulputate elementum vitae vel nulla. Mauris interdum, tortor nec porta feugiat, turpis nisl egestas neque, eget auctor erat quam eu lacus. Morbi pretium, est pharetra porttitor elementum, tellus mauris pretium metus, ac rhoncus arcu magna accumsan mi. Sed consectetur vulputate dapibus. Suspendisse lorem ante, varius id imperdiet tincidunt, aliquam at urna. Suspendisse sollicitudin lacus ut diam sollicitudin dictum vel vitae neque. Fusce sed ullamcorper enim. Nulla ac magna quis elit tincidunt dapibus. Aenean ac lorem massa, et viverra lacus. Etiam pulvinar dignissim sapien, vel vehicula nisl pharetra at. Nam eu scelerisque felis. Aliquam in nisl erat, vel vehicula tortor. Aliquam convallis arcu a arcu sollicitudin lobortis. Mauris posuere eleifend eleifend. Nunc ullamcorper sem eget lorem placerat vel fermentum erat porttitor. Morbi eget nisl eu quam ullamcorper molestie. Morbi at diam lorem, ac consectetur lacus. Proin sollicitudin vestibulum neque, vel congue dolor egestas id. Nunc rutrum ultrices lacinia. Donec accumsan diam eu urna ultricies gravida. Vestibulum tristique ultricies justo, sit amet aliquam libero aliquam id. Aliquam orci est, rutrum sed aliquam et, ultrices at dui. Aenean vel purus turpis, faucibus suscipit urna. Suspendisse sit amet imperdiet turpis. Phasellus vitae urna ac ante molestie facilisis. Nulla fringilla, sem et condimentum bibendum, purus mauris pulvinar ipsum, sit amet volutpat velit est mollis dui. Nulla purus sapien, imperdiet ac ultricies venenatis, volutpat eu urna. Duis eget metus iaculis ipsum ullamcorper blandit. In suscipit ornare quam, eget euismod dui dictum ut. Donec ligula ipsum, sodales ut tincidunt ac, vestibulum eget mauris. Praesent eu arcu eget nunc porta tristique. Phasellus a quam quis neque imperdiet molestie sit amet pellentesque dui. Sed faucibus pulvinar lacus, nec eleifend turpis malesuada id. Integer blandit malesuada convallis. Proin ac ipsum non mi tincidunt aliquet id commodo dolor. In mollis quam mauris, quis feugiat elit. Donec lectus lectus, placerat at iaculis a, luctus non mauris. Nulla ut tortor vel ante molestie mattis vitae non quam. Duis bibendum quam quis leo consequat non lobortis metus laoreet. Pellentesque id risus massa. Pellentesque risus quam, placerat pretium porta id, ornare at lorem. Curabitur in est lorem, eu hendrerit nisl. Fusce quis euismod sem. Vivamus in dolor nec neque convallis lobortis. Mauris congue posuere condimentum. Morbi id consectetur elit. Nunc tincidunt tristique dignissim. Nunc placerat interdum lobortis. Fusce sit amet sem ante. In ut adipiscing mauris. Cras sit amet enim felis, nec congue lacus. Praesent blandit ornare arcu, non rhoncus sapien volutpat eu. Etiam eget dapibus urna. Fusce sit amet nisl neque. Nullam ut sem dolor. Aliquam erat volutpat. Nulla facilisi. Suspendisse eget elit lectus. Ut vel metus massa, sed suscipit neque. Proin facilisis placerat orci ac sagittis. Vestibulum non lacus nisl, et suscipit augue. Vivamus vel ultrices lectus. Phasellus vestibulum fringilla orci nec tempus. Vivamus suscipit quam eget orci laoreet id vestibulum dui pretium. Suspendisse tincidunt consectetur tristique. Nunc aliquam nisl eget justo molestie imperdiet. Integer posuere mi eget urna consectetur vehicula. Morbi adipiscing libero a elit vulputate auctor. Etiam id sodales eros. Nulla quis risus nulla, vitae tempus nunc. Donec eget mauris ut mauris commodo posuere. Vivamus fermentum tempus diam, pulvinar scelerisque metus convallis vel. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Phasellus a turpis purus, at adipiscing felis. Quisque arcu lorem, lacinia sed ullamcorper id, bibendum id est. Vestibulum ut elit enim. Suspendisse vehicula tincidunt tincidunt. Curabitur justo felis, sollicitudin et accumsan molestie, malesuada nec ante. Nullam in pretium mi. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Duis et leo vel magna consectetur feugiat eu vitae velit. Vivamus tellus erat, tincidunt vel pellentesque nec, pellentesque a nulla. Fusce scelerisque pharetra varius. Ut vel sapien leo, ut laoreet leo. Nulla a molestie augue. Morbi eu sapien risus. Nulla facilisi. Proin eu turpis eget lorem accumsan semper ullamcorper sed turpis. Nam vulputate metus eget lacus vehicula bibendum quis dictum nisi. Nunc pretium, elit ac facilisis ornare, felis dui egestas neque, eget ultrices nisi enim vitae massa. Duis sit amet placerat est. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Sed iaculis dapibus leo in suscipit. Aenean sagittis feugiat tellus sed dictum. Vivamus non enim tellus. Praesent semper varius mauris et lobortis. Aenean gravida ipsum sit amet neque sodales eu fringilla orci facilisis. Phasellus neque libero, sodales sed tempus et, pellentesque et tortor. Cras risus eros, eleifend tempor cursus eget, ultricies eget nisl. Aliquam tincidunt laoreet sem, in aliquam enim bibendum sed. Aliquam velit elit, feugiat sed vulputate id, rhoncus id justo. Curabitur ultricies blandit congue. In porta hendrerit quam, in dictum diam faucibus id. Praesent in urna eget nisl dictum tincidunt. Aliquam eget tincidunt justo. Fusce mi lorem, varius quis tincidunt rhoncus, tincidunt in lorem. Fusce tempor hendrerit sollicitudin. Quisque neque odio, rutrum at imperdiet in, placerat quis enim. Duis mollis egestas massa ac tincidunt. Suspendisse vel nisl eget lectus pellentesque euismod. Pellentesque fringilla velit ac diam pulvinar dictum. Maecenas fringilla venenatis bibendum. Duis non risus diam. In hac habitasse platea dictumst. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Nullam dapibus feugiat imperdiet. Aenean dictum pretium enim ac lacinia. Etiam lobortis tincidunt nisi id fermentum. In tempus interdum lorem nec volutpat. Donec magna lacus, faucibus et ornare ut, pulvinar non erat. Quisque lacinia accumsan ligula, sed mollis est rhoncus a. Aliquam eu augue sem. Nunc neque urna, hendrerit eu iaculis at, egestas eu turpis. Morbi vehicula posuere lectus vel aliquam. Curabitur lacus urna, auctor non bibendum eget, viverra sit amet nibh. Sed enim mauris, fringilla in congue a, interdum eu ligula. Cras consequat, eros non ultricies adipiscing, eros leo faucibus nunc, id ullamcorper libero arcu sed libero. Sed et risus dolor, ac dictum eros. Donec sit amet eros velit, et porta felis. Curabitur et purus eu lacus rutrum lobortis vitae non erat. Ut porttitor blandit erat eu sollicitudin. Fusce consequat volutpat pellentesque. Ut lacus urna, pellentesque sed vehicula et, sollicitudin nec libero. Cras et purus justo, sed sodales massa. Integer rutrum, turpis vitae pretium suscipit, leo eros condimentum tortor, sed congue neque massa et tellus. Fusce ac pulvinar dolor. Praesent fringilla elit ultrices magna fringilla eu gravida elit malesuada. Proin volutpat, dolor a lacinia aliquam, dolor sapien viverra sapien, et pulvinar orci libero et urna. In tortor nisl, bibendum nec eleifend in, sodales a sapien. Vivamus et est quam, id commodo diam. Vestibulum vel est eu turpis tristique pretium. Aliquam vitae nibh enim, ac fringilla lectus. Mauris porttitor tortor vitae arcu pharetra a pharetra ligula vestibulum. Pellentesque elementum commodo justo vel gravida. Sed vehicula, libero eu varius scelerisque, metus enim vehicula turpis, quis volutpat dui diam a nulla. Nullam eros metus, consequat dictum fringilla sed, pulvinar et arcu. Duis dui sapien, ornare non tempus non, tincidunt non nibh. Pellentesque vel quam id erat dapibus varius vitae a lectus. Vivamus commodo varius sapien sed tempus. Suspendisse auctor orci quis est volutpat ac blandit massa dignissim. Duis ultrices nibh non justo ullamcorper eget pulvinar orci faucibus. Duis tempus facilisis dictum. Curabitur rutrum erat eget dolor eleifend porttitor nec vitae neque. Maecenas non nunc elit. Phasellus quis nunc eu sapien sollicitudin ullamcorper. Suspendisse a diam sem, vitae pharetra orci. Curabitur cursus cursus dolor, quis tincidunt lorem interdum vel. Aenean dolor nulla, adipiscing nec lacinia vitae, tristique nec elit. Suspendisse potenti. Morbi id neque lobortis mauris tempor laoreet. Integer viverra interdum nibh nec vulputate. Nulla dapibus nunc non velit pharetra lobortis. Vestibulum volutpat rutrum nunc vitae egestas. Suspendisse semper semper lorem ac gravida. Fusce placerat feugiat feugiat. Sed vitae consectetur velit. Pellentesque dapibus sem id dui pulvinar mollis. Vestibulum a mi eget sem tincidunt placerat sollicitudin sit amet dolor. In hac habitasse platea dictumst. Nulla orci risus, auctor non suscipit et, tincidunt id libero. Praesent vel gravida nibh. Sed convallis dui adipiscing turpis porta rhoncus fringilla urna elementum. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Phasellus facilisis, magna bibendum eleifend accumsan, sapien purus bibendum ante, eget pulvinar augue massa quis urna. Vivamus interdum risus id turpis lacinia et mattis risus venenatis. Fusce convallis pulvinar lectus, eu varius quam facilisis vitae. Phasellus sodales sodales consequat. Aenean aliquet gravida molestie. In justo est, interdum tincidunt tincidunt sed, placerat ut neque. Quisque eget sem arcu, id varius mi. Morbi nec nisl et odio condimentum aliquam. Nam gravida, augue a dapibus iaculis, leo sapien viverra felis, non ultrices metus lacus in eros. Donec dictum cursus velit, nec dignissim est molestie ut. Quisque ut lorem a erat porttitor luctus. Pellentesque dignissim ligula dictum odio fermentum ultrices. Nunc sit amet quam et nulla volutpat placerat ut vitae sapien. In massa felis, sagittis facilisis porta sed, placerat id nunc. Sed in urna quis leo pellentesque viverra at ullamcorper libero. Maecenas viverra posuere turpis, sed tempus elit adipiscing luctus. Curabitur a arcu ut sapien ultricies semper. Aliquam erat volutpat. Nullam et mauris nibh, sit amet tempor ipsum. Donec venenatis lacus vel odio ullamcorper eget pretium massa blandit. Nunc et metus vitae nunc mattis sagittis. Morbi neque eros, egestas nec laoreet quis, vestibulum a sem. Nunc sed mi vitae quam blandit luctus. Phasellus quis tellus in est gravida facilisis in et risus. Curabitur malesuada condimentum diam, non pretium tortor rutrum a. Suspendisse consectetur, nunc eu vestibulum euismod, lectus est malesuada risus, sed tempus risus lacus in massa. Nullam vel ornare orci. Aliquam erat volutpat. Quisque placerat commodo tellus. Duis sed mi justo. Fusce sed enim felis. Fusce sit amet purus sit amet nulla sagittis condimentum. Morbi venenatis est non dolor interdum rhoncus. Maecenas tincidunt ipsum id diam congue ornare dictum nulla pharetra. Mauris vel quam nunc, sed laoreet dolor. Maecenas sed velit quis elit ullamcorper ullamcorper. Phasellus aliquam hendrerit nibh, a pellentesque nisl dapibus sit amet. Duis ultricies consequat purus nec ultrices. Sed ante libero, rutrum at dictum in, accumsan nec diam. In quis orci et odio feugiat adipiscing tempor nec enim. Nunc posuere tellus facilisis quam pretium viverra. Sed nec risus sit amet enim tempor consectetur eu nec lorem. Aenean dapibus aliquet fringilla. In pellentesque rutrum luctus. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Sed tortor est, volutpat id volutpat ut, varius et elit. Proin pulvinar venenatis massa et sodales. Vivamus erat nulla, suscipit pretium luctus et, eleifend id velit. Aliquam quis leo sed augue consectetur porttitor. Nunc at tortor ut sem faucibus tincidunt non at neque. Nunc vitae nibh urna. Nam venenatis, odio at bibendum bibendum, quam sem vestibulum quam, in sollicitudin ante purus in dui. Vestibulum at sapien at massa ultrices pharetra ornare id nisi. Cras tincidunt, neque feugiat tincidunt sollicitudin, augue orci placerat velit, sit amet imperdiet ipsum quam nec leo. Cras at arcu ut purus fringilla ultrices. Vivamus lacinia odio blandit ante viverra euismod. Nullam eget libero mi. Maecenas quis odio lacus, eu luctus erat. Cras at nisi tellus, id egestas leo. Sed elit magna, gravida eu interdum nec, pellentesque quis leo. Etiam ac dictum metus. Cras a elit velit, eu euismod ipsum. Nunc vel augue vel sem egestas ultrices. Maecenas tincidunt magna in tortor pellentesque tristique. Vestibulum vehicula fermentum tellus quis scelerisque. Nunc a ante eu arcu pharetra elementum nec et turpis. Duis id ipsum non libero accumsan euismod tincidunt laoreet ante. Integer vestibulum lorem lacinia massa sollicitudin sed bibendum enim viverra. Nulla sodales porttitor pretium. Proin augue nisi, tincidunt eget auctor quis, mattis id eros. In ultricies egestas varius. Mauris porttitor sagittis turpis, quis venenatis lectus volutpat vitae. Proin malesuada vehicula augue, nec ornare felis tempor vel. Quisque venenatis faucibus sodales. Sed ac est et metus volutpat ultricies. Donec et gravida enim. Nullam et ornare ipsum. Donec aliquet semper odio nec congue. Cras id nunc quis turpis eleifend porta a vel ligula. Sed in risus at metus ultricies eleifend consectetur sit amet ipsum. Ut ac porta eros. Mauris congue urna ac felis eleifend sit amet laoreet quam consectetur. Maecenas accumsan, tortor sed suscipit venenatis, dui tellus fermentum justo, vel sagittis tellus libero nec arcu. Pellentesque vitae libero lacus. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Donec eu mi id turpis pellentesque venenatis. Fusce facilisis, quam posuere condimentum bibendum, quam nulla sodales dui, non fermentum lorem libero eu quam. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed tincidunt blandit ligula in venenatis. Mauris eget lacinia leo. Donec tempor, arcu et pulvinar condimentum, erat elit fermentum nisl, vitae aliquam libero sapien vel orci. Sed id dolor in neque faucibus adipiscing nec id turpis. Integer vehicula faucibus sapien non condimentum. Etiam fermentum venenatis mollis. Quisque egestas leo quis magna dapibus nec auctor arcu posuere. Sed quis nisl odio, tempus rhoncus eros. Nam quis quam ac augue viverra volutpat quis quis dolor. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; In hac habitasse platea dictumst. Vestibulum vulputate velit at neque fermentum pulvinar auctor sem sollicitudin. Pellentesque pulvinar mauris vitae metus ornare cursus. Nullam vitae tincidunt ante. Mauris sit amet hendrerit justo. Suspendisse at metus non lacus porta ullamcorper. In lacinia suscipit neque. Phasellus nisi nisl, iaculis id suscipit nec, faucibus eget nisl. Pellentesque in mauris in libero mattis sollicitudin non in odio. Mauris vestibulum scelerisque aliquam. Pellentesque nec velit vitae mi vulputate luctus non id nulla. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Vestibulum metus erat, scelerisque non commodo bibendum, imperdiet a lorem. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc sed libero nisl. Duis sapien enim, dapibus id dictum quis, malesuada sed massa. Pellentesque aliquet nunc ac urna vehicula fermentum. Maecenas dignissim gravida cursus. Nunc consectetur gravida lorem vel consequat. Praesent iaculis, nisl eget adipiscing fermentum, metus tellus convallis odio, ut volutpat augue nibh id purus. Mauris convallis dui vel orci hendrerit dapibus. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Sed vitae libero a eros pharetra congue sit amet eu nibh. Nullam imperdiet, odio nec congue pulvinar, nisi sapien fermentum nulla, at bibendum metus turpis et lectus. Mauris convallis euismod feugiat. Morbi quis metus vel justo cursus rutrum. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Donec egestas lorem ut nunc interdum nec interdum nisi pharetra. Duis metus augue, eleifend ut luctus imperdiet, sollicitudin a leo. Donec ultrices arcu aliquam neque pharetra elementum. Praesent quis nunc lacus, aliquet sollicitudin purus. Curabitur sit amet erat id ligula lacinia fermentum. Suspendisse potenti. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nulla molestie condimentum consectetur. Etiam hendrerit enim a dolor laoreet varius vitae id metus. Quisque adipiscing pretium adipiscing. Aliquam luctus nulla sed ipsum consequat tincidunt. Quisque sed magna odio, malesuada vestibulum nunc. Integer turpis leo, tempor quis viverra in, pellentesque at lectus. Curabitur rutrum malesuada lectus, quis suscipit justo semper congue. Nam pharetra odio vitae enim tincidunt fringilla. Vivamus facilisis neque at enim placerat facilisis. Aliquam a tellus dictum diam sollicitudin pharetra vitae vitae erat. Vestibulum id diam vel leo pellentesque tempor. Aliquam nec elit purus. Aliquam quis semper purus. Vestibulum volutpat, felis in ultricies aliquam, diam arcu hendrerit ipsum, ut posuere libero nunc in purus. Aenean luctus tortor eget eros tempus malesuada. Vestibulum eleifend, nulla porttitor sollicitudin malesuada, elit elit luctus ipsum, id tempus orci elit non ante. Aliquam tincidunt sem vitae tortor condimentum eu mollis elit cursus. Duis rutrum mattis ornare. Maecenas a tortor libero, vitae mollis risus. Praesent vulputate porta orci a pellentesque. In risus enim, placerat eu dignissim sed, vehicula id risus. In molestie lorem nisl, non mollis nulla. Vivamus gravida, ante a tincidunt lacinia, arcu lectus suscipit tellus, eleifend sodales nunc diam id justo. Quisque bibendum lacus feugiat velit interdum interdum. Sed pretium cursus diam, et dignissim mi porta et. Praesent id tellus vehicula ligula ultricies lacinia. Cras dictum neque id turpis fringilla in lobortis diam varius. Praesent accumsan, neque at aliquam facilisis, metus nisi facilisis massa, et gravida velit ligula sed est. Quisque arcu risus, egestas sed pellentesque at, dictum nec ante. Donec sodales nunc est. Vestibulum a orci sed lorem tincidunt pharetra a sit amet odio. Mauris sit amet risus id massa cursus imperdiet a eget neque. Maecenas ut tortor quis leo ornare commodo eget sed mauris. Ut eget convallis ante. Maecenas nulla orci, mollis id pharetra vitae, varius id ligula. Ut a arcu nibh, non posuere turpis. Ut sem nisi, semper quis viverra sit amet, pharetra a nisi. Nullam euismod urna justo, id fringilla diam. Nam vestibulum, dolor a pretium bibendum, ipsum augue auctor dui, non volutpat dolor metus ac lorem. Aliquam malesuada lorem nec dolor egestas nec interdum dolor vestibulum. Quisque dignissim tincidunt cursus. Nullam non purus erat, id scelerisque tellus. Nunc mattis mi nec nulla pulvinar pulvinar. Praesent rutrum, tortor nec ornare condimentum, nunc metus sodales nibh, id tincidunt est urna id elit. Mauris neque urna, varius sit amet tincidunt sit amet, dictum et quam. Nulla consequat metus sit amet nisi ultricies rutrum vulputate ac libero. Cras porta semper luctus. Etiam non purus at neque scelerisque tincidunt ut sit amet lorem. Sed in dolor ut diam gravida condimentum. Morbi fringilla augue sed eros aliquet sed placerat nunc porttitor. Nulla eget pellentesque dui. Nullam id justo risus. Suspendisse sed nisi eleifend justo suscipit ultricies. Sed mauris ante, euismod lobortis vestibulum ac, commodo nec massa. Curabitur at tincidunt nisi. Nullam eleifend, felis in aliquam lobortis, diam odio adipiscing erat, et imperdiet libero turpis ac tellus. Maecenas et magna odio, vitae ultricies nisl. Fusce ultrices rutrum nibh, non tempus sapien viverra ultrices. Morbi placerat erat eget leo placerat commodo. Nunc eleifend dui eu turpis consequat nec pellentesque tortor faucibus. Maecenas a metus eget lorem feugiat bibendum sed et diam. Sed accumsan tincidunt leo a vestibulum. Cras rhoncus, neque id pharetra placerat, purus elit consequat turpis, non imperdiet nisi massa ut dolor. Praesent mauris ante, sagittis sed sollicitudin ut, tristique ullamcorper lorem. Duis vel enim ut arcu suscipit sollicitudin vitae euismod leo. Pellentesque tincidunt gravida ante sit amet aliquam. Donec semper odio sit amet libero cursus commodo. Fusce eros diam, condimentum vitae suscipit nec, vulputate ac massa. Nulla non purus metus, non adipiscing massa. Vivamus vulputate sagittis purus. Curabitur nec lorem turpis. Integer in nisl eu justo facilisis bibendum. Morbi eu risus vitae erat commodo consectetur mollis at eros. Maecenas et nisi non metus molestie mollis. Donec ornare malesuada enim non gravida. Nullam tincidunt metus non tortor sagittis sit amet iaculis mauris vehicula. Donec sagittis neque non leo imperdiet varius. Ut consectetur purus ut dolor vestibulum lacinia mollis diam ultricies. Duis facilisis elit nec urna semper ac scelerisque justo facilisis. Sed condimentum, arcu quis pharetra dignissim, mauris magna rutrum dui, ac congue lectus velit at odio. Praesent elit urna, pharetra sit amet vehicula vestibulum, aliquet a lorem. Nulla facilisi. In porttitor auctor elit a vehicula. Duis mollis volutpat sem non pulvinar. Proin porta posuere ligula, ac egestas nibh imperdiet ut. Aliquam sollicitudin luctus nisi, vitae porta ligula vehicula nec. Nam pulvinar ultrices tempus. Sed ut mi non justo lobortis aliquet. Mauris quis leo nec ante facilisis volutpat. Integer turpis lorem, condimentum vel malesuada at, pretium vel nisl. Nunc in lorem urna, a tempor mi. Fusce at augue ligula, eu rhoncus augue. Nulla dui nisi, suscipit vel luctus ac, molestie in sem. Fusce libero arcu, mollis lacinia eleifend eget, consequat nec quam. Nam sodales nisl in risus vehicula in condimentum purus cursus. Donec ac nisi vitae urna tincidunt porta eget vel sem. Sed nec ligula sapien, in vulputate purus. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Pellentesque placerat faucibus arcu, laoreet mattis felis condimentum in. Morbi imperdiet mauris vel est euismod eu tristique diam commodo. In hac habitasse platea dictumst. Praesent ac quam et sapien vestibulum ornare ut id nibh. Sed ac feugiat metus. Etiam vel tellus non orci sodales cursus. Morbi eget urna nec urna porttitor interdum. Nunc vehicula arcu in dolor aliquet porta. Maecenas auctor commodo nisi, sagittis consequat tellus lobortis sit amet. Sed eu lorem eros. Nullam at metus dolor. Nunc bibendum gravida lacinia. Cras viverra euismod purus, ac viverra ligula ultricies ut. Morbi quam orci, lacinia ut varius non, aliquam quis orci. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Etiam congue consectetur est sed malesuada. Nullam eget enim non nibh vestibulum aliquam. In pretium, nisl non fringilla aliquam, mauris libero fermentum turpis, id ullamcorper tortor metus.\n");
  printf(d.str);
  printf("\nString length: %d \tString size: %d",strlen(d.str), d.n);  
  dstr_free(&d);
  return 0;
}


