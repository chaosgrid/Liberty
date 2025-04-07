#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401dd0);
CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_471640);
CLANG_FORWARD_PROC_SYMBOL(public_535b80);
CLANG_FORWARD_PROC_SYMBOL(public_535dd0);
CLANG_FORWARD_PROC_SYMBOL(public_59f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_535ba0 _public_535ba0
#define public_535bb5 _public_535bb5
#define public_535bb8 _public_535bb8
#define public_535bbc _public_535bbc
#define public_535c1d _public_535c1d
#define public_535c35 _public_535c35
#define public_535c3f _public_535c3f
#define public_535c43 _public_535c43
#define public_535c51 _public_535c51
#define public_535c8f _public_535c8f
#define public_535c9e _public_535c9e
#define public_535cbf _public_535cbf
#define public_535ce0 _public_535ce0
#define public_535cee _public_535cee
#define public_535d0d _public_535d0d
#define public_535d19 _public_535d19
#define public_535d35 _public_535d35
#define public_535d50 _public_535d50
#define public_535d59 _public_535d59
#define public_535d7c _public_535d7c

PROC_DECLARE(0x535b80, internal_535b80, public_535b80);
extern "C" NAKED register_t __cdecl internal_535b80()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_535bbc
        lea esp, ss:[esp]
        public_535ba0 : nop
        mov ax, word ptr ds : [ebx]
        cmp ax, word ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_535bb5
        mov ebp, dword ptr ss : [ebp]
        jmp public_535bb8
        public_535bb5 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_535bb8 : nop
        cmp ebp, edx
        jne public_535ba0
        public_535bbc : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_535d35
        push 0
        push esi
        mov ecx, edi
        call public_471640
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_59f7e0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_535c1d
        cmp ebp, dword ptr ds : [edi+8]
        jne public_535c1d
        mov ax, word ptr ds : [ebx]
        cmp ax, word ptr ds : [esi+0xC]
        jb public_535c1d
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_535c43
        mov dword ptr ds : [eax+8], ebx
        jmp public_535c43
        public_535c1d : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_535c35
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_535c3f
        public_535c35 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_535c3f
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_535c3f : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_535c43 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_535d19
        public_535c51 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        jne public_535d19
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_535cbf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_535c8f
        mov byte ptr ds : [eax+0x18], 1
        mov byte ptr ds : [ecx+0x18], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_535d0d
        public_535c8f : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_535c9e
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_535c9e : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x18], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x18], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_535d0d
        public_535cbf : nop
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_535ce0
        mov byte ptr ds : [eax+0x18], 1
        mov byte ptr ds : [ecx+0x18], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x18], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_535d0d
        public_535ce0 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_535cee
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_535cee : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x18], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_535d0d : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_535c51
        public_535d19 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x18], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_535d35 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_535d50
        cmp esi, dword ptr ds : [ecx]
        je public_535d59
        lea ecx, ss:[esp+0x10]
        call public_401dd0
        mov edx, dword ptr ss : [esp+0x10]
        public_535d50 : nop
        mov ax, word ptr ds : [edx+0xC]
        cmp ax, word ptr ds : [ebx]
        jae public_535d7c
        public_535d59 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_535dd0
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_535d7c : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x535b80)
    }
}

#undef public_535ba0
#undef public_535bb5
#undef public_535bb8
#undef public_535bbc
#undef public_535c1d
#undef public_535c35
#undef public_535c3f
#undef public_535c43
#undef public_535c51
#undef public_535c8f
#undef public_535c9e
#undef public_535cbf
#undef public_535ce0
#undef public_535cee
#undef public_535d0d
#undef public_535d19
#undef public_535d35
#undef public_535d50
#undef public_535d59
#undef public_535d7c
