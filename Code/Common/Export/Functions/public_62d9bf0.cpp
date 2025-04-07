#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d4e60);
CLANG_FORWARD_PROC_SYMBOL(public_62d6750);
CLANG_FORWARD_PROC_SYMBOL(public_62d9bf0);
CLANG_FORWARD_JUMP_SYMBOL(public_63952ab);

PROC_DECLARE(0x62d9bf0, internal_62d9bf0, public_62d9bf0);
extern "C" NAKED register_t __cdecl internal_62d9bf0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63952ab @0x62d9bf2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63952ab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        lea ecx, ds:[esi+0x14]
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi], offset public_63a0410
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ds : [esi+0x10], bl
        call public_62d4e60
        lea ecx, ds:[esi+0x8C]
        mov dword ptr ss : [esp+0x14], ebx
        call public_62d6750
        mov ecx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [esi+0x150], bl
        mov dword ptr ds : [esi+0x158], ebx
        mov dword ptr ds : [esi], offset public_63a0568
        mov dword ptr ds : [esi+0x168], 0x41200000
        mov dword ptr ds : [esi+0x16C], 0x42480000
        mov dword ptr ds : [esi+0x154], 0x3F800000
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62d9bf0)
    }
}
