#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62cb2b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d2020);
CLANG_FORWARD_PROC_SYMBOL(public_62d4e60);
CLANG_FORWARD_PROC_SYMBOL(public_62d5aa0);
CLANG_FORWARD_PROC_SYMBOL(public_62d6750);
CLANG_FORWARD_PROC_SYMBOL(public_62d8970);
CLANG_FORWARD_PROC_SYMBOL(public_62da500);
CLANG_FORWARD_JUMP_SYMBOL(public_6394e30);

PROC_DECLARE(0x62cb2b0, internal_62cb2b0, public_62cb2b0);
extern "C" NAKED register_t __cdecl internal_62cb2b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394e30 @0x62cb2b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394e30
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
        call public_62d2020
        xor ebx, ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        lea ecx, ds:[esi+0x34]
        mov byte ptr ss : [esp+0x14], 2
        call public_62d5aa0
        lea ecx, ds:[esi+0x90]
        mov byte ptr ss : [esp+0x14], 3
        call public_62d6750
        lea ecx, ds:[esi+0x150]
        mov byte ptr ss : [esp+0x14], 4
        call public_62d4e60
        lea ecx, ds:[esi+0x1C8]
        mov byte ptr ss : [esp+0x14], 5
        call public_62d8970
        lea ecx, ds:[esi+0x264]
        mov byte ptr ss : [esp+0x14], 6
        call public_62da500
        mov ecx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [esi+0x281], bl
        mov byte ptr ds : [esi+0x280], bl
        mov byte ptr ds : [esi+0x285], bl
        mov byte ptr ds : [esi+0x28C], bl
        mov dword ptr ds : [esi+0x278], ebx
        mov byte ptr ds : [esi+0x282], bl
        mov dword ptr ds : [esi+0x27C], ebx
        mov byte ptr ds : [esi+0x284], bl
        mov byte ptr ds : [esi+0x283], bl
        mov dword ptr ds : [esi], offset public_639fae4
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62cb2b0)
    }
}
