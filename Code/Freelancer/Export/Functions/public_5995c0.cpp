#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5995c0);

#define public_5995d4 _public_5995d4
#define public_5995e3 _public_5995e3

PROC_DECLARE(0x5995c0, internal_5995c0, public_5995c0);
extern "C" NAKED register_t __cdecl internal_5995c0()
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
        je public_5995e3
        push ebx
        public_5995d4 : nop
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ds : [esi], ebx
        add edx, 4
        add esi, 4
        cmp edx, edi
        jne public_5995d4
        pop ebx
        public_5995e3 : nop
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x5995c0)
    }
}

#undef public_5995d4
#undef public_5995e3
