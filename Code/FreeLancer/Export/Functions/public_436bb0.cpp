#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_436bb0);

#define public_436bc3 _public_436bc3
#define public_436bd1 _public_436bd1
#define public_436bd8 _public_436bd8

PROC_DECLARE(0x436bb0, internal_436bb0, public_436bb0);
extern "C" NAKED register_t __cdecl internal_436bb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_436bd8
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, eax
        mov eax, dword ptr ss : [esp+4]
        push esi
        public_436bc3 : nop
        test eax, eax
        je public_436bd1
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        public_436bd1 : nop
        add eax, 8
        dec edx
        jne public_436bc3
        pop esi
        public_436bd8 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x436bb0)
    }
}

#undef public_436bc3
#undef public_436bd1
#undef public_436bd8
