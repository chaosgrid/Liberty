#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4eab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4eb10);

#define public_6f4eac2 _public_6f4eac2
#define public_6f4eaee _public_6f4eaee
#define public_6f4eaff _public_6f4eaff

PROC_DECLARE(0x6f4eab0, internal_6f4eab0, public_6f4eab0);
extern "C" NAKED register_t __cdecl internal_6f4eab0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x70]
        push edi
        xor edi, edi
        test ecx, ecx
        jle public_6f4eaff
        push esi
        xor esi, esi
        public_6f4eac2 : nop
        mov eax, dword ptr ds : [eax+0x6C]
        mov ecx, dword ptr ds : [eax+esi+0x10]
        add eax, esi
        cmp ecx, 1
        jne public_6f4eaee
        push eax
        call public_6f4eb10
        add esp, 4
        test eax, eax
        jne public_6f4eaee
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx+0x6C]
        mov dword ptr ds : [edx+esi+0x10], 3
        public_6f4eaee : nop
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x70]
        inc edi
        add esi, 0x18
        cmp edi, ecx
        jl public_6f4eac2
        pop esi
        public_6f4eaff : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6f4eab0)
    }
}

#undef public_6f4eac2
#undef public_6f4eaee
#undef public_6f4eaff
