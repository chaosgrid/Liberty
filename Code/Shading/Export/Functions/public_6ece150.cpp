#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ece150);

#define public_6ece164 _public_6ece164
#define public_6ece179 _public_6ece179

PROC_DECLARE(0x6ece150, internal_6ece150, public_6ece150);
extern "C" NAKED register_t __cdecl internal_6ece150()
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
        je public_6ece179
        push ebx
        public_6ece164 : nop
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ds : [esi], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], ebx
        add edx, 8
        add esi, 8
        cmp edx, edi
        jne public_6ece164
        pop ebx
        public_6ece179 : nop
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ece150)
    }
}

#undef public_6ece164
#undef public_6ece179
