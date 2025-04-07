#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612250);
CLANG_FORWARD_PROC_SYMBOL(public_6614580);

#define public_6614903 _public_6614903
#define public_6614914 _public_6614914

PROC_DECLARE(0x66148d0, internal_66148d0, public_66148d0);
extern "C" NAKED register_t __cdecl internal_66148d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        lea eax, ss:[esp+0xC]
        push edi
        push eax
        push ecx
        mov ecx, esi
        xor edi, edi
        call public_6614580
        test al, al
        je public_6614914
        test esi, esi
        je public_6614903
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+8]
        push eax
        call public_6612250
        pop edi
        pop esi
        ret 8
        public_6614903 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        xor eax, eax
        push eax
        call public_6612250
        pop edi
        pop esi
        ret 8
        public_6614914 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x66148d0)
    }
}

#undef public_6614903
#undef public_6614914
