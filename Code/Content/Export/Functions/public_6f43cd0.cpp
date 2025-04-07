#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f43cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46730);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f43cf4 _public_6f43cf4
#define public_6f43d12 _public_6f43d12
#define public_6f43d1d _public_6f43d1d
#define public_6f43d26 _public_6f43d26
#define public_6f43d31 _public_6f43d31
#define public_6f43d4d _public_6f43d4d
#define public_6f43d64 _public_6f43d64
#define public_6f43d71 _public_6f43d71
#define public_6f43d7c _public_6f43d7c
#define public_6f43d7f _public_6f43d7f
#define public_6f43d97 _public_6f43d97
#define public_6f43da2 _public_6f43da2
#define public_6f43da5 _public_6f43da5
#define public_6f43dba _public_6f43dba
#define public_6f43dc5 _public_6f43dc5
#define public_6f43dd0 _public_6f43dd0
#define public_6f43dd3 _public_6f43dd3
#define public_6f43de7 _public_6f43de7
#define public_6f43df3 _public_6f43df3
#define public_6f43dff _public_6f43dff
#define public_6f43e02 _public_6f43e02
#define public_6f43e20 _public_6f43e20
#define public_6f43e5f _public_6f43e5f
#define public_6f43e72 _public_6f43e72
#define public_6f43e7d _public_6f43e7d
#define public_6f43e80 _public_6f43e80
#define public_6f43e8b _public_6f43e8b
#define public_6f43e9e _public_6f43e9e
#define public_6f43ec5 _public_6f43ec5
#define public_6f43edf _public_6f43edf
#define public_6f43f05 _public_6f43f05
#define public_6f43f18 _public_6f43f18
#define public_6f43f25 _public_6f43f25
#define public_6f43f27 _public_6f43f27
#define public_6f43f32 _public_6f43f32
#define public_6f43f49 _public_6f43f49
#define public_6f43f61 _public_6f43f61
#define public_6f43f6e _public_6f43f6e
#define public_6f43f70 _public_6f43f70
#define public_6f43f7c _public_6f43f7c
#define public_6f43fa6 _public_6f43fa6
#define public_6f43fbe _public_6f43fbe
#define public_6f43fce _public_6f43fce
#define public_6f43fd8 _public_6f43fd8
#define public_6f43ffb _public_6f43ffb
#define public_6f4400e _public_6f4400e
#define public_6f44019 _public_6f44019
#define public_6f4401c _public_6f4401c
#define public_6f44026 _public_6f44026
#define public_6f4404f _public_6f4404f
#define public_6f44062 _public_6f44062
#define public_6f4406f _public_6f4406f
#define public_6f44071 _public_6f44071
#define public_6f44074 _public_6f44074
#define public_6f44077 _public_6f44077
#define public_6f4407a _public_6f4407a

