#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b850);
CLANG_FORWARD_PROC_SYMBOL(public_620b8c0);
CLANG_FORWARD_JUMP_SYMBOL(public_6247828);

PROC_DECLARE(0x620b850, internal_620b850, public_620b850);
extern "C" NAKED register_t __cdecl internal_620b850()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247828 @0x620b852*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247828
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        xor eax, eax
        push esi
        mov dword ptr ss : [esp+4], eax
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push esi
        call public_620b8c0
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x620b850)
    }
}
