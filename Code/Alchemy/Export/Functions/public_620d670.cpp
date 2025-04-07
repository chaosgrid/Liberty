#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620d670);

#define public_620d685 _public_620d685

PROC_DECLARE(0x620d670, internal_620d670, public_620d670);
extern "C" NAKED register_t __cdecl internal_620d670()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_620d685
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_620d685 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x620d670)
    }
}

#undef public_620d685
