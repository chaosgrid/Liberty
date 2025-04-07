#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a030);

#define public_620a045 _public_620a045

PROC_DECLARE(0x620a030, internal_620a030, public_620a030);
extern "C" NAKED register_t __cdecl internal_620a030()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_620a045
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_620a045 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x620a030)
    }
}

#undef public_620a045
