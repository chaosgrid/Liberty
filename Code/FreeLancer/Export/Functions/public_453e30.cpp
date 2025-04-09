#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42e160);

#define public_453e4a _public_453e4a

PROC_DECLARE(0x453e30, internal_453e30, public_453e30);
extern "C" NAKED register_t __cdecl internal_453e30()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x18]
        lea eax, ds:[esi+0x18]
        push eax
        call dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [esi+0x74]
        test ecx, ecx
        pop esi
        je public_453e4a
        jmp public_42e160
        public_453e4a : nop
        ret 
        UNREACHABLE_TRAP(0x453e30)
    }
}

#undef public_453e4a
