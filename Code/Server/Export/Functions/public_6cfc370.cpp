#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7770);
CLANG_FORWARD_PROC_SYMBOL(public_6cf79e0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfc370);
CLANG_FORWARD_PROC_SYMBOL(public_6cfc580);
CLANG_FORWARD_PROC_SYMBOL(public_6cfdef0);
CLANG_FORWARD_PROC_SYMBOL(public_6d06720);
CLANG_FORWARD_PROC_SYMBOL(public_6d16080);

#define public_6cfc390 _public_6cfc390
#define public_6cfc3a3 _public_6cfc3a3
#define public_6cfc3a6 _public_6cfc3a6
#define public_6cfc3aa _public_6cfc3aa
#define public_6cfc409 _public_6cfc409
#define public_6cfc421 _public_6cfc421
#define public_6cfc42b _public_6cfc42b
#define public_6cfc42f _public_6cfc42f
#define public_6cfc440 _public_6cfc440
#define public_6cfc47b _public_6cfc47b
#define public_6cfc48a _public_6cfc48a
#define public_6cfc4ab _public_6cfc4ab
#define public_6cfc4cc _public_6cfc4cc
#define public_6cfc4da _public_6cfc4da
#define public_6cfc4f9 _public_6cfc4f9
#define public_6cfc505 _public_6cfc505
#define public_6cfc521 _public_6cfc521
#define public_6cfc53c _public_6cfc53c
#define public_6cfc543 _public_6cfc543
#define public_6cfc566 _public_6cfc566

PROC_DECLARE(0x6cfc370, internal_6cfc370, public_6cfc370);
extern "C" NAKED register_t __cdecl internal_6cfc370()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_6cfc3aa
        lea esp, ss:[esp]
        public_6cfc390 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6cfc3a3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6cfc3a6
        public_6cfc3a3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6cfc3a6 : nop
        cmp ebp, edx
        jne public_6cfc390
        public_6cfc3aa : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6cfc521
        push 0
        push esi
        mov ecx, edi
        call public_6cfc580
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6d06720
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6cfc409
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6cfc409
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6cfc409
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6cfc42f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6cfc42f
        public_6cfc409 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6cfc421
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6cfc42b
        public_6cfc421 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6cfc42b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6cfc42b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6cfc42f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6cfc505
        lea ecx, ds:[ecx]
        public_6cfc440 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x10]
        test cl, cl
        jne public_6cfc505
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6cfc4ab
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_6cfc47b
        mov byte ptr ds : [eax+0x10], 1
        mov byte ptr ds : [ecx+0x10], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6cfc4f9
        public_6cfc47b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6cfc48a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6d16080
        public_6cfc48a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x10], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x10], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6cfdef0
        jmp public_6cfc4f9
        public_6cfc4ab : nop
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_6cfc4cc
        mov byte ptr ds : [eax+0x10], 1
        mov byte ptr ds : [ecx+0x10], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x10], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6cfc4f9
        public_6cfc4cc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6cfc4da
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6cfdef0
        public_6cfc4da : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x10], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6d16080
        public_6cfc4f9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6cfc440
        public_6cfc505 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x10], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6cfc521 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6cfc53c
        cmp esi, dword ptr ds : [ecx]
        je public_6cfc543
        lea ecx, ss:[esp+0x10]
        call public_6cf79e0
        mov edx, dword ptr ss : [esp+0x10]
        public_6cfc53c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6cfc566
        public_6cfc543 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6cf7770
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6cfc566 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6cfc370)
    }
}

#undef public_6cfc390
#undef public_6cfc3a3
#undef public_6cfc3a6
#undef public_6cfc3aa
#undef public_6cfc409
#undef public_6cfc421
#undef public_6cfc42b
#undef public_6cfc42f
#undef public_6cfc440
#undef public_6cfc47b
#undef public_6cfc48a
#undef public_6cfc4ab
#undef public_6cfc4cc
#undef public_6cfc4da
#undef public_6cfc4f9
#undef public_6cfc505
#undef public_6cfc521
#undef public_6cfc53c
#undef public_6cfc543
#undef public_6cfc566
