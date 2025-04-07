#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628ca80);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_6289a00 _public_6289a00

PROC_DECLARE(0x62899c0, internal_62899c0, public_62899c0);
extern "C" NAKED register_t __cdecl internal_62899c0()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_63fc098
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fc09c]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_6289a00
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6289a00
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp]
        mov eax, dword ptr ds : [eax]
        push ecx
        lea ecx, ds:[eax+0x10]
        call public_628ca80
        add esp, 8
        ret 
        public_6289a00 : nop
        mov dword ptr ss : [esp+4], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+4]
        mov eax, dword ptr ds : [eax]
        push ecx
        lea ecx, ds:[eax+0x10]
        call public_628ca80
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62899c0)
    }
}

#undef public_6289a00
