#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ed60);

PROC_DECLARE(0x6f2ed60, internal_6f2ed60, public_6f2ed60);
extern "C" NAKED register_t __cdecl internal_6f2ed60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0xC], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+0x18], eax
        ret 4
        UNREACHABLE_TRAP(0x6f2ed60)
    }
}
