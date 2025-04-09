#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401160);
CLANG_FORWARD_PROC_SYMBOL(public_41b030);
CLANG_FORWARD_PROC_SYMBOL(public_42e080);
CLANG_FORWARD_PROC_SYMBOL(public_42e1d0);

#define public_42e09c _public_42e09c
#define public_42e0a4 _public_42e0a4
#define public_42e0af _public_42e0af
#define public_42e0b7 _public_42e0b7
#define public_42e0c0 _public_42e0c0
#define public_42e0e4 _public_42e0e4
#define public_42e0f0 _public_42e0f0
#define public_42e0fe _public_42e0fe
#define public_42e109 _public_42e109
#define public_42e130 _public_42e130
#define public_42e154 _public_42e154

PROC_DECLARE(0x42e080, internal_42e080, public_42e080);
extern "C" NAKED register_t __cdecl internal_42e080()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        xor bl, bl
        test eax, eax
        jg public_42e154
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        jne public_42e09c
        xor ecx, ecx
        jmp public_42e0a4
        public_42e09c : nop
        mov ecx, dword ptr ds : [esi+0x30]
        sub ecx, eax
        sar ecx, 2
        public_42e0a4 : nop
        mov edx, dword ptr ds : [esi+0x10]
        test edx, edx
        jne public_42e0af
        xor eax, eax
        jmp public_42e0b7
        public_42e0af : nop
        mov eax, dword ptr ds : [esi+0x14]
        sub eax, edx
        sar eax, 2
        public_42e0b7 : nop
        cmp ecx, eax
        je public_42e109
        push edi
        xor edi, edi
        mov edi, edi
        public_42e0c0 : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        test ecx, ecx
        je public_42e0e4
        mov eax, dword ptr ds : [esi+0x30]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_42e0e4
        mov eax, ecx
        lea ecx, ds:[eax+edi*4]
        push ecx
        call public_41b030
        add esp, 4
        inc edi
        jmp public_42e0c0
        public_42e0e4 : nop
        mov edx, dword ptr ds : [esi+0x30]
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, edx
        cmp eax, edx
        je public_42e0fe
        public_42e0f0 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_42e0f0
        public_42e0fe : nop
        mov dword ptr ds : [esi+0x30], ecx
        mov ecx, esi
        call public_42e1d0
        pop edi
        public_42e109 : nop
        mov edx, dword ptr ds : [esi+8]
        cmp byte ptr ds : [edx], 0
        lea eax, ds:[esi+8]
        je public_42e130
        push eax
        call public_401160
        add esp, 4
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x24], eax
        je public_42e154
        inc dword ptr ds : [esi+0x20]
        pop esi
        mov al, 1
        pop ebx
        ret 
        lea ecx, ds:[ecx]
/*FIXUP public_42e130 : nop
        push offset public_5ca998 @0x42e130*/
  FIXUP public_42e130 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca998
        push 0x13A
/*FIXUP push offset public_5ca8c8 @0x42e13a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca8c8
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x42e144*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_42e154 : nop
        inc dword ptr ds : [esi+0x20]
        pop esi
        mov al, bl
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x42e080)
    }
}

#undef public_42e09c
#undef public_42e0a4
#undef public_42e0af
#undef public_42e0b7
#undef public_42e0c0
#undef public_42e0e4
#undef public_42e0f0
#undef public_42e0fe
#undef public_42e109
#undef public_42e130
#undef public_42e154
