#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b32200);

PROC_DECLARE(0x6b32200, internal_6b32200, public_6b32200);
extern "C" NAKED register_t __cdecl internal_6b32200()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        ret 
        UNREACHABLE_TRAP(0x6b32200)
    }
}
