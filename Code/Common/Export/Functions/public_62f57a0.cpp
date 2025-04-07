#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f54c0);

#define public_62f57cd _public_62f57cd

PROC_DECLARE(0x62f57a0, internal_62f57a0, public_62f57a0);
extern "C" NAKED register_t __cdecl internal_62f57a0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62f54c0
        fld dword ptr ds : [edi+0x88]
        fcomp dword ptr ds : [esi+0x88]
        fnstsw ax
        test ah, 0x44
        jnp public_62f57cd
        mov eax, dword ptr ds : [edi+0x88]
        mov dword ptr ds : [esi+0x88], eax
        public_62f57cd : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f57a0)
    }
}

#undef public_62f57cd
