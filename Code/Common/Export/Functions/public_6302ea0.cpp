#include "Common-PCH.h"

PROC_DECLARE(0x6302ea0, internal_6302ea0, public_6302ea0);
extern "C" NAKED register_t __cdecl internal_6302ea0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639905c]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        sub esp, 0x208
        push 0x104
        lea edx, ss:[esp+4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x84]
        mov eax, dword ptr ss : [esp+0x20C]
        push 0
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+0x110]
        push 0
        push edx
        call dword ptr ds : [public_6399208]
        push 0x104
        lea eax, ss:[esp+0x11C]
        push eax
/*FIXUP push offset public_63fccf8 @0x6302eec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fccf8
        call dword ptr ds : [public_639933c]
        mov eax, offset public_63fccf8
        add esp, 0x228
        ret 
        UNREACHABLE_TRAP(0x6302ea0)
    }
}
