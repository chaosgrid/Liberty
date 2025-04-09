#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59f7e0);

#define public_59f7fc _public_59f7fc

PROC_DECLARE(0x59f7e0, internal_59f7e0, public_59f7e0);
extern "C" NAKED register_t __cdecl internal_59f7e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_59f7fc
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        public_59f7fc : nop
        ret 
        UNREACHABLE_TRAP(0x59f7e0)
    }
}

#undef public_59f7fc
