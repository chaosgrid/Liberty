#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_4be370);
CLANG_FORWARD_PROC_SYMBOL(public_57b530);
CLANG_FORWARD_PROC_SYMBOL(public_59da70);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_57b591 _public_57b591

PROC_DECLARE(0x57b530, internal_57b530, public_57b530);
extern "C" NAKED register_t __cdecl internal_57b530()
{
    __asm
    {
        sub esp, 0x10
        push esi
        push edi
        mov esi, ecx
        call public_42d680
        fstp dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+8]
        push eax
        lea ecx, ds:[esi+0x488]
        call dword ptr ds : [public_5c6c3c]
        mov al, byte ptr ds : [esi+0x470]
        test al, al
        je public_57b591
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xB8]
        mov edi, eax
        test edi, edi
        je public_57b591
        lea eax, ss:[esp+0xC]
        push eax
        call public_59da70
        mov edx, dword ptr ds : [esi]
        add esp, 4
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        test al, al
        je public_57b591
        push edi
        call public_4be370
        add esp, 4
        public_57b591 : nop
        mov ecx, esi
        call public_5a17b0
        pop edi
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x57b530)
    }
}

#undef public_57b591
