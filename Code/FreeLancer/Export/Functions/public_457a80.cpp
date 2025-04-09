#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_456790);
CLANG_FORWARD_PROC_SYMBOL(public_457a80);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba0b8);

#define public_457b35 _public_457b35

PROC_DECLARE(0x457a80, internal_457a80, public_457a80);
extern "C" NAKED register_t __cdecl internal_457a80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5ba0b8 @0x457a82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba0b8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push edi
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], esi
        call public_44fbe0
        mov dword ptr ds : [esi], offset public_5ce71c
        mov dword ptr ds : [esi+4], offset public_5ce6e8
        mov dword ptr ds : [esi+8], offset public_5ce6cc
        mov dword ptr ds : [esi+0xC], offset public_5ce6ac
        mov dword ptr ds : [esi+0x10], offset public_5ce674
        mov dword ptr ds : [esi+0x14], offset public_5ce64c
        mov dword ptr ds : [esi+0x18], offset public_5ce628
        mov dword ptr ds : [esi+0x1C], offset public_5ce5f0
        mov dword ptr ds : [esi+0x20], offset public_5ce5d8
        mov edx, dword ptr ds : [edi+0x38]
        push edx
        push 6
        mov ecx, offset public_66d2d0
        mov dword ptr ss : [esp+0x1C], 0
        call public_456790
        test eax, eax
        mov dword ptr ds : [esi+0x6C], eax
        jne public_457b35
        mov ecx, dword ptr ds : [edi+0x38]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x2F2
/*FIXUP push offset public_5ce340 @0x457b20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce340
        mov eax, 0x100002
/*FIXUP push offset public_5ce598 @0x457b2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce598
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_457b35 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x457a80)
    }
}

#undef public_457b35
