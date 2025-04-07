#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f502f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53b40);
CLANG_FORWARD_PROC_SYMBOL(public_6f55200);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f53b64 _public_6f53b64
#define public_6f53b82 _public_6f53b82
#define public_6f53b8d _public_6f53b8d
#define public_6f53ba0 _public_6f53ba0
#define public_6f53bae _public_6f53bae
#define public_6f53bca _public_6f53bca
#define public_6f53be1 _public_6f53be1
#define public_6f53bee _public_6f53bee
#define public_6f53bf9 _public_6f53bf9
#define public_6f53bfc _public_6f53bfc
#define public_6f53c20 _public_6f53c20
#define public_6f53c2b _public_6f53c2b
#define public_6f53c2e _public_6f53c2e
#define public_6f53c43 _public_6f53c43
#define public_6f53c51 _public_6f53c51
#define public_6f53c5f _public_6f53c5f
#define public_6f53c62 _public_6f53c62
#define public_6f53c76 _public_6f53c76
#define public_6f53c85 _public_6f53c85
#define public_6f53c94 _public_6f53c94
#define public_6f53c97 _public_6f53c97
#define public_6f53cb7 _public_6f53cb7
#define public_6f53d02 _public_6f53d02
#define public_6f53d15 _public_6f53d15
#define public_6f53d20 _public_6f53d20
#define public_6f53d23 _public_6f53d23
#define public_6f53d2e _public_6f53d2e
#define public_6f53d47 _public_6f53d47
#define public_6f53d77 _public_6f53d77
#define public_6f53d91 _public_6f53d91
#define public_6f53dc0 _public_6f53dc0
#define public_6f53dd3 _public_6f53dd3
#define public_6f53de0 _public_6f53de0
#define public_6f53de2 _public_6f53de2
#define public_6f53ded _public_6f53ded
#define public_6f53e0a _public_6f53e0a
#define public_6f53e25 _public_6f53e25
#define public_6f53e32 _public_6f53e32
#define public_6f53e34 _public_6f53e34
#define public_6f53e40 _public_6f53e40
#define public_6f53e76 _public_6f53e76
#define public_6f53e8e _public_6f53e8e
#define public_6f53e9e _public_6f53e9e
#define public_6f53ea8 _public_6f53ea8
#define public_6f53ed4 _public_6f53ed4
#define public_6f53ee7 _public_6f53ee7
#define public_6f53ef2 _public_6f53ef2
#define public_6f53ef5 _public_6f53ef5
#define public_6f53eff _public_6f53eff
#define public_6f53f34 _public_6f53f34
#define public_6f53f47 _public_6f53f47
#define public_6f53f54 _public_6f53f54
#define public_6f53f56 _public_6f53f56
#define public_6f53f59 _public_6f53f59
#define public_6f53f5c _public_6f53f5c
#define public_6f53f66 _public_6f53f66

