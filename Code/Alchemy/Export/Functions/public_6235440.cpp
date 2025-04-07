#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235440);

#define public_6235462 _public_6235462

PROC_DECLARE(0x6235440, internal_6235440, public_6235440);
extern "C" NAKED register_t __cdecl internal_6235440()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1506EB6C
        jne public_6235462
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x68], edx
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0x6C], eax
        xor eax, eax
        ret 0xC
        public_6235462 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6235440)
    }
}

#undef public_6235462