PROC_DECLARE(0x6f43cd0, internal_6f43cd0, public_6f43cd0);
extern "C" NAKED register_t __cdecl internal_6f43cd0()
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
        call public_6f46730
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f43d12
        mov eax, dword ptr ds : [esi+8]
        public_6f43cf4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f43d97
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f43da5
        public_6f43d12 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f43d1d
        mov eax, edx
        jmp public_6f43cf4
        public_6f43d1d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        jne public_6f43d31
        public_6f43d26 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        je public_6f43d26
        public_6f43d31 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f43cf4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f43d4d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f43d64
        public_6f43d4d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f43d64 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f43d71
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f43d7f
        public_6f43d71 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f43d7c
        mov dword ptr ds : [edx], ecx
        jmp public_6f43d7f
        public_6f43d7c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f43d7f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x34]
        mov dl, byte ptr ds : [ecx+0x34]
        mov byte ptr ds : [ecx+0x34], bl
        mov byte ptr ds : [esi+0x34], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f43e02
        public_6f43d97 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f43da2
        mov dword ptr ds : [ecx], eax
        jmp public_6f43da5
        public_6f43da2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f43da5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f43dd3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f43dba
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f43dd0
        public_6f43dba : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        mov edx, eax
        jne public_6f43dd0
        public_6f43dc5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        je public_6f43dc5
        public_6f43dd0 : nop
        mov dword ptr ss : [ebp], edx
        public_6f43dd3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f43e02
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f43de7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f43dff
        public_6f43de7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        mov edx, eax
        jne public_6f43dff
        public_6f43df3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        je public_6f43df3
        public_6f43dff : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f43e02 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x34]
        mov bl, 1
        cmp dl, bl
        jne public_6f4407a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f44077
        nop 
        public_6f43e20 : nop
        cmp byte ptr ds : [eax+0x34], bl
        jne public_6f44077
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f43edf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_6f43e8b
        mov byte ptr ds : [ecx+0x34], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f43e5f
        mov dword ptr ds : [esi+4], ecx
        public_6f43e5f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f43e72
        mov dword ptr ds : [esi+4], edx
        jmp public_6f43e80
        public_6f43e72 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f43e7d
        mov dword ptr ds : [esi], edx
        jmp public_6f43e80
        public_6f43e7d : nop
        mov dword ptr ds : [esi+8], edx
        public_6f43e80 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6f43e8b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_6f43e9e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x34], bl
        je public_6f43f49
        public_6f43e9e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_6f43f7c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x34], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x34], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f43ec5
        mov dword ptr ds : [esi+4], ecx
        public_6f43ec5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f43f61
        mov dword ptr ds : [esi+4], edx
        jmp public_6f43f70
        public_6f43edf : nop
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_6f43f32
        mov byte ptr ds : [ecx+0x34], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f43f05
        mov dword ptr ds : [esi+4], ecx
        public_6f43f05 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f43f18
        mov dword ptr ds : [esi+4], edx
        jmp public_6f43f27
        public_6f43f18 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f43f25
        mov dword ptr ds : [esi+8], edx
        jmp public_6f43f27
        public_6f43f25 : nop
        mov dword ptr ds : [esi], edx
        public_6f43f27 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f43f32 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_6f43fd8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_6f43fd8
        public_6f43f49 : nop
        mov byte ptr ds : [ecx+0x34], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f43e20
        jmp public_6f44077
        public_6f43f61 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f43f6e
        mov dword ptr ds : [esi+8], edx
        jmp public_6f43f70
        public_6f43f6e : nop
        mov dword ptr ds : [esi], edx
        public_6f43f70 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f43f7c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x34]
        mov byte ptr ds : [ecx+0x34], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x34], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x34], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f43fa6
        mov dword ptr ds : [esi+4], ecx
        public_6f43fa6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f43fbe
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f44074
        public_6f43fbe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f43fce
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f44074
        public_6f43fce : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f44074
        public_6f43fd8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_6f44026
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x34], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x34], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f43ffb
        mov dword ptr ds : [esi+4], ecx
        public_6f43ffb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4400e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f4401c
        public_6f4400e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f44019
        mov dword ptr ds : [esi], edx
        jmp public_6f4401c
        public_6f44019 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f4401c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f44026 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x34]
        mov byte ptr ds : [ecx+0x34], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x34], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x34], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4404f
        mov dword ptr ds : [esi+4], ecx
        public_6f4404f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f44062
        mov dword ptr ds : [esi+4], edx
        jmp public_6f44071
        public_6f44062 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4406f
        mov dword ptr ds : [esi+8], edx
        jmp public_6f44071
        public_6f4406f : nop
        mov dword ptr ds : [esi], edx
        public_6f44071 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f44074 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f44077 : nop
        mov byte ptr ds : [eax+0x34], bl
        public_6f4407a : nop
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
        UNREACHABLE_TRAP(0x6f43cd0)
    }
}

#undef public_6f43cf4
#undef public_6f43d12
#undef public_6f43d1d
#undef public_6f43d26
#undef public_6f43d31
#undef public_6f43d4d
#undef public_6f43d64
#undef public_6f43d71
#undef public_6f43d7c
#undef public_6f43d7f
#undef public_6f43d97
#undef public_6f43da2
#undef public_6f43da5
#undef public_6f43dba
#undef public_6f43dc5
#undef public_6f43dd0
#undef public_6f43dd3
#undef public_6f43de7
#undef public_6f43df3
#undef public_6f43dff
#undef public_6f43e02
#undef public_6f43e20
#undef public_6f43e5f
#undef public_6f43e72
#undef public_6f43e7d
#undef public_6f43e80
#undef public_6f43e8b
#undef public_6f43e9e
#undef public_6f43ec5
#undef public_6f43edf
#undef public_6f43f05
#undef public_6f43f18
#undef public_6f43f25
#undef public_6f43f27
#undef public_6f43f32
#undef public_6f43f49
#undef public_6f43f61
#undef public_6f43f6e
#undef public_6f43f70
#undef public_6f43f7c
#undef public_6f43fa6
#undef public_6f43fbe
#undef public_6f43fce
#undef public_6f43fd8
#undef public_6f43ffb
#undef public_6f4400e
#undef public_6f44019
#undef public_6f4401c
#undef public_6f44026
#undef public_6f4404f
#undef public_6f44062
#undef public_6f4406f
#undef public_6f44071
#undef public_6f44074
#undef public_6f44077
#undef public_6f4407a