PROC_DECLARE(0x6f53b40, internal_6f53b40, public_6f53b40);
extern "C" NAKED register_t __cdecl internal_6f53b40()
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
        call public_6f55200
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f53b82
        mov eax, dword ptr ds : [esi+8]
        public_6f53b64 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f53c20
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f53c2e
        public_6f53b82 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f53b8d
        mov eax, edx
        jmp public_6f53b64
        public_6f53b8d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0xE5]
        test bl, bl
        jne public_6f53bae
        lea esp, ss:[esp]
        public_6f53ba0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0xE5]
        test bl, bl
        je public_6f53ba0
        public_6f53bae : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f53b64
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f53bca
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f53be1
        public_6f53bca : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f53be1 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f53bee
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f53bfc
        public_6f53bee : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f53bf9
        mov dword ptr ds : [edx], ecx
        jmp public_6f53bfc
        public_6f53bf9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f53bfc : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0xE4]
        mov dl, byte ptr ds : [ecx+0xE4]
        mov byte ptr ds : [ecx+0xE4], bl
        mov byte ptr ds : [esi+0xE4], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f53c97
        public_6f53c20 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f53c2b
        mov dword ptr ds : [ecx], eax
        jmp public_6f53c2e
        public_6f53c2b : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f53c2e : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f53c62
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f53c43
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f53c5f
        public_6f53c43 : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0xE5]
        test bl, bl
        mov edx, eax
        jne public_6f53c5f
        public_6f53c51 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0xE5]
        test bl, bl
        je public_6f53c51
        public_6f53c5f : nop
        mov dword ptr ss : [ebp], edx
        public_6f53c62 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f53c97
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f53c76
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f53c94
        public_6f53c76 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0xE5]
        test bl, bl
        mov edx, eax
        jne public_6f53c94
        public_6f53c85 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0xE5]
        test bl, bl
        je public_6f53c85
        public_6f53c94 : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f53c97 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0xE4]
        mov bl, 1
        cmp cl, bl
        jne public_6f53f66
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6f53f5c
        public_6f53cb7 : nop
        cmp byte ptr ds : [eax+0xE4], bl
        jne public_6f53f5c
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f53d91
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0xE4]
        test dl, dl
        jne public_6f53d2e
        mov byte ptr ds : [ecx+0xE4], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0xE4], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f53d02
        mov dword ptr ds : [esi+4], ecx
        public_6f53d02 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f53d15
        mov dword ptr ds : [esi+4], edx
        jmp public_6f53d23
        public_6f53d15 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f53d20
        mov dword ptr ds : [esi], edx
        jmp public_6f53d23
        public_6f53d20 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f53d23 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f53d2e : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0xE4], bl
        jne public_6f53d47
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0xE4], bl
        je public_6f53e0a
        public_6f53d47 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0xE4], bl
        jne public_6f53e40
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0xE4], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0xE4], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f53d77
        mov dword ptr ds : [esi+4], ecx
        public_6f53d77 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f53e25
        mov dword ptr ds : [esi+4], edx
        jmp public_6f53e34
        public_6f53d91 : nop
        mov dl, byte ptr ds : [ecx+0xE4]
        test dl, dl
        jne public_6f53ded
        mov byte ptr ds : [ecx+0xE4], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xE4], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f53dc0
        mov dword ptr ds : [esi+4], ecx
        public_6f53dc0 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f53dd3
        mov dword ptr ds : [esi+4], edx
        jmp public_6f53de2
        public_6f53dd3 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f53de0
        mov dword ptr ds : [esi+8], edx
        jmp public_6f53de2
        public_6f53de0 : nop
        mov dword ptr ds : [esi], edx
        public_6f53de2 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f53ded : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0xE4], bl
        jne public_6f53ea8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0xE4], bl
        jne public_6f53ea8
        public_6f53e0a : nop
        mov byte ptr ds : [ecx+0xE4], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f53cb7
        jmp public_6f53f5c
        public_6f53e25 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f53e32
        mov dword ptr ds : [esi+8], edx
        jmp public_6f53e34
        public_6f53e32 : nop
        mov dword ptr ds : [esi], edx
        public_6f53e34 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f53e40 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0xE4]
        mov byte ptr ds : [ecx+0xE4], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0xE4], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0xE4], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f53e76
        mov dword ptr ds : [esi+4], ecx
        public_6f53e76 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f53e8e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f53f59
        public_6f53e8e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f53e9e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f53f59
        public_6f53e9e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f53f59
        public_6f53ea8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0xE4], bl
        jne public_6f53eff
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0xE4], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0xE4], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f53ed4
        mov dword ptr ds : [esi+4], ecx
        public_6f53ed4 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f53ee7
        mov dword ptr ds : [esi+4], edx
        jmp public_6f53ef5
        public_6f53ee7 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f53ef2
        mov dword ptr ds : [esi], edx
        jmp public_6f53ef5
        public_6f53ef2 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f53ef5 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f53eff : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0xE4]
        mov byte ptr ds : [ecx+0xE4], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0xE4], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0xE4], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f53f34
        mov dword ptr ds : [esi+4], ecx
        public_6f53f34 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f53f47
        mov dword ptr ds : [esi+4], edx
        jmp public_6f53f56
        public_6f53f47 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f53f54
        mov dword ptr ds : [esi+8], edx
        jmp public_6f53f56
        public_6f53f54 : nop
        mov dword ptr ds : [esi], edx
        public_6f53f56 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f53f59 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f53f5c : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0xE4], bl
        public_6f53f66 : nop
        lea ecx, ds:[esi+0xC]
        call public_6f502f0
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
        UNREACHABLE_TRAP(0x6f53b40)
    }
}

#undef public_6f53b64
#undef public_6f53b82
#undef public_6f53b8d
#undef public_6f53ba0
#undef public_6f53bae
#undef public_6f53bca
#undef public_6f53be1
#undef public_6f53bee
#undef public_6f53bf9
#undef public_6f53bfc
#undef public_6f53c20
#undef public_6f53c2b
#undef public_6f53c2e
#undef public_6f53c43
#undef public_6f53c51
#undef public_6f53c5f
#undef public_6f53c62
#undef public_6f53c76
#undef public_6f53c85
#undef public_6f53c94
#undef public_6f53c97
#undef public_6f53cb7
#undef public_6f53d02
#undef public_6f53d15
#undef public_6f53d20
#undef public_6f53d23
#undef public_6f53d2e
#undef public_6f53d47
#undef public_6f53d77
#undef public_6f53d91
#undef public_6f53dc0
#undef public_6f53dd3
#undef public_6f53de0
#undef public_6f53de2
#undef public_6f53ded
#undef public_6f53e0a
#undef public_6f53e25
#undef public_6f53e32
#undef public_6f53e34
#undef public_6f53e40
#undef public_6f53e76
#undef public_6f53e8e
#undef public_6f53e9e
#undef public_6f53ea8
#undef public_6f53ed4
#undef public_6f53ee7
#undef public_6f53ef2
#undef public_6f53ef5
#undef public_6f53eff
#undef public_6f53f34
#undef public_6f53f47
#undef public_6f53f54
#undef public_6f53f56
#undef public_6f53f59
#undef public_6f53f5c
#undef public_6f53f66
