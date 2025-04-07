#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6378a70);

PROC_DECLARE(0x6378a70, internal_6378a70, public_6378a70);
extern "C" NAKED register_t __cdecl internal_6378a70()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov edx, eax
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [edx+0xC], ecx
        mov dword ptr ds : [edx+0x10], ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+0x10], ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6378a70)
    }
}
