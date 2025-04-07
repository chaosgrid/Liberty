#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63345c0);

PROC_DECLARE(0x63345c0, internal_63345c0, public_63345c0);
extern "C" NAKED register_t __cdecl internal_63345c0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        or edx, 0xFFFFFFFF
        mov dword ptr ds : [eax], offset public_639a0a8
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+0x18], edx
        mov dword ptr ds : [eax+0x1C], ecx
        ret 
        UNREACHABLE_TRAP(0x63345c0)
    }
}
