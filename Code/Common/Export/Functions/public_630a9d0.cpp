#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fd560);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_630a9e0 _public_630a9e0
#define public_630a9e9 _public_630a9e9
#define public_630a9eb _public_630a9eb
#define public_630a9fa _public_630a9fa
#define public_630aa1b _public_630aa1b
#define public_630aa45 _public_630aa45
#define public_630aa47 _public_630aa47
#define public_630aa73 _public_630aa73
#define public_630aa7d _public_630aa7d
#define public_630aa9e _public_630aa9e

PROC_DECLARE(0x630a9d0, internal_630a9d0, public_630a9d0);
extern "C" NAKED register_t __cdecl internal_630a9d0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        xor edx, edx
        xor eax, eax
        nop 
        public_630a9e0 : nop
        test eax, eax
        jne public_630a9e9
        mov eax, dword ptr ds : [edi+4]
        jmp public_630a9eb
        public_630a9e9 : nop
        mov eax, dword ptr ds : [eax]
        public_630a9eb : nop
        test eax, eax
        je public_630a9fa
        mov ecx, dword ptr ds : [eax+8]
        cmp dword ptr ds : [ecx], ebx
        jne public_630a9e0
        mov edx, ecx
        jmp public_630a9e0
        public_630a9fa : nop
        test edx, edx
        je public_630aa1b
        mov cl, byte ptr ss : [esp+0x20]
        mov eax, 1
        cmp cl, al
        jne public_630aa1b
        mov esi, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [esp+0x14]
        add esi, ecx
        pop edi
        mov dword ptr ds : [edx+4], esi
        pop esi
        pop ebx
        ret 
        public_630aa1b : nop
        push 0x10
        call public_62fd560
        add esp, 4
        test eax, eax
        je public_630aa45
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov esi, eax
        jmp public_630aa47
        public_630aa45 : nop
        xor esi, esi
        public_630aa47 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], ecx
        mov al, byte ptr ds : [edi+0xC]
        test al, al
        je public_630aa73
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_630aa73
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edi+0x10], edx
        jmp public_630aa7d
        public_630aa73 : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        public_630aa7d : nop
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], esi
        mov ecx, dword ptr ds : [edi+8]
        test ecx, ecx
        je public_630aa9e
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        public_630aa9e : nop
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x630a9d0)
    }
}

#undef public_630a9e0
#undef public_630a9e9
#undef public_630a9eb
#undef public_630a9fa
#undef public_630aa1b
#undef public_630aa45
#undef public_630aa47
#undef public_630aa73
#undef public_630aa7d
#undef public_630aa9e
