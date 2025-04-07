#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f10c0);
CLANG_FORWARD_PROC_SYMBOL(public_65f1420);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65f1447 _public_65f1447

PROC_DECLARE(0x65f1420, internal_65f1420, public_65f1420);
extern "C" NAKED register_t __cdecl internal_65f1420()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x1E84]
        dec ecx
        push edi
        mov edi, ecx
        test edi, edi
        mov dword ptr ds : [esi+0x1E84], ecx
        jg public_65f1447
        mov ecx, esi
        call public_65f10c0
        push esi
        call public_6600bb0
        add esp, 4
        public_65f1447 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65f1420)
    }
}

#undef public_65f1447
