#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9fc80);
CLANG_FORWARD_PROC_SYMBOL(public_6da1050);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9fcaa _public_6d9fcaa

PROC_DECLARE(0x6d9fc80, internal_6d9fc80, public_6d9fc80);
extern "C" NAKED register_t __cdecl internal_6d9fc80()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x34
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6d9fcaa
        mov ecx, eax
        call public_6da1050
        test eax, eax
        je public_6d9fcaa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9fcaa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9fc80)
    }
}

#undef public_6d9fcaa
