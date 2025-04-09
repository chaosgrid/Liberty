#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4437d0);
CLANG_FORWARD_PROC_SYMBOL(public_443920);
CLANG_FORWARD_PROC_SYMBOL(public_457d60);
CLANG_FORWARD_PROC_SYMBOL(public_457e20);
CLANG_FORWARD_PROC_SYMBOL(public_5593d0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9743);

PROC_DECLARE(0x4437d0, internal_4437d0, public_4437d0);
extern "C" NAKED register_t __cdecl internal_4437d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9743 @0x4437d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9743
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
        call public_5593d0
        lea edi, ds:[esi+0x38]
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], 0
        call public_457d60
        mov ecx, edi
        mov byte ptr ss : [esp+0x14], 1
        mov dword ptr ds : [esi], offset public_5cb8d4
        mov dword ptr ds : [esi+0x30], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x34], 0
        call public_457e20
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        mov ecx, esi
        call public_443920
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x4437d0)
    }
}
