#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f270);
CLANG_FORWARD_PROC_SYMBOL(public_6f511c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f51230);
CLANG_FORWARD_PROC_SYMBOL(public_6f52650);
CLANG_FORWARD_PROC_SYMBOL(public_6f526d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f527d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52920);
CLANG_FORWARD_PROC_SYMBOL(public_6f52940);

#define public_6f526b7 _public_6f526b7

PROC_DECLARE(0x6f52650, internal_6f52650, public_6f52650);
extern "C" NAKED register_t __cdecl internal_6f52650()
{
    __asm
    {
        sub esp, 0x4A4
        push esi
        mov esi, dword ptr ss : [esp+0x4AC]
        lea eax, ss:[esp+4]
        push esi
        push eax
        call public_6f51230
        mov ecx, dword ptr ds : [esi+0x10]
        push ecx
        call public_6f4f270
        push eax
        lea edx, ss:[esp+0x74]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call public_6f526d0
        lea ecx, ss:[esp+0x1C]
        push ecx
        call public_6f52920
        lea edx, ss:[esp+0x20]
        push edx
        call public_6f52940
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0x20
        cmp eax, 0x11D
        pop esi
        je public_6f526b7
        lea eax, ss:[esp]
/*FIXUP push offset public_6f611ec @0x6f526a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f611ec
        push eax
        call public_6f511c0
        add esp, 8
        public_6f526b7 : nop
        lea ecx, ss:[esp]
        push ecx
        call public_6f527d0
        mov eax, dword ptr ss : [esp+0x64]
        add esp, 0x4A8
        ret 
        UNREACHABLE_TRAP(0x6f52650)
    }
}

#undef public_6f526b7
