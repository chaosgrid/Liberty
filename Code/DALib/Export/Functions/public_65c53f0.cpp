#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c53f0);

#define public_65c542b _public_65c542b

PROC_DECLARE(0x65c53f0, internal_65c53f0, public_65c53f0);
extern "C" NAKED register_t __cdecl internal_65c53f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        push esi
        je public_65c542b
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        je public_65c542b
        mov edx, dword ptr ss : [esp+0xC]
        test edx, edx
        je public_65c542b
        push 0
        mov dword ptr ds : [edx], 0x5C
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [esi+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x80]
        neg eax
        sbb al, al
        inc al
        pop esi
        ret 8
        public_65c542b : nop
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x65c53f0)
    }
}

#undef public_65c542b
