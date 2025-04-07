#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4be370);
CLANG_FORWARD_PROC_SYMBOL(public_57b0e0);
CLANG_FORWARD_PROC_SYMBOL(public_59da70);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_57b125 _public_57b125

PROC_DECLARE(0x57b0e0, internal_57b0e0, public_57b0e0);
extern "C" NAKED register_t __cdecl internal_57b0e0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x470]
        test al, al
        push edi
        je public_57b125
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0xB8]
        mov edi, eax
        test edi, edi
        je public_57b125
        lea ecx, ss:[esp+8]
        push ecx
        call public_59da70
        mov edx, dword ptr ds : [esi]
        add esp, 4
        lea eax, ss:[esp+8]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        test al, al
        je public_57b125
        push edi
        call public_4be370
        add esp, 4
        public_57b125 : nop
        mov ecx, esi
        call public_5a17b0
        pop edi
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x57b0e0)
    }
}

#undef public_57b125
