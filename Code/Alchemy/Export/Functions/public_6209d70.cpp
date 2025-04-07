#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209d70);

#define public_6209d85 _public_6209d85

PROC_DECLARE(0x6209d70, internal_6209d70, public_6209d70);
extern "C" NAKED register_t __cdecl internal_6209d70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_6209d85
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6209d85 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6209d70)
    }
}

#undef public_6209d85
