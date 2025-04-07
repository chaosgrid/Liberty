#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9fa80);
CLANG_FORWARD_PROC_SYMBOL(public_6da0d00);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9faaa _public_6d9faaa

PROC_DECLARE(0x6d9fa80, internal_6d9fa80, public_6d9fa80);
extern "C" NAKED register_t __cdecl internal_6d9fa80()
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
        je public_6d9faaa
        mov ecx, eax
        call public_6da0d00
        test eax, eax
        je public_6d9faaa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9faaa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9fa80)
    }
}

#undef public_6d9faaa
