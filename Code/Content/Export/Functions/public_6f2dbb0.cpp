#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f29680);
CLANG_FORWARD_PROC_SYMBOL(public_6f2dbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f2dbd4 _public_6f2dbd4
#define public_6f2dbf2 _public_6f2dbf2
#define public_6f2dbfd _public_6f2dbfd
#define public_6f2dc06 _public_6f2dc06
#define public_6f2dc11 _public_6f2dc11
#define public_6f2dc2d _public_6f2dc2d
#define public_6f2dc44 _public_6f2dc44
#define public_6f2dc51 _public_6f2dc51
#define public_6f2dc5c _public_6f2dc5c
#define public_6f2dc5f _public_6f2dc5f
#define public_6f2dc77 _public_6f2dc77
#define public_6f2dc82 _public_6f2dc82
#define public_6f2dc85 _public_6f2dc85
#define public_6f2dc9a _public_6f2dc9a
#define public_6f2dca5 _public_6f2dca5
#define public_6f2dcb0 _public_6f2dcb0
#define public_6f2dcb3 _public_6f2dcb3
#define public_6f2dcc7 _public_6f2dcc7
#define public_6f2dcd3 _public_6f2dcd3
#define public_6f2dcdf _public_6f2dcdf
#define public_6f2dce2 _public_6f2dce2
#define public_6f2dd00 _public_6f2dd00
#define public_6f2dd3f _public_6f2dd3f
#define public_6f2dd52 _public_6f2dd52
#define public_6f2dd5d _public_6f2dd5d
#define public_6f2dd60 _public_6f2dd60
#define public_6f2dd6b _public_6f2dd6b
#define public_6f2dd7e _public_6f2dd7e
#define public_6f2dda5 _public_6f2dda5
#define public_6f2ddbf _public_6f2ddbf
#define public_6f2dde5 _public_6f2dde5
#define public_6f2ddf8 _public_6f2ddf8
#define public_6f2de05 _public_6f2de05
#define public_6f2de07 _public_6f2de07
#define public_6f2de12 _public_6f2de12
#define public_6f2de29 _public_6f2de29
#define public_6f2de41 _public_6f2de41
#define public_6f2de4e _public_6f2de4e
#define public_6f2de50 _public_6f2de50
#define public_6f2de5c _public_6f2de5c
#define public_6f2de86 _public_6f2de86
#define public_6f2de9e _public_6f2de9e
#define public_6f2deae _public_6f2deae
#define public_6f2deb8 _public_6f2deb8
#define public_6f2dedb _public_6f2dedb
#define public_6f2deee _public_6f2deee
#define public_6f2def9 _public_6f2def9
#define public_6f2defc _public_6f2defc
#define public_6f2df06 _public_6f2df06
#define public_6f2df2f _public_6f2df2f
#define public_6f2df42 _public_6f2df42
#define public_6f2df4f _public_6f2df4f
#define public_6f2df51 _public_6f2df51
#define public_6f2df54 _public_6f2df54
#define public_6f2df57 _public_6f2df57
#define public_6f2df5e _public_6f2df5e

PROC_DECLARE(0x6f2dbb0, internal_6f2dbb0, public_6f2dbb0);
extern "C" NAKED register_t __cdecl internal_6f2dbb0()
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
        call public_6f46640
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f2dbf2
        mov eax, dword ptr ds : [esi+8]
        public_6f2dbd4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f2dc77
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f2dc85
        public_6f2dbf2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f2dbfd
        mov eax, edx
        jmp public_6f2dbd4
        public_6f2dbfd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6f2dc11
        public_6f2dc06 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6f2dc06
        public_6f2dc11 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f2dbd4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f2dc2d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f2dc44
        public_6f2dc2d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f2dc44 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f2dc51
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f2dc5f
        public_6f2dc51 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f2dc5c
        mov dword ptr ds : [edx], ecx
        jmp public_6f2dc5f
        public_6f2dc5c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f2dc5f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x24]
        mov dl, byte ptr ds : [ecx+0x24]
        mov byte ptr ds : [ecx+0x24], bl
        mov byte ptr ds : [esi+0x24], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f2dce2
        public_6f2dc77 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f2dc82
        mov dword ptr ds : [ecx], eax
        jmp public_6f2dc85
        public_6f2dc82 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f2dc85 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f2dcb3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f2dc9a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f2dcb0
        public_6f2dc9a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        mov edx, eax
        jne public_6f2dcb0
        public_6f2dca5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_6f2dca5
        public_6f2dcb0 : nop
        mov dword ptr ss : [ebp], edx
        public_6f2dcb3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f2dce2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f2dcc7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f2dcdf
        public_6f2dcc7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        mov edx, eax
        jne public_6f2dcdf
        public_6f2dcd3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_6f2dcd3
        public_6f2dcdf : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f2dce2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x24]
        mov bl, 1
        cmp cl, bl
        jne public_6f2df5e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6f2df57
        nop 
        public_6f2dd00 : nop
        cmp byte ptr ds : [eax+0x24], bl
        jne public_6f2df57
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f2ddbf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6f2dd6b
        mov byte ptr ds : [ecx+0x24], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2dd3f
        mov dword ptr ds : [esi+4], ecx
        public_6f2dd3f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2dd52
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2dd60
        public_6f2dd52 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f2dd5d
        mov dword ptr ds : [esi], edx
        jmp public_6f2dd60
        public_6f2dd5d : nop
        mov dword ptr ds : [esi+8], edx
        public_6f2dd60 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f2dd6b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6f2dd7e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        je public_6f2de29
        public_6f2dd7e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6f2de5c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2dda5
        mov dword ptr ds : [esi+4], ecx
        public_6f2dda5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2de41
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2de50
        public_6f2ddbf : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6f2de12
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2dde5
        mov dword ptr ds : [esi+4], ecx
        public_6f2dde5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2ddf8
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2de07
        public_6f2ddf8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f2de05
        mov dword ptr ds : [esi+8], edx
        jmp public_6f2de07
        public_6f2de05 : nop
        mov dword ptr ds : [esi], edx
        public_6f2de07 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f2de12 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6f2deb8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6f2deb8
        public_6f2de29 : nop
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f2dd00
        jmp public_6f2df57
        public_6f2de41 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f2de4e
        mov dword ptr ds : [esi+8], edx
        jmp public_6f2de50
        public_6f2de4e : nop
        mov dword ptr ds : [esi], edx
        public_6f2de50 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f2de5c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x24]
        mov byte ptr ds : [ecx+0x24], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2de86
        mov dword ptr ds : [esi+4], ecx
        public_6f2de86 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2de9e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f2df54
        public_6f2de9e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f2deae
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f2df54
        public_6f2deae : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f2df54
        public_6f2deb8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6f2df06
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2dedb
        mov dword ptr ds : [esi+4], ecx
        public_6f2dedb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2deee
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2defc
        public_6f2deee : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f2def9
        mov dword ptr ds : [esi], edx
        jmp public_6f2defc
        public_6f2def9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f2defc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f2df06 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x24]
        mov byte ptr ds : [ecx+0x24], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2df2f
        mov dword ptr ds : [esi+4], ecx
        public_6f2df2f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2df42
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2df51
        public_6f2df42 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f2df4f
        mov dword ptr ds : [esi+8], edx
        jmp public_6f2df51
        public_6f2df4f : nop
        mov dword ptr ds : [esi], edx
        public_6f2df51 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f2df54 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f2df57 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x24], bl
        public_6f2df5e : nop
        lea ecx, ds:[esi+0xC]
        call public_6f29680
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
        UNREACHABLE_TRAP(0x6f2dbb0)
    }
}

