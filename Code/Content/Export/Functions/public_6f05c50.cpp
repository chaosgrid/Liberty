#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f05c60 _public_6f05c60
#define public_6f05c6f _public_6f05c6f
#define public_6f05c8e _public_6f05c8e

PROC_DECLARE(0x6f05c50, internal_6f05c50, public_6f05c50);
extern "C" NAKED register_t __cdecl internal_6f05c50()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f05c8e
        mov edx, dword ptr ss : [esp+8]
        public_6f05c60 : nop
        cmp dword ptr ds : [eax+8], edx
        je public_6f05c6f
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f05c60
        pop esi
        ret 4
        public_6f05c6f : nop
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+0x20], eax
        public_6f05c8e : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f05c50)
    }
}

#undef public_6f05c60
#undef public_6f05c6f
#undef public_6f05c8e
