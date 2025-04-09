#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40ff50);
CLANG_FORWARD_PROC_SYMBOL(public_417730);

#define public_417765 _public_417765

PROC_DECLARE(0x417730, internal_417730, public_417730);
extern "C" NAKED register_t __cdecl internal_417730()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        lea eax, ss:[esp+0xC]
        push eax
/*FIXUP push offset public_67dbf8 @0x417747*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_40ff50
        test al, al
        jne public_417765
        mov dword ptr ss : [esp], 0
        mov dword ptr ss : [esp+4], 0
        public_417765 : nop
        mov eax, dword ptr ss : [esp]
        mov edx, dword ptr ss : [esp+4]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x417730)
    }
}

#undef public_417765
