#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f18d20);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fbc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f69d00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f1fbe4 _public_6f1fbe4
#define public_6f1fc02 _public_6f1fc02
#define public_6f1fc0d _public_6f1fc0d
#define public_6f1fc16 _public_6f1fc16
#define public_6f1fc21 _public_6f1fc21
#define public_6f1fc3d _public_6f1fc3d
#define public_6f1fc54 _public_6f1fc54
#define public_6f1fc61 _public_6f1fc61
#define public_6f1fc6c _public_6f1fc6c
#define public_6f1fc6f _public_6f1fc6f
#define public_6f1fc87 _public_6f1fc87
#define public_6f1fc92 _public_6f1fc92
#define public_6f1fc95 _public_6f1fc95
#define public_6f1fcaa _public_6f1fcaa
#define public_6f1fcb5 _public_6f1fcb5
#define public_6f1fcc0 _public_6f1fcc0
#define public_6f1fcc3 _public_6f1fcc3
#define public_6f1fcd7 _public_6f1fcd7
#define public_6f1fce3 _public_6f1fce3
#define public_6f1fcef _public_6f1fcef
#define public_6f1fcf2 _public_6f1fcf2
#define public_6f1fd10 _public_6f1fd10
#define public_6f1fd4f _public_6f1fd4f
#define public_6f1fd62 _public_6f1fd62
#define public_6f1fd6d _public_6f1fd6d
#define public_6f1fd70 _public_6f1fd70
#define public_6f1fd7b _public_6f1fd7b
#define public_6f1fd8e _public_6f1fd8e
#define public_6f1fdb5 _public_6f1fdb5
#define public_6f1fdcf _public_6f1fdcf
#define public_6f1fdf5 _public_6f1fdf5
#define public_6f1fe08 _public_6f1fe08
#define public_6f1fe15 _public_6f1fe15
#define public_6f1fe17 _public_6f1fe17
#define public_6f1fe22 _public_6f1fe22
#define public_6f1fe39 _public_6f1fe39
#define public_6f1fe51 _public_6f1fe51
#define public_6f1fe5e _public_6f1fe5e
#define public_6f1fe60 _public_6f1fe60
#define public_6f1fe6c _public_6f1fe6c
#define public_6f1fe96 _public_6f1fe96
#define public_6f1feae _public_6f1feae
#define public_6f1febe _public_6f1febe
#define public_6f1fec8 _public_6f1fec8
#define public_6f1feeb _public_6f1feeb
#define public_6f1fefe _public_6f1fefe
#define public_6f1ff09 _public_6f1ff09
#define public_6f1ff0c _public_6f1ff0c
#define public_6f1ff16 _public_6f1ff16
#define public_6f1ff3f _public_6f1ff3f
#define public_6f1ff52 _public_6f1ff52
#define public_6f1ff5f _public_6f1ff5f
#define public_6f1ff61 _public_6f1ff61
#define public_6f1ff64 _public_6f1ff64
#define public_6f1ff67 _public_6f1ff67
#define public_6f1ff6e _public_6f1ff6e

