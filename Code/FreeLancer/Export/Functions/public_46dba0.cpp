#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46dba0);
CLANG_FORWARD_PROC_SYMBOL(public_46e970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46dbc4 _public_46dbc4
#define public_46dbe2 _public_46dbe2
#define public_46dbed _public_46dbed
#define public_46dbf6 _public_46dbf6
#define public_46dc01 _public_46dc01
#define public_46dc1d _public_46dc1d
#define public_46dc34 _public_46dc34
#define public_46dc41 _public_46dc41
#define public_46dc4c _public_46dc4c
#define public_46dc4f _public_46dc4f
#define public_46dc67 _public_46dc67
#define public_46dc72 _public_46dc72
#define public_46dc75 _public_46dc75
#define public_46dc8a _public_46dc8a
#define public_46dc95 _public_46dc95
#define public_46dca0 _public_46dca0
#define public_46dca3 _public_46dca3
#define public_46dcb7 _public_46dcb7
#define public_46dcc3 _public_46dcc3
#define public_46dccf _public_46dccf
#define public_46dcd2 _public_46dcd2
#define public_46dcf0 _public_46dcf0
#define public_46dd2f _public_46dd2f
#define public_46dd42 _public_46dd42
#define public_46dd4d _public_46dd4d
#define public_46dd50 _public_46dd50
#define public_46dd5b _public_46dd5b
#define public_46dd6e _public_46dd6e
#define public_46dd95 _public_46dd95
#define public_46ddaf _public_46ddaf
#define public_46ddd5 _public_46ddd5
#define public_46dde8 _public_46dde8
#define public_46ddf5 _public_46ddf5
#define public_46ddf7 _public_46ddf7
#define public_46de02 _public_46de02
#define public_46de19 _public_46de19
#define public_46de31 _public_46de31
#define public_46de3e _public_46de3e
#define public_46de40 _public_46de40
#define public_46de4c _public_46de4c
#define public_46de76 _public_46de76
#define public_46de8e _public_46de8e
#define public_46de9e _public_46de9e
#define public_46dea8 _public_46dea8
#define public_46decb _public_46decb
#define public_46dede _public_46dede
#define public_46dee9 _public_46dee9
#define public_46deec _public_46deec
#define public_46def6 _public_46def6
#define public_46df1f _public_46df1f
#define public_46df32 _public_46df32
#define public_46df3f _public_46df3f
#define public_46df41 _public_46df41
#define public_46df44 _public_46df44
#define public_46df47 _public_46df47
#define public_46df4a _public_46df4a

PROC_DECLARE(0x46dba0, internal_46dba0, public_46dba0);
extern "C" NAKED register_t __cdecl internal_46dba0()
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
        call public_46e970
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_46dbe2
        mov eax, dword ptr ds : [esi+8]
        public_46dbc4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_46dc67
        mov dword ptr ds : [ecx+4], eax
        jmp public_46dc75
        public_46dbe2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_46dbed
        mov eax, edx
        jmp public_46dbc4
        public_46dbed : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_46dc01
        public_46dbf6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_46dbf6
        public_46dc01 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_46dbc4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_46dc1d
        mov dword ptr ds : [eax+4], ecx
        jmp public_46dc34
        public_46dc1d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_46dc34 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_46dc41
        mov dword ptr ds : [edx+4], ecx
        jmp public_46dc4f
        public_46dc41 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_46dc4c
        mov dword ptr ds : [edx], ecx
        jmp public_46dc4f
        public_46dc4c : nop
        mov dword ptr ds : [edx+8], ecx
        public_46dc4f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x1C]
        mov dl, byte ptr ds : [ecx+0x1C]
        mov byte ptr ds : [ecx+0x1C], bl
        mov byte ptr ds : [esi+0x1C], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_46dcd2
        public_46dc67 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_46dc72
        mov dword ptr ds : [ecx], eax
        jmp public_46dc75
        public_46dc72 : nop
        mov dword ptr ds : [ecx+8], eax
        public_46dc75 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_46dca3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_46dc8a
        mov edx, dword ptr ds : [esi+4]
        jmp public_46dca0
        public_46dc8a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        mov edx, eax
        jne public_46dca0
        public_46dc95 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        je public_46dc95
        public_46dca0 : nop
        mov dword ptr ss : [ebp], edx
        public_46dca3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_46dcd2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_46dcb7
        mov edx, dword ptr ds : [esi+4]
        jmp public_46dccf
        public_46dcb7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        mov edx, eax
        jne public_46dccf
        public_46dcc3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        je public_46dcc3
        public_46dccf : nop
        mov dword ptr ss : [ebp+8], edx
        public_46dcd2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x1C]
        mov bl, 1
        cmp dl, bl
        jne public_46df4a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_46df47
        nop 
        public_46dcf0 : nop
        cmp byte ptr ds : [eax+0x1C], bl
        jne public_46df47
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_46ddaf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_46dd5b
        mov byte ptr ds : [ecx+0x1C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_46dd2f
        mov dword ptr ds : [esi+4], ecx
        public_46dd2f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_46dd42
        mov dword ptr ds : [esi+4], edx
        jmp public_46dd50
        public_46dd42 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_46dd4d
        mov dword ptr ds : [esi], edx
        jmp public_46dd50
        public_46dd4d : nop
        mov dword ptr ds : [esi+8], edx
        public_46dd50 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_46dd5b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_46dd6e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        je public_46de19
        public_46dd6e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_46de4c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x1C], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_46dd95
        mov dword ptr ds : [esi+4], ecx
        public_46dd95 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_46de31
        mov dword ptr ds : [esi+4], edx
        jmp public_46de40
        public_46ddaf : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_46de02
        mov byte ptr ds : [ecx+0x1C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_46ddd5
        mov dword ptr ds : [esi+4], ecx
        public_46ddd5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_46dde8
        mov dword ptr ds : [esi+4], edx
        jmp public_46ddf7
        public_46dde8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_46ddf5
        mov dword ptr ds : [esi+8], edx
        jmp public_46ddf7
        public_46ddf5 : nop
        mov dword ptr ds : [esi], edx
        public_46ddf7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_46de02 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_46dea8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_46dea8
        public_46de19 : nop
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_46dcf0
        jmp public_46df47
        public_46de31 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_46de3e
        mov dword ptr ds : [esi+8], edx
        jmp public_46de40
        public_46de3e : nop
        mov dword ptr ds : [esi], edx
        public_46de40 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_46de4c : nop
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
        je public_46de76
        mov dword ptr ds : [esi+4], ecx
        public_46de76 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_46de8e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_46df44
        public_46de8e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_46de9e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_46df44
        public_46de9e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_46df44
        public_46dea8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_46def6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x1C], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_46decb
        mov dword ptr ds : [esi+4], ecx
        public_46decb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_46dede
        mov dword ptr ds : [esi+4], edx
        jmp public_46deec
        public_46dede : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_46dee9
        mov dword ptr ds : [esi], edx
        jmp public_46deec
        public_46dee9 : nop
        mov dword ptr ds : [esi+8], edx
        public_46deec : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_46def6 : nop
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
        je public_46df1f
        mov dword ptr ds : [esi+4], ecx
        public_46df1f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_46df32
        mov dword ptr ds : [esi+4], edx
        jmp public_46df41
        public_46df32 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_46df3f
        mov dword ptr ds : [esi+8], edx
        jmp public_46df41
        public_46df3f : nop
        mov dword ptr ds : [esi], edx
        public_46df41 : nop
        mov dword ptr ds : [edx+8], ecx
        public_46df44 : nop
        mov dword ptr ds : [ecx+4], edx
        public_46df47 : nop
        mov byte ptr ds : [eax+0x1C], bl
        public_46df4a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_5b7e1d
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
        UNREACHABLE_TRAP(0x46dba0)
    }
}

