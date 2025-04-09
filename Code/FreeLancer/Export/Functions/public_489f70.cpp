#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489f70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_489f95 _public_489f95
#define public_489fa5 _public_489fa5

PROC_DECLARE(0x489f70, internal_489f70, public_489f70);
extern "C" NAKED register_t __cdecl internal_489f70()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_489f95
        mov ecx, eax
        test ecx, ecx
        je public_489f95
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], 0
        public_489f95 : nop
        test byte ptr ss : [esp+8], 1
        je public_489fa5
        push esi
        call public_5b7e1d
        add esp, 4
        public_489fa5 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x489f70)
    }
}

#undef public_489f95
#undef public_489fa5
