#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);

#define public_6cefad3 _public_6cefad3

PROC_DECLARE(0x6cefaa0, internal_6cefaa0, public_6cefaa0);
extern "C" NAKED register_t __cdecl internal_6cefaa0()
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
        je public_6cefad3
        mov eax, dword ptr ss : [esp]
        test eax, eax
        je public_6cefad3
        mov edx, dword ptr ss : [esp+0xC]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x70]
        public_6cefad3 : nop
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6cefaa0)
    }
}

#undef public_6cefad3
