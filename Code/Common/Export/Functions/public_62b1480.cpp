#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b1290);
CLANG_FORWARD_PROC_SYMBOL(public_62b1480);

#define public_62b149b _public_62b149b

PROC_DECLARE(0x62b1480, internal_62b1480, public_62b1480);
extern "C" NAKED register_t __cdecl internal_62b1480()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x220]
        test eax, eax
        je public_62b149b
        mov edx, dword ptr ss : [esp+4]
        add eax, 0xFFFFFFF8
        push edx
        push eax
        call public_62b1290
        ret 4
        public_62b149b : nop
        mov edx, dword ptr ss : [esp+4]
        xor eax, eax
        push edx
        push eax
        call public_62b1290
        ret 4
        UNREACHABLE_TRAP(0x62b1480)
    }
}

#undef public_62b149b
