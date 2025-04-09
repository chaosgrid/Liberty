#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407450);
CLANG_FORWARD_PROC_SYMBOL(public_555810);

#define public_407486 _public_407486
#define public_40749c _public_40749c
#define public_4074a7 _public_4074a7
#define public_4074bc _public_4074bc
#define public_4074ce _public_4074ce
#define public_4074e5 _public_4074e5

PROC_DECLARE(0x407450, internal_407450, public_407450);
extern "C" NAKED register_t __cdecl internal_407450()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0x44]
        test eax, eax
        push ebx
        push esi
        push edi
        je public_4074e5
        mov edx, dword ptr ds : [ecx+0x48]
        sub edx, eax
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0xC], edx
        je public_4074e5
        mov eax, dword ptr ds : [ecx+0x44]
        test eax, eax
        jne public_407486
        xor edx, edx
        jmp public_40749c
        public_407486 : nop
        mov edx, dword ptr ds : [ecx+0x48]
        sub edx, eax
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_40749c : nop
        xor esi, esi
        test edx, edx
        jle public_4074bc
        mov ebx, dword ptr ds : [ecx+0x44]
        mov edi, ebx
        public_4074a7 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [edi]
        fnstsw ax
        test ah, 5
        jnp public_4074ce
        inc esi
        add edi, 0x24
        cmp esi, edx
        jl public_4074a7
        public_4074bc : nop
        mov ecx, dword ptr ds : [ecx+0x48]
        add ecx, 0xFFFFFFDC
        call public_555810
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        public_4074ce : nop
        test esi, esi
        je public_4074e5
        lea ecx, ds:[esi+esi*8]
        lea ecx, ds:[ebx+ecx*4-0x24]
        call public_555810
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        public_4074e5 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x407450)
    }
}

#undef public_407486
#undef public_40749c
#undef public_4074a7
#undef public_4074bc
#undef public_4074ce
#undef public_4074e5
