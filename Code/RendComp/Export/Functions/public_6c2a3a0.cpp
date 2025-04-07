#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c2a3af _public_6c2a3af
#define public_6c2a3c8 _public_6c2a3c8

PROC_DECLARE(0x6c2a3a0, internal_6c2a3a0, public_6c2a3a0);
extern "C" NAKED register_t __cdecl internal_6c2a3a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6c2a3af
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6c2a3af : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6c2a3c8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_6c34ea0
        add esp, 4
        xor eax, eax
        public_6c2a3c8 : nop
        ret 4
        UNREACHABLE_TRAP(0x6c2a3a0)
    }
}

#undef public_6c2a3af
#undef public_6c2a3c8
