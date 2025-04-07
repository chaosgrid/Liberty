#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ed80);

PROC_DECLARE(0x6f2ed80, internal_6f2ed80, public_6f2ed80);
extern "C" NAKED register_t __cdecl internal_6f2ed80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0x10], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+0x1C], eax
        ret 4
        UNREACHABLE_TRAP(0x6f2ed80)
    }
}
