#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c4f20);

#define public_65c5092 _public_65c5092
#define public_65c50ef _public_65c50ef
#define public_65c5124 _public_65c5124
#define public_65c5132 _public_65c5132

PROC_DECLARE(0x65c5080, internal_65c5080, public_65c5080);
extern "C" NAKED register_t __cdecl internal_65c5080()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_65c5092
        xor al, al
        pop esi
        pop ecx
        ret 4
        public_65c5092 : nop
        cmp byte ptr ds : [esi+0x564], 1
        je public_65c5132
        lea eax, ss:[esp+4]
        push eax
/*FIXUP push offset public_65c75f0 @0x65c50a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c75f0
        push 1
        push 0
/*FIXUP push offset public_65c7600 @0x65c50ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7600
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [public_65c70e0]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_65c75a0 @0x65c50c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c75a0
        push eax
        call dword ptr ds : [ecx+0x34]
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_65c50ef
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        push 2
        push 4
        lea ecx, ss:[esp+0x14]
        push ecx
/*FIXUP push offset public_65c7474 @0x65c50e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7474
        push eax
        call dword ptr ds : [edx+0x48]
        public_65c50ef : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push edi
        push 0
        push 0
        push 0
        push 0
        push 1
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ds:[esi+8]
        push ecx
        push eax
        call dword ptr ds : [edx+0x34]
        mov edi, eax
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        test edi, edi
        pop edi
        je public_65c5124
        xor al, al
        pop esi
        pop ecx
        ret 4
        public_65c5124 : nop
        mov ecx, esi
        mov byte ptr ds : [esi+0x564], 1
        call public_65c4f20
        public_65c5132 : nop
        mov al, 1
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x65c5080)
    }
}

#undef public_65c5092
#undef public_65c50ef
#undef public_65c5124
#undef public_65c5132
