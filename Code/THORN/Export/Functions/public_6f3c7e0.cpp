#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3c7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cc20);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f3c804 _public_6f3c804
#define public_6f3c822 _public_6f3c822
#define public_6f3c82d _public_6f3c82d
#define public_6f3c836 _public_6f3c836
#define public_6f3c841 _public_6f3c841
#define public_6f3c85d _public_6f3c85d
#define public_6f3c874 _public_6f3c874
#define public_6f3c881 _public_6f3c881
#define public_6f3c88c _public_6f3c88c
#define public_6f3c88f _public_6f3c88f
#define public_6f3c8a7 _public_6f3c8a7
#define public_6f3c8b2 _public_6f3c8b2
#define public_6f3c8b5 _public_6f3c8b5
#define public_6f3c8ca _public_6f3c8ca
#define public_6f3c8d5 _public_6f3c8d5
#define public_6f3c8e0 _public_6f3c8e0
#define public_6f3c8e3 _public_6f3c8e3
#define public_6f3c8f7 _public_6f3c8f7
#define public_6f3c903 _public_6f3c903
#define public_6f3c90f _public_6f3c90f
#define public_6f3c912 _public_6f3c912
#define public_6f3c930 _public_6f3c930
#define public_6f3c96f _public_6f3c96f
#define public_6f3c982 _public_6f3c982
#define public_6f3c98d _public_6f3c98d
#define public_6f3c990 _public_6f3c990
#define public_6f3c99b _public_6f3c99b
#define public_6f3c9ae _public_6f3c9ae
#define public_6f3c9d5 _public_6f3c9d5
#define public_6f3c9ef _public_6f3c9ef
#define public_6f3ca15 _public_6f3ca15
#define public_6f3ca28 _public_6f3ca28
#define public_6f3ca35 _public_6f3ca35
#define public_6f3ca37 _public_6f3ca37
#define public_6f3ca42 _public_6f3ca42
#define public_6f3ca59 _public_6f3ca59
#define public_6f3ca71 _public_6f3ca71
#define public_6f3ca7e _public_6f3ca7e
#define public_6f3ca80 _public_6f3ca80
#define public_6f3ca8c _public_6f3ca8c
#define public_6f3cab6 _public_6f3cab6
#define public_6f3cace _public_6f3cace
#define public_6f3cade _public_6f3cade
#define public_6f3cae8 _public_6f3cae8
#define public_6f3cb0b _public_6f3cb0b
#define public_6f3cb1e _public_6f3cb1e
#define public_6f3cb29 _public_6f3cb29
#define public_6f3cb2c _public_6f3cb2c
#define public_6f3cb36 _public_6f3cb36
#define public_6f3cb5f _public_6f3cb5f
#define public_6f3cb72 _public_6f3cb72
#define public_6f3cb7f _public_6f3cb7f
#define public_6f3cb81 _public_6f3cb81
#define public_6f3cb84 _public_6f3cb84
#define public_6f3cb87 _public_6f3cb87
#define public_6f3cb8a _public_6f3cb8a

