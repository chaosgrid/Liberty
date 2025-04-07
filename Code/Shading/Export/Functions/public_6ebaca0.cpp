#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ebacc2 _public_6ebacc2
#define public_6ebace2 _public_6ebace2
#define public_6ebace6 _public_6ebace6
#define public_6ebaceb _public_6ebaceb
#define public_6ebad8d _public_6ebad8d
#define public_6ebada4 _public_6ebada4
#define public_6ebadbc _public_6ebadbc
#define public_6ebadc3 _public_6ebadc3
#define public_6ebadd5 _public_6ebadd5
#define public_6ebade7 _public_6ebade7

PROC_DECLARE(0x6ebaca0, internal_6ebaca0, public_6ebaca0);
extern "C" NAKED register_t __cdecl internal_6ebaca0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp]
        push esi
        xor ebx, ebx
        xor ecx, ecx
        cmp eax, 0x14
        push edi
        jne public_6ebadd5
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [ebp+4]
        public_6ebacc2 : nop
        mov dl, byte ptr ds : [esi]
        mov al, dl
        cmp dl, byte ptr ds : [edi]
        jne public_6ebace6
        cmp al, bl
        je public_6ebace2
        mov dl, byte ptr ds : [esi+1]
        mov al, dl
        cmp dl, byte ptr ds : [edi+1]
        jne public_6ebace6
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_6ebacc2
        public_6ebace2 : nop
        xor eax, eax
        jmp public_6ebaceb
        public_6ebace6 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ebaceb : nop
        cmp eax, ebx
        jne public_6ebadd5
        push 0x90
        call public_6ed0c5c
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_6ebadc3
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov byte ptr ds : [esi+0x64], bl
        mov byte ptr ds : [esi+0x65], bl
        lea edx, ds:[esi+0x20]
        xor eax, eax
        mov ecx, 0x11
        mov edi, edx
        rep stosd
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x78], 2
        mov byte ptr ds : [esi+0x7C], 1
        mov byte ptr ds : [esi+0x7D], 1
        lea eax, ds:[esi+0x84]
        mov dword ptr ds : [eax], offset public_6ed23ac
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6ed2338
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov dword ptr ds : [esi+0x80], ecx
        jne public_6ebadbc
        mov dword ptr ds : [esi+0x80], eax
        public_6ebad8d : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x58]
        mov edi, eax
        cmp edi, ebx
        je public_6ebade7
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_6ebada4
        mov dword ptr ds : [eax], ebx
        public_6ebada4 : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x54]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6ebadbc : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_6ebad8d
        public_6ebadc3 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], ebx
        mov eax, 0xFFFFFFFC
        pop ebx
        ret 0xC
        public_6ebadd5 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ecx
        pop ebx
        ret 0xC
        public_6ebade7 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ebaca0)
    }
}

#undef public_6ebacc2
#undef public_6ebace2
#undef public_6ebace6
#undef public_6ebaceb
#undef public_6ebad8d
#undef public_6ebada4
#undef public_6ebadbc
#undef public_6ebadc3
#undef public_6ebadd5
#undef public_6ebade7
