#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ba860);
CLANG_FORWARD_PROC_SYMBOL(public_4bb6b0);

#define public_4bb6e8 _public_4bb6e8
#define public_4bb728 _public_4bb728
#define public_4bb737 _public_4bb737
#define public_4bb73d _public_4bb73d
#define public_4bb75a _public_4bb75a

PROC_DECLARE(0x4bb6b0, internal_4bb6b0, public_4bb6b0);
extern "C" NAKED register_t __cdecl internal_4bb6b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67232c]
        test eax, eax
        push edi
        mov edi, ecx
        je public_4bb75a
        mov eax, dword ptr ds : [public_672328]
        push esi
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0xC]
        add esi, 8
        cmp eax, 0x762
        je public_4bb6e8
        push esi
        mov ecx, offset public_67230c
        call dword ptr ds : [public_5c628c]
        mov byte ptr ds : [public_672404], 1
        public_4bb6e8 : nop
        mov ecx, dword ptr ds : [public_6119f8]
        push 0
        push ecx
/*FIXUP push offset public_66dc60 @0x4bb6f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push esi
        call public_4ba860
        add esp, 0x10
/*FIXUP push offset public_66dc60 @0x4bb6ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        call dword ptr ds : [public_616420]
/*FIXUP push offset public_66dc60 @0x4bb70a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        test eax, eax
        mov edx, offset public_66dc60
        mov ecx, offset public_66fc60
        jle public_4bb73d
        mov esi, eax
        public_4bb728 : nop
        mov ax, word ptr ds : [edx]
        cmp ax, 0xA
        je public_4bb737
        mov word ptr ds : [ecx], ax
        add ecx, 2
        public_4bb737 : nop
        add edx, 2
        dec esi
        jne public_4bb728
        public_4bb73d : nop
        push 0
        mov word ptr ds : [ecx], 0
        mov ecx, dword ptr ds : [edi+0x33C]
        mov edx, dword ptr ds : [ecx]
/*FIXUP push offset public_66fc60 @0x4bb74c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        pop esi
        public_4bb75a : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x4bb6b0)
    }
}

#undef public_4bb6e8
#undef public_4bb728
#undef public_4bb737
#undef public_4bb73d
#undef public_4bb75a
