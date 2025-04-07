#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecb800);

PROC_DECLARE(0x6ecb800, internal_6ecb800, public_6ecb800);
extern "C" NAKED register_t __cdecl internal_6ecb800()
{
    __asm
    {
        mov edx, dword ptr ds : [public_6ed5808]
        mov ecx, dword ptr ds : [edx]
        mov eax, dword ptr ds : [public_6ed5804]
        add eax, ecx
        add ecx, 0x20
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dl, byte ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x1C], dl
        mov byte ptr ds : [eax+0x1D], 0
        ret 8
        UNREACHABLE_TRAP(0x6ecb800)
    }
}
