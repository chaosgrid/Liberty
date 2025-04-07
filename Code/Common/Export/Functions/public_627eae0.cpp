#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627eae0);
CLANG_FORWARD_PROC_SYMBOL(public_627f3b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f6d0);
CLANG_FORWARD_PROC_SYMBOL(public_627f6f0);
CLANG_FORWARD_PROC_SYMBOL(public_627f810);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_627eb00 _public_627eb00
#define public_627eb13 _public_627eb13
#define public_627eb16 _public_627eb16
#define public_627eb1a _public_627eb1a
#define public_627eb79 _public_627eb79
#define public_627eb91 _public_627eb91
#define public_627eb9b _public_627eb9b
#define public_627eb9f _public_627eb9f
#define public_627ebb0 _public_627ebb0
#define public_627ebeb _public_627ebeb
#define public_627ebfa _public_627ebfa
#define public_627ec1b _public_627ec1b
#define public_627ec3c _public_627ec3c
#define public_627ec4a _public_627ec4a
#define public_627ec69 _public_627ec69
#define public_627ec75 _public_627ec75
#define public_627ec91 _public_627ec91
#define public_627ecac _public_627ecac
#define public_627ecb3 _public_627ecb3
#define public_627ecd6 _public_627ecd6

PROC_DECLARE(0x627eae0, internal_627eae0, public_627eae0);
extern "C" NAKED register_t __cdecl internal_627eae0()
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
        je public_627eb1a
        lea esp, ss:[esp]
        public_627eb00 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setl al
        test al, al
        je public_627eb13
        mov ebp, dword ptr ss : [ebp]
        jmp public_627eb16
        public_627eb13 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_627eb16 : nop
        cmp ebp, edx
        jne public_627eb00
        public_627eb1a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_627ec91
        push 0
        push esi
        mov ecx, edi
        call public_627f6d0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_627f810
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_627eb79
        cmp ebp, dword ptr ds : [edi+8]
        jne public_627eb79
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_627eb79
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_627eb9f
        mov dword ptr ds : [eax+8], ebx
        jmp public_627eb9f
        public_627eb79 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_627eb91
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_627eb9b
        public_627eb91 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_627eb9b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_627eb9b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_627eb9f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_627ec75
        lea ecx, ds:[ecx]
        public_627ebb0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x20]
        test cl, cl
        jne public_627ec75
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_627ec1b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_627ebeb
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_627ec69
        public_627ebeb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_627ebfa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_627ebfa : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_627ec69
        public_627ec1b : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_627ec3c
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_627ec69
        public_627ec3c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_627ec4a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_627ec4a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_627ec69 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_627ebb0
        public_627ec75 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_627ec91 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_627ecac
        cmp esi, dword ptr ds : [ecx]
        je public_627ecb3
        lea ecx, ss:[esp+0x10]
        call public_627f6f0
        mov edx, dword ptr ss : [esp+0x10]
        public_627ecac : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jge public_627ecd6
        public_627ecb3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_627f3b0
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
        public_627ecd6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x627eae0)
    }
}

#undef public_627eb00
#undef public_627eb13
#undef public_627eb16
#undef public_627eb1a
#undef public_627eb79
#undef public_627eb91
#undef public_627eb9b
#undef public_627eb9f
#undef public_627ebb0
#undef public_627ebeb
#undef public_627ebfa
#undef public_627ec1b
#undef public_627ec3c
#undef public_627ec4a
#undef public_627ec69
#undef public_627ec75
#undef public_627ec91
#undef public_627ecac
#undef public_627ecb3
#undef public_627ecd6
