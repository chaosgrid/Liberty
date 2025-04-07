#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b48aa0);

PROC_DECLARE(0x6b48aa0, internal_6b48aa0, public_6b48aa0);
extern "C" NAKED register_t __cdecl internal_6b48aa0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov byte ptr ds : [eax+0x20], cl
        mov dword ptr ds : [eax], offset public_6b6cc70
        mov dword ptr ds : [eax+0xC], 0x3003A
        ret 
        UNREACHABLE_TRAP(0x6b48aa0)
    }
}
