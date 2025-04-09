#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43bc60);

PROC_DECLARE(0x43bc60, internal_43bc60, public_43bc60);
extern "C" NAKED register_t __cdecl internal_43bc60()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], cl
        mov dword ptr ds : [eax+0x5C], ecx
        mov byte ptr ds : [eax+0x60], cl
        mov dword ptr ds : [eax+0x8C], ecx
        mov byte ptr ds : [eax+0x90], cl
        mov dword ptr ds : [eax+0xD0], ecx
        mov byte ptr ds : [eax+0xD4], cl
        ret 
        UNREACHABLE_TRAP(0x43bc60)
    }
}
