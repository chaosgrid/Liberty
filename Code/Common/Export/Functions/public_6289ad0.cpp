#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_6289b06 _public_6289b06

PROC_DECLARE(0x6289ad0, internal_6289ad0, public_6289ad0);
extern "C" NAKED register_t __cdecl internal_6289ad0()
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
        je public_6289b06
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6289b06
        lea eax, ss:[esp]
        mov eax, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+0x4C]
        add esp, 8
        ret 
        public_6289b06 : nop
        lea eax, ss:[esp+4]
        mov dword ptr ss : [esp+4], ecx
        mov eax, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+0x4C]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6289ad0)
    }
}

#undef public_6289b06
