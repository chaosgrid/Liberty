#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d2e30 _public_65d2e30
#define public_65d2e48 _public_65d2e48

PROC_DECLARE(0x65d2e10, internal_65d2e10, public_65d2e10);
extern "C" NAKED register_t __cdecl internal_65d2e10()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], offset public_65e1318
        test eax, eax
        je public_65d2e30
        push eax
        call public_65d6cb8
        add esp, 4
        mov dword ptr ds : [esi+4], 0
        public_65d2e30 : nop
        mov al, byte ptr ss : [esp+8]
        mov dword ptr ds : [esi+8], 0
        test al, 1
        je public_65d2e48
        push esi
        call public_65d6cb8
        add esp, 4
        public_65d2e48 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65d2e10)
    }
}

#undef public_65d2e30
#undef public_65d2e48
