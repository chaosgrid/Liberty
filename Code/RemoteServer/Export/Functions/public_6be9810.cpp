#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be9810);
CLANG_FORWARD_PROC_SYMBOL(public_6beb700);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be983a _public_6be983a

PROC_DECLARE(0x6be9810, internal_6be9810, public_6be9810);
extern "C" NAKED register_t __cdecl internal_6be9810()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x28
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be983a
        mov ecx, eax
        call public_6beb700
        test eax, eax
        je public_6be983a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be983a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be9810)
    }
}

#undef public_6be983a
