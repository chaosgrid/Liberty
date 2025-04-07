#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2d490);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d860);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e010);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f2d884 _public_6f2d884
#define public_6f2d8a2 _public_6f2d8a2
#define public_6f2d8ad _public_6f2d8ad
#define public_6f2d8b6 _public_6f2d8b6
#define public_6f2d8c1 _public_6f2d8c1
#define public_6f2d8dd _public_6f2d8dd
#define public_6f2d8f4 _public_6f2d8f4
#define public_6f2d901 _public_6f2d901
#define public_6f2d90c _public_6f2d90c
#define public_6f2d90f _public_6f2d90f
#define public_6f2d927 _public_6f2d927
#define public_6f2d932 _public_6f2d932
#define public_6f2d935 _public_6f2d935
#define public_6f2d94a _public_6f2d94a
#define public_6f2d955 _public_6f2d955
#define public_6f2d960 _public_6f2d960
#define public_6f2d963 _public_6f2d963
#define public_6f2d977 _public_6f2d977
#define public_6f2d983 _public_6f2d983
#define public_6f2d98f _public_6f2d98f
#define public_6f2d992 _public_6f2d992
#define public_6f2d9b0 _public_6f2d9b0
#define public_6f2d9ef _public_6f2d9ef
#define public_6f2da02 _public_6f2da02
#define public_6f2da0d _public_6f2da0d
#define public_6f2da10 _public_6f2da10
#define public_6f2da1b _public_6f2da1b
#define public_6f2da2e _public_6f2da2e
#define public_6f2da55 _public_6f2da55
#define public_6f2da6f _public_6f2da6f
#define public_6f2da95 _public_6f2da95
#define public_6f2daa8 _public_6f2daa8
#define public_6f2dab5 _public_6f2dab5
#define public_6f2dab7 _public_6f2dab7
#define public_6f2dac2 _public_6f2dac2
#define public_6f2dad9 _public_6f2dad9
#define public_6f2daf1 _public_6f2daf1
#define public_6f2dafe _public_6f2dafe
#define public_6f2db00 _public_6f2db00
#define public_6f2db0c _public_6f2db0c
#define public_6f2db36 _public_6f2db36
#define public_6f2db4e _public_6f2db4e
#define public_6f2db5e _public_6f2db5e
#define public_6f2db68 _public_6f2db68
#define public_6f2db8b _public_6f2db8b
#define public_6f2db9e _public_6f2db9e
#define public_6f2dba9 _public_6f2dba9
#define public_6f2dbac _public_6f2dbac
#define public_6f2dbb6 _public_6f2dbb6
#define public_6f2dbdf _public_6f2dbdf
#define public_6f2dbf2 _public_6f2dbf2
#define public_6f2dbff _public_6f2dbff
#define public_6f2dc01 _public_6f2dc01
#define public_6f2dc04 _public_6f2dc04
#define public_6f2dc07 _public_6f2dc07
#define public_6f2dc0e _public_6f2dc0e

