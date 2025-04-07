#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6219560);

#define public_6219575 _public_6219575

PROC_DECLARE(0x6219560, internal_6219560, public_6219560);
extern "C" NAKED register_t __cdecl internal_6219560()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xA8]
        test edx, edx
        jne public_6219575
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        ret 4
        public_6219575 : nop
        mov eax, dword ptr ds : [ecx+0xAC]
        sub eax, edx
        mov edx, dword ptr ss : [esp+4]
        sar eax, 2
        mov dword ptr ds : [edx], eax
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6219560)
    }
}

#undef public_6219575
