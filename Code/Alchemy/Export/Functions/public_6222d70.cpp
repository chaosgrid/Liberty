#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222d70);

#define public_6222d85 _public_6222d85
#define public_6222d97 _public_6222d97

PROC_DECLARE(0x6222d70, internal_6222d70, public_6222d70);
extern "C" NAKED register_t __cdecl internal_6222d70()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6222d85
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6222d85 : nop
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edx]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_6222d97
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6222d97 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6222d70)
    }
}

#undef public_6222d85
#undef public_6222d97
