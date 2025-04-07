#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);

#define public_6cefb13 _public_6cefb13

PROC_DECLARE(0x6cefae0, internal_6cefae0, public_6cefae0);
extern "C" NAKED register_t __cdecl internal_6cefae0()
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
        je public_6cefb13
        mov eax, dword ptr ss : [esp]
        test eax, eax
        je public_6cefb13
        mov edx, dword ptr ss : [esp+0xC]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x74]
        public_6cefb13 : nop
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6cefae0)
    }
}

#undef public_6cefb13
