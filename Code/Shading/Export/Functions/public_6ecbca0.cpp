#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecbca0);

#define public_6ecbcbc _public_6ecbcbc

PROC_DECLARE(0x6ecbca0, internal_6ecbca0, public_6ecbca0);
extern "C" NAKED register_t __cdecl internal_6ecbca0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6ecbcbc
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        public_6ecbcbc : nop
        ret 
        UNREACHABLE_TRAP(0x6ecbca0)
    }
}

#undef public_6ecbcbc
