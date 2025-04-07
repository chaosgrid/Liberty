#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed16a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed3150);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ed1709 _public_6ed1709
#define public_6ed171d _public_6ed171d
#define public_6ed1723 _public_6ed1723
#define public_6ed1731 _public_6ed1731
#define public_6ed1772 _public_6ed1772
#define public_6ed178b _public_6ed178b
#define public_6ed179e _public_6ed179e
#define public_6ed17a9 _public_6ed17a9
#define public_6ed17ac _public_6ed17ac
#define public_6ed17b1 _public_6ed17b1
#define public_6ed17da _public_6ed17da
#define public_6ed17f3 _public_6ed17f3
#define public_6ed1806 _public_6ed1806
#define public_6ed1810 _public_6ed1810
#define public_6ed1833 _public_6ed1833
#define public_6ed184b _public_6ed184b
#define public_6ed185e _public_6ed185e
#define public_6ed186b _public_6ed186b
#define public_6ed186d _public_6ed186d
#define public_6ed1873 _public_6ed1873
#define public_6ed189c _public_6ed189c
#define public_6ed18af _public_6ed18af
#define public_6ed18ba _public_6ed18ba
#define public_6ed18bd _public_6ed18bd
#define public_6ed18bf _public_6ed18bf
#define public_6ed18c2 _public_6ed18c2
#define public_6ed18ce _public_6ed18ce

PROC_DECLARE(0x6ed16a0, internal_6ed16a0, public_6ed16a0);
extern "C" NAKED register_t __cdecl internal_6ed16a0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x60
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x5C], 0
        mov byte ptr ds : [ebx+0x5D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6ed3150
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6ed1709
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6ed1709
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6ed1709
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6ed1723
        mov dword ptr ds : [eax+8], ebx
        jmp public_6ed1723
        public_6ed1709 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6ed171d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6ed1723
        public_6ed171d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6ed1723
        mov dword ptr ds : [eax], ebx
        public_6ed1723 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6ed18ce
        public_6ed1731 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x5C]
        test dl, dl
        jne public_6ed18ce
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6ed1810
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x5C], 0
        jne public_6ed1772
        mov byte ptr ds : [ecx+0x5C], 1
        mov byte ptr ds : [edx+0x5C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x5C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6ed18c2
        public_6ed1772 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6ed17b1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ed178b
        mov dword ptr ds : [edx+4], eax
        public_6ed178b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ed179e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ed17ac
        public_6ed179e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6ed17a9
        mov dword ptr ds : [edx], ecx
        jmp public_6ed17ac
        public_6ed17a9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ed17ac : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ed17b1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x5C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x5C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6ed17da
        mov dword ptr ds : [edi+4], ecx
        public_6ed17da : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ed17f3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ed18bf
        public_6ed17f3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ed1806
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ed18bf
        public_6ed1806 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ed18bf
        public_6ed1810 : nop
        cmp byte ptr ds : [edx+0x5C], 0
        jne public_6ed1833
        mov byte ptr ds : [ecx+0x5C], 1
        mov byte ptr ds : [edx+0x5C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x5C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6ed18c2
        public_6ed1833 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6ed1873
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ed184b
        mov dword ptr ds : [edx+4], eax
        public_6ed184b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ed185e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ed186d
        public_6ed185e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6ed186b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ed186d
        public_6ed186b : nop
        mov dword ptr ds : [edx], ecx
        public_6ed186d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ed1873 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x5C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x5C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6ed189c
        mov dword ptr ds : [edi+4], ecx
        public_6ed189c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ed18af
        mov dword ptr ds : [edi+4], edx
        jmp public_6ed18bd
        public_6ed18af : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6ed18ba
        mov dword ptr ds : [edi], edx
        jmp public_6ed18bd
        public_6ed18ba : nop
        mov dword ptr ds : [edi+8], edx
        public_6ed18bd : nop
        mov dword ptr ds : [edx], ecx
        public_6ed18bf : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ed18c2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ed1731
        public_6ed18ce : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x5C], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ed16a0)
    }
}

#undef public_6ed1709
#undef public_6ed171d
#undef public_6ed1723
#undef public_6ed1731
#undef public_6ed1772
#undef public_6ed178b
#undef public_6ed179e
#undef public_6ed17a9
#undef public_6ed17ac
#undef public_6ed17b1
#undef public_6ed17da
#undef public_6ed17f3
#undef public_6ed1806
#undef public_6ed1810
#undef public_6ed1833
#undef public_6ed184b
#undef public_6ed185e
#undef public_6ed186b
#undef public_6ed186d
#undef public_6ed1873
#undef public_6ed189c
#undef public_6ed18af
#undef public_6ed18ba
#undef public_6ed18bd
#undef public_6ed18bf
#undef public_6ed18c2
#undef public_6ed18ce
