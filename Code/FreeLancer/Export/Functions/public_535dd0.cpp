#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_535dd0);
CLANG_FORWARD_PROC_SYMBOL(public_59f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_535e3b _public_535e3b
#define public_535e4f _public_535e4f
#define public_535e55 _public_535e55
#define public_535e63 _public_535e63
#define public_535ea4 _public_535ea4
#define public_535ebd _public_535ebd
#define public_535ed0 _public_535ed0
#define public_535edb _public_535edb
#define public_535ede _public_535ede
#define public_535ee3 _public_535ee3
#define public_535f0c _public_535f0c
#define public_535f25 _public_535f25
#define public_535f38 _public_535f38
#define public_535f42 _public_535f42
#define public_535f65 _public_535f65
#define public_535f7d _public_535f7d
#define public_535f90 _public_535f90
#define public_535f9d _public_535f9d
#define public_535f9f _public_535f9f
#define public_535fa5 _public_535fa5
#define public_535fce _public_535fce
#define public_535fe1 _public_535fe1
#define public_535fec _public_535fec
#define public_535fef _public_535fef
#define public_535ff1 _public_535ff1
#define public_535ff4 _public_535ff4
#define public_536000 _public_536000

PROC_DECLARE(0x535dd0, internal_535dd0, public_535dd0);
extern "C" NAKED register_t __cdecl internal_535dd0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x1C
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x18], 0
        mov byte ptr ds : [ebx+0x19], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_59f7e0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_535e3b
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_535e3b
        mov cx, word ptr ss : [ebp]
        cmp cx, word ptr ds : [edi+0xC]
        jb public_535e3b
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_535e55
        mov dword ptr ds : [eax+8], ebx
        jmp public_535e55
        public_535e3b : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_535e4f
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_535e55
        public_535e4f : nop
        cmp edi, dword ptr ds : [eax]
        jne public_535e55
        mov dword ptr ds : [eax], ebx
        public_535e55 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_536000
        public_535e63 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_536000
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_535f42
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x18], 0
        jne public_535ea4
        mov byte ptr ds : [ecx+0x18], 1
        mov byte ptr ds : [edx+0x18], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_535ff4
        public_535ea4 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_535ee3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_535ebd
        mov dword ptr ds : [edx+4], eax
        public_535ebd : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_535ed0
        mov dword ptr ds : [edx+4], ecx
        jmp public_535ede
        public_535ed0 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_535edb
        mov dword ptr ds : [edx], ecx
        jmp public_535ede
        public_535edb : nop
        mov dword ptr ds : [edx+8], ecx
        public_535ede : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_535ee3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_535f0c
        mov dword ptr ds : [edi+4], ecx
        public_535f0c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_535f25
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_535ff1
        public_535f25 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_535f38
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_535ff1
        public_535f38 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_535ff1
        public_535f42 : nop
        cmp byte ptr ds : [edx+0x18], 0
        jne public_535f65
        mov byte ptr ds : [ecx+0x18], 1
        mov byte ptr ds : [edx+0x18], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x18], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_535ff4
        public_535f65 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_535fa5
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_535f7d
        mov dword ptr ds : [edx+4], eax
        public_535f7d : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_535f90
        mov dword ptr ds : [edx+4], ecx
        jmp public_535f9f
        public_535f90 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_535f9d
        mov dword ptr ds : [edx+8], ecx
        jmp public_535f9f
        public_535f9d : nop
        mov dword ptr ds : [edx], ecx
        public_535f9f : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_535fa5 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_535fce
        mov dword ptr ds : [edi+4], ecx
        public_535fce : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_535fe1
        mov dword ptr ds : [edi+4], edx
        jmp public_535fef
        public_535fe1 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_535fec
        mov dword ptr ds : [edi], edx
        jmp public_535fef
        public_535fec : nop
        mov dword ptr ds : [edi+8], edx
        public_535fef : nop
        mov dword ptr ds : [edx], ecx
        public_535ff1 : nop
        mov dword ptr ds : [ecx+4], edx
        public_535ff4 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_535e63
        public_536000 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x18], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x535dd0)
    }
}

#undef public_535e3b
#undef public_535e4f
#undef public_535e55
#undef public_535e63
#undef public_535ea4
#undef public_535ebd
#undef public_535ed0
#undef public_535edb
#undef public_535ede
#undef public_535ee3
#undef public_535f0c
#undef public_535f25
#undef public_535f38
#undef public_535f42
#undef public_535f65
#undef public_535f7d
#undef public_535f90
#undef public_535f9d
#undef public_535f9f
#undef public_535fa5
#undef public_535fce
#undef public_535fe1
#undef public_535fec
#undef public_535fef
#undef public_535ff1
#undef public_535ff4
#undef public_536000
