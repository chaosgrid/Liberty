#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3c800);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b3c819 _public_6b3c819

PROC_DECLARE(0x6b3c800, internal_6b3c800, public_6b3c800);
extern "C" NAKED register_t __cdecl internal_6b3c800()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x3C]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6b6c084
        je public_6b3c819
        push eax
        call public_6b6a092
        add esp, 4
        public_6b3c819 : nop
        mov ecx, esi
        pop esi
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b3c800)
    }
}

#undef public_6b3c819
