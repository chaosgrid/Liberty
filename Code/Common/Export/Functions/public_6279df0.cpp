#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6279df0);

#define public_6279e00 _public_6279e00
#define public_6279e0f _public_6279e0f

PROC_DECLARE(0x6279df0, internal_6279df0, public_6279df0);
extern "C" NAKED register_t __cdecl internal_6279df0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        mov eax, esi
        cmp eax, esi
        je public_6279e0f
        push edi
        mov edi, edi
        public_6279e00 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, esi
        jne public_6279e00
        pop edi
        public_6279e0f : nop
        mov dword ptr ds : [ecx+8], edx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6279df0)
    }
}

#undef public_6279e00
#undef public_6279e0f
