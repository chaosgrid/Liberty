#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55e590);

#define public_55e5b2 _public_55e5b2
#define public_55e5d3 _public_55e5d3

PROC_DECLARE(0x55e590, internal_55e590, public_55e590);
extern "C" NAKED register_t __cdecl internal_55e590()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x1C], eax
        mov byte ptr ds : [ecx+0x18], 1
        mov dword ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [ecx+8]
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        mov eax, esi
        cmp eax, esi
        je public_55e5d3
        push ebx
        push ebp
        push edi
        public_55e5b2 : nop
        mov edi, eax
        mov ebp, dword ptr ds : [edi]
        mov ebx, edx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edi, dword ptr ds : [edi+8]
        add eax, 0xC
        add edx, 0xC
        cmp eax, esi
        mov dword ptr ds : [ebx+8], edi
        jne public_55e5b2
        pop edi
        pop ebp
        pop ebx
        public_55e5d3 : nop
        mov dword ptr ds : [ecx+0xC], edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x55e590)
    }
}

#undef public_55e5b2
#undef public_55e5d3
