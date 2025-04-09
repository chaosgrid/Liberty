#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427a40);
CLANG_FORWARD_PROC_SYMBOL(public_430ab0);
CLANG_FORWARD_PROC_SYMBOL(public_4a2f80);
CLANG_FORWARD_PROC_SYMBOL(public_554ce0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_554cf4 _public_554cf4
#define public_554d04 _public_554d04
#define public_554d22 _public_554d22
#define public_554d39 _public_554d39
#define public_554d60 _public_554d60
#define public_554d88 _public_554d88
#define public_554db1 _public_554db1
#define public_554dd5 _public_554dd5
#define public_554de0 _public_554de0
#define public_554de8 _public_554de8
#define public_554e15 _public_554e15

PROC_DECLARE(0x554ce0, internal_554ce0, public_554ce0);
extern "C" NAKED register_t __cdecl internal_554ce0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_679898]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_554d04
        mov edi, dword ptr ds : [public_5c65c8]
        public_554cf4 : nop
        mov ecx, dword ptr ds : [esi+8]
        call edi
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [public_679898]
        cmp esi, eax
        jne public_554cf4
        public_554d04 : nop
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_679894
        call public_4a2f80
        mov eax, dword ptr ds : [public_67988c]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_554d39
        public_554d22 : nop
        lea ecx, ds:[esi+8]
        push ecx
        call public_427a40
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [public_67988c]
        add esp, 4
        cmp esi, eax
        jne public_554d22
        public_554d39 : nop
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, offset public_679888
        call public_4a2f80
        mov eax, dword ptr ds : [public_679880]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_554de0
        nop 
        lea esp, ss:[esp]
        public_554d60 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_430ab0
        add esp, 4
        test eax, eax
        je public_554db1
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_554d88
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        jmp public_554dd5
        public_554d88 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+0xC]
        push ecx
        push edx
        push 0x34F
/*FIXUP push offset public_5e0f00 @0x554d95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0f00
        mov eax, 0x100002
/*FIXUP push offset public_5e0f60 @0x554d9f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0f60
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x18
        jmp public_554dd5
        public_554db1 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x354
/*FIXUP push offset public_5e0f00 @0x554dc0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0f00
        mov eax, 0x100002
/*FIXUP push offset public_5e0f30 @0x554dca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0f30
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_554dd5 : nop
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [public_679880]
        cmp esi, eax
        jne public_554d60
        public_554de0 : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_554e15
        public_554de8 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_679884]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_679884], ecx
        jne public_554de8
        public_554e15 : nop
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x554ce0)
    }
}

#undef public_554cf4
#undef public_554d04
#undef public_554d22
#undef public_554d39
#undef public_554d60
#undef public_554d88
#undef public_554db1
#undef public_554dd5
#undef public_554de0
#undef public_554de8
#undef public_554e15
