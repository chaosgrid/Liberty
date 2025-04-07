#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec3fe0);

#define public_6ec3ff4 _public_6ec3ff4
#define public_6ec4003 _public_6ec4003

PROC_DECLARE(0x6ec3fe0, internal_6ec3fe0, public_6ec3fe0);
extern "C" NAKED register_t __cdecl internal_6ec3fe0()
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
        je public_6ec4003
        push ebx
        public_6ec3ff4 : nop
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ds : [esi], ebx
        add edx, 4
        add esi, 4
        cmp edx, edi
        jne public_6ec3ff4
        pop ebx
        public_6ec4003 : nop
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ec3fe0)
    }
}

#undef public_6ec3ff4
#undef public_6ec4003
