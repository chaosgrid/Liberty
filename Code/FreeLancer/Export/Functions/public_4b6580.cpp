#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b6580);

#define public_4b659f _public_4b659f

PROC_DECLARE(0x4b6580, internal_4b6580, public_4b6580);
extern "C" NAKED register_t __cdecl internal_4b6580()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_672288]
        test ecx, ecx
        je public_4b659f
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ds : [public_672288]
        test ecx, ecx
        je public_4b659f
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_4b659f : nop
        ret 
        UNREACHABLE_TRAP(0x4b6580)
    }
}

#undef public_4b659f
