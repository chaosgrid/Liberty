#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244af0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6244b05 _public_6244b05
#define public_6244b15 _public_6244b15

PROC_DECLARE(0x6244af0, internal_6244af0, public_6244af0);
extern "C" NAKED register_t __cdecl internal_6244af0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6244b05
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6244b05 : nop
        test byte ptr ss : [esp+8], 1
        je public_6244b15
        push esi
        call public_62460e0
        add esp, 4
        public_6244b15 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6244af0)
    }
}

#undef public_6244b05
#undef public_6244b15
