#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d1a70);
CLANG_FORWARD_PROC_SYMBOL(public_65d1c20);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d1a94 _public_65d1a94

PROC_DECLARE(0x65d1a70, internal_65d1a70, public_65d1a70);
extern "C" NAKED register_t __cdecl internal_65d1a70()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        je public_65d1a94
        mov ecx, esi
        call public_65d1c20
        push esi
        call public_65d6cb8
        add esp, 4
        mov dword ptr ds : [edi+4], 0
        public_65d1a94 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65d1a70)
    }
}

#undef public_65d1a94
