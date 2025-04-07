#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d3a443 _public_6d3a443
#define public_6d3a47d _public_6d3a47d
#define public_6d3a494 _public_6d3a494

PROC_DECLARE(0x6d3a411, internal_6d3a411, public_6d3a411);
extern "C" NAKED register_t __cdecl internal_6d3a411()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ds : [ecx+0x1050]
        imul eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x1054]
        imul edx, dword ptr ss : [ebp+0xC]
        add eax, edx
        add eax, dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ds : [ecx+0x1058]
        lea edx, ds:[eax+edx*2]
        mov dword ptr ss : [ebp+8], edx
        cmp eax, edx
        mov edx, dword ptr ss : [ebp+0x10]
        jae public_6d3a47d
        push ebx
        push esi
        push edi
        public_6d3a443 : nop
        xor ebx, ebx
        mov bl, byte ptr ds : [eax]
        mov edi, edx
        add edx, 0x10
        and ebx, 0xFF
        add ebx, 3
        shl ebx, 4
        add ebx, ecx
        mov esi, ebx
        movsd 
        movsd 
        movsd 
        movsd 
        movzx esi, byte ptr ds : [eax+1]
        mov dword ptr ss : [ebp+0x10], esi
        inc eax
        inc eax
        cmp eax, dword ptr ss : [ebp+8]
        fild dword ptr ss : [ebp+0x10]
        fmul dword ptr ds : [public_6d5f5cc]
        fstp dword ptr ds : [edx-4]
        jb public_6d3a443
        pop edi
        pop esi
        pop ebx
        public_6d3a47d : nop
        cmp dword ptr ds : [ecx+0x10], 0
        je public_6d3a494
        mov eax, dword ptr ds : [ecx+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        call public_6d37e98
        public_6d3a494 : nop
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3a411)
    }
}

#undef public_6d3a443
#undef public_6d3a47d
#undef public_6d3a494
