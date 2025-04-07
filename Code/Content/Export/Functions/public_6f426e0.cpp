#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f426e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f69d00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f42704 _public_6f42704
#define public_6f42722 _public_6f42722
#define public_6f4272d _public_6f4272d
#define public_6f42736 _public_6f42736
#define public_6f42741 _public_6f42741
#define public_6f4275d _public_6f4275d
#define public_6f42774 _public_6f42774
#define public_6f42781 _public_6f42781
#define public_6f4278c _public_6f4278c
#define public_6f4278f _public_6f4278f
#define public_6f427a7 _public_6f427a7
#define public_6f427b2 _public_6f427b2
#define public_6f427b5 _public_6f427b5
#define public_6f427ca _public_6f427ca
#define public_6f427d5 _public_6f427d5
#define public_6f427e0 _public_6f427e0
#define public_6f427e3 _public_6f427e3
#define public_6f427f7 _public_6f427f7
#define public_6f42803 _public_6f42803
#define public_6f4280f _public_6f4280f
#define public_6f42812 _public_6f42812
#define public_6f42830 _public_6f42830
#define public_6f4286f _public_6f4286f
#define public_6f42882 _public_6f42882
#define public_6f4288d _public_6f4288d
#define public_6f42890 _public_6f42890
#define public_6f4289b _public_6f4289b
#define public_6f428ae _public_6f428ae
#define public_6f428d5 _public_6f428d5
#define public_6f428ef _public_6f428ef
#define public_6f42915 _public_6f42915
#define public_6f42928 _public_6f42928
#define public_6f42935 _public_6f42935
#define public_6f42937 _public_6f42937
#define public_6f42942 _public_6f42942
#define public_6f42959 _public_6f42959
#define public_6f42971 _public_6f42971
#define public_6f4297e _public_6f4297e
#define public_6f42980 _public_6f42980
#define public_6f4298c _public_6f4298c
#define public_6f429b6 _public_6f429b6
#define public_6f429ce _public_6f429ce
#define public_6f429de _public_6f429de
#define public_6f429e8 _public_6f429e8
#define public_6f42a0b _public_6f42a0b
#define public_6f42a1e _public_6f42a1e
#define public_6f42a29 _public_6f42a29
#define public_6f42a2c _public_6f42a2c
#define public_6f42a36 _public_6f42a36
#define public_6f42a5f _public_6f42a5f
#define public_6f42a72 _public_6f42a72
#define public_6f42a7f _public_6f42a7f
#define public_6f42a81 _public_6f42a81
#define public_6f42a84 _public_6f42a84
#define public_6f42a87 _public_6f42a87
#define public_6f42a8a _public_6f42a8a

