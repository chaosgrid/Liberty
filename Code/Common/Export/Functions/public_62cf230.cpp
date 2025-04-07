#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62cf230);
CLANG_FORWARD_PROC_SYMBOL(public_62d2020);
CLANG_FORWARD_PROC_SYMBOL(public_62dae20);
CLANG_FORWARD_PROC_SYMBOL(public_62daf30);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6394f81);

#define public_62cf2ba _public_62cf2ba

PROC_DECLARE(0x62cf230, internal_62cf230, public_62cf230);
extern "C" NAKED register_t __cdecl internal_62cf230()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394f81 @0x62cf232*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394f81
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0xC], esi
        call public_62d2020
        xor edi, edi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [esi+0x2C], edi
        mov dword ptr ds : [esi+0x30], edi
        lea ecx, ds:[esi+0x68]
        mov byte ptr ss : [esp+0x14], 2
        call public_62dae20
        lea ecx, ds:[esi+0xD8]
        call public_62daf30
        lea ecx, ds:[esi+0xFC]
        mov dword ptr ds : [ecx], edi
        mov dword ptr ds : [ecx+4], edi
        mov dword ptr ds : [esi], offset public_639feb4
        mov dword ptr ds : [esi+0x11C], 0x3EC90FDB
        mov dword ptr ds : [esi+0x114], 0xC1200000
        mov dword ptr ds : [esi+0x118], 0x41200000
        cmp dword ptr ds : [ecx], edi
        mov byte ptr ss : [esp+0x14], 4
        je public_62cf2ba
        push edi
        call public_6341610
        public_62cf2ba : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x108], edi
        mov dword ptr ds : [esi+0x44], edi
        mov dword ptr ds : [esi+0x34], edi
        mov dword ptr ds : [esi+0x104], 0x41200000
        mov byte ptr ds : [esi+0x38], 1
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62cf230)
    }
}

#undef public_62cf2ba
