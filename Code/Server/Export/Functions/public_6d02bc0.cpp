#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6710);
CLANG_FORWARD_PROC_SYMBOL(public_6d02bc0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60f68);

PROC_DECLARE(0x6d02bc0, internal_6d02bc0, public_6d02bc0);
extern "C" NAKED register_t __cdecl internal_6d02bc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60f68 @0x6d02bc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60f68
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        lea ecx, ds:[esi-0xC]
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [ecx], offset public_6d6746c
        mov dword ptr ds : [esi-8], offset public_6d673ec
        mov dword ptr ds : [esi], offset public_6d673e4
        mov dword ptr ss : [esp+0x10], 0
        call dword ptr ds : [public_6d675c8]
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_6ce6710
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d02bc0)
    }
}
