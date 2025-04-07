#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d1680);

#define public_62db24c _public_62db24c

PROC_DECLARE(0x62db230, internal_62db230, public_62db230);
extern "C" NAKED register_t __cdecl internal_62db230()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        push eax
        call public_62d1680
        add esp, 4
        cmp eax, 0x15
        jge public_62db24c
        cmp eax, 0xFFFFFFFF
        je public_62db24c
        mov eax, 1
        ret 
        public_62db24c : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62db230)
    }
}

#undef public_62db24c
