#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fd80);
CLANG_FORWARD_PROC_SYMBOL(public_457b70);

PROC_DECLARE(0x457b70, internal_457b70, public_457b70);
extern "C" NAKED register_t __cdecl internal_457b70()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_5ce71c
        mov dword ptr ds : [ecx+4], offset public_5ce6e8
        mov dword ptr ds : [ecx+8], offset public_5ce6cc
        mov dword ptr ds : [ecx+0xC], offset public_5ce6ac
        mov dword ptr ds : [ecx+0x10], offset public_5ce674
        mov dword ptr ds : [ecx+0x14], offset public_5ce64c
        mov dword ptr ds : [ecx+0x18], offset public_5ce628
        mov dword ptr ds : [ecx+0x1C], offset public_5ce5f0
        mov dword ptr ds : [ecx+0x20], offset public_5ce5d8
        mov dword ptr ds : [ecx+0x6C], 0
        jmp public_44fd80
        UNREACHABLE_TRAP(0x457b70)
    }
}
