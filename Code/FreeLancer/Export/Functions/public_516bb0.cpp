#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40c7d0);
CLANG_FORWARD_PROC_SYMBOL(public_516bb0);
CLANG_FORWARD_PROC_SYMBOL(public_531af0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfdd8);

PROC_DECLARE(0x516bb0, internal_516bb0, public_516bb0);
extern "C" NAKED register_t __cdecl internal_516bb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bfdd8 @0x516bb2*/
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
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_5db904
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], 0
        call public_40c7d0
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_531af0
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x516bb0)
    }
}
