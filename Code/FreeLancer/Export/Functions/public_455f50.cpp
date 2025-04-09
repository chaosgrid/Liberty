#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_455f50);

#define public_455f81 _public_455f81
#define public_455f90 _public_455f90
#define public_455f9b _public_455f9b
#define public_455fad _public_455fad
#define public_455fb2 _public_455fb2
#define public_455fb5 _public_455fb5

PROC_DECLARE(0x455f50, internal_455f50, public_455f50);
extern "C" NAKED register_t __cdecl internal_455f50()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xC0]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+0xBC]
        sub esi, edx
        dec esi
        mov eax, 1
        cmp esi, eax
        push edi
        jl public_455fb2
        mov ecx, dword ptr ds : [ecx+0xB4]
        mov ebx, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [esp+0x14]
        shl edx, 6
        lea edi, ds:[edx+ecx+0x7C]
        public_455f81 : nop
        mov edx, dword ptr ds : [edi]
        xor ecx, ecx
        test ebx, ebx
        jle public_455f9b
        lea esp, ss:[esp]
        public_455f90 : nop
        cmp edx, dword ptr ss : [ebp+ecx*4]
        je public_455fad
        inc ecx
        cmp ecx, ebx
        jl public_455f90
        public_455f9b : nop
        inc eax
        add edi, 0x40
        cmp eax, esi
        jle public_455f81
        pop edi
        lea eax, ds:[esi+1]
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_455fad : nop
        cmp eax, 0xFFFFFFFF
        jne public_455fb5
        public_455fb2 : nop
        lea eax, ds:[esi+1]
        public_455fb5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x455f50)
    }
}

#undef public_455f81
#undef public_455f90
#undef public_455f9b
#undef public_455fad
#undef public_455fb2
#undef public_455fb5
