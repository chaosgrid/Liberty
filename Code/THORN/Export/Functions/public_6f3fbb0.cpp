#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3fbb0);

#define public_6f3fbc6 _public_6f3fbc6

PROC_DECLARE(0x6f3fbb0, internal_6f3fbb0, public_6f3fbb0);
extern "C" NAKED register_t __cdecl internal_6f3fbb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f3fbc6
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        public_6f3fbc6 : nop
        ret 
        UNREACHABLE_TRAP(0x6f3fbb0)
    }
}

#undef public_6f3fbc6
