#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d3c800 _public_6d3c800
#define public_6d3c813 _public_6d3c813
#define public_6d3c81d _public_6d3c81d
#define public_6d3c835 _public_6d3c835
#define public_6d3c870 _public_6d3c870
#define public_6d3c8a0 _public_6d3c8a0
#define public_6d3c8b3 _public_6d3c8b3
#define public_6d3c8bd _public_6d3c8bd
#define public_6d3c8c2 _public_6d3c8c2
#define public_6d3c8c4 _public_6d3c8c4
#define public_6d3c8d1 _public_6d3c8d1
#define public_6d3c8e1 _public_6d3c8e1

PROC_DECLARE(0x6d3c7c0, internal_6d3c7c0, public_6d3c7c0);
extern "C" NAKED register_t __cdecl internal_6d3c7c0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx+0x10]
        push ebp
        mov ebp, ecx
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        push esi
        push edi
        mov dword ptr ss : [esp+0x18], 0
        je public_6d3c835
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+0x18], ecx
        mov edx, dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [eax+0xC]
        cmp edx, esi
        mov ecx, dword ptr ds : [ebx+0x10]
        mov edi, dword ptr ds : [eax+0x18]
        je public_6d3c81d
        mov eax, edx
        sub edi, edx
        mov edi, edi
        public_6d3c800 : nop
        mov dx, word ptr ds : [ecx]
        test dx, dx
        je public_6d3c835
        cmp word ptr ds : [eax], dx
        je public_6d3c813
        cmp word ptr ds : [eax+edi], dx
        jne public_6d3c835
        public_6d3c813 : nop
        add eax, 2
        add ecx, 2
        cmp eax, esi
        jne public_6d3c800
        public_6d3c81d : nop
        mov edx, ecx
        mov dword ptr ds : [ebx+0x10], ecx
        sub edx, dword ptr ss : [esp+0x10]
        test edx, 0xFFFFFFFE
        jne public_6d3c870
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x18], eax
        public_6d3c835 : nop
        mov esi, dword ptr ss : [esp+0x18]
        cmp esi, dword ptr ss : [ebp+0xC]
        jb public_6d3c8e1
        mov ecx, dword ptr ds : [ebx+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov edi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, edi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d3c8c2
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d3c8c4
        public_6d3c870 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jae public_6d3c835
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ebx+0x18], edx
        mov esi, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [ecx+0xC]
        cmp esi, edi
        mov edx, dword ptr ds : [ebx+0x10]
        je public_6d3c8bd
        mov ecx, dword ptr ds : [ecx+0x18]
        mov eax, esi
        sub ecx, esi
        lea ecx, ds:[ecx]
        public_6d3c8a0 : nop
        mov si, word ptr ds : [edx]
        test si, si
        je public_6d3c835
        cmp word ptr ds : [eax], si
        je public_6d3c8b3
        cmp word ptr ds : [eax+ecx], si
        jne public_6d3c835
        public_6d3c8b3 : nop
        add eax, 2
        add edx, 2
        cmp eax, edi
        jne public_6d3c8a0
        public_6d3c8bd : nop
        mov dword ptr ds : [ebx+0x10], edx
        jmp public_6d3c870
        public_6d3c8c2 : nop
        mov eax, edx
        public_6d3c8c4 : nop
        test eax, eax
        je public_6d3c8d1
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], esi
        public_6d3c8d1 : nop
        mov edx, dword ptr ss : [ebp+4]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x18], edx
        mov al, 1
        pop ebx
        pop ecx
        ret 4
        public_6d3c8e1 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x10], eax
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d3c7c0)
    }
}

#undef public_6d3c800
#undef public_6d3c813
#undef public_6d3c81d
#undef public_6d3c835
#undef public_6d3c870
#undef public_6d3c8a0
#undef public_6d3c8b3
#undef public_6d3c8bd
#undef public_6d3c8c2
#undef public_6d3c8c4
#undef public_6d3c8d1
#undef public_6d3c8e1
