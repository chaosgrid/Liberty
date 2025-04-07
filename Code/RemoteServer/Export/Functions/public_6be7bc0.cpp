#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be7bc0);

PROC_DECLARE(0x6be7bc0, internal_6be7bc0, public_6be7bc0);
extern "C" NAKED register_t __cdecl internal_6be7bc0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov byte ptr ds : [eax+0x24], cl
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax], offset public_6c0badc
        mov dword ptr ds : [eax+0xC], 0x2003D
        ret 
        UNREACHABLE_TRAP(0x6be7bc0)
    }
}
