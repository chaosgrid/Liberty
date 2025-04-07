#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232190);

#define public_62321a5 _public_62321a5

PROC_DECLARE(0x6232190, internal_6232190, public_6232190);
extern "C" NAKED register_t __cdecl internal_6232190()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xA8]
        test edx, edx
        jne public_62321a5
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        ret 4
        public_62321a5 : nop
        mov eax, dword ptr ds : [ecx+0xAC]
        sub eax, edx
        mov edx, dword ptr ss : [esp+4]
        sar eax, 2
        mov dword ptr ds : [edx], eax
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6232190)
    }
}

#undef public_62321a5
