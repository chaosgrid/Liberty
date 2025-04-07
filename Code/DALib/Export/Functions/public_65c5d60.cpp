#include "DALib-PCH.h"

PROC_DECLARE(0x65c5d60, internal_65c5d60, public_65c5d60);
extern "C" NAKED register_t __cdecl internal_65c5d60()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], offset public_65c757c
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+4], 0x67452301
        mov dword ptr ds : [eax+8], 0xEFCDAB89
        mov dword ptr ds : [eax+0xC], 0x98BADCFE
        mov dword ptr ds : [eax+0x10], 0x10325476
        mov byte ptr ds : [eax+0x5C], cl
        ret 
        UNREACHABLE_TRAP(0x65c5d60)
    }
}
