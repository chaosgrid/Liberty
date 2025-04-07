#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c2e60);
CLANG_FORWARD_PROC_SYMBOL(public_62d2020);
CLANG_FORWARD_PROC_SYMBOL(public_62d4e60);
CLANG_FORWARD_PROC_SYMBOL(public_62d6750);
CLANG_FORWARD_PROC_SYMBOL(public_62d9bf0);
CLANG_FORWARD_PROC_SYMBOL(public_62da500);
CLANG_FORWARD_PROC_SYMBOL(public_62db0c0);
CLANG_FORWARD_PROC_SYMBOL(public_63327e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6394a95);

PROC_DECLARE(0x62c2e60, internal_62c2e60, public_62c2e60);
extern "C" NAKED register_t __cdecl internal_62c2e60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394a95 @0x62c2e62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394a95
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
        lea ecx, ds:[esi+0x30]
        mov dword ptr ss : [esp+0x14], ebx
        call public_62d4e60
        lea ecx, ds:[esi+0xA8]
        mov byte ptr ss : [esp+0x14], 1
        call public_62d6750
        lea ecx, ds:[esi+0x168]
        mov byte ptr ss : [esp+0x14], 2
        call public_62d9bf0
        lea ecx, ds:[esi+0x2DC]
        mov byte ptr ss : [esp+0x14], 3
        call public_62da500
        lea ecx, ds:[esi+0x2F4]
        call public_62db0c0
        mov dword ptr ds : [esi+0x324], ebx
        mov dword ptr ds : [esi+0x328], ebx
        lea ecx, ds:[esi+0x348]
        mov byte ptr ss : [esp+0x14], 5
        call public_63327e0
        mov dword ptr ds : [esi+0x450], ebx
        mov dword ptr ds : [esi+0x454], ebx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x45C], ebx
        mov dword ptr ds : [esi+0x458], ebx
        mov dword ptr ds : [esi+0x320], ebx
        mov dword ptr ds : [esi+0x32C], ebx
        mov byte ptr ds : [esi+0x39B], bl
        mov dword ptr ds : [esi], offset public_639f4a4
        mov dword ptr ds : [esi+0x2C], offset public_639f498
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62c2e60)
    }
}
