#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b840);
CLANG_FORWARD_PROC_SYMBOL(public_6f55610);
CLANG_FORWARD_PROC_SYMBOL(public_6f556c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55800);
CLANG_FORWARD_PROC_SYMBOL(public_6f55840);

#define public_6f55814 _public_6f55814

PROC_DECLARE(0x6f55800, internal_6f55800, public_6f55800);
extern "C" NAKED register_t __cdecl internal_6f55800()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        jne public_6f55814
        push edi
        call public_6f556c0
        add esp, 4
        pop edi
        ret 
        public_6f55814 : nop
        push esi
        call public_6f55610
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        push eax
        push edi
        call public_6f55840
        push esi
        push edi
        call public_6f4b840
        add esp, 0x14
        pop esi
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6f55800)
    }
}

#undef public_6f55814
