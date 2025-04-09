#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_556ca0);

#define public_556caf _public_556caf

PROC_DECLARE(0x556ca0, internal_556ca0, public_556ca0);
extern "C" NAKED register_t __cdecl internal_556ca0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        je public_556caf
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x44]
        public_556caf : nop
        ret 
        UNREACHABLE_TRAP(0x556ca0)
    }
}

#undef public_556caf
