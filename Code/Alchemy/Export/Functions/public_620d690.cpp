#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620d690);

#define public_620d6a5 _public_620d6a5
#define public_620d6b7 _public_620d6b7

PROC_DECLARE(0x620d690, internal_620d690, public_620d690);
extern "C" NAKED register_t __cdecl internal_620d690()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_620d6a5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_620d6a5 : nop
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edx]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_620d6b7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_620d6b7 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x620d690)
    }
}

#undef public_620d6a5
#undef public_620d6b7
