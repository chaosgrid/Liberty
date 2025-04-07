#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6352b30);
CLANG_FORWARD_PROC_SYMBOL(public_6353840);

#define public_6352b6c _public_6352b6c

PROC_DECLARE(0x6352b30, internal_6352b30, public_6352b30);
extern "C" NAKED register_t __cdecl internal_6352b30()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+0x14]
        shr eax, 8
        and eax, 3
        push esi
        lea esi, ds:[eax*8]
        sub esi, eax
        cmp word ptr ds : [edx+esi*4+0x32], 5
        lea esi, ds:[edx+esi*4+0x18]
        je public_6352b6c
        mov eax, dword ptr ds : [edx+0x14]
        xor eax, 0x100
        shr eax, 8
        and eax, 3
        lea esi, ds:[eax*8]
        sub esi, eax
        lea esi, ds:[edx+esi*4+0x18]
        public_6352b6c : nop
        mov eax, dword ptr ds : [esi+0x14]
        add ecx, 8
        push ecx
        push eax
        call public_6353840
        add esp, 8
        mov dword ptr ds : [esi+0x14], eax
        mov word ptr ds : [esi+0x1A], 2
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6352b30)
    }
}

#undef public_6352b6c
