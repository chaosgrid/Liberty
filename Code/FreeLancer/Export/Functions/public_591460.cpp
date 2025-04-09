#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_591460);

#define public_591471 _public_591471
#define public_591486 _public_591486

PROC_DECLARE(0x591460, internal_591460, public_591460);
extern "C" NAKED register_t __cdecl internal_591460()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_591486
        push esi
        public_591471 : nop
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        add ecx, 8
        add eax, 8
        cmp ecx, edx
        jne public_591471
        pop esi
        public_591486 : nop
        ret 
        UNREACHABLE_TRAP(0x591460)
    }
}

#undef public_591471
#undef public_591486
