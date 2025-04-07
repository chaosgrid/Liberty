#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f73ac0);

#define public_6f07eea _public_6f07eea

PROC_DECLARE(0x6f07ec0, internal_6f07ec0, public_6f07ec0);
extern "C" NAKED register_t __cdecl internal_6f07ec0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6f07eea
        mov eax, dword ptr ds : [ecx+0x170]
        push eax
        lea eax, ds:[esi+0x134]
        push eax
        call public_6eea860
        mov ecx, eax
        call public_6f73ac0
        mov dword ptr ds : [esi+0x168], eax
        public_6f07eea : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f07ec0)
    }
}

#undef public_6f07eea
