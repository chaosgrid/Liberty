#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1e9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1ffe0);
CLANG_FORWARD_PROC_SYMBOL(public_6f224f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ef20);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f1ea10 _public_6f1ea10
#define public_6f1ea23 _public_6f1ea23
#define public_6f1ea26 _public_6f1ea26
#define public_6f1ea2a _public_6f1ea2a
#define public_6f1ea89 _public_6f1ea89
#define public_6f1eaa1 _public_6f1eaa1
#define public_6f1eaab _public_6f1eaab
#define public_6f1eaaf _public_6f1eaaf
#define public_6f1eac0 _public_6f1eac0
#define public_6f1eafb _public_6f1eafb
#define public_6f1eb0a _public_6f1eb0a
#define public_6f1eb2b _public_6f1eb2b
#define public_6f1eb4c _public_6f1eb4c
#define public_6f1eb5a _public_6f1eb5a
#define public_6f1eb79 _public_6f1eb79
#define public_6f1eb85 _public_6f1eb85
#define public_6f1eba1 _public_6f1eba1
#define public_6f1ebbc _public_6f1ebbc
#define public_6f1ebc3 _public_6f1ebc3
#define public_6f1ebe6 _public_6f1ebe6

PROC_DECLARE(0x6f1e9f0, internal_6f1e9f0, public_6f1e9f0);
extern "C" NAKED register_t __cdecl internal_6f1e9f0()
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
        je public_6f1ea2a
        lea esp, ss:[esp]
        public_6f1ea10 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f1ea23
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f1ea26
        public_6f1ea23 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f1ea26 : nop
        cmp ebp, edx
        jne public_6f1ea10
        public_6f1ea2a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f1eba1
        push 0
        push esi
        mov ecx, edi
        call public_6f6a2c0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f224f0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f1ea89
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f1ea89
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f1ea89
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f1eaaf
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f1eaaf
        public_6f1ea89 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f1eaa1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f1eaab
        public_6f1eaa1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f1eaab
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f1eaab : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f1eaaf : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f1eb85
        lea ecx, ds:[ecx]
        public_6f1eac0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        jne public_6f1eb85
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f1eb2b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f1eafb
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f1eb79
        public_6f1eafb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f1eb0a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f1eb0a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x1C], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f1eb79
        public_6f1eb2b : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f1eb4c
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x1C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f1eb79
        public_6f1eb4c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f1eb5a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f1eb5a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f1eb79 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f1eac0
        public_6f1eb85 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x1C], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f1eba1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f1ebbc
        cmp esi, dword ptr ds : [ecx]
        je public_6f1ebc3
        lea ecx, ss:[esp+0x10]
        call public_6f2ef20
        mov edx, dword ptr ss : [esp+0x10]
        public_6f1ebbc : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f1ebe6
        public_6f1ebc3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f1ffe0
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
        public_6f1ebe6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f1e9f0)
    }
}

#undef public_6f1ea10
#undef public_6f1ea23
#undef public_6f1ea26
#undef public_6f1ea2a
#undef public_6f1ea89
#undef public_6f1eaa1
#undef public_6f1eaab
#undef public_6f1eaaf
#undef public_6f1eac0
#undef public_6f1eafb
#undef public_6f1eb0a
#undef public_6f1eb2b
#undef public_6f1eb4c
#undef public_6f1eb5a
#undef public_6f1eb79
#undef public_6f1eb85
#undef public_6f1eba1
#undef public_6f1ebbc
#undef public_6f1ebc3
#undef public_6f1ebe6
