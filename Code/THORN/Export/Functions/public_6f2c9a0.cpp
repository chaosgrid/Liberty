#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2c9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58648);

#define public_6f2c9d8 _public_6f2c9d8

PROC_DECLARE(0x6f2c9a0, internal_6f2c9a0, public_6f2c9a0);
extern "C" NAKED register_t __cdecl internal_6f2c9a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58648 @0x6f2c9a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58648
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        xor ecx, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ds : [esi+0xC], ecx
        je public_6f2c9d8
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6f2c9d8 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], eax
        inc eax
        push eax
        call public_6f57e9c
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6f2c9a0)
    }
}

#undef public_6f2c9d8
