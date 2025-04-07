#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6a80);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d6860 _public_65d6860
#define public_65d6880 _public_65d6880

PROC_DECLARE(0x65d6850, internal_65d6850, public_65d6850);
extern "C" NAKED register_t __cdecl internal_65d6850()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        jbe public_65d6860
        dec eax
        mov dword ptr ds : [esi+0x24], eax
        public_65d6860 : nop
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        jne public_65d6880
        mov ecx, esi
        mov dword ptr ds : [esi+0x24], 1
        call public_65d6a80
        push esi
        call public_65d6cb8
        add esp, 4
        xor eax, eax
        public_65d6880 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65d6850)
    }
}

#undef public_65d6860
#undef public_65d6880
