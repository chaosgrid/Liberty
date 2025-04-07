#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f1420);
CLANG_FORWARD_PROC_SYMBOL(public_65f1470);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65f1490 _public_65f1490

PROC_DECLARE(0x65f1470, internal_65f1470, public_65f1470);
extern "C" NAKED register_t __cdecl internal_65f1470()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6600bb0
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        test ecx, ecx
        je public_65f1490
        call public_65f1420
        mov dword ptr ds : [esi], 0
        public_65f1490 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65f1470)
    }
}

#undef public_65f1490
