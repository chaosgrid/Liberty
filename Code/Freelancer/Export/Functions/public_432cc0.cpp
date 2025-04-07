#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_430990);
CLANG_FORWARD_PROC_SYMBOL(public_432cc0);
CLANG_FORWARD_PROC_SYMBOL(public_433330);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_432ce4 _public_432ce4
#define public_432d02 _public_432d02
#define public_432d0d _public_432d0d
#define public_432d16 _public_432d16
#define public_432d21 _public_432d21
#define public_432d3d _public_432d3d
#define public_432d54 _public_432d54
#define public_432d61 _public_432d61
#define public_432d6c _public_432d6c
#define public_432d6f _public_432d6f
#define public_432d87 _public_432d87
#define public_432d92 _public_432d92
#define public_432d95 _public_432d95
#define public_432daa _public_432daa
#define public_432db5 _public_432db5
#define public_432dc0 _public_432dc0
#define public_432dc3 _public_432dc3
#define public_432dd7 _public_432dd7
#define public_432de3 _public_432de3
#define public_432def _public_432def
#define public_432df2 _public_432df2
#define public_432e10 _public_432e10
#define public_432e4f _public_432e4f
#define public_432e62 _public_432e62
#define public_432e6d _public_432e6d
#define public_432e70 _public_432e70
#define public_432e7b _public_432e7b
#define public_432e8e _public_432e8e
#define public_432eb5 _public_432eb5
#define public_432ecf _public_432ecf
#define public_432ef5 _public_432ef5
#define public_432f08 _public_432f08
#define public_432f15 _public_432f15
#define public_432f17 _public_432f17
#define public_432f22 _public_432f22
#define public_432f39 _public_432f39
#define public_432f51 _public_432f51
#define public_432f5e _public_432f5e
#define public_432f60 _public_432f60
#define public_432f6c _public_432f6c
#define public_432f96 _public_432f96
#define public_432fae _public_432fae
#define public_432fbe _public_432fbe
#define public_432fc8 _public_432fc8
#define public_432feb _public_432feb
#define public_432ffe _public_432ffe
#define public_433009 _public_433009
#define public_43300c _public_43300c
#define public_433016 _public_433016
#define public_43303f _public_43303f
#define public_433052 _public_433052
#define public_43305f _public_43305f
#define public_433061 _public_433061
#define public_433064 _public_433064
#define public_433067 _public_433067
#define public_43306e _public_43306e

