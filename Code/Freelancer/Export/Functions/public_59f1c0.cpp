#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59ec80);
CLANG_FORWARD_PROC_SYMBOL(public_59f1c0);

#define public_59f1ed _public_59f1ed

PROC_DECLARE(0x59f1c0, internal_59f1c0, public_59f1c0);
extern "C" NAKED register_t __cdecl internal_59f1c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push 0
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        lea ecx, ds:[esi+0x7C]
        call public_59ec80
        test al, al
        je public_59f1ed
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [esi]
        push 0
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        pop esi
        ret 0xC
        public_59f1ed : nop
        xor al, al
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x59f1c0)
    }
}

#undef public_59f1ed
