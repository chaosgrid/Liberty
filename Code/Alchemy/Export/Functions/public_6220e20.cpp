#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220e20);

#define public_6220e35 _public_6220e35

PROC_DECLARE(0x6220e20, internal_6220e20, public_6220e20);
extern "C" NAKED register_t __cdecl internal_6220e20()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6220e35
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6220e35 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6220e20)
    }
}

#undef public_6220e35
