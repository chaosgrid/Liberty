#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3fc2d);
CLANG_FORWARD_PROC_SYMBOL(public_6d41be9);
CLANG_FORWARD_PROC_SYMBOL(public_6d45fa1);
CLANG_FORWARD_PROC_SYMBOL(public_6d464ab);
CLANG_FORWARD_PROC_SYMBOL(public_6d46e61);

#define public_6d3fc5c _public_6d3fc5c
#define public_6d3fc82 _public_6d3fc82
#define public_6d3fcb7 _public_6d3fcb7
#define public_6d3fce3 _public_6d3fce3

PROC_DECLARE(0x6d3fc2d, internal_6d3fc2d, public_6d3fc2d);
extern "C" NAKED register_t __cdecl internal_6d3fc2d()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push 0x3D
        xor ebx, ebx
        pop ecx
        cmp eax, ecx
        mov dword ptr ds : [esi+4], ebx
        je public_6d3fc5c
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+0x14], 0xA
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+0x18], ecx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x1C], eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d3fc5c : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, 0x1A8
        cmp ecx, eax
        je public_6d3fc82
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+0x14], 0x13
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+0x18], eax
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x1C], ecx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d3fc82 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        push 0x6A
        pop ecx
        xor eax, eax
        mov edi, esi
        rep stosd
        push esi
        mov dword ptr ds : [esi], edx
        mov byte ptr ds : [esi+0xC], 1
        call public_6d46e61
        xor eax, eax
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0x14], ebx
        lea edi, ds:[esi+0x90]
        stosd 
        stosd 
        pop ecx
        stosd 
        push 4
        stosd 
        pop ecx
        lea eax, ds:[esi+0xB0]
        pop edi
        public_6d3fcb7 : nop
        mov dword ptr ds : [eax-0x10], ebx
        mov dword ptr ds : [eax], ebx
        add eax, 4
        dec ecx
        jne public_6d3fcb7
        push esi
        call public_6d41be9
        push esi
        call public_6d464ab
        cmp byte ptr ds : [public_6d6d400], 2
        pop ecx
        pop ecx
        jne public_6d3fce3
        call public_6d45fa1
        mov byte ptr ds : [public_6d6d400], al
        public_6d3fce3 : nop
        mov dword ptr ds : [esi+0x10], 0xC8
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d3fc2d)
    }
}

#undef public_6d3fc5c
#undef public_6d3fc82
#undef public_6d3fcb7
#undef public_6d3fce3
