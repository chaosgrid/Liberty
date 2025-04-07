#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);

#define public_6cf096d _public_6cf096d

PROC_DECLARE(0x6cf0930, internal_6cf0930, public_6cf0930);
extern "C" NAKED register_t __cdecl internal_6cf0930()
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
        je public_6cf096d
        mov eax, dword ptr ss : [esp]
        test eax, eax
        je public_6cf096d
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x60]
        public_6cf096d : nop
        add esp, 8
        ret 0x14
        UNREACHABLE_TRAP(0x6cf0930)
    }
}

#undef public_6cf096d