PROC_DECLARE(0x432cc0, internal_432cc0, public_432cc0);
extern "C" NAKED register_t __cdecl internal_432cc0()
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
        call public_433330
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_432d02
        mov eax, dword ptr ds : [esi+8]
        public_432ce4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_432d87
        mov dword ptr ds : [ecx+4], eax
        jmp public_432d95
        public_432d02 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_432d0d
        mov eax, edx
        jmp public_432ce4
        public_432d0d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x61]
        test bl, bl
        jne public_432d21
        public_432d16 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x61]
        test bl, bl
        je public_432d16
        public_432d21 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_432ce4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_432d3d
        mov dword ptr ds : [eax+4], ecx
        jmp public_432d54
        public_432d3d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_432d54 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_432d61
        mov dword ptr ds : [edx+4], ecx
        jmp public_432d6f
        public_432d61 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_432d6c
        mov dword ptr ds : [edx], ecx
        jmp public_432d6f
        public_432d6c : nop
        mov dword ptr ds : [edx+8], ecx
        public_432d6f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x60]
        mov dl, byte ptr ds : [ecx+0x60]
        mov byte ptr ds : [ecx+0x60], bl
        mov byte ptr ds : [esi+0x60], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_432df2
        public_432d87 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_432d92
        mov dword ptr ds : [ecx], eax
        jmp public_432d95
        public_432d92 : nop
        mov dword ptr ds : [ecx+8], eax
        public_432d95 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_432dc3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_432daa
        mov edx, dword ptr ds : [esi+4]
        jmp public_432dc0
        public_432daa : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x61]
        test bl, bl
        mov edx, eax
        jne public_432dc0
        public_432db5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x61]
        test bl, bl
        je public_432db5
        public_432dc0 : nop
        mov dword ptr ss : [ebp], edx
        public_432dc3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_432df2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_432dd7
        mov edx, dword ptr ds : [esi+4]
        jmp public_432def
        public_432dd7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x61]
        test bl, bl
        mov edx, eax
        jne public_432def
        public_432de3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x61]
        test bl, bl
        je public_432de3
        public_432def : nop
        mov dword ptr ss : [ebp+8], edx
        public_432df2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x60]
        mov bl, 1
        cmp cl, bl
        jne public_43306e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_433067
        nop 
        public_432e10 : nop
        cmp byte ptr ds : [eax+0x60], bl
        jne public_433067
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_432ecf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x60]
        test dl, dl
        jne public_432e7b
        mov byte ptr ds : [ecx+0x60], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x60], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_432e4f
        mov dword ptr ds : [esi+4], ecx
        public_432e4f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_432e62
        mov dword ptr ds : [esi+4], edx
        jmp public_432e70
        public_432e62 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_432e6d
        mov dword ptr ds : [esi], edx
        jmp public_432e70
        public_432e6d : nop
        mov dword ptr ds : [esi+8], edx
        public_432e70 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_432e7b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x60], bl
        jne public_432e8e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x60], bl
        je public_432f39
        public_432e8e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x60], bl
        jne public_432f6c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x60], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x60], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_432eb5
        mov dword ptr ds : [esi+4], ecx
        public_432eb5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_432f51
        mov dword ptr ds : [esi+4], edx
        jmp public_432f60
        public_432ecf : nop
        mov dl, byte ptr ds : [ecx+0x60]
        test dl, dl
        jne public_432f22
        mov byte ptr ds : [ecx+0x60], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x60], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_432ef5
        mov dword ptr ds : [esi+4], ecx
        public_432ef5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_432f08
        mov dword ptr ds : [esi+4], edx
        jmp public_432f17
        public_432f08 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_432f15
        mov dword ptr ds : [esi+8], edx
        jmp public_432f17
        public_432f15 : nop
        mov dword ptr ds : [esi], edx
        public_432f17 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_432f22 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x60], bl
        jne public_432fc8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x60], bl
        jne public_432fc8
        public_432f39 : nop
        mov byte ptr ds : [ecx+0x60], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_432e10
        jmp public_433067
        public_432f51 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_432f5e
        mov dword ptr ds : [esi+8], edx
        jmp public_432f60
        public_432f5e : nop
        mov dword ptr ds : [esi], edx
        public_432f60 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_432f6c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x60]
        mov byte ptr ds : [ecx+0x60], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x60], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x60], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_432f96
        mov dword ptr ds : [esi+4], ecx
        public_432f96 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_432fae
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_433064
        public_432fae : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_432fbe
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_433064
        public_432fbe : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_433064
        public_432fc8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x60], bl
        jne public_433016
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x60], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x60], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_432feb
        mov dword ptr ds : [esi+4], ecx
        public_432feb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_432ffe
        mov dword ptr ds : [esi+4], edx
        jmp public_43300c
        public_432ffe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_433009
        mov dword ptr ds : [esi], edx
        jmp public_43300c
        public_433009 : nop
        mov dword ptr ds : [esi+8], edx
        public_43300c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_433016 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x60]
        mov byte ptr ds : [ecx+0x60], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x60], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x60], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_43303f
        mov dword ptr ds : [esi+4], ecx
        public_43303f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_433052
        mov dword ptr ds : [esi+4], edx
        jmp public_433061
        public_433052 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_43305f
        mov dword ptr ds : [esi+8], edx
        jmp public_433061
        public_43305f : nop
        mov dword ptr ds : [esi], edx
        public_433061 : nop
        mov dword ptr ds : [edx+8], ecx
        public_433064 : nop
        mov dword ptr ds : [ecx+4], edx
        public_433067 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x60], bl
        public_43306e : nop
        lea ecx, ds:[esi+0xC]
        call public_430990
        push esi
        call public_5b7e1d
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
        UNREACHABLE_TRAP(0x432cc0)
    }
}

#undef public_432ce4
#undef public_432d02
#undef public_432d0d
#undef public_432d16
#undef public_432d21
#undef public_432d3d
#undef public_432d54
#undef public_432d61
#undef public_432d6c
#undef public_432d6f
#undef public_432d87
#undef public_432d92
#undef public_432d95
#undef public_432daa
#undef public_432db5
#undef public_432dc0
#undef public_432dc3
#undef public_432dd7
#undef public_432de3
#undef public_432def
#undef public_432df2
#undef public_432e10
#undef public_432e4f
#undef public_432e62
#undef public_432e6d
#undef public_432e70
#undef public_432e7b
#undef public_432e8e
#undef public_432eb5
#undef public_432ecf
#undef public_432ef5
#undef public_432f08
#undef public_432f15
#undef public_432f17
#undef public_432f22
#undef public_432f39
#undef public_432f51
#undef public_432f5e
#undef public_432f60
#undef public_432f6c
#undef public_432f96
#undef public_432fae
#undef public_432fbe
#undef public_432fc8
#undef public_432feb
#undef public_432ffe
#undef public_433009
#undef public_43300c
#undef public_433016
#undef public_43303f
#undef public_433052
#undef public_43305f
#undef public_433061
#undef public_433064
#undef public_433067
#undef public_43306e
