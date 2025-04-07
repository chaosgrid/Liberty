#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6cf0876 _public_6cf0876
#define public_6cf0899 _public_6cf0899
#define public_6cf08a2 _public_6cf08a2

PROC_DECLARE(0x6cf0850, internal_6cf0850, public_6cf0850);
extern "C" NAKED register_t __cdecl internal_6cf0850()
{
    __asm
    {
        sub esp, 0x1C
        lea eax, ss:[esp]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf0876
        mov ecx, dword ptr ss : [esp]
        test ecx, ecx
        jne public_6cf0899
        public_6cf0876 : nop
        lea eax, ss:[esp]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf08a2
        mov ecx, dword ptr ss : [esp]
        test ecx, ecx
        je public_6cf08a2
        public_6cf0899 : nop
        call public_6d06cd0
        mov dword ptr ss : [esp+0xC], eax
        public_6cf08a2 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+8], ecx
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x2C]
        push ecx
        push 0xB
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        call public_6d43650
        add esp, 0x24
        ret 0x10
        UNREACHABLE_TRAP(0x6cf0850)
    }
}

#undef public_6cf0876
#undef public_6cf0899
#undef public_6cf08a2
