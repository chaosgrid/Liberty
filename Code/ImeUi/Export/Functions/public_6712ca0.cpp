#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67111c0);
CLANG_FORWARD_PROC_SYMBOL(public_67115e0);
CLANG_FORWARD_PROC_SYMBOL(public_6712440);
CLANG_FORWARD_PROC_SYMBOL(public_6712720);
CLANG_FORWARD_PROC_SYMBOL(public_6712ca0);
CLANG_FORWARD_PROC_SYMBOL(public_67169d0);
CLANG_FORWARD_JUMP_SYMBOL(public_6716ce8);

#define public_6712cdd _public_6712cdd
#define public_6712cf7 _public_6712cf7

PROC_DECLARE(0x6712ca0, internal_6712ca0, public_6712ca0);
extern "C" NAKED register_t __cdecl internal_6712ca0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6716ce8 @0x6712ca2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6716ce8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi], offset public_67171b4
        mov dword ptr ss : [esp+0x14], 0
        call public_67111c0
        test eax, eax
        je public_6712cdd
        push esi
        mov ecx, eax
        call public_67115e0
        public_6712cdd : nop
        mov edi, dword ptr ds : [esi+0x90]
        test edi, edi
        je public_6712cf7
        mov ecx, edi
        call public_6712440
        push edi
        call public_67169d0
        add esp, 4
        public_6712cf7 : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0x90], 0
        call public_6712720
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6712ca0)
    }
}

#undef public_6712cdd
#undef public_6712cf7
