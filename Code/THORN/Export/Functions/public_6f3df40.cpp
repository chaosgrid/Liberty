#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3df40);

#define public_6f3df53 _public_6f3df53
#define public_6f3df5b _public_6f3df5b
#define public_6f3df62 _public_6f3df62

PROC_DECLARE(0x6f3df40, internal_6f3df40, public_6f3df40);
extern "C" NAKED register_t __cdecl internal_6f3df40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6f3df62
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+4]
        push esi
        public_6f3df53 : nop
        test eax, eax
        je public_6f3df5b
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        public_6f3df5b : nop
        add eax, 4
        dec ecx
        jne public_6f3df53
        pop esi
        public_6f3df62 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6f3df40)
    }
}

#undef public_6f3df53
#undef public_6f3df5b
#undef public_6f3df62
