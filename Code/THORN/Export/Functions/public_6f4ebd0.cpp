#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4ebd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ec60);

#define public_6f4ebe3 _public_6f4ebe3
#define public_6f4ebff _public_6f4ebff
#define public_6f4ec0b _public_6f4ec0b

PROC_DECLARE(0x6f4ebd0, internal_6f4ebd0, public_6f4ebd0);
extern "C" NAKED register_t __cdecl internal_6f4ebd0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [ecx+0x70]
        push edi
        xor edi, edi
        test eax, eax
        jle public_6f4ec0b
        push esi
        xor esi, esi
        public_6f4ebe3 : nop
        mov eax, dword ptr ds : [ecx+0x6C]
        mov edx, dword ptr ds : [eax+esi+0x10]
        add eax, esi
        test edx, edx
        jne public_6f4ebff
        push eax
        call public_6f4ec60
        mov ecx, dword ptr ds : [public_6f61e28]
        add esp, 4
        public_6f4ebff : nop
        mov eax, dword ptr ds : [ecx+0x70]
        inc edi
        add esi, 0x18
        cmp edi, eax
        jl public_6f4ebe3
        pop esi
        public_6f4ec0b : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6f4ebd0)
    }
}

#undef public_6f4ebe3
#undef public_6f4ebff
#undef public_6f4ec0b
