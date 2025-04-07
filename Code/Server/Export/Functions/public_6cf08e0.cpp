#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);

#define public_6cf0924 _public_6cf0924

PROC_DECLARE(0x6cf08e0, internal_6cf08e0, public_6cf08e0);
extern "C" NAKED register_t __cdecl internal_6cf08e0()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+4]
        push eax
        lea ecx, ss:[esp+4]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf0924
        mov eax, dword ptr ss : [esp]
        test eax, eax
        je public_6cf0924
        mov edx, dword ptr ss : [esp+0x1C]
        push 0
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x5C]
        public_6cf0924 : nop
        add esp, 8
        ret 0x18
        UNREACHABLE_TRAP(0x6cf08e0)
    }
}

#undef public_6cf0924
