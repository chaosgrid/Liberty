#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59e7d0);

#define public_59e7e0 _public_59e7e0
#define public_59e7f1 _public_59e7f1
#define public_59e7ff _public_59e7ff
#define public_59e805 _public_59e805

PROC_DECLARE(0x59e7d0, internal_59e7d0, public_59e7d0);
extern "C" NAKED register_t __cdecl internal_59e7d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        xor edx, edx
        test eax, eax
        push esi
        je public_59e805
        mov esi, dword ptr ss : [esp+8]
        mov edi, edi
        public_59e7e0 : nop
        cmp eax, esi
        je public_59e7f1
        mov edx, eax
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        jne public_59e7e0
        pop esi
        ret 4
        public_59e7f1 : nop
        test edx, edx
        je public_59e7ff
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        pop esi
        ret 4
        public_59e7ff : nop
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        public_59e805 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x59e7d0)
    }
}

#undef public_59e7e0
#undef public_59e7f1
#undef public_59e7ff
#undef public_59e805
