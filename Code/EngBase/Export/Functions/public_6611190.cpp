#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611190);

#define public_66111b7 _public_66111b7
#define public_66111bd _public_66111bd
#define public_66111dd _public_66111dd
#define public_66111e1 _public_66111e1
#define public_66111e6 _public_66111e6
#define public_66111f4 _public_66111f4
#define public_661120e _public_661120e
#define public_661122a _public_661122a
#define public_661122c _public_661122c
#define public_661124c _public_661124c
#define public_6611250 _public_6611250
#define public_6611255 _public_6611255
#define public_6611272 _public_6611272
#define public_661127d _public_661127d

PROC_DECLARE(0x6611190, internal_6611190, public_6611190);
extern "C" NAKED register_t __cdecl internal_6611190()
{
    __asm
    {
        mov eax, dword ptr ds : [public_662acec]
        sub esp, 8
        lea edx, ss:[esp]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        push ebp
        push edx
        push eax
        call dword ptr ds : [ecx+0x68]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_66111b7
        mov eax, offset public_662ace4
        public_66111b7 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov esi, ebx
        public_66111bd : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_66111e1
        test cl, cl
        je public_66111dd
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_66111e1
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_66111bd
        public_66111dd : nop
        xor eax, eax
        jmp public_66111e6
        public_66111e1 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66111e6 : nop
        test eax, eax
        jne public_66111f4
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_66111f4 : nop
        mov eax, dword ptr ds : [public_662acec]
        push 0xFFFFFFFF
        push 0
        push ebp
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6611272
        public_661120e : nop
        mov eax, dword ptr ds : [public_662acec]
        lea ecx, ss:[esp+0x10]
        push edi
        push ecx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x68]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_661122a
        mov eax, offset public_662ace4
        public_661122a : nop
        mov esi, ebx
        public_661122c : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6611250
        test cl, cl
        je public_661124c
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6611250
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_661122c
        public_661124c : nop
        xor eax, eax
        jmp public_6611255
        public_6611250 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6611255 : nop
        test eax, eax
        je public_661127d
        mov eax, dword ptr ds : [public_662acec]
        push edi
        push 0
        push ebp
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jne public_661120e
        public_6611272 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 8
        ret 
        public_661127d : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6611190)
    }
}

#undef public_66111b7
#undef public_66111bd
#undef public_66111dd
#undef public_66111e1
#undef public_66111e6
#undef public_66111f4
#undef public_661120e
#undef public_661122a
#undef public_661122c
#undef public_661124c
#undef public_6611250
#undef public_6611255
#undef public_6611272
#undef public_661127d