#undef public_46dbc4
#undef public_46dbe2
#undef public_46dbed
#undef public_46dbf6
#undef public_46dc01
#undef public_46dc1d
#undef public_46dc34
#undef public_46dc41
#undef public_46dc4c
#undef public_46dc4f
#undef public_46dc67
#undef public_46dc72
#undef public_46dc75
#undef public_46dc8a
#undef public_46dc95
#undef public_46dca0
#undef public_46dca3
#undef public_46dcb7
#undef public_46dcc3
#undef public_46dccf
#undef public_46dcd2
#undef public_46dcf0
#undef public_46dd2f
#undef public_46dd42
#undef public_46dd4d
#undef public_46dd50
#undef public_46dd5b
#undef public_46dd6e
#undef public_46dd95
#undef public_46ddaf
#undef public_46ddd5
#undef public_46dde8
#undef public_46ddf5
#undef public_46ddf7
#undef public_46de02
#undef public_46de19
#undef public_46de31
#undef public_46de3e
#undef public_46de40
#undef public_46de4c
#undef public_46de76
#undef public_46de8e
#undef public_46de9e
#undef public_46dea8
#undef public_46decb
#undef public_46dede
#undef public_46dee9
#undef public_46deec
#undef public_46def6
#undef public_46df1f
#undef public_46df32
#undef public_46df3f
#undef public_46df41
#undef public_46df44
#undef public_46df47
#undef public_46df4a
