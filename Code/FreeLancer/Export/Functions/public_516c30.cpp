#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40c690);
CLANG_FORWARD_PROC_SYMBOL(public_516af0);
CLANG_FORWARD_PROC_SYMBOL(public_516c30);
CLANG_FORWARD_PROC_SYMBOL(public_516d10);
CLANG_FORWARD_PROC_SYMBOL(public_531a30);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfdd8);

PROC_DECLARE(0x516c30, internal_516c30, public_516c30);
extern "C" NAKED register_t __cdecl internal_516c30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bfdd8 @0x516c32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bfdd8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0xC], esi
        call public_531a30
        xor eax, eax
        mov ecx, offset public_5db914
        mov dword ptr ds : [esi+0x10], ecx
        mov dword ptr ds : [esi+0x1C], ecx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ss : [esp+0x10], eax
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_5db904
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x20], eax
        mov eax, dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+0xAC]
        mov ecx, esi
        mov dword ptr ds : [esi+0x2C], edx
        call public_516af0
        mov ecx, esi
        call public_516d10
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        call public_40c690
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x516c30)
    }
}
