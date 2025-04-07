#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62efff0);
CLANG_FORWARD_PROC_SYMBOL(public_62f6d60);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_JUMP_SYMBOL(public_6395818);

PROC_DECLARE(0x62f6d60, internal_62f6d60, public_62f6d60);
extern "C" NAKED register_t __cdecl internal_62f6d60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395818 @0x62f6d62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395818
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
        xor ebx, ebx
        lea ecx, ds:[esi+0x68]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        mov byte ptr ds : [esi+0x60], 1
        mov dword ptr ds : [esi+0x64], 1
        call public_6333e40
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x70], ebx
        mov byte ptr ds : [esi+0x78], bl
        mov byte ptr ds : [esi+0x79], bl
        mov dword ptr ds : [esi+0x7C], ebx
        mov byte ptr ds : [esi+0x6C], 1
        mov dword ptr ds : [esi+0x1C], 0x3F800000
        mov dword ptr ds : [esi+0x74], 0xBF800000
        mov dword ptr ds : [esi], offset public_6399cbc
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62f6d60)
    }
}
