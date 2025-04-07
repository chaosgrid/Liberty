#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6225940);

#define public_6225955 _public_6225955

PROC_DECLARE(0x6225940, internal_6225940, public_6225940);
extern "C" NAKED register_t __cdecl internal_6225940()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6225955
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6225955 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6225940)
    }
}

#undef public_6225955
