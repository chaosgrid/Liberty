#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c5610);

#define public_65c5623 _public_65c5623
#define public_65c562b _public_65c562b
#define public_65c5632 _public_65c5632

PROC_DECLARE(0x65c5610, internal_65c5610, public_65c5610);
extern "C" NAKED register_t __cdecl internal_65c5610()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_65c5632
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+4]
        push esi
        public_65c5623 : nop
        test eax, eax
        je public_65c562b
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        public_65c562b : nop
        add eax, 4
        dec ecx
        jne public_65c5623
        pop esi
        public_65c5632 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x65c5610)
    }
}

#undef public_65c5623
#undef public_65c562b
#undef public_65c5632
