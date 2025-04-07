#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a970);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a9b0);

#define public_6c2a992 _public_6c2a992

PROC_DECLARE(0x6c2a970, internal_6c2a970, public_6c2a970);
extern "C" NAKED register_t __cdecl internal_6c2a970()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6c36308
        call public_6c2a9b0
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_6c2a992
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x18], 0
        public_6c2a992 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c2a970)
    }
}

#undef public_6c2a992
