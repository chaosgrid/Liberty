#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f1470);
CLANG_FORWARD_PROC_SYMBOL(public_65f17e0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65f1801 _public_65f1801

PROC_DECLARE(0x65f17e0, internal_65f17e0, public_65f17e0);
extern "C" NAKED register_t __cdecl internal_65f17e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        dec ecx
        push edi
        mov edi, ecx
        test edi, edi
        mov dword ptr ds : [esi+0xC], ecx
        jg public_65f1801
        mov ecx, esi
        call public_65f1470
        push esi
        call public_6600bb0
        add esp, 4
        public_65f1801 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65f17e0)
    }
}

#undef public_65f1801
