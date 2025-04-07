#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52920);
CLANG_FORWARD_PROC_SYMBOL(public_6f53650);
CLANG_FORWARD_PROC_SYMBOL(public_6f53740);
CLANG_FORWARD_PROC_SYMBOL(public_6f54780);

#define public_6f547a8 _public_6f547a8
#define public_6f547d0 _public_6f547d0

PROC_DECLARE(0x6f54780, internal_6f54780, public_6f54780);
extern "C" NAKED register_t __cdecl internal_6f54780()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push 0
        push esi
        mov edi, 1
        call public_6f53650
        add esp, 4
        push eax
        push esi
        call public_6f53740
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        cmp eax, 0x2C
        jne public_6f547d0
        public_6f547a8 : nop
        push esi
        call public_6f52920
        add esp, 4
        mov eax, edi
        push eax
        push esi
        inc edi
        call public_6f53650
        add esp, 4
        push eax
        push esi
        call public_6f53740
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        cmp eax, 0x2C
        je public_6f547a8
        public_6f547d0 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f54780)
    }
}

#undef public_6f547a8
#undef public_6f547d0
