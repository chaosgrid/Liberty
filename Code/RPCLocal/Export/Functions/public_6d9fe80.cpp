#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9fe80);
CLANG_FORWARD_PROC_SYMBOL(public_6da0940);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9feaa _public_6d9feaa

PROC_DECLARE(0x6d9fe80, internal_6d9fe80, public_6d9fe80);
extern "C" NAKED register_t __cdecl internal_6d9fe80()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x24
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6d9feaa
        mov ecx, eax
        call public_6da0940
        test eax, eax
        je public_6d9feaa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9feaa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9fe80)
    }
}

#undef public_6d9feaa
