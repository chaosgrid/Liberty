#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402770);
CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_412bb0);
CLANG_FORWARD_PROC_SYMBOL(public_412d20);
CLANG_FORWARD_PROC_SYMBOL(public_41894e);
CLANG_FORWARD_PROC_SYMBOL(public_41899c);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_JUMP_SYMBOL(public_41a828);

#define public_413235 _public_413235

PROC_DECLARE(0x4131a0, internal_4131a0, public_4131a0);
extern "C" NAKED register_t __cdecl internal_4131a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a828 @0x4131a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a828
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x60
        push ebx
        push esi
        push edi
        mov esi, ecx
        push 0
        lea ecx, ss:[esp+0x10]
        call public_402770
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x74], 0
        call public_41899c
        cmp eax, 1
        jne public_413235
        mov eax, dword ptr ds : [esi+0x1C4]
        mov ebx, dword ptr ds : [public_41bbe8]
        push 0
        push 0
        push 0x188
        push eax
        call ebx
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jle public_413235
        call public_40cdc0
        mov ecx, dword ptr ds : [esi+0x1C4]
        push 0
        push edi
        push 0x199
        push ecx
        call ebx
        mov ecx, dword ptr ds : [public_41baf8]
        add eax, 4
        push eax
        call public_41894e
        call public_40ce70
        mov ecx, esi
        call public_412bb0
        mov ecx, esi
        call public_412d20
        public_413235 : nop
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x74], 0xFFFFFFFF
        call public_418a98
        mov ecx, dword ptr ss : [esp+0x6C]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x6C
        ret 
        UNREACHABLE_TRAP(0x4131a0)
    }
}

#undef public_413235
