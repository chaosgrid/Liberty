#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b610);
CLANG_FORWARD_PROC_SYMBOL(public_6343940);
CLANG_FORWARD_PROC_SYMBOL(public_63486c0);
CLANG_FORWARD_PROC_SYMBOL(public_6348710);
CLANG_FORWARD_PROC_SYMBOL(public_6348720);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6393418);

#define public_628b682 _public_628b682
#define public_628b68d _public_628b68d
#define public_628b6cf _public_628b6cf

PROC_DECLARE(0x628b610, internal_628b610, public_628b610);
extern "C" NAKED register_t __cdecl internal_628b610()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6393418 @0x628b618*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393418
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x58
        push edi
        mov edi, dword ptr ss : [esp+0x6C]
        test edi, edi
        mov eax, 1
        je public_628b6cf
        push esi
        lea ecx, ss:[esp+8]
        call public_63486c0
        mov eax, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [eax+0x54]
        add ecx, 0x84
        push ecx
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x6C], 0
        call public_6348720
        mov edx, dword ptr ds : [public_63fc0bc]
        mov esi, dword ptr ds : [edi+0x14]
        mov dword ptr ss : [esp+0x14], 1
        mov dword ptr ss : [esp+0x20], edx
        mov ecx, dword ptr ds : [esi+0x7C]
        mov eax, ecx
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_628b68d
        public_628b682 : nop
        cmp dword ptr ds : [eax+8], edi
        je public_628b68d
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_628b682
        public_628b68d : nop
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        dec dword ptr ds : [esi+0x80]
        mov ecx, dword ptr ds : [edi+4]
        lea eax, ss:[esp+0xC]
        push eax
        push ecx
        call public_6343940
        add esp, 0xC
        lea ecx, ss:[esp+8]
        xor esi, esi
        mov dword ptr ss : [esp+0x68], 0xFFFFFFFF
        call public_6348710
        mov eax, esi
        pop esi
        public_628b6cf : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x64
        ret 
        UNREACHABLE_TRAP(0x628b610)
    }
}

#undef public_628b682
#undef public_628b68d
#undef public_628b6cf
