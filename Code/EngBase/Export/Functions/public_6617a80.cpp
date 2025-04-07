#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6617a80);
CLANG_FORWARD_PROC_SYMBOL(public_6619800);
CLANG_FORWARD_PROC_SYMBOL(public_6619a50);
CLANG_FORWARD_PROC_SYMBOL(public_661a0c0);
CLANG_FORWARD_PROC_SYMBOL(public_661a1e0);
CLANG_FORWARD_PROC_SYMBOL(public_661a290);
CLANG_FORWARD_PROC_SYMBOL(public_661a9b0);

#define public_6617a9c _public_6617a9c
#define public_6617aaf _public_6617aaf
#define public_6617ab2 _public_6617ab2
#define public_6617ab6 _public_6617ab6
#define public_6617b17 _public_6617b17
#define public_6617b2f _public_6617b2f
#define public_6617b39 _public_6617b39
#define public_6617b3d _public_6617b3d
#define public_6617b4b _public_6617b4b
#define public_6617b86 _public_6617b86
#define public_6617b95 _public_6617b95
#define public_6617bb6 _public_6617bb6
#define public_6617bd7 _public_6617bd7
#define public_6617be5 _public_6617be5
#define public_6617c04 _public_6617c04
#define public_6617c10 _public_6617c10
#define public_6617c2c _public_6617c2c
#define public_6617c47 _public_6617c47
#define public_6617c50 _public_6617c50
#define public_6617c73 _public_6617c73

PROC_DECLARE(0x6617a80, internal_6617a80, public_6617a80);
extern "C" NAKED register_t __cdecl internal_6617a80()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov al, 1
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        mov esi, ecx
        mov ebp, dword ptr ds : [ecx+4]
        cmp ebp, edx
        je public_6617ab6
        public_6617a9c : nop
        mov eax, dword ptr ds : [ebx]
        mov esi, ebp
        cmp eax, dword ptr ss : [ebp+0xC]
        setb al
        test al, al
        je public_6617aaf
        mov ebp, dword ptr ss : [ebp]
        jmp public_6617ab2
        public_6617aaf : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6617ab2 : nop
        cmp ebp, edx
        jne public_6617a9c
        public_6617ab6 : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6617c2c
        push 0
        push esi
        mov ecx, edi
        call public_661a290
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_661a9b0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6617b17
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6617b17
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [esi+0xC]
        cmp eax, ecx
        jb public_6617b17
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6617b3d
        mov dword ptr ds : [eax+8], ebx
        jmp public_6617b3d
        public_6617b17 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6617b2f
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6617b39
        public_6617b2f : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6617b39
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6617b39 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6617b3d : nop
        mov edx, dword ptr ds : [edi+4]
        mov esi, ebx
        cmp ebx, dword ptr ds : [edx+4]
        je public_6617c10
        public_6617b4b : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x10]
        test cl, cl
        jne public_6617c10
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6617bb6
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_6617b86
        mov byte ptr ds : [eax+0x10], 1
        mov byte ptr ds : [ecx+0x10], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6617c04
        public_6617b86 : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6617b95
        mov esi, eax
        mov ecx, edi
        push esi
        call public_661a0c0
        public_6617b95 : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x10], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x10], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6619a50
        jmp public_6617c04
        public_6617bb6 : nop
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_6617bd7
        mov byte ptr ds : [eax+0x10], 1
        mov byte ptr ds : [ecx+0x10], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x10], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6617c04
        public_6617bd7 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6617be5
        mov esi, eax
        mov ecx, edi
        push esi
        call public_6619a50
        public_6617be5 : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x10], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [esi+4]
        mov ecx, edi
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_661a0c0
        public_6617c04 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6617b4b
        public_6617c10 : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x10], 1
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6617c2c : nop
        mov edx, esi
        test al, al
        mov dword ptr ss : [esp+0x10], edx
        je public_6617c47
        cmp esi, dword ptr ds : [ecx]
        je public_6617c50
        lea ecx, ss:[esp+0x10]
        call public_661a1e0
        mov edx, dword ptr ss : [esp+0x10]
        public_6617c47 : nop
        mov eax, dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [ebx]
        cmp eax, ecx
        jae public_6617c73
        public_6617c50 : nop
        push ebx
        push esi
        lea ecx, ss:[esp+0x24]
        push ebp
        push ecx
        mov ecx, edi
        call public_6619800
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
        public_6617c73 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6617a80)
    }
}

#undef public_6617a9c
#undef public_6617aaf
#undef public_6617ab2
#undef public_6617ab6
#undef public_6617b17
#undef public_6617b2f
#undef public_6617b39
#undef public_6617b3d
#undef public_6617b4b
#undef public_6617b86
#undef public_6617b95
#undef public_6617bb6
#undef public_6617bd7
#undef public_6617be5
#undef public_6617c04
#undef public_6617c10
#undef public_6617c2c
#undef public_6617c47
#undef public_6617c50
#undef public_6617c73
