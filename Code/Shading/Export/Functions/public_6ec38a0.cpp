#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec38a0);

PROC_DECLARE(0x6ec38a0, internal_6ec38a0, public_6ec38a0);
extern "C" NAKED register_t __cdecl internal_6ec38a0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dl, byte ptr ds : [ecx]
        xor ecx, ecx
        mov byte ptr ds : [eax], dl
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        ret 4
        UNREACHABLE_TRAP(0x6ec38a0)
    }
}
