#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63457f0);

#define public_634580b _public_634580b

PROC_DECLARE(0x63457f0, internal_63457f0, public_63457f0);
extern "C" NAKED register_t __cdecl internal_63457f0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0xC], 0
        mov edx, dword ptr ds : [ecx+0x1C]
        test edx, edx
        je public_634580b
        mov dword ptr ds : [edx+0xC], eax
        public_634580b : nop
        mov dword ptr ds : [ecx+0x1C], eax
        mov dword ptr ds : [eax+0x10], ecx
        ret 4
        UNREACHABLE_TRAP(0x63457f0)
    }
}

#undef public_634580b
