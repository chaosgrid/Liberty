#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec5e20);
CLANG_FORWARD_PROC_SYMBOL(public_6ec76e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec7704 _public_6ec7704
#define public_6ec7722 _public_6ec7722
#define public_6ec772d _public_6ec772d
#define public_6ec7736 _public_6ec7736
#define public_6ec7741 _public_6ec7741
#define public_6ec775d _public_6ec775d
#define public_6ec7774 _public_6ec7774
#define public_6ec7781 _public_6ec7781
#define public_6ec778c _public_6ec778c
#define public_6ec778f _public_6ec778f
#define public_6ec77a7 _public_6ec77a7
#define public_6ec77b2 _public_6ec77b2
#define public_6ec77b5 _public_6ec77b5
#define public_6ec77ca _public_6ec77ca
#define public_6ec77d5 _public_6ec77d5
#define public_6ec77e0 _public_6ec77e0
#define public_6ec77e3 _public_6ec77e3
#define public_6ec77f7 _public_6ec77f7
#define public_6ec7803 _public_6ec7803
#define public_6ec780f _public_6ec780f
#define public_6ec7812 _public_6ec7812
#define public_6ec7830 _public_6ec7830
#define public_6ec786f _public_6ec786f
#define public_6ec7882 _public_6ec7882
#define public_6ec788d _public_6ec788d
#define public_6ec7890 _public_6ec7890
#define public_6ec789b _public_6ec789b
#define public_6ec78ae _public_6ec78ae
#define public_6ec78d5 _public_6ec78d5
#define public_6ec78ef _public_6ec78ef
#define public_6ec7915 _public_6ec7915
#define public_6ec7928 _public_6ec7928
#define public_6ec7935 _public_6ec7935
#define public_6ec7937 _public_6ec7937
#define public_6ec7942 _public_6ec7942
#define public_6ec7959 _public_6ec7959
#define public_6ec7971 _public_6ec7971
#define public_6ec797e _public_6ec797e
#define public_6ec7980 _public_6ec7980
#define public_6ec798c _public_6ec798c
#define public_6ec79b6 _public_6ec79b6
#define public_6ec79ce _public_6ec79ce
#define public_6ec79de _public_6ec79de
#define public_6ec79e8 _public_6ec79e8
#define public_6ec7a0b _public_6ec7a0b
#define public_6ec7a1e _public_6ec7a1e
#define public_6ec7a29 _public_6ec7a29
#define public_6ec7a2c _public_6ec7a2c
#define public_6ec7a36 _public_6ec7a36
#define public_6ec7a5f _public_6ec7a5f
#define public_6ec7a72 _public_6ec7a72
#define public_6ec7a7f _public_6ec7a7f
#define public_6ec7a81 _public_6ec7a81
#define public_6ec7a84 _public_6ec7a84
#define public_6ec7a8b _public_6ec7a8b
#define public_6ec7a8e _public_6ec7a8e
#define public_6ec7aa2 _public_6ec7aa2

PROC_DECLARE(0x6ec76e0, internal_6ec76e0, public_6ec76e0);
extern "C" NAKED register_t __cdecl internal_6ec76e0()
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
        call public_6ec5e20
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6ec7722
        mov eax, dword ptr ds : [esi+8]
        public_6ec7704 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6ec77a7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6ec77b5
        public_6ec7722 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6ec772d
        mov eax, edx
        jmp public_6ec7704
        public_6ec772d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6ec7741
        public_6ec7736 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6ec7736
        public_6ec7741 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ec7704
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ec775d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6ec7774
        public_6ec775d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6ec7774 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6ec7781
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ec778f
        public_6ec7781 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6ec778c
        mov dword ptr ds : [edx], ecx
        jmp public_6ec778f
        public_6ec778c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ec778f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6ec7812
        public_6ec77a7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6ec77b2
        mov dword ptr ds : [ecx], eax
        jmp public_6ec77b5
        public_6ec77b2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6ec77b5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6ec77e3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ec77ca
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ec77e0
        public_6ec77ca : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6ec77e0
        public_6ec77d5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6ec77d5
        public_6ec77e0 : nop
        mov dword ptr ss : [ebp], edx
        public_6ec77e3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6ec7812
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ec77f7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ec780f
        public_6ec77f7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6ec780f
        public_6ec7803 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6ec7803
        public_6ec780f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6ec7812 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ss : [ebp+0x14]
        mov bl, 1
        cmp cl, bl
        jne public_6ec7a8e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6ec7a8b
        nop 
        public_6ec7830 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_6ec7a8b
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6ec78ef
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6ec789b
        mov byte ptr ds : [ecx+0x14], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ec786f
        mov dword ptr ds : [esi+4], ecx
        public_6ec786f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec7882
        mov dword ptr ds : [esi+4], edx
        jmp public_6ec7890
        public_6ec7882 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ec788d
        mov dword ptr ds : [esi], edx
        jmp public_6ec7890
        public_6ec788d : nop
        mov dword ptr ds : [esi+8], edx
        public_6ec7890 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ec789b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6ec78ae
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_6ec7959
        public_6ec78ae : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6ec798c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ec78d5
        mov dword ptr ds : [esi+4], ecx
        public_6ec78d5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec7971
        mov dword ptr ds : [esi+4], edx
        jmp public_6ec7980
        public_6ec78ef : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6ec7942
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ec7915
        mov dword ptr ds : [esi+4], ecx
        public_6ec7915 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec7928
        mov dword ptr ds : [esi+4], edx
        jmp public_6ec7937
        public_6ec7928 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ec7935
        mov dword ptr ds : [esi+8], edx
        jmp public_6ec7937
        public_6ec7935 : nop
        mov dword ptr ds : [esi], edx
        public_6ec7937 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6ec7942 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6ec79e8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6ec79e8
        public_6ec7959 : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ec7830
        jmp public_6ec7a8b
        public_6ec7971 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ec797e
        mov dword ptr ds : [esi+8], edx
        jmp public_6ec7980
        public_6ec797e : nop
        mov dword ptr ds : [esi], edx
        public_6ec7980 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ec798c : nop
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
        je public_6ec79b6
        mov dword ptr ds : [esi+4], ecx
        public_6ec79b6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec79ce
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ec7a84
        public_6ec79ce : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ec79de
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ec7a84
        public_6ec79de : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ec7a84
        public_6ec79e8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6ec7a36
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ec7a0b
        mov dword ptr ds : [esi+4], ecx
        public_6ec7a0b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec7a1e
        mov dword ptr ds : [esi+4], edx
        jmp public_6ec7a2c
        public_6ec7a1e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ec7a29
        mov dword ptr ds : [esi], edx
        jmp public_6ec7a2c
        public_6ec7a29 : nop
        mov dword ptr ds : [esi+8], edx
        public_6ec7a2c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6ec7a36 : nop
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
        je public_6ec7a5f
        mov dword ptr ds : [esi+4], ecx
        public_6ec7a5f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec7a72
        mov dword ptr ds : [esi+4], edx
        jmp public_6ec7a81
        public_6ec7a72 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ec7a7f
        mov dword ptr ds : [esi+8], edx
        jmp public_6ec7a81
        public_6ec7a7f : nop
        mov dword ptr ds : [esi], edx
        public_6ec7a81 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ec7a84 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], edx
        public_6ec7a8b : nop
        mov byte ptr ds : [eax+0x14], bl
        public_6ec7a8e : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_6ec7aa2
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp+0x10], 0
        public_6ec7aa2 : nop
        push ebp
        call public_6ed0c50
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
        UNREACHABLE_TRAP(0x6ec76e0)
    }
}

