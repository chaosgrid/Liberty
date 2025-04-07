#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63227c0);

#define public_63227db _public_63227db

PROC_DECLARE(0x63227c0, internal_63227c0, public_63227c0);
extern "C" NAKED register_t __cdecl internal_63227c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x14]
        cmp dword ptr ds : [ecx+4], eax
        je public_63227db
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0xC]
        cmp eax, dword ptr ds : [ecx]
        jne public_63227db
        mov eax, 1
        ret 4
        public_63227db : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x63227c0)
    }
}

#undef public_63227db
