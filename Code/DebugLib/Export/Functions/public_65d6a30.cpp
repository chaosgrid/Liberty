#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6a30);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d6a45 _public_65d6a45
#define public_65d6a55 _public_65d6a55

PROC_DECLARE(0x65d6a30, internal_65d6a30, public_65d6a30);
extern "C" NAKED register_t __cdecl internal_65d6a30()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_65d6a45
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_65d6a45 : nop
        test byte ptr ss : [esp+8], 1
        je public_65d6a55
        push esi
        call public_65d6cb8
        add esp, 4
        public_65d6a55 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65d6a30)
    }
}

#undef public_65d6a45
#undef public_65d6a55
