#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6273bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6273c30);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);

#define public_6273c00 _public_6273c00

PROC_DECLARE(0x6273bf0, internal_6273bf0, public_6273bf0);
extern "C" NAKED register_t __cdecl internal_6273bf0()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        push edi
        lea esi, ds:[ebx+0x120]
        mov edi, 0x40
        public_6273c00 : nop
        lea eax, ds:[esi-0x100]
        push eax
        call public_6334430
        push esi
        call public_6334430
        add esp, 8
        add esi, 4
        dec edi
        jne public_6273c00
        pop edi
        pop esi
        mov ecx, ebx
        pop ebx
        jmp public_6273c30
        UNREACHABLE_TRAP(0x6273bf0)
    }
}

#undef public_6273c00
