#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46690);
CLANG_FORWARD_PROC_SYMBOL(public_6f592d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f59b10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f59b34 _public_6f59b34
#define public_6f59b52 _public_6f59b52
#define public_6f59b5d _public_6f59b5d
#define public_6f59b66 _public_6f59b66
#define public_6f59b71 _public_6f59b71
#define public_6f59b8d _public_6f59b8d
#define public_6f59ba4 _public_6f59ba4
#define public_6f59bb1 _public_6f59bb1
#define public_6f59bbc _public_6f59bbc
#define public_6f59bbf _public_6f59bbf
#define public_6f59bd7 _public_6f59bd7
#define public_6f59be2 _public_6f59be2
#define public_6f59be5 _public_6f59be5
#define public_6f59bfa _public_6f59bfa
#define public_6f59c05 _public_6f59c05
#define public_6f59c10 _public_6f59c10
#define public_6f59c13 _public_6f59c13
#define public_6f59c27 _public_6f59c27
#define public_6f59c33 _public_6f59c33
#define public_6f59c3f _public_6f59c3f
#define public_6f59c42 _public_6f59c42
#define public_6f59c60 _public_6f59c60
#define public_6f59c9f _public_6f59c9f
#define public_6f59cb2 _public_6f59cb2
#define public_6f59cbd _public_6f59cbd
#define public_6f59cc0 _public_6f59cc0
#define public_6f59ccb _public_6f59ccb
#define public_6f59cde _public_6f59cde
#define public_6f59d05 _public_6f59d05
#define public_6f59d1f _public_6f59d1f
#define public_6f59d45 _public_6f59d45
#define public_6f59d58 _public_6f59d58
#define public_6f59d65 _public_6f59d65
#define public_6f59d67 _public_6f59d67
#define public_6f59d72 _public_6f59d72
#define public_6f59d89 _public_6f59d89
#define public_6f59da1 _public_6f59da1
#define public_6f59dae _public_6f59dae
#define public_6f59db0 _public_6f59db0
#define public_6f59dbc _public_6f59dbc
#define public_6f59de6 _public_6f59de6
#define public_6f59dfe _public_6f59dfe
#define public_6f59e0e _public_6f59e0e
#define public_6f59e18 _public_6f59e18
#define public_6f59e3b _public_6f59e3b
#define public_6f59e4e _public_6f59e4e
#define public_6f59e59 _public_6f59e59
#define public_6f59e5c _public_6f59e5c
#define public_6f59e66 _public_6f59e66
#define public_6f59e8f _public_6f59e8f
#define public_6f59ea2 _public_6f59ea2
#define public_6f59eaf _public_6f59eaf
#define public_6f59eb1 _public_6f59eb1
#define public_6f59eb4 _public_6f59eb4
#define public_6f59eb7 _public_6f59eb7
#define public_6f59ebe _public_6f59ebe

PROC_DECLARE(0x6f59b10, internal_6f59b10, public_6f59b10);
extern "C" NAKED register_t __cdecl internal_6f59b10()
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
        call public_6f46690
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f59b52
        mov eax, dword ptr ds : [esi+8]
        public_6f59b34 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f59bd7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f59be5
        public_6f59b52 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f59b5d
        mov eax, edx
        jmp public_6f59b34
        public_6f59b5d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        jne public_6f59b71
        public_6f59b66 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        je public_6f59b66
        public_6f59b71 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f59b34
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f59b8d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f59ba4
        public_6f59b8d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f59ba4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f59bb1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f59bbf
        public_6f59bb1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f59bbc
        mov dword ptr ds : [edx], ecx
        jmp public_6f59bbf
        public_6f59bbc : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f59bbf : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x28]
        mov dl, byte ptr ds : [ecx+0x28]
        mov byte ptr ds : [ecx+0x28], bl
        mov byte ptr ds : [esi+0x28], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f59c42
        public_6f59bd7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f59be2
        mov dword ptr ds : [ecx], eax
        jmp public_6f59be5
        public_6f59be2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f59be5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f59c13
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f59bfa
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f59c10
        public_6f59bfa : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        mov edx, eax
        jne public_6f59c10
        public_6f59c05 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        je public_6f59c05
        public_6f59c10 : nop
        mov dword ptr ss : [ebp], edx
        public_6f59c13 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f59c42
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f59c27
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f59c3f
        public_6f59c27 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        mov edx, eax
        jne public_6f59c3f
        public_6f59c33 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        je public_6f59c33
        public_6f59c3f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f59c42 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x28]
        mov bl, 1
        cmp cl, bl
        jne public_6f59ebe
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6f59eb7
        nop 
        public_6f59c60 : nop
        cmp byte ptr ds : [eax+0x28], bl
        jne public_6f59eb7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f59d1f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6f59ccb
        mov byte ptr ds : [ecx+0x28], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x28], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f59c9f
        mov dword ptr ds : [esi+4], ecx
        public_6f59c9f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f59cb2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f59cc0
        public_6f59cb2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f59cbd
        mov dword ptr ds : [esi], edx
        jmp public_6f59cc0
        public_6f59cbd : nop
        mov dword ptr ds : [esi+8], edx
        public_6f59cc0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f59ccb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6f59cde
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        je public_6f59d89
        public_6f59cde : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6f59dbc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x28], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x28], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f59d05
        mov dword ptr ds : [esi+4], ecx
        public_6f59d05 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f59da1
        mov dword ptr ds : [esi+4], edx
        jmp public_6f59db0
        public_6f59d1f : nop
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6f59d72
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f59d45
        mov dword ptr ds : [esi+4], ecx
        public_6f59d45 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f59d58
        mov dword ptr ds : [esi+4], edx
        jmp public_6f59d67
        public_6f59d58 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f59d65
        mov dword ptr ds : [esi+8], edx
        jmp public_6f59d67
        public_6f59d65 : nop
        mov dword ptr ds : [esi], edx
        public_6f59d67 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f59d72 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6f59e18
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6f59e18
        public_6f59d89 : nop
        mov byte ptr ds : [ecx+0x28], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f59c60
        jmp public_6f59eb7
        public_6f59da1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f59dae
        mov dword ptr ds : [esi+8], edx
        jmp public_6f59db0
        public_6f59dae : nop
        mov dword ptr ds : [esi], edx
        public_6f59db0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f59dbc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x28]
        mov byte ptr ds : [ecx+0x28], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x28], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f59de6
        mov dword ptr ds : [esi+4], ecx
        public_6f59de6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f59dfe
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f59eb4
        public_6f59dfe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f59e0e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f59eb4
        public_6f59e0e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f59eb4
        public_6f59e18 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6f59e66
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x28], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x28], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f59e3b
        mov dword ptr ds : [esi+4], ecx
        public_6f59e3b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f59e4e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f59e5c
        public_6f59e4e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f59e59
        mov dword ptr ds : [esi], edx
        jmp public_6f59e5c
        public_6f59e59 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f59e5c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f59e66 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x28]
        mov byte ptr ds : [ecx+0x28], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x28], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f59e8f
        mov dword ptr ds : [esi+4], ecx
        public_6f59e8f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f59ea2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f59eb1
        public_6f59ea2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f59eaf
        mov dword ptr ds : [esi+8], edx
        jmp public_6f59eb1
        public_6f59eaf : nop
        mov dword ptr ds : [esi], edx
        public_6f59eb1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f59eb4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f59eb7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x28], bl
        public_6f59ebe : nop
        lea ecx, ds:[esi+0xC]
        call public_6f592d0
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
        UNREACHABLE_TRAP(0x6f59b10)
    }
}

