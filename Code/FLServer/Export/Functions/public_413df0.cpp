#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_418a92);
CLANG_FORWARD_PROC_SYMBOL(public_418c2a);
CLANG_FORWARD_JUMP_SYMBOL(public_41a8ec);

PROC_DECLARE(0x413df0, internal_413df0, public_413df0);
extern "C" NAKED register_t __cdecl internal_413df0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a8ec @0x413df2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a8ec
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        push edi
        push eax
        mov esi, ecx
        push 0x94
        mov dword ptr ss : [esp+0x10], esi
        call public_418a92
        mov cl, byte ptr ss : [esp+0x1C]
        xor eax, eax
        mov dword ptr ss : [esp+0x14], eax
        mov byte ptr ds : [esi+0x60], cl
        mov dword ptr ds : [esi+0x64], eax
        mov dword ptr ds : [esi+0x68], eax
        mov dword ptr ds : [esi+0x6C], eax
        lea edi, ds:[esi+0x70]
        mov ecx, edi
        mov byte ptr ss : [esp+0x14], 1
        call public_418c2a
        mov dword ptr ds : [edi], offset public_41c820
        lea edi, ds:[esi+0xB0]
        mov ecx, edi
        mov byte ptr ss : [esp+0x14], 2
        call public_418c2a
        mov dword ptr ds : [edi], offset public_41c820
        lea edi, ds:[esi+0xF0]
        mov ecx, edi
        mov byte ptr ss : [esp+0x14], 3
        call public_418c2a
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi], offset public_41c820
        mov dword ptr ds : [esi], offset public_41e2e0
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x413df0)
    }
}
