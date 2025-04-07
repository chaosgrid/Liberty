#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f433e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46900);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f43449 _public_6f43449
#define public_6f4345d _public_6f4345d
#define public_6f43463 _public_6f43463
#define public_6f43471 _public_6f43471
#define public_6f434b2 _public_6f434b2
#define public_6f434cb _public_6f434cb
#define public_6f434de _public_6f434de
#define public_6f434e9 _public_6f434e9
#define public_6f434ec _public_6f434ec
#define public_6f434f1 _public_6f434f1
#define public_6f4351a _public_6f4351a
#define public_6f43533 _public_6f43533
#define public_6f43546 _public_6f43546
#define public_6f43550 _public_6f43550
#define public_6f43573 _public_6f43573
#define public_6f4358b _public_6f4358b
#define public_6f4359e _public_6f4359e
#define public_6f435ab _public_6f435ab
#define public_6f435ad _public_6f435ad
#define public_6f435b3 _public_6f435b3
#define public_6f435dc _public_6f435dc
#define public_6f435ef _public_6f435ef
#define public_6f435fa _public_6f435fa
#define public_6f435fd _public_6f435fd
#define public_6f435ff _public_6f435ff
#define public_6f43602 _public_6f43602
#define public_6f4360e _public_6f4360e

PROC_DECLARE(0x6f433e0, internal_6f433e0, public_6f433e0);
extern "C" NAKED register_t __cdecl internal_6f433e0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x2C
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x28], 0
        mov byte ptr ds : [ebx+0x29], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f46900
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f43449
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f43449
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f43449
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f43463
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f43463
        public_6f43449 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f4345d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f43463
        public_6f4345d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f43463
        mov dword ptr ds : [eax], ebx
        public_6f43463 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f4360e
        public_6f43471 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6f4360e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f43550
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x28], 0
        jne public_6f434b2
        mov byte ptr ds : [ecx+0x28], 1
        mov byte ptr ds : [edx+0x28], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f43602
        public_6f434b2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f434f1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f434cb
        mov dword ptr ds : [edx+4], eax
        public_6f434cb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f434de
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f434ec
        public_6f434de : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f434e9
        mov dword ptr ds : [edx], ecx
        jmp public_6f434ec
        public_6f434e9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f434ec : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f434f1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f4351a
        mov dword ptr ds : [edi+4], ecx
        public_6f4351a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f43533
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f435ff
        public_6f43533 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f43546
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f435ff
        public_6f43546 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f435ff
        public_6f43550 : nop
        cmp byte ptr ds : [edx+0x28], 0
        jne public_6f43573
        mov byte ptr ds : [ecx+0x28], 1
        mov byte ptr ds : [edx+0x28], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x28], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f43602
        public_6f43573 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f435b3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f4358b
        mov dword ptr ds : [edx+4], eax
        public_6f4358b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f4359e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f435ad
        public_6f4359e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f435ab
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f435ad
        public_6f435ab : nop
        mov dword ptr ds : [edx], ecx
        public_6f435ad : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f435b3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f435dc
        mov dword ptr ds : [edi+4], ecx
        public_6f435dc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f435ef
        mov dword ptr ds : [edi+4], edx
        jmp public_6f435fd
        public_6f435ef : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f435fa
        mov dword ptr ds : [edi], edx
        jmp public_6f435fd
        public_6f435fa : nop
        mov dword ptr ds : [edi+8], edx
        public_6f435fd : nop
        mov dword ptr ds : [edx], ecx
        public_6f435ff : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f43602 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f43471
        public_6f4360e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x28], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f433e0)
    }
}

#undef public_6f43449
#undef public_6f4345d
#undef public_6f43463
#undef public_6f43471
#undef public_6f434b2
#undef public_6f434cb
#undef public_6f434de
#undef public_6f434e9
#undef public_6f434ec
#undef public_6f434f1
#undef public_6f4351a
#undef public_6f43533
#undef public_6f43546
#undef public_6f43550
#undef public_6f43573
#undef public_6f4358b
#undef public_6f4359e
#undef public_6f435ab
#undef public_6f435ad
#undef public_6f435b3
#undef public_6f435dc
#undef public_6f435ef
#undef public_6f435fa
#undef public_6f435fd
#undef public_6f435ff
#undef public_6f43602
#undef public_6f4360e
