#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6211f80);

#define public_6211fa2 _public_6211fa2

PROC_DECLARE(0x6211f80, internal_6211f80, public_6211f80);
extern "C" NAKED register_t __cdecl internal_6211f80()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1506EB6C
        jne public_6211fa2
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x68], edx
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0x6C], eax
        xor eax, eax
        ret 0xC
        public_6211fa2 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6211f80)
    }
}

#undef public_6211fa2
