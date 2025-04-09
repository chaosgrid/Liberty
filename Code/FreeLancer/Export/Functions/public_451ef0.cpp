#include "FreeLancer-PCH.h"


#define public_451f1c _public_451f1c

PROC_DECLARE(0x451ef0, internal_451ef0, public_451ef0);
extern "C" NAKED register_t __cdecl internal_451ef0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x6C]
        test eax, eax
        je public_451f1c
        mov dl, byte ptr ss : [esp+4]
        mov byte ptr ds : [eax+0x10], dl
        mov eax, dword ptr ds : [ecx+0x6C]
        mov dl, byte ptr ss : [esp+8]
        mov byte ptr ds : [eax+0x11], dl
        mov eax, dword ptr ds : [ecx+0x6C]
        mov dl, byte ptr ss : [esp+0xC]
        mov byte ptr ds : [eax+0x12], dl
        mov eax, dword ptr ds : [ecx+0x6C]
        mov cl, byte ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x14], cl
        public_451f1c : nop
        ret 0x10
        UNREACHABLE_TRAP(0x451ef0)
    }
}

#undef public_451f1c
