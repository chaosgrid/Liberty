#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f36ef0);

#define public_6f36f0c _public_6f36f0c

PROC_DECLARE(0x6f36ef0, internal_6f36ef0, public_6f36ef0);
extern "C" NAKED register_t __cdecl internal_6f36ef0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f36f0c
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        public_6f36f0c : nop
        ret 
        UNREACHABLE_TRAP(0x6f36ef0)
    }
}

#undef public_6f36f0c
