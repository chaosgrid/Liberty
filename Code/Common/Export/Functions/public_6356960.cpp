#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);

PROC_DECLARE(0x6356960, internal_6356960, public_6356960);
extern "C" NAKED register_t __cdecl internal_6356960()
{
    __asm
    {
        mov eax, 0x2710
        call public_6391dc0
        push edi
        xor eax, eax
        mov ecx, 0xFA
        lea edi, ss:[esp+4]
        rep stosd
        lea eax, ss:[esp+4]
/*FIXUP push offset public_63edcd4 @0x635697c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edcd4
        push eax
        call dword ptr ds : [public_639931c]
        mov edx, dword ptr ss : [esp+0x2720]
        lea ecx, ss:[esp+0x2724]
        push ecx
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [public_63991f4]
        add esp, 0x14
        lea ecx, ss:[esp+4]
        push ecx
        call dword ptr ds : [public_639911c]
        pop edi
        add esp, 0x2710
        ret 
        UNREACHABLE_TRAP(0x6356960)
    }
}
