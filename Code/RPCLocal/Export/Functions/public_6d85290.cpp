#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85290);

#define public_6d852a1 _public_6d852a1
#define public_6d852a9 _public_6d852a9
#define public_6d852b4 _public_6d852b4

PROC_DECLARE(0x6d85290, internal_6d85290, public_6d85290);
extern "C" NAKED register_t __cdecl internal_6d85290()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6d852b4
        push esi
        public_6d852a1 : nop
        test eax, eax
        je public_6d852a9
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        public_6d852a9 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6d852a1
        pop esi
        public_6d852b4 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6d85290)
    }
}

#undef public_6d852a1
#undef public_6d852a9
#undef public_6d852b4
