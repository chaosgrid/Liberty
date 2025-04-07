#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630c1b0);

#define public_630c1c4 _public_630c1c4
#define public_630c1d9 _public_630c1d9

PROC_DECLARE(0x630c1b0, internal_630c1b0, public_630c1b0);
extern "C" NAKED register_t __cdecl internal_630c1b0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+8]
        cmp edx, edi
        mov esi, eax
        je public_630c1d9
        push ebx
        public_630c1c4 : nop
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ds : [esi], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], ebx
        add edx, 8
        add esi, 8
        cmp edx, edi
        jne public_630c1c4
        pop ebx
        public_630c1d9 : nop
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x630c1b0)
    }
}

#undef public_630c1c4
#undef public_630c1d9
