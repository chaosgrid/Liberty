#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3cec0);

#define public_6f3ced1 _public_6f3ced1
#define public_6f3ced9 _public_6f3ced9
#define public_6f3cee4 _public_6f3cee4

PROC_DECLARE(0x6f3cec0, internal_6f3cec0, public_6f3cec0);
extern "C" NAKED register_t __cdecl internal_6f3cec0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6f3cee4
        push esi
        public_6f3ced1 : nop
        test eax, eax
        je public_6f3ced9
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        public_6f3ced9 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6f3ced1
        pop esi
        public_6f3cee4 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6f3cec0)
    }
}

#undef public_6f3ced1
#undef public_6f3ced9
#undef public_6f3cee4
