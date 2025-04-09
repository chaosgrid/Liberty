#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41aa50);
CLANG_FORWARD_PROC_SYMBOL(public_420f30);

#define public_420f4b _public_420f4b
#define public_420f63 _public_420f63

PROC_DECLARE(0x420f30, internal_420f30, public_420f30);
extern "C" NAKED register_t __cdecl internal_420f30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, ecx
        je public_420f4b
        push 0xFFFFFFFF
        push 1
        push eax
        call public_41aa50
        add esp, 0xC
        mov dword ptr ds : [esi+8], eax
        public_420f4b : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_420f63
        push 0xFFFFFFFF
        push 1
        push eax
        call public_41aa50
        add esp, 0xC
        mov dword ptr ds : [esi+0xC], eax
        public_420f63 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x420f30)
    }
}

#undef public_420f4b
#undef public_420f63
