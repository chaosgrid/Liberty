#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4963a0);

#define public_4963bd _public_4963bd

PROC_DECLARE(0x4963a0, internal_4963a0, public_4963a0);
extern "C" NAKED register_t __cdecl internal_4963a0()
{
    __asm
    {
        xor edx, edx
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        mov dword ptr ds : [ecx+0x44], edx
        mov eax, dword ptr ds : [ecx+8]
        cmp eax, edx
        je public_4963bd
        cmp word ptr ds : [eax], dx
        je public_4963bd
        mov word ptr ds : [eax], dx
        public_4963bd : nop
        mov byte ptr ds : [ecx+0x60], dl
        ret 
        UNREACHABLE_TRAP(0x4963a0)
    }
}

#undef public_4963bd
