#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a0690);
CLANG_FORWARD_PROC_SYMBOL(public_630e6d0);

#define public_62a06ac _public_62a06ac

PROC_DECLARE(0x62a0690, internal_62a0690, public_62a0690);
extern "C" NAKED register_t __cdecl internal_62a0690()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x14]
        or eax, 0xFFFFFFFF
        cmp edx, 3
        je public_62a06ac
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+8]
        push eax
        push ecx
        call public_630e6d0
        add esp, 8
        public_62a06ac : nop
        ret 4
        UNREACHABLE_TRAP(0x62a0690)
    }
}

#undef public_62a06ac
