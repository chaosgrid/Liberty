#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f00610);
CLANG_FORWARD_PROC_SYMBOL(public_6f214c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a140);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a480);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f4a162 _public_6f4a162
#define public_6f4a177 _public_6f4a177
#define public_6f4a17a _public_6f4a17a
#define public_6f4a17e _public_6f4a17e
#define public_6f4a1dd _public_6f4a1dd
#define public_6f4a1f5 _public_6f4a1f5
#define public_6f4a1ff _public_6f4a1ff
#define public_6f4a203 _public_6f4a203
#define public_6f4a211 _public_6f4a211
#define public_6f4a24f _public_6f4a24f
#define public_6f4a25e _public_6f4a25e
#define public_6f4a27f _public_6f4a27f
#define public_6f4a2a0 _public_6f4a2a0
#define public_6f4a2ae _public_6f4a2ae
#define public_6f4a2cd _public_6f4a2cd
#define public_6f4a2d9 _public_6f4a2d9
#define public_6f4a2f5 _public_6f4a2f5
#define public_6f4a310 _public_6f4a310
#define public_6f4a317 _public_6f4a317
#define public_6f4a33a _public_6f4a33a

PROC_DECLARE(0x6f4a140, internal_6f4a140, public_6f4a140);
extern "C" NAKED register_t __cdecl internal_6f4a140()
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
        je public_6f4a17e
        mov al, byte ptr ds : [ebx]
        mov byte ptr ss : [esp+0x1C], al
        public_6f4a162 : nop
        mov al, byte ptr ss : [esp+0x1C]
        cmp al, byte ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f4a177
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f4a17a
        public_6f4a177 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f4a17a : nop
        cmp ebp, edx
        jne public_6f4a162
        public_6f4a17e : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f4a2f5
        push 0
        push esi
        mov ecx, edi
        call public_6f214c0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f305b0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f4a1dd
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f4a1dd
        mov al, byte ptr ds : [ebx]
        cmp al, byte ptr ds : [esi+0xC]
        jb public_6f4a1dd
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f4a203
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f4a203
        public_6f4a1dd : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f4a1f5
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4a1ff
        public_6f4a1f5 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f4a1ff
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f4a1ff : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f4a203 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f4a2d9
        public_6f4a211 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_6f4a2d9
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f4a27f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6f4a24f
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f4a2cd
        public_6f4a24f : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f4a25e
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f4a25e : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f4a2cd
        public_6f4a27f : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6f4a2a0
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f4a2cd
        public_6f4a2a0 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f4a2ae
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f4a2ae : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f4a2cd : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f4a211
        public_6f4a2d9 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f4a2f5 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f4a310
        cmp esi, dword ptr ds : [ecx]
        je public_6f4a317
        lea ecx, ss:[esp+0x10]
        call public_6f00610
        mov edx, dword ptr ss : [esp+0x10]
        public_6f4a310 : nop
        mov al, byte ptr ds : [edx+0xC]
        cmp al, byte ptr ds : [ebx]
        jae public_6f4a33a
        public_6f4a317 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f4a480
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
        public_6f4a33a : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f4a140)
    }
}

#undef public_6f4a162
#undef public_6f4a177
#undef public_6f4a17a
#undef public_6f4a17e
#undef public_6f4a1dd
#undef public_6f4a1f5
#undef public_6f4a1ff
#undef public_6f4a203
#undef public_6f4a211
#undef public_6f4a24f
#undef public_6f4a25e
#undef public_6f4a27f
#undef public_6f4a2a0
#undef public_6f4a2ae
#undef public_6f4a2cd
#undef public_6f4a2d9
#undef public_6f4a2f5
#undef public_6f4a310
#undef public_6f4a317
#undef public_6f4a33a
