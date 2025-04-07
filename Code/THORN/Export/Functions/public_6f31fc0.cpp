#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f31fcf _public_6f31fcf
#define public_6f31fe8 _public_6f31fe8

PROC_DECLARE(0x6f31fc0, internal_6f31fc0, public_6f31fc0);
extern "C" NAKED register_t __cdecl internal_6f31fc0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6f31fcf
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6f31fcf : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f31fe8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_6f57e26
        add esp, 4
        xor eax, eax
        public_6f31fe8 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f31fc0)
    }
}

#undef public_6f31fcf
#undef public_6f31fe8
