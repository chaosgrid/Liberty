#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b1a0);

#define public_6d1b1b4 _public_6d1b1b4
#define public_6d1b1b9 _public_6d1b1b9

PROC_DECLARE(0x6d1b1a0, internal_6d1b1a0, public_6d1b1a0);
extern "C" NAKED register_t __cdecl internal_6d1b1a0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [eax+4], 1
        je public_6d1b1b4
        xor eax, eax
        jmp public_6d1b1b9
        public_6d1b1b4 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [ecx]
        public_6d1b1b9 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d1b1a0)
    }
}

#undef public_6d1b1b4
#undef public_6d1b1b9
