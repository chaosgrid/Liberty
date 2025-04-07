#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622edb0);

#define public_622edc5 _public_622edc5

PROC_DECLARE(0x622edb0, internal_622edb0, public_622edb0);
extern "C" NAKED register_t __cdecl internal_622edb0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xA8]
        test edx, edx
        jne public_622edc5
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        ret 4
        public_622edc5 : nop
        mov eax, dword ptr ds : [ecx+0xAC]
        sub eax, edx
        mov edx, dword ptr ss : [esp+4]
        sar eax, 2
        mov dword ptr ds : [edx], eax
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x622edb0)
    }
}

#undef public_622edc5
