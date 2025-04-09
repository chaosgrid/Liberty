#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_409f10);
CLANG_FORWARD_PROC_SYMBOL(public_555810);

#define public_409f46 _public_409f46
#define public_409f5c _public_409f5c
#define public_409f67 _public_409f67
#define public_409f7c _public_409f7c
#define public_409f8e _public_409f8e
#define public_409fa5 _public_409fa5

PROC_DECLARE(0x409f10, internal_409f10, public_409f10);
extern "C" NAKED register_t __cdecl internal_409f10()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0x64]
        test eax, eax
        push ebx
        push esi
        push edi
        je public_409fa5
        mov edx, dword ptr ds : [ecx+0x68]
        sub edx, eax
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0xC], edx
        je public_409fa5
        mov eax, dword ptr ds : [ecx+0x64]
        test eax, eax
        jne public_409f46
        xor edx, edx
        jmp public_409f5c
        public_409f46 : nop
        mov edx, dword ptr ds : [ecx+0x68]
        sub edx, eax
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_409f5c : nop
        xor esi, esi
        test edx, edx
        jle public_409f7c
        mov ebx, dword ptr ds : [ecx+0x64]
        mov edi, ebx
        public_409f67 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [edi]
        fnstsw ax
        test ah, 5
        jnp public_409f8e
        inc esi
        add edi, 0x24
        cmp esi, edx
        jl public_409f67
        public_409f7c : nop
        mov ecx, dword ptr ds : [ecx+0x68]
        add ecx, 0xFFFFFFDC
        call public_555810
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        public_409f8e : nop
        test esi, esi
        je public_409fa5
        lea ecx, ds:[esi+esi*8]
        lea ecx, ds:[ebx+ecx*4-0x24]
        call public_555810
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        public_409fa5 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x409f10)
    }
}

#undef public_409f46
#undef public_409f5c
#undef public_409f67
#undef public_409f7c
#undef public_409f8e
#undef public_409fa5
