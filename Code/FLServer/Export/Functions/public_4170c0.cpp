#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4170c0);

#define public_4170d6 _public_4170d6

PROC_DECLARE(0x4170c0, internal_4170c0, public_4170c0);
extern "C" NAKED register_t __cdecl internal_4170c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_4170d6
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        public_4170d6 : nop
        ret 
        UNREACHABLE_TRAP(0x4170c0)
    }
}

#undef public_4170d6
