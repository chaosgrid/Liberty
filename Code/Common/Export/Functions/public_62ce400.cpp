#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ce400);
CLANG_FORWARD_PROC_SYMBOL(public_62d2020);
CLANG_FORWARD_PROC_SYMBOL(public_62d4e60);
CLANG_FORWARD_PROC_SYMBOL(public_62d6750);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6394f37);

#define public_62ce477 _public_62ce477

PROC_DECLARE(0x62ce400, internal_62ce400, public_62ce400);
extern "C" NAKED register_t __cdecl internal_62ce400()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394f37 @0x62ce402*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394f37
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
        lea ecx, ds:[esi+0x2C]
        mov dword ptr ss : [esp+0x14], ebx
        call public_62d4e60
        lea ecx, ds:[esi+0xA4]
        mov byte ptr ss : [esp+0x14], 1
        call public_62d6750
        lea ecx, ds:[esi+0x174]
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebx
        mov dword ptr ds : [esi], offset public_639fdbc
        mov dword ptr ds : [esi+0x170], 0x41500000
        mov byte ptr ds : [esi+0x16C], 1
        cmp dword ptr ds : [ecx], ebx
        mov byte ptr ss : [esp+0x14], 4
        je public_62ce477
        push ebx
        call public_6341610
        public_62ce477 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [esi+0x17C], bl
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62ce400)
    }
}

#undef public_62ce477
