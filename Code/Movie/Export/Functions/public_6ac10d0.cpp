#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac10d0);

PROC_DECLARE(0x6ac10d0, internal_6ac10d0, public_6ac10d0);
extern "C" NAKED register_t __cdecl internal_6ac10d0()
{
    __asm
    {
        push ecx
        mov eax, ecx
        mov cl, byte ptr ss : [esp+3]
        mov byte ptr ds : [eax+0x10], cl
        xor ecx, ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6ada1e0
        mov dword ptr ds : [eax+8], ecx
        mov byte ptr ds : [eax+0xC], 1
        mov byte ptr ds : [eax+0xD], cl
        mov dword ptr ds : [eax+4], ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ac10d0)
    }
}
