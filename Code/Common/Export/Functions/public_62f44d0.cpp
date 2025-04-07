#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62efff0);
CLANG_FORWARD_PROC_SYMBOL(public_62f44d0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_JUMP_SYMBOL(public_6395818);

PROC_DECLARE(0x62f44d0, internal_62f44d0, public_62f44d0);
extern "C" NAKED register_t __cdecl internal_62f44d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395818 @0x62f44d2*/
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
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0xC], esi
        call public_62efff0
        xor edi, edi
        lea ecx, ds:[esi+0x68]
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [esi+0x5C], edi
        mov byte ptr ds : [esi+0x60], 1
        mov dword ptr ds : [esi+0x64], 1
        call public_6333e40
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x70], edi
        mov dword ptr ds : [esi+0x74], edi
        mov dword ptr ds : [esi+0x78], edi
        mov byte ptr ds : [esi+0x6C], 1
        mov dword ptr ds : [esi+0x1C], 0x3F800000
        mov dword ptr ds : [esi], offset public_63998c8
        mov dword ptr ds : [esi+0x10], 0x10000000
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62f44d0)
    }
}
