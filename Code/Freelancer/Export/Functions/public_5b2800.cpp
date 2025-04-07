#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b2800);

#define public_5b287a _public_5b287a

PROC_DECLARE(0x5b2800, internal_5b2800, public_5b2800);
extern "C" NAKED register_t __cdecl internal_5b2800()
{
    __asm
    {
        lea eax, ss:[esp-0x104]
        sub esp, 0x104
        push eax
        call dword ptr ds : [public_5c6cdc]
        add esp, 4
        test al, al
        je public_5b287a
        mov edx, dword ptr ds : [public_5e6d28]
        push edi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+4]
        repne scasb
        mov ecx, dword ptr ds : [public_5e6d24]
        mov eax, dword ptr ds : [public_5e6d2c]
        push 0
        push 0
        dec edi
        mov dword ptr ds : [edi], ecx
        push 7
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [edi+4], edx
        push 0xFFFFFFFF
        push ecx
        mov dword ptr ds : [edi+8], eax
        call dword ptr ds : [public_5c6cd8]
        add esp, 0x14
        test eax, eax
        pop edi
        je public_5b287a
        push 0x104
/*FIXUP push offset public_67de50 @0x5b2861*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67de50
        push 0xFFFFFFFF
        lea edx, ss:[esp+0xC]
        push edx
        push 0
        push 0xFDE9
        call dword ptr ds : [public_61641c]
        public_5b287a : nop
        add esp, 0x104
        ret 
        UNREACHABLE_TRAP(0x5b2800)
    }
}

#undef public_5b287a
