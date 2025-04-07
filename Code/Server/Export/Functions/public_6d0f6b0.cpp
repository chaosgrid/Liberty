#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f6b0);

#define public_6d0f6cc _public_6d0f6cc

PROC_DECLARE(0x6d0f6b0, internal_6d0f6b0, public_6d0f6b0);
extern "C" NAKED register_t __cdecl internal_6d0f6b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6d0f6cc
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        public_6d0f6cc : nop
        ret 
        UNREACHABLE_TRAP(0x6d0f6b0)
    }
}

#undef public_6d0f6cc
