#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6246660);
CLANG_FORWARD_PROC_SYMBOL(public_6246d50);

#define public_6246676 _public_6246676
#define public_624667e _public_624667e
#define public_6246693 _public_6246693
#define public_62466a2 _public_62466a2
#define public_62466aa _public_62466aa
#define public_62466ab _public_62466ab
#define public_62466c9 _public_62466c9
#define public_62466fd _public_62466fd
#define public_624671d _public_624671d
#define public_6246731 _public_6246731
#define public_6246739 _public_6246739
#define public_6246745 _public_6246745
#define public_624675a _public_624675a

PROC_DECLARE(0x6246660, internal_6246660, public_6246660);
extern "C" NAKED register_t __cdecl internal_6246660()
{
    __asm
    {
        sub esp, 0x10
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ss:[ebp+4]
        test eax, eax
        jne public_6246676
        xor esi, esi
        jmp public_624667e
        public_6246676 : nop
        mov esi, dword ptr ds : [ecx+8]
        sub esi, eax
        sar esi, 4
        public_624667e : nop
        fld dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x20]
        xor edx, edx
        test esi, esi
        jle public_62466ab
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        add ebx, 4
        public_6246693 : nop
        fcom dword ptr ds : [ebx]
        fnstsw ax
        and eax, 0x100
        jne public_62466a2
        cmp edx, edi
        jne public_62466aa
        public_62466a2 : nop
        inc edx
        add ebx, 0x10
        cmp edx, esi
        jl public_6246693
        public_62466aa : nop
        pop ebx
        public_62466ab : nop
        lea eax, ds:[edi+1]
        cmp edx, eax
        jne public_62466c9
        mov edx, dword ptr ss : [ebp+8]
        mov ecx, edi
        shl ecx, 4
        mov eax, edi
        pop edi
        fstp dword ptr ds : [ecx+edx+4]
        pop esi
        pop ebp
        add esp, 0x10
        ret 8
        public_62466c9 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [ecx+8]
        shl edi, 4
        add eax, edi
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], edx
        lea edx, ds:[eax+0x10]
        fld dword ptr ds : [eax+0xC]
        fld dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x14]
        cmp edx, esi
        fstp dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x10]
        je public_624671d
        lea eax, ds:[edx-8]
        public_62466fd : nop
        mov edi, dword ptr ds : [edx]
        add edx, 0x10
        mov dword ptr ds : [eax-8], edi
        mov edi, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [eax-4], edi
        mov edi, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [eax+4], edi
        add eax, 0x10
        cmp edx, esi
        jne public_62466fd
        public_624671d : nop
        mov esi, dword ptr ds : [ecx+8]
        add esi, 0xFFFFFFF0
        mov dword ptr ds : [ecx+8], esi
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6246731
        xor edx, edx
        jmp public_6246739
        public_6246731 : nop
        mov edx, dword ptr ds : [ecx+8]
        sub edx, eax
        sar edx, 4
        public_6246739 : nop
        xor esi, esi
        test edx, edx
        jle public_624675a
        mov edi, dword ptr ss : [ebp+8]
        add edi, 4
        public_6246745 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [edi]
        fnstsw ax
        test ah, 0x41
        jnp public_624675a
        inc esi
        add edi, 0x10
        cmp esi, edx
        jl public_6246745
        public_624675a : nop
        mov edi, dword ptr ss : [ebp+8]
        mov edx, esi
        lea eax, ss:[esp+0xC]
        shl edx, 4
        push eax
        add edx, edi
        push 1
        push edx
        call public_6246d50
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6246660)
    }
}

#undef public_6246676
#undef public_624667e
#undef public_6246693
#undef public_62466a2
#undef public_62466aa
#undef public_62466ab
#undef public_62466c9
#undef public_62466fd
#undef public_624671d
#undef public_6246731
#undef public_6246739
#undef public_6246745
#undef public_624675a
