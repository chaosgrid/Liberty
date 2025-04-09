#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fd80);
CLANG_FORWARD_PROC_SYMBOL(public_457930);

PROC_DECLARE(0x457930, internal_457930, public_457930);
extern "C" NAKED register_t __cdecl internal_457930()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_5ce53c
        mov dword ptr ds : [ecx+4], offset public_5ce508
        mov dword ptr ds : [ecx+8], offset public_5ce4ec
        mov dword ptr ds : [ecx+0xC], offset public_5ce4cc
        mov dword ptr ds : [ecx+0x10], offset public_5ce494
        mov dword ptr ds : [ecx+0x14], offset public_5ce46c
        mov dword ptr ds : [ecx+0x18], offset public_5ce448
        mov dword ptr ds : [ecx+0x1C], offset public_5ce410
        mov dword ptr ds : [ecx+0x20], offset public_5ce3f8
        jmp public_44fd80
        UNREACHABLE_TRAP(0x457930)
    }
}
