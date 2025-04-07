#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415ff0);
CLANG_FORWARD_PROC_SYMBOL(public_418a92);
CLANG_FORWARD_PROC_SYMBOL(public_418c2a);
CLANG_FORWARD_JUMP_SYMBOL(public_41aa81);

PROC_DECLARE(0x415ff0, internal_415ff0, public_415ff0);
extern "C" NAKED register_t __cdecl internal_415ff0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41aa81 @0x415ff2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41aa81
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
        push 0x95
        mov dword ptr ss : [esp+0x10], esi
        call public_418a92
        lea edi, ds:[esi+0x64]
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], 0
        call public_418c2a
        mov dword ptr ds : [edi], offset public_41c820
        lea edi, ds:[esi+0xA4]
        mov ecx, edi
        mov byte ptr ss : [esp+0x14], 1
        call public_418c2a
        mov dword ptr ds : [edi], offset public_41c820
        lea edi, ds:[esi+0xE4]
        mov ecx, edi
        mov byte ptr ss : [esp+0x14], 2
        call public_418c2a
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi], offset public_41c820
        mov dword ptr ds : [esi], offset public_41e760
        mov dword ptr ds : [esi+0x60], 0xFFFFFFFF
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x415ff0)
    }
}
