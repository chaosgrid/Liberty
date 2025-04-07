#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b4ac0);

#define public_62c11ab _public_62c11ab

PROC_DECLARE(0x62c1190, internal_62c1190, public_62c1190);
extern "C" NAKED register_t __cdecl internal_62c1190()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_62c11ab
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_62c11ab
        jmp public_62b4ac0
        public_62c11ab : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x62c1190)
    }
}

#undef public_62c11ab
