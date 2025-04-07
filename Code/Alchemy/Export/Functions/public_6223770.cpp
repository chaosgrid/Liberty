#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_622377f _public_622377f
#define public_6223798 _public_6223798

PROC_DECLARE(0x6223770, internal_6223770, public_6223770);
extern "C" NAKED register_t __cdecl internal_6223770()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_622377f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_622377f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6223798
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6223798 : nop
        ret 4
        UNREACHABLE_TRAP(0x6223770)
    }
}

#undef public_622377f
#undef public_6223798
