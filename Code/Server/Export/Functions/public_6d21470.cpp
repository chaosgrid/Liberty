#include "Server-PCH.h"


#define public_6d214a7 _public_6d214a7

PROC_DECLARE(0x6d21470, internal_6d21470, public_6d21470);
extern "C" NAKED register_t __cdecl internal_6d21470()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [eax+0x18]
        cmp eax, 0xFFFFFFFF
        je public_6d214a7
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ds : [edx+4]
        shl eax, 5
        mov edx, dword ptr ds : [eax+esi+0xC]
        add eax, esi
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax+4], edx
        mov byte ptr ds : [eax+8], 1
        mov dword ptr ds : [ecx+0x18], 0
        pop esi
        mov al, 1
        ret 4
        public_6d214a7 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x18], 0
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x6d21470)
    }
}

#undef public_6d214a7
