#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5574d0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_447600 _public_447600
#define public_44761b _public_44761b

PROC_DECLARE(0x4475b0, internal_4475b0, public_4475b0);
extern "C" NAKED register_t __cdecl internal_4475b0()
{
    __asm
    {
        push esi
        push edi
        push 0x1B
        mov esi, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_44761b
        push 0x1D
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_44761b
        push 0x25
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_44761b
        push 0x26
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_44761b
        mov eax, dword ptr ds : [esi+0x78]
        xor edi, edi
        test eax, eax
        jle public_44761b
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        xor ebx, ebx
        lea ecx, ds:[ecx]
        public_447600 : nop
        mov ecx, dword ptr ds : [esi+0xA0]
        push ebp
        add ecx, ebx
        call public_5574d0
        mov eax, dword ptr ds : [esi+0x78]
        inc edi
        add ebx, 0x44
        cmp edi, eax
        jl public_447600
        pop ebp
        pop ebx
        public_44761b : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4475b0)
    }
}

#undef public_447600
#undef public_44761b
