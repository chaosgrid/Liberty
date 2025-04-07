#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218b90);

#define public_6218bb2 _public_6218bb2

PROC_DECLARE(0x6218b90, internal_6218b90, public_6218b90);
extern "C" NAKED register_t __cdecl internal_6218b90()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1506EB6C
        jne public_6218bb2
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x68], edx
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0x6C], eax
        xor eax, eax
        ret 0xC
        public_6218bb2 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6218b90)
    }
}

#undef public_6218bb2
