#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);

#define public_6ed2711 _public_6ed2711
#define public_6ed271f _public_6ed271f
#define public_6ed272a _public_6ed272a

PROC_DECLARE(0x6ed2700, internal_6ed2700, public_6ed2700);
extern "C" NAKED register_t __cdecl internal_6ed2700()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6ed272a
        push esi
        public_6ed2711 : nop
        test eax, eax
        je public_6ed271f
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        public_6ed271f : nop
        add ecx, 8
        add eax, 8
        cmp ecx, edx
        jne public_6ed2711
        pop esi
        public_6ed272a : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6ed2700)
    }
}

#undef public_6ed2711
#undef public_6ed271f
#undef public_6ed272a
