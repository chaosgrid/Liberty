#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_42d6f0);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_488970);
CLANG_FORWARD_PROC_SYMBOL(public_4889e0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7210);
CLANG_FORWARD_PROC_SYMBOL(public_564b10);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_4a7251 _public_4a7251
#define public_4a7263 _public_4a7263
#define public_4a727d _public_4a727d
#define public_4a72b1 _public_4a72b1
#define public_4a72c3 _public_4a72c3
#define public_4a72dd _public_4a72dd
#define public_4a7318 _public_4a7318
#define public_4a732a _public_4a732a
#define public_4a7355 _public_4a7355
#define public_4a7390 _public_4a7390
#define public_4a73a2 _public_4a73a2
#define public_4a73cd _public_4a73cd
#define public_4a7410 _public_4a7410
#define public_4a7422 _public_4a7422
#define public_4a7455 _public_4a7455
#define public_4a746a _public_4a746a
#define public_4a74a5 _public_4a74a5
#define public_4a74f0 _public_4a74f0
#define public_4a7502 _public_4a7502
#define public_4a751c _public_4a751c
#define public_4a7553 _public_4a7553

PROC_DECLARE(0x4a7210, internal_4a7210, public_4a7210);
extern "C" NAKED register_t __cdecl internal_4a7210()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x804
        test eax, eax
        push esi
        push edi
        mov esi, ecx
        jne public_4a727d
        mov al, byte ptr ds : [esi+0x330]
        push 0
        mov byte ptr ss : [esp+0xC], al
        call public_42d6f0
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        call public_41dda0
        mov edx, dword ptr ds : [esi]
        add esp, 8
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_4a7263
        public_4a7251 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4a7251
        public_4a7263 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        pop edi
        pop esi
        add esp, 0x804
        ret 4
        public_4a727d : nop
        cmp eax, 1
        jne public_4a72dd
        mov al, byte ptr ds : [esi+0x330]
        push 0
        mov byte ptr ss : [esp+0xC], al
        call public_42d6f0
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        call public_41dda0
        mov edx, dword ptr ds : [esi]
        add esp, 8
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_4a72c3
        public_4a72b1 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4a72b1
        public_4a72c3 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        pop edi
        pop esi
        add esp, 0x804
        ret 4
        public_4a72dd : nop
        cmp eax, 2
        jne public_4a7355
        push 1
        call public_42d6f0
        mov al, byte ptr ds : [esi+0x330]
        push 0
        mov byte ptr ss : [esp+0x10], al
        call public_42d6f0
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call public_41dda0
        mov edx, dword ptr ds : [esi]
        add esp, 0xC
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_4a732a
        public_4a7318 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4a7318
        public_4a732a : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        push 2
        call public_488970
        push 0
        call public_42d6f0
        add esp, 8
        pop edi
        pop esi
        add esp, 0x804
        ret 4
        public_4a7355 : nop
        cmp eax, 3
        jne public_4a73cd
        push 1
        call public_42d6f0
        mov al, byte ptr ds : [esi+0x330]
        push 0
        mov byte ptr ss : [esp+0x10], al
        call public_42d6f0
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call public_41dda0
        mov edx, dword ptr ds : [esi]
        add esp, 0xC
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_4a73a2
        public_4a7390 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4a7390
        public_4a73a2 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        push 1
        call public_488970
        push 0
        call public_42d6f0
        add esp, 8
        pop edi
        pop esi
        add esp, 0x804
        ret 4
        public_4a73cd : nop
        cmp eax, 4
        jne public_4a746a
        push 1
        call public_42d6f0
        mov al, byte ptr ds : [esi+0x330]
        push 0
        mov byte ptr ss : [esp+0x10], al
        call public_42d6f0
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call public_41dda0
        mov edx, dword ptr ds : [esi]
        add esp, 0xC
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_4a7422
        lea esp, ss:[esp]
        public_4a7410 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4a7410
        public_4a7422 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        push 0
        push 0
/*FIXUP push offset public_5d4764 @0x4a7435*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4764
/*FIXUP push offset public_5d4764 @0x4a743a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4764
        call public_59db20
        add esp, 0x10
        test eax, eax
        je public_4a7455
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x80]
        public_4a7455 : nop
        push 0
        call public_42d6f0
        add esp, 4
        pop edi
        pop esi
        add esp, 0x804
        ret 4
        public_4a746a : nop
        cmp eax, 5
        jne public_4a74a5
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x400
        lea eax, ss:[esp+0x10]
        push eax
        push 0x75B
        push ecx
        call public_4347e0
        push 0
        lea edx, ss:[esp+0x20]
        push edx
        push esi
        call public_4889e0
        add esp, 0x1C
        pop edi
        pop esi
        add esp, 0x804
        ret 4
        public_4a74a5 : nop
        cmp eax, 6
        jne public_4a751c
        push 2
        call public_564b10
        push 0
        push 0xC5
        call public_5763b0
        mov al, byte ptr ds : [esi+0x330]
        push 0
        mov byte ptr ss : [esp+0x18], al
        call public_42d6f0
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        call public_41dda0
        mov edx, dword ptr ds : [esi]
        add esp, 0x14
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_4a7502
        lea esp, ss:[esp]
        public_4a74f0 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4a74f0
        public_4a7502 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        pop edi
        pop esi
        add esp, 0x804
        ret 4
        public_4a751c : nop
        cmp eax, 7
        jne public_4a7553
        push 3
        call public_564b10
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x400
        lea eax, ss:[esp+0x14]
        push eax
        push 0x76B
        push ecx
        call public_4347e0
        push 0
        lea edx, ss:[esp+0x24]
        push edx
        push esi
        call public_4889e0
        add esp, 0x20
        public_4a7553 : nop
        pop edi
        pop esi
        add esp, 0x804
        ret 4
        UNREACHABLE_TRAP(0x4a7210)
    }
}

#undef public_4a7251
#undef public_4a7263
#undef public_4a727d
#undef public_4a72b1
#undef public_4a72c3
#undef public_4a72dd
#undef public_4a7318
#undef public_4a732a
#undef public_4a7355
#undef public_4a7390
#undef public_4a73a2
#undef public_4a73cd
#undef public_4a7410
#undef public_4a7422
#undef public_4a7455
#undef public_4a746a
#undef public_4a74a5
#undef public_4a74f0
#undef public_4a7502
#undef public_4a751c
#undef public_4a7553
