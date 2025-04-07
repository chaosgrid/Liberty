#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218b60);

#define public_6218b82 _public_6218b82

PROC_DECLARE(0x6218b60, internal_6218b60, public_6218b60);
extern "C" NAKED register_t __cdecl internal_6218b60()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1506EB6C
        jne public_6218b82
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax+0x68]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [eax+0x6C]
        mov dword ptr ds : [ecx+4], eax
        xor eax, eax
        ret 0xC
        public_6218b82 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6218b60)
    }
}

#undef public_6218b82
