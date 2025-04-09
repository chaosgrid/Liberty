#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438c00);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_438c43 _public_438c43
#define public_438c4b _public_438c4b
#define public_438c60 _public_438c60
#define public_438c86 _public_438c86

PROC_DECLARE(0x438c00, internal_438c00, public_438c00);
extern "C" NAKED register_t __cdecl internal_438c00()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_668740]
        sub esp, 0xC
        xor eax, eax
        test ecx, 0x3FFFFFFF
        je public_438c86
        lea eax, ss:[esp]
        mov dword ptr ss : [esp], ecx
        push eax
        mov ecx, offset public_668714
        call public_52c7a0
        mov ecx, dword ptr ds : [public_668718]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp]
        mov dword ptr ss : [esp+4], eax
        je public_438c43
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_438c43
        lea eax, ss:[esp+4]
        jmp public_438c4b
        public_438c43 : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_438c4b : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_438c60
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+8]
        add esp, 0xC
        ret 
        nop 
        lea esp, ss:[esp]
        public_438c60 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
        push edx
        push 0x110
/*FIXUP push offset public_5caf30 @0x438c6c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caefc @0x438c76*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caefc
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        xor eax, eax
        mov eax, dword ptr ds : [eax+8]
        public_438c86 : nop
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x438c00)
    }
}

#undef public_438c43
#undef public_438c4b
#undef public_438c60
#undef public_438c86
