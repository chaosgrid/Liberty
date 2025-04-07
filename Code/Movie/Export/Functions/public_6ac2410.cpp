#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac2410);

#define public_6ac242a _public_6ac242a

PROC_DECLARE(0x6ac2410, internal_6ac2410, public_6ac2410);
extern "C" NAKED register_t __cdecl internal_6ac2410()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi], offset public_6ada770
        test eax, eax
        je public_6ac242a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        and dword ptr ds : [esi+8], 0
        public_6ac242a : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ac2410)
    }
}

#undef public_6ac242a
