#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15f90);
CLANG_FORWARD_PROC_SYMBOL(public_6d45b60);

#define public_6d45b74 _public_6d45b74
#define public_6d45b76 _public_6d45b76
#define public_6d45b92 _public_6d45b92
#define public_6d45bc5 _public_6d45bc5
#define public_6d45bdb _public_6d45bdb
#define public_6d45c0c _public_6d45c0c

PROC_DECLARE(0x6d45b60, internal_6d45b60, public_6d45b60);
extern "C" NAKED register_t __cdecl internal_6d45b60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d8f968]
        push ebx
        push esi
        lea esi, ds:[eax+1]
        cmp esi, 0x1000
        mov bl, 1
        jb public_6d45b92
        public_6d45b74 : nop
        xor esi, esi
        public_6d45b76 : nop
        cmp esi, 0x1000
        jb public_6d45b92
        mov ecx, offset public_6d8f768
        call public_6d15f90
        mov ecx, offset public_6d8f768
        call public_6d15f90
        public_6d45b92 : nop
        mov ecx, esi
        and ecx, 0x1F
        mov edx, 1
        shl edx, cl
        mov eax, esi
        shr eax, 5
        test dword ptr ds : [eax*4+public_6d8f768], edx
        je public_6d45bc5
        test bl, bl
        je public_6d45c0c
        inc esi
        cmp esi, 0x1000
        jae public_6d45b74
        cmp esi, dword ptr ds : [public_6d8f968]
        jne public_6d45b76
        xor bl, bl
        jmp public_6d45b76
        public_6d45bc5 : nop
        test bl, bl
        je public_6d45c0c
        cmp esi, 0x1000
        jb public_6d45bdb
        mov ecx, offset public_6d8f768
        call public_6d15f90
        public_6d45bdb : nop
        mov ecx, esi
        shr ecx, 5
        lea eax, ds : [ecx*4+public_6d8f768]
        mov ecx, esi
        and ecx, 0x1F
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ds : [eax]
        or ecx, edx
        test esi, esi
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [public_6d8f968], esi
        jl public_6d45c0c
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 
        public_6d45c0c : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d45b60)
    }
}

#undef public_6d45b74
#undef public_6d45b76
#undef public_6d45b92
#undef public_6d45bc5
#undef public_6d45bdb
#undef public_6d45c0c
