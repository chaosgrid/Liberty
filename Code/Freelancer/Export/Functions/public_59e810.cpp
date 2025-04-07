#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59e810);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_59e831 _public_59e831
#define public_59e833 _public_59e833
#define public_59e83f _public_59e83f
#define public_59e842 _public_59e842

PROC_DECLARE(0x59e810, internal_59e810, public_59e810);
extern "C" NAKED register_t __cdecl internal_59e810()
{
    __asm
    {
        push esi
        push 0xC
        mov esi, ecx
        call public_5b7e84
        xor edx, edx
        add esp, 4
        cmp eax, edx
        je public_59e831
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+8], ecx
        jmp public_59e833
        public_59e831 : nop
        xor eax, eax
        public_59e833 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, edx
        je public_59e83f
        mov dword ptr ds : [ecx+4], eax
        jmp public_59e842
        public_59e83f : nop
        mov dword ptr ds : [esi+4], eax
        public_59e842 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [eax+4], edx
        inc dword ptr ds : [esi]
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x59e810)
    }
}

#undef public_59e831
#undef public_59e833
#undef public_59e83f
#undef public_59e842
