#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d1c20);
CLANG_FORWARD_PROC_SYMBOL(public_65d21e0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d1b03 _public_65d1b03
#define public_65d1b29 _public_65d1b29
#define public_65d1b38 _public_65d1b38

PROC_DECLARE(0x65d1af0, internal_65d1af0, public_65d1af0);
extern "C" NAKED register_t __cdecl internal_65d1af0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_65d1b03
        or eax, 0xFFFFFFFF
        pop edi
        ret 8
        public_65d1b03 : nop
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call public_65d21e0
        test al, al
        jne public_65d1b38
        push esi
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        je public_65d1b29
        mov ecx, esi
        call public_65d1c20
        push esi
        call public_65d6cb8
        add esp, 4
        public_65d1b29 : nop
        mov dword ptr ds : [edi+4], 0
        pop esi
        or eax, 0xFFFFFFFF
        pop edi
        ret 8
        public_65d1b38 : nop
        xor eax, eax
        pop edi
        ret 8
        UNREACHABLE_TRAP(0x65d1af0)
    }
}

#undef public_65d1b03
#undef public_65d1b29
#undef public_65d1b38
