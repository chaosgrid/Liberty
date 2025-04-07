#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59dbf0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);

#define public_59b8dc _public_59b8dc

PROC_DECLARE(0x59b8a0, internal_59b8a0, public_59b8a0);
extern "C" NAKED register_t __cdecl internal_59b8a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push eax
        push esi
        call public_59dd00
        push esi
        call public_59dbf0
        mov cl, byte ptr ds : [esi+0x6C]
        mov eax, dword ptr ss : [esp+0x18]
        and cl, 0xFB
        or cl, 3
        add esp, 0xC
        test eax, eax
        mov byte ptr ds : [esi+0x6C], cl
        je public_59b8dc
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x3E4], edx
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x3E8], eax
        public_59b8dc : nop
        mov al, 1
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x59b8a0)
    }
}

#undef public_59b8dc
