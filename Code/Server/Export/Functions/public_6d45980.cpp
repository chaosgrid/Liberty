#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45980);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62ecc);

PROC_DECLARE(0x6d45980, internal_6d45980, public_6d45980);
extern "C" NAKED register_t __cdecl internal_6d45980()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62ecc @0x6d45982*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62ecc
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
        mov edi, dword ptr ds : [public_6d64854]
        lea ecx, ds:[esi+0x20]
        mov dword ptr ss : [esp+0x14], 0
        call edi
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call edi
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d45980)
    }
}
