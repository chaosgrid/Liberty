#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6319390);
CLANG_FORWARD_PROC_SYMBOL(public_631a1d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_63193f9 _public_63193f9
#define public_631940d _public_631940d
#define public_6319413 _public_6319413
#define public_6319421 _public_6319421
#define public_6319462 _public_6319462
#define public_631947b _public_631947b
#define public_631948e _public_631948e
#define public_6319499 _public_6319499
#define public_631949c _public_631949c
#define public_63194a1 _public_63194a1
#define public_63194ca _public_63194ca
#define public_63194e3 _public_63194e3
#define public_63194f6 _public_63194f6
#define public_6319500 _public_6319500
#define public_6319523 _public_6319523
#define public_631953b _public_631953b
#define public_631954e _public_631954e
#define public_631955b _public_631955b
#define public_631955d _public_631955d
#define public_6319563 _public_6319563
#define public_631958c _public_631958c
#define public_631959f _public_631959f
#define public_63195aa _public_63195aa
#define public_63195ad _public_63195ad
#define public_63195af _public_63195af
#define public_63195b2 _public_63195b2
#define public_63195be _public_63195be

PROC_DECLARE(0x6319390, internal_6319390, public_6319390);
extern "C" NAKED register_t __cdecl internal_6319390()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x44
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x40], 0
        mov byte ptr ds : [ebx+0x41], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_631a1d0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_63193f9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_63193f9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_63193f9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6319413
        mov dword ptr ds : [eax+8], ebx
        jmp public_6319413
        public_63193f9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_631940d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6319413
        public_631940d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6319413
        mov dword ptr ds : [eax], ebx
        public_6319413 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_63195be
        public_6319421 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x40]
        test dl, dl
        jne public_63195be
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6319500
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x40], 0
        jne public_6319462
        mov byte ptr ds : [ecx+0x40], 1
        mov byte ptr ds : [edx+0x40], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_63195b2
        public_6319462 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_63194a1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_631947b
        mov dword ptr ds : [edx+4], eax
        public_631947b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_631948e
        mov dword ptr ds : [edx+4], ecx
        jmp public_631949c
        public_631948e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6319499
        mov dword ptr ds : [edx], ecx
        jmp public_631949c
        public_6319499 : nop
        mov dword ptr ds : [edx+8], ecx
        public_631949c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_63194a1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x40], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_63194ca
        mov dword ptr ds : [edi+4], ecx
        public_63194ca : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_63194e3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_63195af
        public_63194e3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_63194f6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_63195af
        public_63194f6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_63195af
        public_6319500 : nop
        cmp byte ptr ds : [edx+0x40], 0
        jne public_6319523
        mov byte ptr ds : [ecx+0x40], 1
        mov byte ptr ds : [edx+0x40], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x40], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_63195b2
        public_6319523 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6319563
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_631953b
        mov dword ptr ds : [edx+4], eax
        public_631953b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_631954e
        mov dword ptr ds : [edx+4], ecx
        jmp public_631955d
        public_631954e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_631955b
        mov dword ptr ds : [edx+8], ecx
        jmp public_631955d
        public_631955b : nop
        mov dword ptr ds : [edx], ecx
        public_631955d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6319563 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x40], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_631958c
        mov dword ptr ds : [edi+4], ecx
        public_631958c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_631959f
        mov dword ptr ds : [edi+4], edx
        jmp public_63195ad
        public_631959f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_63195aa
        mov dword ptr ds : [edi], edx
        jmp public_63195ad
        public_63195aa : nop
        mov dword ptr ds : [edi+8], edx
        public_63195ad : nop
        mov dword ptr ds : [edx], ecx
        public_63195af : nop
        mov dword ptr ds : [ecx+4], edx
        public_63195b2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6319421
        public_63195be : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x40], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6319390)
    }
}

#undef public_63193f9
#undef public_631940d
#undef public_6319413
#undef public_6319421
#undef public_6319462
#undef public_631947b
#undef public_631948e
#undef public_6319499
#undef public_631949c
#undef public_63194a1
#undef public_63194ca
#undef public_63194e3
#undef public_63194f6
#undef public_6319500
#undef public_6319523
#undef public_631953b
#undef public_631954e
#undef public_631955b
#undef public_631955d
#undef public_6319563
#undef public_631958c
#undef public_631959f
#undef public_63195aa
#undef public_63195ad
#undef public_63195af
#undef public_63195b2
#undef public_63195be
