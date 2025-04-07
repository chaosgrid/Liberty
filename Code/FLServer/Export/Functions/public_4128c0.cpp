#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f900);
CLANG_FORWARD_PROC_SYMBOL(public_4128c0);
CLANG_FORWARD_PROC_SYMBOL(public_418a92);
CLANG_FORWARD_PROC_SYMBOL(public_418c2a);
CLANG_FORWARD_JUMP_SYMBOL(public_41a77b);

PROC_DECLARE(0x4128c0, internal_4128c0, public_4128c0);
extern "C" NAKED register_t __cdecl internal_4128c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a77b @0x4128c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a77b
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
        push 0x93
        mov dword ptr ss : [esp+0x10], esi
        call public_418a92
        lea edi, ds:[esi+0x60]
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], 0
        call public_418c2a
        mov dword ptr ds : [edi], offset public_41cce0
        lea edi, ds:[esi+0xA0]
        mov ecx, edi
        mov byte ptr ss : [esp+0x14], 1
        call public_418c2a
        mov dword ptr ds : [edi], offset public_41cce0
        lea edi, ds:[esi+0xE0]
        mov ecx, edi
        mov byte ptr ss : [esp+0x14], 2
        call public_418c2a
        mov dword ptr ds : [edi], offset public_41cce0
        lea edi, ds:[esi+0x120]
        mov ecx, edi
        mov byte ptr ss : [esp+0x14], 3
        call public_418c2a
        mov dword ptr ds : [edi], offset public_41d9d0
        lea edi, ds:[esi+0x160]
        mov ecx, edi
        mov byte ptr ss : [esp+0x14], 4
        call public_418c2a
        mov dword ptr ds : [edi], offset public_41cce0
        lea ecx, ds:[esi+0x1A0]
        mov byte ptr ss : [esp+0x14], 5
        call public_40f900
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], offset public_41df90
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x4128c0)
    }
}
