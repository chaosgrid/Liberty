#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6230860);

#define public_6230875 _public_6230875

PROC_DECLARE(0x6230860, internal_6230860, public_6230860);
extern "C" NAKED register_t __cdecl internal_6230860()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6230875
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6230875 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6230860)
    }
}

#undef public_6230875