#undef public_6ec7704
#undef public_6ec7722
#undef public_6ec772d
#undef public_6ec7736
#undef public_6ec7741
#undef public_6ec775d
#undef public_6ec7774
#undef public_6ec7781
#undef public_6ec778c
#undef public_6ec778f
#undef public_6ec77a7
#undef public_6ec77b2
#undef public_6ec77b5
#undef public_6ec77ca
#undef public_6ec77d5
#undef public_6ec77e0
#undef public_6ec77e3
#undef public_6ec77f7
#undef public_6ec7803
#undef public_6ec780f
#undef public_6ec7812
#undef public_6ec7830
#undef public_6ec786f
#undef public_6ec7882
#undef public_6ec788d
#undef public_6ec7890
#undef public_6ec789b
#undef public_6ec78ae
#undef public_6ec78d5
#undef public_6ec78ef
#undef public_6ec7915
#undef public_6ec7928
#undef public_6ec7935
#undef public_6ec7937
#undef public_6ec7942
#undef public_6ec7959
#undef public_6ec7971
#undef public_6ec797e
#undef public_6ec7980
#undef public_6ec798c
#undef public_6ec79b6
#undef public_6ec79ce
#undef public_6ec79de
#undef public_6ec79e8
#undef public_6ec7a0b
#undef public_6ec7a1e
#undef public_6ec7a29
#undef public_6ec7a2c
#undef public_6ec7a36
#undef public_6ec7a5f
#undef public_6ec7a72
#undef public_6ec7a7f
#undef public_6ec7a81
#undef public_6ec7a84
#undef public_6ec7a8b
#undef public_6ec7a8e
#undef public_6ec7aa2
