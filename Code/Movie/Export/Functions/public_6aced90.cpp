#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6aced90);

PROC_DECLARE(0x6aced90, internal_6aced90, public_6aced90);
extern "C" NAKED register_t __cdecl internal_6aced90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor ecx, ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax], 0x67452301
        mov dword ptr ds : [eax+4], 0xEFCDAB89
        mov dword ptr ds : [eax+8], 0x98BADCFE
        mov dword ptr ds : [eax+0xC], 0x10325476
        ret 4
        UNREACHABLE_TRAP(0x6aced90)
    }
}
