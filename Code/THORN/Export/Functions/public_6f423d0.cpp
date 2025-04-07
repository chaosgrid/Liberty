#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f423d0);

#define public_6f423ed _public_6f423ed

PROC_DECLARE(0x6f423d0, internal_6f423d0, public_6f423d0);
extern "C" NAKED register_t __cdecl internal_6f423d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xE8]
        test eax, eax
        push edi
        je public_6f423ed
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        lea edx, ds:[esi+0xF0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        public_6f423ed : nop
        mov edi, dword ptr ss : [esp+0xC]
        add esi, 0xF0
        mov ecx, 8
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f423d0)
    }
}

#undef public_6f423ed
