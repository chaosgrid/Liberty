#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e89a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8c20);
CLANG_FORWARD_PROC_SYMBOL(public_62e8ce0);
CLANG_FORWARD_PROC_SYMBOL(public_62e9030);
CLANG_FORWARD_PROC_SYMBOL(public_62e9120);

#define public_62d9b49 _public_62d9b49

PROC_DECLARE(0x62d9b30, internal_62d9b30, public_62d9b30);
extern "C" NAKED register_t __cdecl internal_62d9b30()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_62d9b49
        mov eax, 3
        pop esi
        add esp, 0xC
        ret 4
        public_62d9b49 : nop
        mov ecx, dword ptr ds : [esi+8]
        push 2
        push 0
        add ecx, 0x18
        call public_62e89a0
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push 0
        add ecx, 0x18
        call public_62e89a0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+4]
        push eax
        add ecx, 0x18
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        call public_62e8c20
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x18
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        call public_62e8ce0
        mov ecx, dword ptr ds : [esi+8]
        push 0
        add ecx, 0x18
        call public_62e9030
        mov ecx, dword ptr ds : [esi+8]
        push 0
        add ecx, 0x18
        call public_62e9120
        xor eax, eax
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62d9b30)
    }
}

#undef public_62d9b49
