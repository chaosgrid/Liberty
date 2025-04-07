#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_453480);
CLANG_FORWARD_PROC_SYMBOL(public_456790);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9e98);

#define public_453535 _public_453535

PROC_DECLARE(0x453480, internal_453480, public_453480);
extern "C" NAKED register_t __cdecl internal_453480()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9e98 @0x453482*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9e98
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
        mov dword ptr ds : [esi], offset public_5cd734
        mov dword ptr ds : [esi+4], offset public_5cd700
        mov dword ptr ds : [esi+8], offset public_5cd6e4
        mov dword ptr ds : [esi+0xC], offset public_5cd6c4
        mov dword ptr ds : [esi+0x10], offset public_5cd68c
        mov dword ptr ds : [esi+0x14], offset public_5cd664
        mov dword ptr ds : [esi+0x18], offset public_5cd640
        mov dword ptr ds : [esi+0x1C], offset public_5cd608
        mov dword ptr ds : [esi+0x20], offset public_5cd5f0
        mov edx, dword ptr ds : [edi+0x38]
        push edx
        push 5
        mov ecx, offset public_66d2d0
        mov dword ptr ss : [esp+0x1C], 0
        call public_456790
        test eax, eax
        mov dword ptr ds : [esi+0x6C], eax
        jne public_453535
        mov ecx, dword ptr ds : [edi+0x38]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x177
/*FIXUP push offset public_5cd5bc @0x453520*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cd5bc
        mov eax, 0x100002
/*FIXUP push offset public_5cd580 @0x45352a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cd580
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_453535 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x453480)
    }
}

#undef public_453535
