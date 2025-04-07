#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ba2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4ba5a0);
CLANG_FORWARD_PROC_SYMBOL(public_4ba860);
CLANG_FORWARD_PROC_SYMBOL(public_4bd4b0);
CLANG_FORWARD_PROC_SYMBOL(public_4bd5a0);
CLANG_FORWARD_PROC_SYMBOL(public_4bd5d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4ba2df _public_4ba2df
#define public_4ba2f2 _public_4ba2f2
#define public_4ba322 _public_4ba322
#define public_4ba324 _public_4ba324
#define public_4ba3e5 _public_4ba3e5
#define public_4ba424 _public_4ba424

PROC_DECLARE(0x4ba2a0, internal_4ba2a0, public_4ba2a0);
extern "C" NAKED register_t __cdecl internal_4ba2a0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        push ebx
        push esi
        je public_4ba424
        mov eax, dword ptr ds : [public_672338]
        test eax, eax
        mov eax, dword ptr ds : [public_672334]
        jbe public_4ba2df
        mov ecx, dword ptr ds : [eax]
        cmp dword ptr ds : [ecx+0xC], 0x549C
        jne public_4ba2df
        mov eax, ecx
        push eax
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, offset public_672330
        call public_4bd4b0
        mov eax, dword ptr ds : [public_672334]
        public_4ba2df : nop
        mov ecx, dword ptr ds : [public_672338]
        xor ebx, ebx
        test ecx, ecx
        push edi
        jbe public_4ba324
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_4ba324
        public_4ba2f2 : nop
        mov eax, dword ptr ds : [public_6119f8]
        push 1
        push eax
        lea edi, ds:[esi+8]
/*FIXUP push offset public_66dc60 @0x4ba2fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push edi
        call public_4ba860
        mov eax, dword ptr ds : [public_672334]
        add esp, 0x10
        cmp word ptr ds : [public_66dc60], 0x2A
        jne public_4ba322
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_4ba2f2
        jmp public_4ba324
        public_4ba322 : nop
        mov ebx, edi
        public_4ba324 : nop
        mov esi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        push esi
        mov ecx, offset public_672330
        call public_4bd5a0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_4bd5d0
        mov eax, dword ptr ds : [public_672338]
        mov edx, dword ptr ds : [public_672334]
        inc eax
        mov dword ptr ds : [public_672338], eax
        mov esi, dword ptr ds : [edx]
        add esi, 8
        push esi
        call public_4ba5a0
        add esp, 0xC
        test ebx, ebx
        pop edi
        je public_4ba3e5
        mov eax, dword ptr ds : [public_6119f8]
        push 1
        push eax
/*FIXUP push offset public_66fc60 @0x4ba377*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push esi
        call public_4ba860
        mov ecx, dword ptr ds : [public_6119f8]
        push 1
        push ecx
/*FIXUP push offset public_66dc60 @0x4ba38b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push ebx
        call public_4ba860
/*FIXUP push offset public_66dc60 @0x4ba396*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x4ba39b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c71d4]
        add esp, 0x28
        test eax, eax
        jne public_4ba3e5
        mov edx, dword ptr ds : [public_672334]
        mov esi, dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call dword ptr ds : [public_5c6098]
        push esi
        call public_5b7e1d
        mov eax, dword ptr ds : [public_672338]
        add esp, 4
        dec eax
        pop esi
        mov dword ptr ds : [public_672338], eax
        pop ebx
        pop ecx
        ret 
        public_4ba3e5 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_4ba424
        mov ecx, dword ptr ds : [public_6119f8]
        lea edx, ds:[ecx+ecx]
        push edx
/*FIXUP push offset public_66fc60 @0x4ba3f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push esi
        push 1
        call dword ptr ds : [public_5c641c]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x10
        push eax
        mov eax, dword ptr ds : [public_673344]
/*FIXUP push offset public_66fc60 @0x4ba418*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push eax
        call dword ptr ds : [edx+0x130]
        public_4ba424 : nop
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4ba2a0)
    }
}

#undef public_4ba2df
#undef public_4ba2f2
#undef public_4ba322
#undef public_4ba324
#undef public_4ba3e5
#undef public_4ba424
