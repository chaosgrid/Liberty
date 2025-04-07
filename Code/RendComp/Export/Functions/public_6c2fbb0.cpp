#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c22170);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a320);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a340);
CLANG_FORWARD_PROC_SYMBOL(public_6c2fbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6c30250);
CLANG_FORWARD_PROC_SYMBOL(public_6c307f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c349f0);

#define public_6c2fbd0 _public_6c2fbd0
#define public_6c2fbe3 _public_6c2fbe3
#define public_6c2fbe6 _public_6c2fbe6
#define public_6c2fbea _public_6c2fbea
#define public_6c2fc49 _public_6c2fc49
#define public_6c2fc61 _public_6c2fc61
#define public_6c2fc6b _public_6c2fc6b
#define public_6c2fc6f _public_6c2fc6f
#define public_6c2fc80 _public_6c2fc80
#define public_6c2fcbb _public_6c2fcbb
#define public_6c2fcca _public_6c2fcca
#define public_6c2fceb _public_6c2fceb
#define public_6c2fd0c _public_6c2fd0c
#define public_6c2fd1a _public_6c2fd1a
#define public_6c2fd39 _public_6c2fd39
#define public_6c2fd45 _public_6c2fd45
#define public_6c2fd61 _public_6c2fd61
#define public_6c2fd7c _public_6c2fd7c
#define public_6c2fd83 _public_6c2fd83
#define public_6c2fda6 _public_6c2fda6

PROC_DECLARE(0x6c2fbb0, internal_6c2fbb0, public_6c2fbb0);
extern "C" NAKED register_t __cdecl internal_6c2fbb0()
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
        je public_6c2fbea
        lea esp, ss:[esp]
        public_6c2fbd0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setl al
        test al, al
        je public_6c2fbe3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6c2fbe6
        public_6c2fbe3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6c2fbe6 : nop
        cmp ebp, edx
        jne public_6c2fbd0
        public_6c2fbea : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6c2fd61
        push 0
        push esi
        mov ecx, edi
        call public_6c2a320
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6c307f0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6c2fc49
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6c2fc49
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_6c2fc49
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6c2fc6f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6c2fc6f
        public_6c2fc49 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6c2fc61
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6c2fc6b
        public_6c2fc61 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6c2fc6b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6c2fc6b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6c2fc6f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6c2fd45
        lea ecx, ds:[ecx]
        public_6c2fc80 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_6c2fd45
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6c2fceb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6c2fcbb
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6c2fd39
        public_6c2fcbb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6c2fcca
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6c349f0
        public_6c2fcca : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6c22170
        jmp public_6c2fd39
        public_6c2fceb : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6c2fd0c
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6c2fd39
        public_6c2fd0c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6c2fd1a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6c22170
        public_6c2fd1a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6c349f0
        public_6c2fd39 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6c2fc80
        public_6c2fd45 : nop
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
        public_6c2fd61 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6c2fd7c
        cmp esi, dword ptr ds : [ecx]
        je public_6c2fd83
        lea ecx, ss:[esp+0x10]
        call public_6c2a340
        mov edx, dword ptr ss : [esp+0x10]
        public_6c2fd7c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jge public_6c2fda6
        public_6c2fd83 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6c30250
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
        public_6c2fda6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6c2fbb0)
    }
}

#undef public_6c2fbd0
#undef public_6c2fbe3
#undef public_6c2fbe6
#undef public_6c2fbea
#undef public_6c2fc49
#undef public_6c2fc61
#undef public_6c2fc6b
#undef public_6c2fc6f
#undef public_6c2fc80
#undef public_6c2fcbb
#undef public_6c2fcca
#undef public_6c2fceb
#undef public_6c2fd0c
#undef public_6c2fd1a
#undef public_6c2fd39
#undef public_6c2fd45
#undef public_6c2fd61
#undef public_6c2fd7c
#undef public_6c2fd83
#undef public_6c2fda6
