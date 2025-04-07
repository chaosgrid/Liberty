#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62efff0);
CLANG_FORWARD_PROC_SYMBOL(public_62f4f30);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_JUMP_SYMBOL(public_6395800);

PROC_DECLARE(0x62f4f30, internal_62f4f30, public_62f4f30);
extern "C" NAKED register_t __cdecl internal_62f4f30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395800 @0x62f4f32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395800
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0xC], esi
        call public_62efff0
        xor eax, eax
        mov ebx, 1
        lea ecx, ds:[esi+0x68]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ds : [esi+0x5C], eax
        mov byte ptr ds : [esi+0x60], bl
        mov dword ptr ds : [esi+0x64], ebx
        call public_6333e40
        mov byte ptr ds : [esi+0x6C], bl
        mov dword ptr ds : [esi], offset public_6399870
        mov dword ptr ds : [esi+0x1C], 0x3F800000
        lea ecx, ds:[esi+0x70]
        mov dword ptr ss : [esp+0x14], ebx
        call public_6333e30
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], offset public_6399a54
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62f4f30)
    }
}
