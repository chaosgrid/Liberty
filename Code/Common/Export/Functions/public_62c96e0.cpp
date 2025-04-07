#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e74a0);

#define public_62c9708 _public_62c9708

PROC_DECLARE(0x62c96e0, internal_62c96e0, public_62c96e0);
extern "C" NAKED register_t __cdecl internal_62c96e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, ecx
        je public_62c9708
        mov ecx, dword ptr ds : [esi+0x24]
        add eax, 0xC
        push eax
        add ecx, 0x34
        call public_62e74a0
        test eax, eax
        je public_62c9708
        or byte ptr ds : [esi+0x28], 2
        mov al, 1
        pop esi
        ret 4
        public_62c9708 : nop
        and byte ptr ds : [esi+0x28], 0xFD
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62c96e0)
    }
}

#undef public_62c9708
