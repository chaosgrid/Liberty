#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6cf0845 _public_6cf0845

PROC_DECLARE(0x6cf0800, internal_6cf0800, public_6cf0800);
extern "C" NAKED register_t __cdecl internal_6cf0800()
{
    __asm
    {
        sub esp, 0x14
        lea eax, ss:[esp]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf0845
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+8], eax
        lea eax, ss:[esp+8]
        push eax
        push 0x1F
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], edx
        call public_6d43650
        add esp, 8
        public_6cf0845 : nop
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x6cf0800)
    }
}

#undef public_6cf0845
