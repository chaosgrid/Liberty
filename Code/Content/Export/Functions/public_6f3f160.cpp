#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f160);
CLANG_FORWARD_PROC_SYMBOL(public_6f41e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f46310);
CLANG_FORWARD_PROC_SYMBOL(public_6f46330);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f3f180 _public_6f3f180
#define public_6f3f193 _public_6f3f193
#define public_6f3f196 _public_6f3f196
#define public_6f3f19a _public_6f3f19a
#define public_6f3f1f9 _public_6f3f1f9
#define public_6f3f211 _public_6f3f211
#define public_6f3f21b _public_6f3f21b
#define public_6f3f21f _public_6f3f21f
#define public_6f3f230 _public_6f3f230
#define public_6f3f26b _public_6f3f26b
#define public_6f3f27a _public_6f3f27a
#define public_6f3f29b _public_6f3f29b
#define public_6f3f2bc _public_6f3f2bc
#define public_6f3f2ca _public_6f3f2ca
#define public_6f3f2e9 _public_6f3f2e9
#define public_6f3f2f5 _public_6f3f2f5
#define public_6f3f311 _public_6f3f311
#define public_6f3f32c _public_6f3f32c
#define public_6f3f333 _public_6f3f333
#define public_6f3f356 _public_6f3f356

PROC_DECLARE(0x6f3f160, internal_6f3f160, public_6f3f160);
extern "C" NAKED register_t __cdecl internal_6f3f160()
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
        je public_6f3f19a
        lea esp, ss:[esp]
        public_6f3f180 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f3f193
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f3f196
        public_6f3f193 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f3f196 : nop
        cmp ebp, edx
        jne public_6f3f180
        public_6f3f19a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f3f311
        push 0
        push esi
        mov ecx, edi
        call public_6f46310
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6ed2dc0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f3f1f9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f3f1f9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f3f1f9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3f21f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f3f21f
        public_6f3f1f9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f3f211
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3f21b
        public_6f3f211 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3f21b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f3f21b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f3f21f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f3f2f5
        lea ecx, ds:[ecx]
        public_6f3f230 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x44]
        test cl, cl
        jne public_6f3f2f5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f3f29b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x44]
        test dl, dl
        jne public_6f3f26b
        mov byte ptr ds : [eax+0x44], 1
        mov byte ptr ds : [ecx+0x44], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f3f2e9
        public_6f3f26b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3f27a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f3f27a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x44], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x44], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f3f2e9
        public_6f3f29b : nop
        mov dl, byte ptr ds : [ecx+0x44]
        test dl, dl
        jne public_6f3f2bc
        mov byte ptr ds : [eax+0x44], 1
        mov byte ptr ds : [ecx+0x44], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x44], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f3f2e9
        public_6f3f2bc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3f2ca
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f3f2ca : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x44], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f3f2e9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f3f230
        public_6f3f2f5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x44], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f3f311 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f3f32c
        cmp esi, dword ptr ds : [ecx]
        je public_6f3f333
        lea ecx, ss:[esp+0x10]
        call public_6f46330
        mov edx, dword ptr ss : [esp+0x10]
        public_6f3f32c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f3f356
        public_6f3f333 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f41e30
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
        public_6f3f356 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f3f160)
    }
}

#undef public_6f3f180
#undef public_6f3f193
#undef public_6f3f196
#undef public_6f3f19a
#undef public_6f3f1f9
#undef public_6f3f211
#undef public_6f3f21b
#undef public_6f3f21f
#undef public_6f3f230
#undef public_6f3f26b
#undef public_6f3f27a
#undef public_6f3f29b
#undef public_6f3f2bc
#undef public_6f3f2ca
#undef public_6f3f2e9
#undef public_6f3f2f5
#undef public_6f3f311
#undef public_6f3f32c
#undef public_6f3f333
#undef public_6f3f356
