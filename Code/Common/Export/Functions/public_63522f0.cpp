#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_63522f0);

#define public_6352319 _public_6352319

PROC_DECLARE(0x63522f0, internal_63522f0, public_63522f0);
extern "C" NAKED register_t __cdecl internal_63522f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        test dword ptr ds : [esi+8], 0xFF000000
        mov dword ptr ds : [esi], offset public_63a5648
        jne public_6352319
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_6352319
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi+0xC], 0
        public_6352319 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63522f0)
    }
}

#undef public_6352319
