#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_439610);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_439640 _public_439640
#define public_439648 _public_439648
#define public_439660 _public_439660

PROC_DECLARE(0x439610, internal_439610, public_439610);
extern "C" NAKED register_t __cdecl internal_439610()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+0xC]
        push eax
        mov ecx, esi
        call public_52c7a0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+8], eax
        je public_439640
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_439640
        lea eax, ss:[esp+8]
        jmp public_439648
        public_439640 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_439648 : nop
        mov edx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        pop edi
        pop esi
        je public_439660
        mov eax, dword ptr ds : [eax+0x10]
        add esp, 8
        ret 4
        lea esp, ss:[esp]
        public_439660 : nop
        push ecx
        mov ecx, dword ptr ds : [public_5c6d18]
        push 0x110
/*FIXUP push offset public_5caf30 @0x43966c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caefc @0x439676*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caefc
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        xor eax, eax
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x439610)
    }
}

#undef public_439640
#undef public_439648
#undef public_439660
