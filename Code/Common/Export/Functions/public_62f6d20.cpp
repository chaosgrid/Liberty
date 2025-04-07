#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f6200);

#define public_62f6d4d _public_62f6d4d

PROC_DECLARE(0x62f6d20, internal_62f6d20, public_62f6d20);
extern "C" NAKED register_t __cdecl internal_62f6d20()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62f6200
        fld dword ptr ds : [edi+0xA0]
        fcomp dword ptr ds : [esi+0xA0]
        fnstsw ax
        test ah, 0x44
        jnp public_62f6d4d
        mov eax, dword ptr ds : [edi+0xA0]
        mov dword ptr ds : [esi+0xA0], eax
        public_62f6d4d : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f6d20)
    }
}

#undef public_62f6d4d
