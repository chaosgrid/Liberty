#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eca640);

#define public_6eca65e _public_6eca65e
#define public_6eca66a _public_6eca66a

PROC_DECLARE(0x6eca640, internal_6eca640, public_6eca640);
extern "C" NAKED register_t __cdecl internal_6eca640()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp eax, edi
        je public_6eca66a
        test eax, eax
        je public_6eca65e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6eca65e : nop
        test edi, edi
        mov dword ptr ds : [esi], edi
        je public_6eca66a
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_6eca66a : nop
        mov eax, dword ptr ds : [esi]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6eca640)
    }
}

#undef public_6eca65e
#undef public_6eca66a
