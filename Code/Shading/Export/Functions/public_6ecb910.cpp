#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecb910);

PROC_DECLARE(0x6ecb910, internal_6ecb910, public_6ecb910);
extern "C" NAKED register_t __cdecl internal_6ecb910()
{
    __asm
    {
        mov edx, dword ptr ds : [public_6ed5808]
        mov ecx, dword ptr ds : [edx]
        mov eax, dword ptr ds : [public_6ed5804]
        push esi
        mov esi, dword ptr ss : [esp+8]
        add eax, ecx
        add ecx, esi
        mov dword ptr ds : [edx], ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ecb910)
    }
}
