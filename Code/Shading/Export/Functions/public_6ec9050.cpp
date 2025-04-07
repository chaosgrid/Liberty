#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec9050);

PROC_DECLARE(0x6ec9050, internal_6ec9050, public_6ec9050);
extern "C" NAKED register_t __cdecl internal_6ec9050()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        xor edx, edx
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+4], edx
        ret 4
        UNREACHABLE_TRAP(0x6ec9050)
    }
}
