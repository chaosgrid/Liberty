#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f2f0);

#define public_6d0f300 _public_6d0f300
#define public_6d0f321 _public_6d0f321

PROC_DECLARE(0x6d0f2f0, internal_6d0f2f0, public_6d0f2f0);
extern "C" NAKED register_t __cdecl internal_6d0f2f0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        mov eax, esi
        cmp eax, esi
        je public_6d0f321
        push ebx
        push ebp
        push edi
        public_6d0f300 : nop
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
        jne public_6d0f300
        pop edi
        pop ebp
        pop ebx
        public_6d0f321 : nop
        mov dword ptr ds : [ecx+8], edx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d0f2f0)
    }
}

#undef public_6d0f300
#undef public_6d0f321
