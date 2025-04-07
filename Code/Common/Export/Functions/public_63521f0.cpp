#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63521f0);

#define public_63521fa _public_63521fa
#define public_6352217 _public_6352217

PROC_DECLARE(0x63521f0, internal_63521f0, public_63521f0);
extern "C" NAKED register_t __cdecl internal_63521f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        cmp word ptr ds : [esi+0x30], 0
        jbe public_6352217
        public_63521fa : nop
        mov ecx, dword ptr ds : [esi+0x24]
        xor eax, eax
        mov ax, word ptr ds : [esi+0x2E]
        push esi
        shl eax, 4
        mov ecx, dword ptr ds : [eax+ecx+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        cmp word ptr ds : [esi+0x30], 0
        ja public_63521fa
        public_6352217 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63521f0)
    }
}

#undef public_63521fa
#undef public_6352217
