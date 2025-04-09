#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_587770);
CLANG_FORWARD_PROC_SYMBOL(public_587af0);

#define public_587783 _public_587783
#define public_58779f _public_58779f

PROC_DECLARE(0x587770, internal_587770, public_587770);
extern "C" NAKED register_t __cdecl internal_587770()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_58779f
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_587783 : nop
        push esi
        push edi
        call public_587af0
        add esi, 0x20
        add esp, 8
        add edi, 0x20
        cmp esi, ebx
        jne public_587783
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_58779f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x587770)
    }
}

#undef public_587783
#undef public_58779f
