#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ad70);
CLANG_FORWARD_PROC_SYMBOL(public_629eca0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_JUMP_SYMBOL(public_6393b38);

PROC_DECLARE(0x629eca0, internal_629eca0, public_629eca0);
extern "C" NAKED register_t __cdecl internal_629eca0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393b38 @0x629eca2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393b38
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push edx
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], esi
        call public_629ad70
        lea ecx, ds:[esi+0x20]
        mov dword ptr ss : [esp+0x10], 0
        call public_6333e30
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x24], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_639c49c
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0x14
        UNREACHABLE_TRAP(0x629eca0)
    }
}
