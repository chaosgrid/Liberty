#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6211f50);

#define public_6211f72 _public_6211f72

PROC_DECLARE(0x6211f50, internal_6211f50, public_6211f50);
extern "C" NAKED register_t __cdecl internal_6211f50()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1506EB6C
        jne public_6211f72
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax+0x68]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [eax+0x6C]
        mov dword ptr ds : [ecx+4], eax
        xor eax, eax
        ret 0xC
        public_6211f72 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6211f50)
    }
}

#undef public_6211f72
