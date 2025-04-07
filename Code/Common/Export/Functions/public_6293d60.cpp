#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62858c0);
CLANG_FORWARD_PROC_SYMBOL(public_62858e0);

#define public_6293d88 _public_6293d88

PROC_DECLARE(0x6293d60, internal_6293d60, public_6293d60);
extern "C" NAKED register_t __cdecl internal_6293d60()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6293d88
        push eax
        call public_62858c0
        mov ecx, dword ptr ss : [esp+0xC]
        add esp, 4
        cmp al, cl
        je public_6293d88
        mov eax, dword ptr ds : [esi+4]
        push ecx
        push eax
        call public_62858e0
        add esp, 8
        public_6293d88 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6293d60)
    }
}

#undef public_6293d88
