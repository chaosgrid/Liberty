#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636d020);

PROC_DECLARE(0x636d020, internal_636d020, public_636d020);
extern "C" NAKED register_t __cdecl internal_636d020()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        ret 
        UNREACHABLE_TRAP(0x636d020)
    }
}