PROC_DECLARE(0x6f1fbc0, internal_6f1fbc0, public_6f1fbc0);
extern "C" NAKED register_t __cdecl internal_6f1fbc0()
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
        jne public_6f1fc02
        mov eax, dword ptr ds : [esi+8]
        public_6f1fbe4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f1fc87
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f1fc95
        public_6f1fc02 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f1fc0d
        mov eax, edx
        jmp public_6f1fbe4
        public_6f1fc0d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_6f1fc21
        public_6f1fc16 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_6f1fc16
        public_6f1fc21 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f1fbe4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f1fc3d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f1fc54
        public_6f1fc3d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f1fc54 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f1fc61
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f1fc6f
        public_6f1fc61 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f1fc6c
        mov dword ptr ds : [edx], ecx
        jmp public_6f1fc6f
        public_6f1fc6c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f1fc6f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x1C]
        mov dl, byte ptr ds : [ecx+0x1C]
        mov byte ptr ds : [ecx+0x1C], bl
        mov byte ptr ds : [esi+0x1C], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f1fcf2
        public_6f1fc87 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f1fc92
        mov dword ptr ds : [ecx], eax
        jmp public_6f1fc95
        public_6f1fc92 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f1fc95 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f1fcc3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f1fcaa
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f1fcc0
        public_6f1fcaa : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        mov edx, eax
        jne public_6f1fcc0
        public_6f1fcb5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        je public_6f1fcb5
        public_6f1fcc0 : nop
        mov dword ptr ss : [ebp], edx
        public_6f1fcc3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f1fcf2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f1fcd7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f1fcef
        public_6f1fcd7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        mov edx, eax
        jne public_6f1fcef
        public_6f1fce3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        je public_6f1fce3
        public_6f1fcef : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f1fcf2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x1C]
        mov bl, 1
        cmp cl, bl
        jne public_6f1ff6e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6f1ff67
        nop 
        public_6f1fd10 : nop
        cmp byte ptr ds : [eax+0x1C], bl
        jne public_6f1ff67
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f1fdcf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f1fd7b
        mov byte ptr ds : [ecx+0x1C], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f1fd4f
        mov dword ptr ds : [esi+4], ecx
        public_6f1fd4f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f1fd62
        mov dword ptr ds : [esi+4], edx
        jmp public_6f1fd70
        public_6f1fd62 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f1fd6d
        mov dword ptr ds : [esi], edx
        jmp public_6f1fd70
        public_6f1fd6d : nop
        mov dword ptr ds : [esi+8], edx
        public_6f1fd70 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f1fd7b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6f1fd8e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        je public_6f1fe39
        public_6f1fd8e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6f1fe6c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x1C], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f1fdb5
        mov dword ptr ds : [esi+4], ecx
        public_6f1fdb5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f1fe51
        mov dword ptr ds : [esi+4], edx
        jmp public_6f1fe60
        public_6f1fdcf : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f1fe22
        mov byte ptr ds : [ecx+0x1C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f1fdf5
        mov dword ptr ds : [esi+4], ecx
        public_6f1fdf5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f1fe08
        mov dword ptr ds : [esi+4], edx
        jmp public_6f1fe17
        public_6f1fe08 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f1fe15
        mov dword ptr ds : [esi+8], edx
        jmp public_6f1fe17
        public_6f1fe15 : nop
        mov dword ptr ds : [esi], edx
        public_6f1fe17 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f1fe22 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6f1fec8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6f1fec8
        public_6f1fe39 : nop
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f1fd10
        jmp public_6f1ff67
        public_6f1fe51 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f1fe5e
        mov dword ptr ds : [esi+8], edx
        jmp public_6f1fe60
        public_6f1fe5e : nop
        mov dword ptr ds : [esi], edx
        public_6f1fe60 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f1fe6c : nop
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
        je public_6f1fe96
        mov dword ptr ds : [esi+4], ecx
        public_6f1fe96 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f1feae
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f1ff64
        public_6f1feae : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f1febe
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f1ff64
        public_6f1febe : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f1ff64
        public_6f1fec8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6f1ff16
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x1C], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f1feeb
        mov dword ptr ds : [esi+4], ecx
        public_6f1feeb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f1fefe
        mov dword ptr ds : [esi+4], edx
        jmp public_6f1ff0c
        public_6f1fefe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f1ff09
        mov dword ptr ds : [esi], edx
        jmp public_6f1ff0c
        public_6f1ff09 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f1ff0c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f1ff16 : nop
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
        je public_6f1ff3f
        mov dword ptr ds : [esi+4], ecx
        public_6f1ff3f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f1ff52
        mov dword ptr ds : [esi+4], edx
        jmp public_6f1ff61
        public_6f1ff52 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f1ff5f
        mov dword ptr ds : [esi+8], edx
        jmp public_6f1ff61
        public_6f1ff5f : nop
        mov dword ptr ds : [esi], edx
        public_6f1ff61 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f1ff64 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f1ff67 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x1C], bl
        public_6f1ff6e : nop
        lea ecx, ds:[esi+0xC]
        call public_6f18d20
        push esi
        call public_6fa8fe0
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
        UNREACHABLE_TRAP(0x6f1fbc0)
    }
}

#undef public_6f1fbe4
#undef public_6f1fc02
#undef public_6f1fc0d
#undef public_6f1fc16
#undef public_6f1fc21
#undef public_6f1fc3d
#undef public_6f1fc54
#undef public_6f1fc61
#undef public_6f1fc6c
#undef public_6f1fc6f
#undef public_6f1fc87
#undef public_6f1fc92
#undef public_6f1fc95
#undef public_6f1fcaa
#undef public_6f1fcb5
#undef public_6f1fcc0
#undef public_6f1fcc3
#undef public_6f1fcd7
#undef public_6f1fce3
#undef public_6f1fcef
#undef public_6f1fcf2
#undef public_6f1fd10
#undef public_6f1fd4f
#undef public_6f1fd62
#undef public_6f1fd6d
#undef public_6f1fd70
#undef public_6f1fd7b
#undef public_6f1fd8e
#undef public_6f1fdb5
#undef public_6f1fdcf
#undef public_6f1fdf5
#undef public_6f1fe08
#undef public_6f1fe15
#undef public_6f1fe17
#undef public_6f1fe22
#undef public_6f1fe39
#undef public_6f1fe51
#undef public_6f1fe5e
#undef public_6f1fe60
#undef public_6f1fe6c
#undef public_6f1fe96
#undef public_6f1feae
#undef public_6f1febe
#undef public_6f1fec8
#undef public_6f1feeb
#undef public_6f1fefe
#undef public_6f1ff09
#undef public_6f1ff0c
#undef public_6f1ff16
#undef public_6f1ff3f
#undef public_6f1ff52
#undef public_6f1ff5f
#undef public_6f1ff61
#undef public_6f1ff64
#undef public_6f1ff67
#undef public_6f1ff6e