#undef public_6f59b34
#undef public_6f59b52
#undef public_6f59b5d
#undef public_6f59b66
#undef public_6f59b71
#undef public_6f59b8d
#undef public_6f59ba4
#undef public_6f59bb1
#undef public_6f59bbc
#undef public_6f59bbf
#undef public_6f59bd7
#undef public_6f59be2
#undef public_6f59be5
#undef public_6f59bfa
#undef public_6f59c05
#undef public_6f59c10
#undef public_6f59c13
#undef public_6f59c27
#undef public_6f59c33
#undef public_6f59c3f
#undef public_6f59c42
#undef public_6f59c60
#undef public_6f59c9f
#undef public_6f59cb2
#undef public_6f59cbd
#undef public_6f59cc0
#undef public_6f59ccb
#undef public_6f59cde
#undef public_6f59d05
#undef public_6f59d1f
#undef public_6f59d45
#undef public_6f59d58
#undef public_6f59d65
#undef public_6f59d67
#undef public_6f59d72
#undef public_6f59d89
#undef public_6f59da1
#undef public_6f59dae
#undef public_6f59db0
#undef public_6f59dbc
#undef public_6f59de6
#undef public_6f59dfe
#undef public_6f59e0e
#undef public_6f59e18
#undef public_6f59e3b
#undef public_6f59e4e
#undef public_6f59e59
#undef public_6f59e5c
#undef public_6f59e66
#undef public_6f59e8f
#undef public_6f59ea2
#undef public_6f59eaf
#undef public_6f59eb1
#undef public_6f59eb4
#undef public_6f59eb7
#undef public_6f59ebe
