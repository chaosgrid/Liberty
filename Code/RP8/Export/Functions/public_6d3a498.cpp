#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d3a4c6 _public_6d3a4c6
#define public_6d3a4e1 _public_6d3a4e1
#define public_6d3a4f8 _public_6d3a4f8

PROC_DECLARE(0x6d3a498, internal_6d3a498, public_6d3a498);
extern "C" NAKED register_t __cdecl internal_6d3a498()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1050]
        imul eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+0x1054]
        imul edx, dword ptr ss : [esp+8]
        add eax, edx
        add eax, dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ds : [ecx+0x1058]
        add edx, eax
        cmp eax, edx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        jae public_6d3a4e1
        push esi
        push edi
        public_6d3a4c6 : nop
        movzx esi, byte ptr ds : [eax]
        add esi, 3
        shl esi, 4
        add esi, ecx
        mov edi, ebx
        movsd 
        movsd 
        movsd 
        inc eax
        add ebx, 0x10
        cmp eax, edx
        movsd 
        jb public_6d3a4c6
        pop edi
        pop esi
        public_6d3a4e1 : nop
        cmp dword ptr ds : [ecx+0x10], 0
        je public_6d3a4f8
        mov eax, dword ptr ds : [ecx+0x1058]
        shl eax, 4
        sub ebx, eax
        push ebx
        call public_6d37e98
        public_6d3a4f8 : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d3a498)
    }
}

#undef public_6d3a4c6
#undef public_6d3a4e1
#undef public_6d3a4f8
