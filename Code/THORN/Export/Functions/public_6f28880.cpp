#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f28880);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b250);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b440);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b540);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f288b4 _public_6f288b4
#define public_6f288ba _public_6f288ba
#define public_6f288e2 _public_6f288e2
#define public_6f2890d _public_6f2890d
#define public_6f28913 _public_6f28913
#define public_6f2892f _public_6f2892f
#define public_6f2895a _public_6f2895a
#define public_6f28960 _public_6f28960
#define public_6f2897c _public_6f2897c
#define public_6f289a7 _public_6f289a7
#define public_6f289ad _public_6f289ad
#define public_6f289c9 _public_6f289c9
#define public_6f289d4 _public_6f289d4

PROC_DECLARE(0x6f28880, internal_6f28880, public_6f28880);
extern "C" NAKED register_t __cdecl internal_6f28880()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [public_6f5e1d4]
        push esi
        xor ebx, ebx
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f288b4
        push esi
        call public_6f4b900
        push edi
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov edi, eax
        jmp public_6f288ba
        public_6f288b4 : nop
        mov edi, dword ptr ds : [public_6f61de8]
        public_6f288ba : nop
        push ebp
        push edi
        call public_6f4b410
        mov ebp, dword ptr ss : [esp+0x1C]
        add esp, 4
        test eax, eax
        jne public_6f288e2
        push edi
        call public_6f4b540
        add esp, 4
        call public_6f57f16
        mov dword ptr ss : [ebp], eax
        mov ebx, 1
        public_6f288e2 : nop
        mov edi, dword ptr ds : [public_6f5e1d8]
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2890d
        push esi
        call public_6f4b900
        push edi
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov edi, eax
        jmp public_6f28913
        public_6f2890d : nop
        mov edi, dword ptr ds : [public_6f61de8]
        public_6f28913 : nop
        push edi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f2892f
        push edi
        call public_6f4b540
        fstp dword ptr ss : [ebp+4]
        add esp, 4
        or ebx, 2
        public_6f2892f : nop
        mov edi, dword ptr ds : [public_6f5e1dc]
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2895a
        push esi
        call public_6f4b900
        push edi
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov edi, eax
        jmp public_6f28960
        public_6f2895a : nop
        mov edi, dword ptr ds : [public_6f61de8]
        public_6f28960 : nop
        push edi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f2897c
        push edi
        call public_6f4b540
        fstp dword ptr ss : [ebp+8]
        add esp, 4
        or ebx, 4
        public_6f2897c : nop
        mov edi, dword ptr ds : [public_6f5e1e0]
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f289a7
        push esi
        call public_6f4b900
        push edi
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov esi, eax
        jmp public_6f289ad
        public_6f289a7 : nop
        mov esi, dword ptr ds : [public_6f61de8]
        public_6f289ad : nop
        push esi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f289c9
        push esi
        call public_6f4b540
        fstp dword ptr ss : [ebp+0xC]
        add esp, 4
        or ebx, 8
        public_6f289c9 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        pop ebp
        je public_6f289d4
        mov dword ptr ds : [eax], ebx
        public_6f289d4 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f28880)
    }
}

#undef public_6f288b4
#undef public_6f288ba
#undef public_6f288e2
#undef public_6f2890d
#undef public_6f28913
#undef public_6f2892f
#undef public_6f2895a
#undef public_6f28960
#undef public_6f2897c
#undef public_6f289a7
#undef public_6f289ad
#undef public_6f289c9
#undef public_6f289d4
