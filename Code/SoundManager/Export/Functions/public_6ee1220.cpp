#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1220);

#define public_6ee123d _public_6ee123d

PROC_DECLARE(0x6ee1220, internal_6ee1220, public_6ee1220);
extern "C" NAKED register_t __cdecl internal_6ee1220()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6ee91dc
        je public_6ee123d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x24], 0
        public_6ee123d : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ee1220)
    }
}

#undef public_6ee123d
