#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d842b0);
CLANG_FORWARD_JUMP_SYMBOL(public_6db22ac);

PROC_DECLARE(0x6d842b0, internal_6d842b0, public_6d842b0);
extern "C" NAKED register_t __cdecl internal_6d842b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db22ac @0x6d842b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db22ac
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
        mov edi, dword ptr ds : [public_6db3094]
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
        UNREACHABLE_TRAP(0x6d842b0)
    }
}
