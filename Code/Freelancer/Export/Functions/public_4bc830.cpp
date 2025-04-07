#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_488970);
CLANG_FORWARD_PROC_SYMBOL(public_4bc830);
CLANG_FORWARD_PROC_SYMBOL(public_564b10);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);
CLANG_FORWARD_PROC_SYMBOL(public_5aa680);
CLANG_FORWARD_PROC_SYMBOL(public_5aaca0);
CLANG_FORWARD_PROC_SYMBOL(public_5b2c70);

#define public_4bc865 _public_4bc865
#define public_4bc86c _public_4bc86c
#define public_4bc872 _public_4bc872
#define public_4bc88e _public_4bc88e
#define public_4bc8a0 _public_4bc8a0
#define public_4bc8c4 _public_4bc8c4
#define public_4bc8e4 _public_4bc8e4
#define public_4bc917 _public_4bc917

PROC_DECLARE(0x4bc830, internal_4bc830, public_4bc830);
extern "C" NAKED register_t __cdecl internal_4bc830()
{
    __asm
    {
        sub esp, 0x200
        mov byte ptr ss : [esp], 0
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_4bc917
        push esi
        push edi
        mov ecx, offset public_67e7b8
        call public_5aa680
        cmp eax, 1
        jne public_4bc8a0
        mov eax, dword ptr ds : [public_67e970]
        xor edi, edi
        test eax, eax
        je public_4bc86c
        public_4bc865 : nop
        mov eax, dword ptr ds : [eax]
        inc edi
        test eax, eax
        jne public_4bc865
        public_4bc86c : nop
        xor esi, esi
        test edi, edi
        jle public_4bc8c4
        public_4bc872 : nop
        push esi
        mov ecx, offset public_67e7b8
        call public_5aaca0
        mov cl, byte ptr ds : [eax+0x201]
        test cl, cl
        jne public_4bc88e
        inc esi
        cmp esi, edi
        jl public_4bc872
        jmp public_4bc8c4
        public_4bc88e : nop
        push eax
        lea ecx, ss:[esp+0xC]
        call dword ptr ds : [public_5c63cc]
        jmp public_4bc8c4
        nop 
        lea esp, ss:[esp]
/*FIXUP public_4bc8a0 : nop
        push offset public_5d22a0 @0x4bc8a0*/
  FIXUP public_4bc8a0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d22a0
        push 0x6D1
/*FIXUP push offset public_5d5a4c @0x4bc8aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5a4c
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x4bc8b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_4bc8c4 : nop
        mov al, byte ptr ss : [esp+8]
        test al, al
        pop edi
        pop esi
        je public_4bc8e4
        lea ecx, ss:[esp]
        push 1
        push ecx
        call public_5b2c70
        add esp, 8
        add esp, 0x200
        ret 
        public_4bc8e4 : nop
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5d5d74 @0x4bc8ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5d74
        push 0x6DB
/*FIXUP push offset public_5d5a4c @0x4bc8f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5a4c
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x4bc8fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [edx]
        push 3
        call public_488970
        add esp, 0x18
        add esp, 0x200
        ret 
        public_4bc917 : nop
        push 4
        call public_564b10
        push 0
        push 0xC5
        call public_5763b0
        add esp, 0xC
        add esp, 0x200
        ret 
        UNREACHABLE_TRAP(0x4bc830)
    }
}

#undef public_4bc865
#undef public_4bc86c
#undef public_4bc872
#undef public_4bc88e
#undef public_4bc8a0
#undef public_4bc8c4
#undef public_4bc8e4
#undef public_4bc917
