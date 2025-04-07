#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f322cf _public_6f322cf
#define public_6f322e8 _public_6f322e8

PROC_DECLARE(0x6f322c0, internal_6f322c0, public_6f322c0);
extern "C" NAKED register_t __cdecl internal_6f322c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6f322cf
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6f322cf : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f322e8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_6f57e26
        add esp, 4
        xor eax, eax
        public_6f322e8 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f322c0)
    }
}

#undef public_6f322cf
#undef public_6f322e8
