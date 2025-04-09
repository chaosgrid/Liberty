#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_555771 _public_555771
#define public_555786 _public_555786
#define public_55578f _public_55578f
#define public_555793 _public_555793
#define public_5557a8 _public_5557a8
#define public_5557b9 _public_5557b9
#define public_5557d0 _public_5557d0

PROC_DECLARE(0x555760, internal_555760, public_555760);
extern "C" NAKED register_t __cdecl internal_555760()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_5e11c0
        je public_555793
        public_555771 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_555786
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_55578f
        public_555786 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_55578f : nop
        test edi, edi
        jne public_555771
        public_555793 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_5557b9
        public_5557a8 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        test edi, edi
        jne public_5557a8
        public_5557b9 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_5557d0
        push esi
        call public_5b7e1d
        add esp, 4
        public_5557d0 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x555760)
    }
}

#undef public_555771
#undef public_555786
#undef public_55578f
#undef public_555793
#undef public_5557a8
#undef public_5557b9
#undef public_5557d0
