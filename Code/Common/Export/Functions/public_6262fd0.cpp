#include "Common-PCH.h"


#define public_6262fe5 _public_6262fe5
#define public_6262fef _public_6262fef
#define public_6262ff5 _public_6262ff5

PROC_DECLARE(0x6262fd0, internal_6262fd0, public_6262fd0);
extern "C" NAKED register_t __cdecl internal_6262fd0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x404]
        push esi
        mov esi, dword ptr ds : [ecx+0x400]
        cmp eax, esi
        jae public_6262fef
        mov dl, byte ptr ss : [esp+8]
        public_6262fe5 : nop
        cmp byte ptr ds : [eax+ecx], dl
        je public_6262ff5
        inc eax
        cmp eax, esi
        jb public_6262fe5
        public_6262fef : nop
        pop esi
        xor al, al
        ret 4
        public_6262ff5 : nop
        pop esi
        mov dword ptr ds : [ecx+0x400], eax
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x6262fd0)
    }
}

#undef public_6262fe5
#undef public_6262fef
#undef public_6262ff5
