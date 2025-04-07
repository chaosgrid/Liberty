#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63333e2 _public_63333e2

PROC_DECLARE(0x63333c0, internal_63333c0, public_63333c0);
extern "C" NAKED register_t __cdecl internal_63333c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], offset public_63a49cc
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax+8]
        test byte ptr ss : [esp+8], 1
        je public_63333e2
        push esi
        call public_6391d5a
        add esp, 4
        public_63333e2 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63333c0)
    }
}

#undef public_63333e2
