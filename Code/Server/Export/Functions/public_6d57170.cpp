#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d57170);

#define public_6d57180 _public_6d57180
#define public_6d57195 _public_6d57195

PROC_DECLARE(0x6d57170, internal_6d57170, public_6d57170);
extern "C" NAKED register_t __cdecl internal_6d57170()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        mov eax, esi
        cmp eax, esi
        je public_6d57195
        push edi
        mov edi, edi
        public_6d57180 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], edi
        add eax, 8
        add edx, 8
        cmp eax, esi
        jne public_6d57180
        pop edi
        public_6d57195 : nop
        mov dword ptr ds : [ecx+8], edx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d57170)
    }
}

#undef public_6d57180
#undef public_6d57195