PROC_DECLARE(0x6f426e0, internal_6f426e0, public_6f426e0);
extern "C" NAKED register_t __cdecl internal_6f426e0()
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
        call public_6f69d00
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f42722
        mov eax, dword ptr ds : [esi+8]
        public_6f42704 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f427a7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f427b5
        public_6f42722 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f4272d
        mov eax, edx
        jmp public_6f42704
        public_6f4272d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_6f42741
        public_6f42736 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_6f42736
        public_6f42741 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f42704
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4275d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f42774
        public_6f4275d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f42774 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f42781
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f4278f
        public_6f42781 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f4278c
        mov dword ptr ds : [edx], ecx
        jmp public_6f4278f
        public_6f4278c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f4278f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x1C]
        mov dl, byte ptr ds : [ecx+0x1C]
        mov byte ptr ds : [ecx+0x1C], bl
        mov byte ptr ds : [esi+0x1C], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f42812
        public_6f427a7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f427b2
        mov dword ptr ds : [ecx], eax
        jmp public_6f427b5
        public_6f427b2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f427b5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f427e3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f427ca
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f427e0
        public_6f427ca : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        mov edx, eax
        jne public_6f427e0
        public_6f427d5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        je public_6f427d5
        public_6f427e0 : nop
        mov dword ptr ss : [ebp], edx
        public_6f427e3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f42812
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f427f7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f4280f
        public_6f427f7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        mov edx, eax
        jne public_6f4280f
        public_6f42803 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        je public_6f42803
        public_6f4280f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f42812 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x1C]
        mov bl, 1
        cmp dl, bl
        jne public_6f42a8a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f42a87
        nop 
        public_6f42830 : nop
        cmp byte ptr ds : [eax+0x1C], bl
        jne public_6f42a87
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f428ef
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f4289b
        mov byte ptr ds : [ecx+0x1C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4286f
        mov dword ptr ds : [esi+4], ecx
        public_6f4286f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f42882
        mov dword ptr ds : [esi+4], edx
        jmp public_6f42890
        public_6f42882 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f4288d
        mov dword ptr ds : [esi], edx
        jmp public_6f42890
        public_6f4288d : nop
        mov dword ptr ds : [esi+8], edx
        public_6f42890 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6f4289b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6f428ae
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        je public_6f42959
        public_6f428ae : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6f4298c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x1C], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f428d5
        mov dword ptr ds : [esi+4], ecx
        public_6f428d5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f42971
        mov dword ptr ds : [esi+4], edx
        jmp public_6f42980
        public_6f428ef : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f42942
        mov byte ptr ds : [ecx+0x1C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f42915
        mov dword ptr ds : [esi+4], ecx
        public_6f42915 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f42928
        mov dword ptr ds : [esi+4], edx
        jmp public_6f42937
        public_6f42928 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f42935
        mov dword ptr ds : [esi+8], edx
        jmp public_6f42937
        public_6f42935 : nop
        mov dword ptr ds : [esi], edx
        public_6f42937 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f42942 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6f429e8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6f429e8
        public_6f42959 : nop
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f42830
        jmp public_6f42a87
        public_6f42971 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4297e
        mov dword ptr ds : [esi+8], edx
        jmp public_6f42980
        public_6f4297e : nop
        mov dword ptr ds : [esi], edx
        public_6f42980 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f4298c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x1C]
        mov byte ptr ds : [ecx+0x1C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x1C], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x1C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f429b6
        mov dword ptr ds : [esi+4], ecx
        public_6f429b6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f429ce
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f42a84
        public_6f429ce : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f429de
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f42a84
        public_6f429de : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f42a84
        public_6f429e8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6f42a36
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x1C], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f42a0b
        mov dword ptr ds : [esi+4], ecx
        public_6f42a0b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f42a1e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f42a2c
        public_6f42a1e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f42a29
        mov dword ptr ds : [esi], edx
        jmp public_6f42a2c
        public_6f42a29 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f42a2c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f42a36 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x1C]
        mov byte ptr ds : [ecx+0x1C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x1C], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x1C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f42a5f
        mov dword ptr ds : [esi+4], ecx
        public_6f42a5f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f42a72
        mov dword ptr ds : [esi+4], edx
        jmp public_6f42a81
        public_6f42a72 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f42a7f
        mov dword ptr ds : [esi+8], edx
        jmp public_6f42a81
        public_6f42a7f : nop
        mov dword ptr ds : [esi], edx
        public_6f42a81 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f42a84 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f42a87 : nop
        mov byte ptr ds : [eax+0x1C], bl
        public_6f42a8a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6fa8fe0
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
        UNREACHABLE_TRAP(0x6f426e0)
    }
}

#undef public_6f42704
#undef public_6f42722
#undef public_6f4272d
#undef public_6f42736
#undef public_6f42741
#undef public_6f4275d
#undef public_6f42774
#undef public_6f42781
#undef public_6f4278c
#undef public_6f4278f
#undef public_6f427a7
#undef public_6f427b2
#undef public_6f427b5
#undef public_6f427ca
#undef public_6f427d5
#undef public_6f427e0
#undef public_6f427e3
#undef public_6f427f7
#undef public_6f42803
#undef public_6f4280f
#undef public_6f42812
#undef public_6f42830
#undef public_6f4286f
#undef public_6f42882
#undef public_6f4288d
#undef public_6f42890
#undef public_6f4289b
#undef public_6f428ae
#undef public_6f428d5
#undef public_6f428ef
#undef public_6f42915
#undef public_6f42928
#undef public_6f42935
#undef public_6f42937
#undef public_6f42942
#undef public_6f42959
#undef public_6f42971
#undef public_6f4297e
#undef public_6f42980
#undef public_6f4298c
#undef public_6f429b6
#undef public_6f429ce
#undef public_6f429de
#undef public_6f429e8
#undef public_6f42a0b
#undef public_6f42a1e
#undef public_6f42a29
#undef public_6f42a2c
#undef public_6f42a36
#undef public_6f42a5f
#undef public_6f42a72
#undef public_6f42a7f
#undef public_6f42a81
#undef public_6f42a84
#undef public_6f42a87
#undef public_6f42a8a
