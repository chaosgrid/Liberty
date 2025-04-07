#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e510);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);

#define public_6f4e51a _public_6f4e51a
#define public_6f4e553 _public_6f4e553

PROC_DECLARE(0x6f4e510, internal_6f4e510, public_6f4e510);
extern "C" NAKED register_t __cdecl internal_6f4e510()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        je public_6f4e553
        push edi
        public_6f4e51a : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edi, dword ptr ds : [esi]
        cdq 
        and edx, 0xF
        add eax, edx
        sar eax, 4
        or edx, 0xFFFFFFFF
        sub edx, eax
        add dword ptr ds : [ecx+0x78], edx
        mov eax, dword ptr ds : [esi+8]
        push 0
        push eax
        call public_6f4fe10
        push 0
        push esi
        call public_6f4fe10
        add esp, 0x10
        test edi, edi
        mov esi, edi
        jne public_6f4e51a
        pop edi
        public_6f4e553 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4e510)
    }
}

#undef public_6f4e51a
#undef public_6f4e553