PROC_DECLARE(0x6f3c7e0, internal_6f3c7e0, public_6f3c7e0);
extern "C" NAKED register_t __cdecl internal_6f3c7e0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f3cc20
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f3c822
        mov eax, dword ptr ds : [esi+8]
        public_6f3c804 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f3c8a7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f3c8b5
        public_6f3c822 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f3c82d
        mov eax, edx
        jmp public_6f3c804
        public_6f3c82d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6f3c841
        public_6f3c836 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6f3c836
        public_6f3c841 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f3c804
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f3c85d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f3c874
        public_6f3c85d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f3c874 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f3c881
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f3c88f
        public_6f3c881 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f3c88c
        mov dword ptr ds : [edx], ecx
        jmp public_6f3c88f
        public_6f3c88c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f3c88f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f3c912
        public_6f3c8a7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f3c8b2
        mov dword ptr ds : [ecx], eax
        jmp public_6f3c8b5
        public_6f3c8b2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f3c8b5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f3c8e3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f3c8ca
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f3c8e0
        public_6f3c8ca : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6f3c8e0
        public_6f3c8d5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6f3c8d5
        public_6f3c8e0 : nop
        mov dword ptr ss : [ebp], edx
        public_6f3c8e3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f3c912
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f3c8f7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f3c90f
        public_6f3c8f7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6f3c90f
        public_6f3c903 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6f3c903
        public_6f3c90f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f3c912 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x14]
        mov bl, 1
        cmp dl, bl
        jne public_6f3cb8a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f3cb87
        nop 
        public_6f3c930 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_6f3cb87
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f3c9ef
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6f3c99b
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f3c96f
        mov dword ptr ds : [esi+4], ecx
        public_6f3c96f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f3c982
        mov dword ptr ds : [esi+4], edx
        jmp public_6f3c990
        public_6f3c982 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f3c98d
        mov dword ptr ds : [esi], edx
        jmp public_6f3c990
        public_6f3c98d : nop
        mov dword ptr ds : [esi+8], edx
        public_6f3c990 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6f3c99b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6f3c9ae
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_6f3ca59
        public_6f3c9ae : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6f3ca8c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f3c9d5
        mov dword ptr ds : [esi+4], ecx
        public_6f3c9d5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f3ca71
        mov dword ptr ds : [esi+4], edx
        jmp public_6f3ca80
        public_6f3c9ef : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6f3ca42
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f3ca15
        mov dword ptr ds : [esi+4], ecx
        public_6f3ca15 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f3ca28
        mov dword ptr ds : [esi+4], edx
        jmp public_6f3ca37
        public_6f3ca28 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f3ca35
        mov dword ptr ds : [esi+8], edx
        jmp public_6f3ca37
        public_6f3ca35 : nop
        mov dword ptr ds : [esi], edx
        public_6f3ca37 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f3ca42 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6f3cae8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6f3cae8
        public_6f3ca59 : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f3c930
        jmp public_6f3cb87
        public_6f3ca71 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f3ca7e
        mov dword ptr ds : [esi+8], edx
        jmp public_6f3ca80
        public_6f3ca7e : nop
        mov dword ptr ds : [esi], edx
        public_6f3ca80 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f3ca8c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f3cab6
        mov dword ptr ds : [esi+4], ecx
        public_6f3cab6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f3cace
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f3cb84
        public_6f3cace : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f3cade
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f3cb84
        public_6f3cade : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f3cb84
        public_6f3cae8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6f3cb36
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f3cb0b
        mov dword ptr ds : [esi+4], ecx
        public_6f3cb0b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f3cb1e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f3cb2c
        public_6f3cb1e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f3cb29
        mov dword ptr ds : [esi], edx
        jmp public_6f3cb2c
        public_6f3cb29 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f3cb2c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f3cb36 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f3cb5f
        mov dword ptr ds : [esi+4], ecx
        public_6f3cb5f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f3cb72
        mov dword ptr ds : [esi+4], edx
        jmp public_6f3cb81
        public_6f3cb72 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f3cb7f
        mov dword ptr ds : [esi+8], edx
        jmp public_6f3cb81
        public_6f3cb7f : nop
        mov dword ptr ds : [esi], edx
        public_6f3cb81 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f3cb84 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f3cb87 : nop
        mov byte ptr ds : [eax+0x14], bl
        public_6f3cb8a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6f57e26
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f3c7e0)
    }
}

#undef public_6f3c804
#undef public_6f3c822
#undef public_6f3c82d
#undef public_6f3c836
#undef public_6f3c841
#undef public_6f3c85d
#undef public_6f3c874
#undef public_6f3c881
#undef public_6f3c88c
#undef public_6f3c88f
#undef public_6f3c8a7
#undef public_6f3c8b2
#undef public_6f3c8b5
#undef public_6f3c8ca
#undef public_6f3c8d5
#undef public_6f3c8e0
#undef public_6f3c8e3
#undef public_6f3c8f7
#undef public_6f3c903
#undef public_6f3c90f
#undef public_6f3c912
#undef public_6f3c930
#undef public_6f3c96f
#undef public_6f3c982
#undef public_6f3c98d
#undef public_6f3c990
#undef public_6f3c99b
#undef public_6f3c9ae
#undef public_6f3c9d5
#undef public_6f3c9ef
#undef public_6f3ca15
#undef public_6f3ca28
#undef public_6f3ca35
#undef public_6f3ca37
#undef public_6f3ca42
#undef public_6f3ca59
#undef public_6f3ca71
#undef public_6f3ca7e
#undef public_6f3ca80
#undef public_6f3ca8c
#undef public_6f3cab6
#undef public_6f3cace
#undef public_6f3cade
#undef public_6f3cae8
#undef public_6f3cb0b
#undef public_6f3cb1e
#undef public_6f3cb29
#undef public_6f3cb2c
#undef public_6f3cb36
#undef public_6f3cb5f
#undef public_6f3cb72
#undef public_6f3cb7f
#undef public_6f3cb81
#undef public_6f3cb84
#undef public_6f3cb87
#undef public_6f3cb8a
