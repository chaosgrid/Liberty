#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_597c70);

#define public_597c81 _public_597c81
#define public_597c89 _public_597c89
#define public_597c94 _public_597c94

PROC_DECLARE(0x597c70, internal_597c70, public_597c70);
extern "C" NAKED register_t __cdecl internal_597c70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_597c94
        push esi
        public_597c81 : nop
        test eax, eax
        je public_597c89
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        public_597c89 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_597c81
        pop esi
        public_597c94 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x597c70)
    }
}

#undef public_597c81
#undef public_597c89
#undef public_597c94
