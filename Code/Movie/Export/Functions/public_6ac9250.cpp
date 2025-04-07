#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac9250);

PROC_DECLARE(0x6ac9250, internal_6ac9250, public_6ac9250);
extern "C" NAKED register_t __cdecl internal_6ac9250()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor ecx, ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x18], 0x67452301
        mov dword ptr ds : [eax+0x1C], 0xEFCDAB89
        mov dword ptr ds : [eax+0x20], 0x98BADCFE
        mov dword ptr ds : [eax+0x24], 0x10325476
        mov dword ptr ds : [eax+0x28], 0xC3D2E1F0
        ret 4
        UNREACHABLE_TRAP(0x6ac9250)
    }
}
