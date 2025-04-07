#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57b5a0);

#define public_59bfcc _public_59bfcc

PROC_DECLARE(0x59bfa0, internal_59bfa0, public_59bfa0);
extern "C" NAKED register_t __cdecl internal_59bfa0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0
        push eax
        mov esi, ecx
        call public_57b5a0
        test al, al
        je public_59bfcc
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        je public_59bfcc
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+0x330], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+0x334], ecx
        public_59bfcc : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x59bfa0)
    }
}

#undef public_59bfcc
