#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed04b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0510);

#define public_6ed0530 _public_6ed0530

PROC_DECLARE(0x6ed0510, internal_6ed0510, public_6ed0510);
extern "C" NAKED register_t __cdecl internal_6ed0510()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6ed0530
        cmp eax, offset public_6ed5838
        je public_6ed0530
        cmp byte ptr ds : [eax], 6
        jne public_6ed0530
        add eax, 3
        mov dword ptr ss : [esp+4], eax
        jmp public_6ed04b0
        public_6ed0530 : nop
        ret 
        UNREACHABLE_TRAP(0x6ed0510)
    }
}

#undef public_6ed0530
