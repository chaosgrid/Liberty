#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b50);
CLANG_FORWARD_PROC_SYMBOL(public_62930d0);
CLANG_FORWARD_PROC_SYMBOL(public_629d120);
CLANG_FORWARD_JUMP_SYMBOL(public_6393953);

PROC_DECLARE(0x629d120, internal_629d120, public_629d120);
extern "C" NAKED register_t __cdecl internal_629d120()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393953 @0x629d122*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393953
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x18]
        push esi
        push edi
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push edx
        push eax
        push 0x400
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], esi
        call public_62930d0
        lea edi, ds:[esi+0x4C]
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], 0
        call public_6285b50
        mov byte ptr ds : [edi+0x10], 0
        mov dword ptr ds : [edi], offset public_639be28
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x18], 1
        mov byte ptr ds : [esi+0x60], 0
        mov dword ptr ds : [esi], offset public_639d744
        mov dword ptr ds : [edi], offset public_639d710
        call dword ptr ds : [public_639d738]
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x629d120)
    }
}
