#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c310f0);

PROC_DECLARE(0x6c310f0, internal_6c310f0, public_6c310f0);
extern "C" NAKED register_t __cdecl internal_6c310f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1C]
        mov ecx, dword ptr ss : [esp+4]
        add eax, 0x2C
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6c310f0)
    }
}
