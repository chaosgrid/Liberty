#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f98bf0);

PROC_DECLARE(0x6f98bf0, internal_6f98bf0, public_6f98bf0);
extern "C" NAKED register_t __cdecl internal_6f98bf0()
{
    __asm
    {
        push ecx
        mov dl, byte ptr ss : [esp+3]
        mov eax, ecx
        mov dword ptr ds : [public_6fd3d8c], eax
        xor ecx, ecx
        mov byte ptr ds : [eax+4], cl
        mov byte ptr ds : [eax+8], dl
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax], offset public_6fbcd4c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f98bf0)
    }
}
