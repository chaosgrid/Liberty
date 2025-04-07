#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31650);

PROC_DECLARE(0x6f31650, internal_6f31650, public_6f31650);
extern "C" NAKED register_t __cdecl internal_6f31650()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], 1
        mov dword ptr ds : [eax+0x10], ecx
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        ret 
        UNREACHABLE_TRAP(0x6f31650)
    }
}
