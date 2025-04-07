#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f98c80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f98c90 _public_6f98c90

PROC_DECLARE(0x6f98c80, internal_6f98c80, public_6f98c80);
extern "C" NAKED register_t __cdecl internal_6f98c80()
{
    __asm
    {
        mov ecx, offset public_6fd3cb8
        jmp public_6f98c90
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_6f98c90 : nop
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [public_6fd3d8c], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f98c80)
    }
}

#undef public_6f98c90