#undef public_6f2dbd4
#undef public_6f2dbf2
#undef public_6f2dbfd
#undef public_6f2dc06
#undef public_6f2dc11
#undef public_6f2dc2d
#undef public_6f2dc44
#undef public_6f2dc51
#undef public_6f2dc5c
#undef public_6f2dc5f
#undef public_6f2dc77
#undef public_6f2dc82
#undef public_6f2dc85
#undef public_6f2dc9a
#undef public_6f2dca5
#undef public_6f2dcb0
#undef public_6f2dcb3
#undef public_6f2dcc7
#undef public_6f2dcd3
#undef public_6f2dcdf
#undef public_6f2dce2
#undef public_6f2dd00
#undef public_6f2dd3f
#undef public_6f2dd52
#undef public_6f2dd5d
#undef public_6f2dd60
#undef public_6f2dd6b
#undef public_6f2dd7e
#undef public_6f2dda5
#undef public_6f2ddbf
#undef public_6f2dde5
#undef public_6f2ddf8
#undef public_6f2de05
#undef public_6f2de07
#undef public_6f2de12
#undef public_6f2de29
#undef public_6f2de41
#undef public_6f2de4e
#undef public_6f2de50
#undef public_6f2de5c
#undef public_6f2de86
#undef public_6f2de9e
#undef public_6f2deae
#undef public_6f2deb8
#undef public_6f2dedb
#undef public_6f2deee
#undef public_6f2def9
#undef public_6f2defc
#undef public_6f2df06
#undef public_6f2df2f
#undef public_6f2df42
#undef public_6f2df4f
#undef public_6f2df51
#undef public_6f2df54
#undef public_6f2df57
#undef public_6f2df5e
