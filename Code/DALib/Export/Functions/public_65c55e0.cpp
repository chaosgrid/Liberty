#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c55e0);

#define public_65c55f1 _public_65c55f1
#define public_65c55f9 _public_65c55f9
#define public_65c5604 _public_65c5604

PROC_DECLARE(0x65c55e0, internal_65c55e0, public_65c55e0);
extern "C" NAKED register_t __cdecl internal_65c55e0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_65c5604
        push esi
        public_65c55f1 : nop
        test eax, eax
        je public_65c55f9
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        public_65c55f9 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_65c55f1
        pop esi
        public_65c5604 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x65c55e0)
    }
}

#undef public_65c55f1
#undef public_65c55f9
#undef public_65c5604
