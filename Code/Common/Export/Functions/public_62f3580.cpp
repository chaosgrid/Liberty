#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f0910);

#define public_62f35a2 _public_62f35a2

PROC_DECLARE(0x62f3580, internal_62f3580, public_62f3580);
extern "C" NAKED register_t __cdecl internal_62f3580()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62f0910
        mov eax, dword ptr ds : [edi+0x9C]
        cmp eax, dword ptr ds : [esi+0x9C]
        je public_62f35a2
        mov dword ptr ds : [esi+0x9C], eax
        public_62f35a2 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f3580)
    }
}

#undef public_62f35a2
