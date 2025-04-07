#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7370);
CLANG_FORWARD_PROC_SYMBOL(public_6cf73d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);

#define public_6cf7389 _public_6cf7389
#define public_6cf73b5 _public_6cf73b5

PROC_DECLARE(0x6cf7370, internal_6cf7370, public_6cf7370);
extern "C" NAKED register_t __cdecl internal_6cf7370()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6cf7389
        mov al, 1
        pop esi
        add esp, 8
        ret 4
        public_6cf7389 : nop
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        call public_6d006c0
        add esp, 0xC
        test al, al
        jne public_6cf73b5
        xor eax, eax
        push eax
        mov ecx, esi
        call public_6cf73d0
        pop esi
        add esp, 8
        ret 4
        public_6cf73b5 : nop
        mov eax, dword ptr ss : [esp+4]
        push eax
        mov ecx, esi
        call public_6cf73d0
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6cf7370)
    }
}

#undef public_6cf7389
#undef public_6cf73b5
