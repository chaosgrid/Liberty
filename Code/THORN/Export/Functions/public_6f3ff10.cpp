#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3ff10);

#define public_6f3ff20 _public_6f3ff20
#define public_6f3ff40 _public_6f3ff40

PROC_DECLARE(0x6f3ff10, internal_6f3ff10, public_6f3ff10);
extern "C" NAKED register_t __cdecl internal_6f3ff10()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov ecx, edi
        lea esp, ss:[esp]
        public_6f3ff20 : nop
        sub ecx, 4
        test esi, esi
        je public_6f3ff40
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_6f3ff40
        mov edx, dword ptr ds : [esi+8]
        cmp edx, dword ptr ds : [eax+8]
        setb dl
        test dl, dl
        je public_6f3ff40
        mov dword ptr ds : [edi], eax
        mov edi, ecx
        jmp public_6f3ff20
        public_6f3ff40 : nop
        mov dword ptr ds : [edi], esi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f3ff10)
    }
}

#undef public_6f3ff20
#undef public_6f3ff40
