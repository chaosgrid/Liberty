#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d1c20);
CLANG_FORWARD_PROC_SYMBOL(public_65d1ea0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d1ab3 _public_65d1ab3
#define public_65d1ad6 _public_65d1ad6
#define public_65d1ae5 _public_65d1ae5

PROC_DECLARE(0x65d1aa0, internal_65d1aa0, public_65d1aa0);
extern "C" NAKED register_t __cdecl internal_65d1aa0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_65d1ab3
        or eax, 0xFFFFFFFF
        pop edi
        ret 4
        public_65d1ab3 : nop
        push 1
        call public_65d1ea0
        test al, al
        jne public_65d1ae5
        push esi
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        je public_65d1ad6
        mov ecx, esi
        call public_65d1c20
        push esi
        call public_65d6cb8
        add esp, 4
        public_65d1ad6 : nop
        mov dword ptr ds : [edi+4], 0
        pop esi
        or eax, 0xFFFFFFFF
        pop edi
        ret 4
        public_65d1ae5 : nop
        xor eax, eax
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x65d1aa0)
    }
}

#undef public_65d1ab3
#undef public_65d1ad6
#undef public_65d1ae5
