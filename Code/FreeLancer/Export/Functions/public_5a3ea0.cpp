#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59dbf0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);

#define public_5a3ed4 _public_5a3ed4

PROC_DECLARE(0x5a3ea0, internal_5a3ea0, public_5a3ea0);
extern "C" NAKED register_t __cdecl internal_5a3ea0()
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
        and cl, 0xFB
        or cl, 3
        mov byte ptr ds : [esi+0x6C], cl
        mov ecx, dword ptr ds : [esi+4]
        add esp, 0xC
        test ecx, ecx
        pop esi
        je public_5a3ed4
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[ecx+0x60]
        push eax
        call dword ptr ds : [edx+0x14]
        public_5a3ed4 : nop
        mov al, 1
        ret 8
        UNREACHABLE_TRAP(0x5a3ea0)
    }
}

#undef public_5a3ed4
