#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ceb330);
CLANG_FORWARD_PROC_SYMBOL(public_6d0b800);

#define public_6ceb390 _public_6ceb390
#define public_6ceb3b4 _public_6ceb3b4
#define public_6ceb3b6 _public_6ceb3b6
#define public_6ceb3d4 _public_6ceb3d4
#define public_6ceb3f5 _public_6ceb3f5
#define public_6ceb415 _public_6ceb415
#define public_6ceb42e _public_6ceb42e
#define public_6ceb44a _public_6ceb44a
#define public_6ceb469 _public_6ceb469
#define public_6ceb46d _public_6ceb46d
#define public_6ceb47e _public_6ceb47e
#define public_6ceb49f _public_6ceb49f
#define public_6ceb4a1 _public_6ceb4a1
#define public_6ceb4ba _public_6ceb4ba
#define public_6ceb4c4 _public_6ceb4c4
#define public_6ceb4ee _public_6ceb4ee
#define public_6ceb514 _public_6ceb514
#define public_6ceb516 _public_6ceb516
#define public_6ceb530 _public_6ceb530

PROC_DECLARE(0x6ceb330, internal_6ceb330, public_6ceb330);
extern "C" NAKED register_t __cdecl internal_6ceb330()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0x18C]
        test al, al
        mov ebx, dword ptr ss : [esp+0x14]
        je public_6ceb390
        mov eax, dword ptr ds : [ebx+0x10]
        push eax
        mov edi, 0x100001
        call dword ptr ds : [public_6d642d8]
        mov ecx, dword ptr ds : [esi+0x10]
        add esp, 4
        push eax
        call dword ptr ds : [public_6d6419c]
        mov ecx, eax
        add ecx, 8
        call dword ptr ds : [public_6d642d4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        push 0x9D7
/*FIXUP push offset public_6d654b0 @0x6ceb380*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d654b0
/*FIXUP push offset public_6d65618 @0x6ceb385*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65618
        push edi
        call dword ptr ds : [eax]
        add esp, 0x1C
        public_6ceb390 : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x190]
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6ceb3b4
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ceb3b6
        public_6ceb3b4 : nop
        xor eax, eax
        public_6ceb3b6 : nop
        mov ecx, eax
        call dword ptr ds : [public_6d641f8]
        fcomp qword ptr ds : [public_6d65538]
        fnstsw ax
        test ah, 0x41
        jne public_6ceb3d4
        call dword ptr ds : [public_6d64228]
        fstp qword ptr ds : [esi+0x20]
        public_6ceb3d4 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6ceb4c4
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x18], ebp
        je public_6ceb47e
        public_6ceb3f5 : nop
        mov ax, word ptr ss : [ebp+8]
        mov edx, dword ptr ds : [public_6d6401c]
        cmp ax, word ptr ds : [edx]
        lea edi, ss:[ebp+8]
        jne public_6ceb415
        mov eax, dword ptr ds : [esi]
        push edi
        push ebx
        mov ecx, esi
        call dword ptr ds : [eax+0x234]
        jmp public_6ceb46d
        public_6ceb415 : nop
        mov ecx, dword ptr ds : [public_6d642c4]
        cmp ax, word ptr ds : [ecx]
        jne public_6ceb42e
        mov edx, dword ptr ds : [esi]
        push edi
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0x23C]
        jmp public_6ceb46d
        public_6ceb42e : nop
        push eax
        call dword ptr ds : [public_6d64268]
        add esp, 4
        test al, al
        je public_6ceb44a
        mov eax, dword ptr ds : [esi]
        push edi
        push ebx
        mov ecx, esi
        call dword ptr ds : [eax+0x240]
        jmp public_6ceb469
        public_6ceb44a : nop
        xor ecx, ecx
        mov cx, word ptr ds : [edi]
        push ecx
        call dword ptr ds : [public_6d64260]
        add esp, 4
        test al, al
        je public_6ceb469
        mov edx, dword ptr ds : [esi]
        push edi
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0x238]
        public_6ceb469 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        public_6ceb46d : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], ebp
        jne public_6ceb3f5
        public_6ceb47e : nop
        call dword ptr ds : [public_6d641c0]
        test al, al
        pop ebp
        jne public_6ceb4ba
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        je public_6ceb49f
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        je public_6ceb4a1
        public_6ceb49f : nop
        xor edi, edi
        public_6ceb4a1 : nop
        mov edx, dword ptr ds : [edi]
        push 0
        push ebx
        mov ecx, edi
        call dword ptr ds : [edx+0xFC]
        lea ecx, ds:[edi+0xE4]
        call dword ptr ds : [public_6d642d0]
        public_6ceb4ba : nop
        mov ecx, dword ptr ds : [esi+0x28]
        push ebx
        push esi
        call public_6d0b800
        public_6ceb4c4 : nop
        mov al, byte ptr ds : [ebx+0xC]
        test al, al
        je public_6ceb530
        mov eax, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [eax+0x1B8]
        test al, al
        jne public_6ceb530
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x1EC]
        test al, al
        je public_6ceb4ee
        cmp dword ptr ds : [ebx+0x10], 0x10
        jl public_6ceb530
        public_6ceb4ee : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x160]
        test al, al
        jne public_6ceb530
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6ceb514
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ceb516
        public_6ceb514 : nop
        xor eax, eax
        public_6ceb516 : nop
        mov cl, byte ptr ds : [eax+0x15C]
        test cl, cl
        jne public_6ceb530
        mov eax, dword ptr ds : [ebx+0x14]
        mov edx, dword ptr ds : [esi]
        push eax
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x158]
        public_6ceb530 : nop
        mov edx, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+0x190]
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6ceb330)
    }
}

#undef public_6ceb390
#undef public_6ceb3b4
#undef public_6ceb3b6
#undef public_6ceb3d4
#undef public_6ceb3f5
#undef public_6ceb415
#undef public_6ceb42e
#undef public_6ceb44a
#undef public_6ceb469
#undef public_6ceb46d
#undef public_6ceb47e
#undef public_6ceb49f
#undef public_6ceb4a1
#undef public_6ceb4ba
#undef public_6ceb4c4
#undef public_6ceb4ee
#undef public_6ceb514
#undef public_6ceb516
#undef public_6ceb530
