#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f42490);
CLANG_FORWARD_PROC_SYMBOL(public_6f468e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f424f9 _public_6f424f9
#define public_6f4250d _public_6f4250d
#define public_6f42513 _public_6f42513
#define public_6f42521 _public_6f42521
#define public_6f42562 _public_6f42562
#define public_6f4257b _public_6f4257b
#define public_6f4258e _public_6f4258e
#define public_6f42599 _public_6f42599
#define public_6f4259c _public_6f4259c
#define public_6f425a1 _public_6f425a1
#define public_6f425ca _public_6f425ca
#define public_6f425e3 _public_6f425e3
#define public_6f425f6 _public_6f425f6
#define public_6f42600 _public_6f42600
#define public_6f42623 _public_6f42623
#define public_6f4263b _public_6f4263b
#define public_6f4264e _public_6f4264e
#define public_6f4265b _public_6f4265b
#define public_6f4265d _public_6f4265d
#define public_6f42663 _public_6f42663
#define public_6f4268c _public_6f4268c
#define public_6f4269f _public_6f4269f
#define public_6f426aa _public_6f426aa
#define public_6f426ad _public_6f426ad
#define public_6f426af _public_6f426af
#define public_6f426b2 _public_6f426b2
#define public_6f426be _public_6f426be

PROC_DECLARE(0x6f42490, internal_6f42490, public_6f42490);
extern "C" NAKED register_t __cdecl internal_6f42490()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x30
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x2C], 0
        mov byte ptr ds : [ebx+0x2D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f468e0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f424f9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f424f9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f424f9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f42513
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f42513
        public_6f424f9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f4250d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f42513
        public_6f4250d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f42513
        mov dword ptr ds : [eax], ebx
        public_6f42513 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f426be
        public_6f42521 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6f426be
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f42600
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x2C], 0
        jne public_6f42562
        mov byte ptr ds : [ecx+0x2C], 1
        mov byte ptr ds : [edx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f426b2
        public_6f42562 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f425a1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f4257b
        mov dword ptr ds : [edx+4], eax
        public_6f4257b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f4258e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f4259c
        public_6f4258e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f42599
        mov dword ptr ds : [edx], ecx
        jmp public_6f4259c
        public_6f42599 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f4259c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f425a1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f425ca
        mov dword ptr ds : [edi+4], ecx
        public_6f425ca : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f425e3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f426af
        public_6f425e3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f425f6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f426af
        public_6f425f6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f426af
        public_6f42600 : nop
        cmp byte ptr ds : [edx+0x2C], 0
        jne public_6f42623
        mov byte ptr ds : [ecx+0x2C], 1
        mov byte ptr ds : [edx+0x2C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x2C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f426b2
        public_6f42623 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f42663
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f4263b
        mov dword ptr ds : [edx+4], eax
        public_6f4263b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f4264e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f4265d
        public_6f4264e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f4265b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4265d
        public_6f4265b : nop
        mov dword ptr ds : [edx], ecx
        public_6f4265d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f42663 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f4268c
        mov dword ptr ds : [edi+4], ecx
        public_6f4268c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f4269f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f426ad
        public_6f4269f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f426aa
        mov dword ptr ds : [edi], edx
        jmp public_6f426ad
        public_6f426aa : nop
        mov dword ptr ds : [edi+8], edx
        public_6f426ad : nop
        mov dword ptr ds : [edx], ecx
        public_6f426af : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f426b2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f42521
        public_6f426be : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x2C], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f42490)
    }
}

#undef public_6f424f9
#undef public_6f4250d
#undef public_6f42513
#undef public_6f42521
#undef public_6f42562
#undef public_6f4257b
#undef public_6f4258e
#undef public_6f42599
#undef public_6f4259c
#undef public_6f425a1
#undef public_6f425ca
#undef public_6f425e3
#undef public_6f425f6
#undef public_6f42600
#undef public_6f42623
#undef public_6f4263b
#undef public_6f4264e
#undef public_6f4265b
#undef public_6f4265d
#undef public_6f42663
#undef public_6f4268c
#undef public_6f4269f
#undef public_6f426aa
#undef public_6f426ad
#undef public_6f426af
#undef public_6f426b2
#undef public_6f426be
