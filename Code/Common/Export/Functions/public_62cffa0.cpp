#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d21d0);
CLANG_FORWARD_PROC_SYMBOL(public_62eb5a0);
CLANG_FORWARD_PROC_SYMBOL(public_63275f0);

#define public_62cffe6 _public_62cffe6

PROC_DECLARE(0x62cffa0, internal_62cffa0, public_62cffa0);
extern "C" NAKED register_t __cdecl internal_62cffa0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        call public_62d20d0
        push 0x40490FDB
        lea ecx, ds:[esi+0x30]
        call public_63275f0
        push 3
        push 0
        mov ecx, esi
        call public_62d21d0
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x12C
        call public_62eb5a0
        test al, al
        je public_62cffe6
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [esi+0x2C], edx
        public_62cffe6 : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62cffa0)
    }
}

#undef public_62cffe6
