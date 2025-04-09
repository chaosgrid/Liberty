#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_573710);
CLANG_FORWARD_PROC_SYMBOL(public_591ba0);
CLANG_FORWARD_PROC_SYMBOL(public_591ef0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3998);

PROC_DECLARE(0x573710, internal_573710, public_573710);
extern "C" NAKED register_t __cdecl internal_573710()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c3998 @0x573712*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3998
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_5e2fbc
        mov dword ptr ds : [esi+0x7C], offset public_5e2fa4
        mov dword ptr ds : [esi+0x80], offset public_5e2f9c
        lea ecx, ds:[esi+0x8C]
        mov dword ptr ss : [esp+0x10], 0
        call public_591ef0
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_591ba0
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x573710)
    }
}
