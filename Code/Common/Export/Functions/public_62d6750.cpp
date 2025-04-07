#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d6750);
CLANG_FORWARD_PROC_SYMBOL(public_62e5ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6395233);

#define public_62d679a _public_62d679a

PROC_DECLARE(0x62d6750, internal_62d6750, public_62d6750);
extern "C" NAKED register_t __cdecl internal_62d6750()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395233 @0x62d6752*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395233
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+0x14]
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ds : [esi+0x10], bl
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebx
        mov dword ptr ds : [esi], offset public_63a04ac
        cmp dword ptr ds : [ecx], ebx
        mov dword ptr ss : [esp+0x18], 1
        je public_62d679a
        push ebx
        call public_6341610
        public_62d679a : nop
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        xor eax, eax
        mov ecx, 9
        lea edi, ds:[esi+0x34]
        rep stosd
        mov eax, dword ptr ds : [esi+4]
        push 0x3F800000
        push eax
        mov dword ptr ds : [esi+0x8C], 0x3DC90FDB
        mov dword ptr ds : [esi+0x98], 0x3F1C28F6
        mov dword ptr ds : [esi+0x9C], 0x3E490FDB
        mov dword ptr ds : [esi+0xA0], ebx
        mov byte ptr ds : [esi+0x64], bl
        call public_62e5ba0
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        fstp dword ptr ds : [esi+0x90]
        pop edi
        mov dword ptr ds : [esi+0x94], 0x3F800000
        mov dword ptr ds : [esi+0xA8], 0x40490FDB
        mov dword ptr ds : [esi+0xBC], 0x3F7AE148
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62d6750)
    }
}

#undef public_62d679a
