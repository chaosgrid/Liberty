#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100066c0);

PROC_DECLARE(0x100066c0, internal_100066c0, public_100066c0);
extern "C" NAKED register_t __cdecl internal_100066c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_1000d018]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [public_1000d01c]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], offset public_1000d020
        mov dword ptr ds : [edx], offset public_1000e020
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x100066c0)
    }
}
