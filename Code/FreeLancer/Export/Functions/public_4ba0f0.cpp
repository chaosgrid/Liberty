#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4ba0f0);
CLANG_FORWARD_PROC_SYMBOL(public_4ba860);
CLANG_FORWARD_PROC_SYMBOL(public_4bd4b0);
CLANG_FORWARD_PROC_SYMBOL(public_4bd620);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4ba135 _public_4ba135
#define public_4ba140 _public_4ba140
#define public_4ba196 _public_4ba196
#define public_4ba1a0 _public_4ba1a0
#define public_4ba1b4 _public_4ba1b4
#define public_4ba20b _public_4ba20b
#define public_4ba234 _public_4ba234
#define public_4ba250 _public_4ba250
#define public_4ba262 _public_4ba262
#define public_4ba271 _public_4ba271
#define public_4ba280 _public_4ba280
#define public_4ba298 _public_4ba298

PROC_DECLARE(0x4ba0f0, internal_4ba0f0, public_4ba0f0);
extern "C" NAKED register_t __cdecl internal_4ba0f0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        call dword ptr ds : [public_5c60d0]
        test al, al
        mov ebx, dword ptr ds : [public_5c641c]
        je public_4ba135
        mov eax, dword ptr ds : [public_6119f8]
        lea ecx, ds:[eax+eax]
        push ecx
/*FIXUP push offset public_66fc60 @0x4ba10d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0
        push 0
        call ebx
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x10
        push eax
        mov eax, dword ptr ds : [public_673344]
/*FIXUP push offset public_66fc60 @0x4ba129*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push eax
        call dword ptr ds : [edx+0x130]
        public_4ba135 : nop
        mov eax, dword ptr ds : [public_672334]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_4ba1a0
        public_4ba140 : nop
        mov ecx, dword ptr ds : [public_6119f8]
        push 1
        push ecx
        lea edx, ds:[edi+8]
/*FIXUP push offset public_66fc60 @0x4ba14c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push edx
        call public_4ba860
        add esp, 0x10
        cmp word ptr ds : [public_66fc60], 0x2A
        je public_4ba196
        lea eax, ds:[edi+4]
        mov esi, edi
        mov edi, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+4], edx
        push 0
        lea ecx, ds:[esi+8]
        call public_4bd620
        push esi
        call public_5b7e1d
        mov eax, dword ptr ds : [public_672338]
        add esp, 4
        dec eax
        mov dword ptr ds : [public_672338], eax
        public_4ba196 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [public_672334]
        jne public_4ba140
        public_4ba1a0 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_4ba20b
        mov edi, dword ptr ds : [public_672334]
        cmp edi, dword ptr ds : [edi]
        je public_4ba20b
        public_4ba1b4 : nop
        mov eax, dword ptr ds : [public_6119f8]
        mov esi, dword ptr ds : [edi+4]
        push 1
        push eax
        add esi, 8
/*FIXUP push offset public_66fc60 @0x4ba1c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push esi
        call public_4ba860
        mov ecx, dword ptr ds : [public_6119f8]
        lea edx, ds:[ecx+ecx]
        push edx
/*FIXUP push offset public_66fc60 @0x4ba1d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push esi
        push 1
        call ebx
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x20
        push eax
        mov eax, dword ptr ds : [public_673344]
/*FIXUP push offset public_66fc60 @0x4ba1f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push eax
        call dword ptr ds : [edx+0x130]
        mov ecx, dword ptr ds : [public_672334]
        mov edi, dword ptr ds : [edi+4]
        cmp edi, dword ptr ds : [ecx]
        jne public_4ba1b4
        public_4ba20b : nop
        mov ecx, dword ptr ds : [public_672400]
        test ecx, ecx
        je public_4ba271
        mov eax, dword ptr ds : [public_67232c]
        test eax, eax
        jbe public_4ba271
        mov edx, dword ptr ds : [public_672328]
        mov eax, dword ptr ds : [edx]
        add eax, 8
        je public_4ba234
        cmp dword ptr ds : [eax+4], 0x3D3
        je public_4ba271
        public_4ba234 : nop
        push 0
        push ecx
        call public_59dd00
        mov edi, dword ptr ds : [public_672400]
        add esp, 8
        test edi, edi
        je public_4ba271
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_4ba262
        public_4ba250 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_4ba250
        public_4ba262 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        public_4ba271 : nop
        mov edi, dword ptr ds : [public_672328]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_4ba298
        lea ecx, ds:[ecx]
        public_4ba280 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_672324
        call public_4bd4b0
        cmp esi, edi
        jne public_4ba280
        public_4ba298 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4ba0f0)
    }
}

#undef public_4ba135
#undef public_4ba140
#undef public_4ba196
#undef public_4ba1a0
#undef public_4ba1b4
#undef public_4ba20b
#undef public_4ba234
#undef public_4ba250
#undef public_4ba262
#undef public_4ba271
#undef public_4ba280
#undef public_4ba298