PROC_DECLARE(0x6f2d860, internal_6f2d860, public_6f2d860);
extern "C" NAKED register_t __cdecl internal_6f2d860()
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
        call public_6f2e010
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f2d8a2
        mov eax, dword ptr ds : [esi+8]
        public_6f2d884 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f2d927
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f2d935
        public_6f2d8a2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f2d8ad
        mov eax, edx
        jmp public_6f2d884
        public_6f2d8ad : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6f2d8c1
        public_6f2d8b6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6f2d8b6
        public_6f2d8c1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f2d884
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f2d8dd
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f2d8f4
        public_6f2d8dd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f2d8f4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f2d901
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f2d90f
        public_6f2d901 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f2d90c
        mov dword ptr ds : [edx], ecx
        jmp public_6f2d90f
        public_6f2d90c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f2d90f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x20]
        mov dl, byte ptr ds : [ecx+0x20]
        mov byte ptr ds : [ecx+0x20], bl
        mov byte ptr ds : [esi+0x20], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f2d992
        public_6f2d927 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f2d932
        mov dword ptr ds : [ecx], eax
        jmp public_6f2d935
        public_6f2d932 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f2d935 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f2d963
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f2d94a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f2d960
        public_6f2d94a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6f2d960
        public_6f2d955 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6f2d955
        public_6f2d960 : nop
        mov dword ptr ss : [ebp], edx
        public_6f2d963 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f2d992
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f2d977
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f2d98f
        public_6f2d977 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6f2d98f
        public_6f2d983 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6f2d983
        public_6f2d98f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f2d992 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x20]
        mov bl, 1
        cmp cl, bl
        jne public_6f2dc0e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6f2dc07
        nop 
        public_6f2d9b0 : nop
        cmp byte ptr ds : [eax+0x20], bl
        jne public_6f2dc07
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f2da6f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f2da1b
        mov byte ptr ds : [ecx+0x20], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2d9ef
        mov dword ptr ds : [esi+4], ecx
        public_6f2d9ef : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2da02
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2da10
        public_6f2da02 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f2da0d
        mov dword ptr ds : [esi], edx
        jmp public_6f2da10
        public_6f2da0d : nop
        mov dword ptr ds : [esi+8], edx
        public_6f2da10 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f2da1b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f2da2e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        je public_6f2dad9
        public_6f2da2e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f2db0c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2da55
        mov dword ptr ds : [esi+4], ecx
        public_6f2da55 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2daf1
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2db00
        public_6f2da6f : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f2dac2
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2da95
        mov dword ptr ds : [esi+4], ecx
        public_6f2da95 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2daa8
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2dab7
        public_6f2daa8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f2dab5
        mov dword ptr ds : [esi+8], edx
        jmp public_6f2dab7
        public_6f2dab5 : nop
        mov dword ptr ds : [esi], edx
        public_6f2dab7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f2dac2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f2db68
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f2db68
        public_6f2dad9 : nop
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f2d9b0
        jmp public_6f2dc07
        public_6f2daf1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f2dafe
        mov dword ptr ds : [esi+8], edx
        jmp public_6f2db00
        public_6f2dafe : nop
        mov dword ptr ds : [esi], edx
        public_6f2db00 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f2db0c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x20]
        mov byte ptr ds : [ecx+0x20], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2db36
        mov dword ptr ds : [esi+4], ecx
        public_6f2db36 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2db4e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f2dc04
        public_6f2db4e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f2db5e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f2dc04
        public_6f2db5e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f2dc04
        public_6f2db68 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f2dbb6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2db8b
        mov dword ptr ds : [esi+4], ecx
        public_6f2db8b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2db9e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2dbac
        public_6f2db9e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f2dba9
        mov dword ptr ds : [esi], edx
        jmp public_6f2dbac
        public_6f2dba9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f2dbac : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f2dbb6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x20]
        mov byte ptr ds : [ecx+0x20], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2dbdf
        mov dword ptr ds : [esi+4], ecx
        public_6f2dbdf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2dbf2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2dc01
        public_6f2dbf2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f2dbff
        mov dword ptr ds : [esi+8], edx
        jmp public_6f2dc01
        public_6f2dbff : nop
        mov dword ptr ds : [esi], edx
        public_6f2dc01 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f2dc04 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f2dc07 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x20], bl
        public_6f2dc0e : nop
        lea ecx, ds:[esi+0xC]
        call public_6f2d490
        push esi
        call public_6f57e26
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f2d860)
    }
}

#undef public_6f2d884
#undef public_6f2d8a2
#undef public_6f2d8ad
#undef public_6f2d8b6
#undef public_6f2d8c1
#undef public_6f2d8dd
#undef public_6f2d8f4
#undef public_6f2d901
#undef public_6f2d90c
#undef public_6f2d90f
#undef public_6f2d927
#undef public_6f2d932
#undef public_6f2d935
#undef public_6f2d94a
#undef public_6f2d955
#undef public_6f2d960
#undef public_6f2d963
#undef public_6f2d977
#undef public_6f2d983
#undef public_6f2d98f
#undef public_6f2d992
#undef public_6f2d9b0
#undef public_6f2d9ef
#undef public_6f2da02
#undef public_6f2da0d
#undef public_6f2da10
#undef public_6f2da1b
#undef public_6f2da2e
#undef public_6f2da55
#undef public_6f2da6f
#undef public_6f2da95
#undef public_6f2daa8
#undef public_6f2dab5
#undef public_6f2dab7
#undef public_6f2dac2
#undef public_6f2dad9
#undef public_6f2daf1
#undef public_6f2dafe
#undef public_6f2db00
#undef public_6f2db0c
#undef public_6f2db36
#undef public_6f2db4e
#undef public_6f2db5e
#undef public_6f2db68
#undef public_6f2db8b
#undef public_6f2db9e
#undef public_6f2dba9
#undef public_6f2dbac
#undef public_6f2dbb6
#undef public_6f2dbdf
#undef public_6f2dbf2
#undef public_6f2dbff
#undef public_6f2dc01
#undef public_6f2dc04
#undef public_6f2dc07
#undef public_6f2dc0e
