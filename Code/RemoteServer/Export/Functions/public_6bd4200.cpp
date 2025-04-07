#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd4200);

PROC_DECLARE(0x6bd4200, internal_6bd4200, public_6bd4200);
extern "C" NAKED register_t __cdecl internal_6bd4200()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov byte ptr ds : [eax+0x44], 1
        mov byte ptr ds : [eax+0x45], cl
        mov byte ptr ds : [eax+0x46], cl
        ret 
        UNREACHABLE_TRAP(0x6bd4200)
    }
}
