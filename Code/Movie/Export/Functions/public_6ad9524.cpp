#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad07b3);
CLANG_FORWARD_PROC_SYMBOL(public_6ad88b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9524);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9603);
CLANG_FORWARD_PROC_SYMBOL(public_6ad96e3);

#define public_6ad9555 _public_6ad9555
#define public_6ad9567 _public_6ad9567

PROC_DECLARE(0x6ad9524, internal_6ad9524, public_6ad9524);
extern "C" NAKED register_t __cdecl internal_6ad9524()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        or edi, 0xFFFFFFFF
        test byte ptr ds : [esi+0xC], 0x83
        je public_6ad9567
        push esi
        call public_6ad88b0
        push esi
        mov edi, eax
        call public_6ad96e3
        push dword ptr ds : [esi+0x10]
        call public_6ad9603
        add esp, 0xC
        test eax, eax
        jge public_6ad9555
        or edi, 0xFFFFFFFF
        jmp public_6ad9567
        public_6ad9555 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_6ad9567
        push eax
        call public_6ad07b3
        and dword ptr ds : [esi+0x1C], 0
        pop ecx
        public_6ad9567 : nop
        and dword ptr ds : [esi+0xC], 0
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad9524)
    }
}

#undef public_6ad9555
#undef public_6ad9567
