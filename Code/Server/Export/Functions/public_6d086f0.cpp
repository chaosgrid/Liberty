#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d086f0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d612fc);

PROC_DECLARE(0x6d086f0, internal_6d086f0, public_6d086f0);
/* CHUNK of public_6d07e20 */
extern "C" NAKED register_t __cdecl internal_6d086f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d612fc @0x6d086f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d612fc
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
        mov edi, dword ptr ds : [public_6d64694]
        lea ecx, ds:[esi+0x30]
        mov dword ptr ss : [esp+0x14], 0
        call edi
        lea ecx, ds:[esi+0x18]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call edi
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d086f0)
    }
}
