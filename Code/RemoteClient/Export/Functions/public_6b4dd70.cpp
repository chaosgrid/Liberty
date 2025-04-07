#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4dd70);

PROC_DECLARE(0x6b4dd70, internal_6b4dd70, public_6b4dd70);
extern "C" NAKED register_t __cdecl internal_6b4dd70()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6b6e024
        mov dword ptr ds : [eax+0xC], 0x10019
        mov dword ptr ds : [eax+0x20], ecx
        mov byte ptr ds : [eax+0x28], cl
        ret 
        UNREACHABLE_TRAP(0x6b4dd70)
    }
}
