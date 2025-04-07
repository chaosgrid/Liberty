#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4cd10);

PROC_DECLARE(0x6b4cd10, internal_6b4cd10, public_6b4cd10);
extern "C" NAKED register_t __cdecl internal_6b4cd10()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov edx, 1
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x5C], ecx
        mov dword ptr ds : [eax], offset public_6b6dc44
        mov dword ptr ds : [eax+0xC], 0x2004F
        mov dword ptr ds : [eax+0x64], ecx
        mov byte ptr ds : [eax+0x74], dl
        ret 
        UNREACHABLE_TRAP(0x6b4cd10)
    }
}
