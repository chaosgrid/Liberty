#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da7ee0);

#define public_6da7ef3 _public_6da7ef3
#define public_6da7efb _public_6da7efb
#define public_6da7f02 _public_6da7f02

PROC_DECLARE(0x6da7ee0, internal_6da7ee0, public_6da7ee0);
extern "C" NAKED register_t __cdecl internal_6da7ee0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6da7f02
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+4]
        push esi
        public_6da7ef3 : nop
        test eax, eax
        je public_6da7efb
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        public_6da7efb : nop
        add eax, 4
        dec ecx
        jne public_6da7ef3
        pop esi
        public_6da7f02 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6da7ee0)
    }
}

#undef public_6da7ef3
#undef public_6da7efb
#undef public_6da7f02
