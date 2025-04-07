#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f587d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6f58810 _public_6f58810
#define public_6f58818 _public_6f58818
#define public_6f58825 _public_6f58825
#define public_6f58829 _public_6f58829
#define public_6f58842 _public_6f58842
#define public_6f5884d _public_6f5884d
#define public_6f5885c _public_6f5885c
#define public_6f58862 _public_6f58862

PROC_DECLARE(0x6f587d0, internal_6f587d0, public_6f587d0);
extern "C" NAKED register_t __cdecl internal_6f587d0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_6fd0dc8
        xor bl, bl
        call public_6f7b0f0
        mov ecx, dword ptr ds : [public_6fd0dcc]
        mov eax, dword ptr ss : [esp+8]
        cmp eax, ecx
        je public_6f58862
        mov ebx, dword ptr ds : [eax+0x18]
        mov esi, dword ptr ds : [eax+0x14]
        cmp esi, ebx
        mov cl, 1
        je public_6f5885c
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+8]
        nop 
        public_6f58810 : nop
        mov ecx, ebp
        cmp ecx, eax
        je public_6f58829
        mov edx, dword ptr ds : [esi]
        public_6f58818 : nop
        cmp dword ptr ds : [ecx], edx
        je public_6f58825
        add ecx, 4
        cmp ecx, eax
        jne public_6f58818
        jmp public_6f58829
        public_6f58825 : nop
        cmp ecx, eax
        jne public_6f5884d
        public_6f58829 : nop
        push esi
        push 1
        push eax
        mov ecx, edi
        call public_6f937c0
        mov ebp, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+8]
        mov ecx, ebp
        cmp ecx, eax
        je public_6f5884d
        mov edx, dword ptr ds : [esi]
        public_6f58842 : nop
        cmp dword ptr ds : [ecx], edx
        je public_6f5884d
        add ecx, 4
        cmp ecx, eax
        jne public_6f58842
        public_6f5884d : nop
        add esi, 4
        cmp esi, ebx
        jne public_6f58810
        pop edi
        pop ebp
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 
        public_6f5885c : nop
        pop esi
        mov al, cl
        pop ebx
        pop ecx
        ret 
        public_6f58862 : nop
        pop esi
        mov al, bl
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f587d0)
    }
}

#undef public_6f58810
#undef public_6f58818
#undef public_6f58825
#undef public_6f58829
#undef public_6f58842
#undef public_6f5884d
#undef public_6f5885c
#undef public_6f58862
