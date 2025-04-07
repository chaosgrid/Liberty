#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b713f0);

#define public_6b7141b _public_6b7141b

PROC_DECLARE(0x6b713f0, internal_6b713f0, public_6b713f0);
extern "C" NAKED register_t __cdecl internal_6b713f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6b7141b
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], edx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0
        public_6b7141b : nop
        ret 4
        UNREACHABLE_TRAP(0x6b713f0)
    }
}

#undef public_6b7141b
