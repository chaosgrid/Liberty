#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_476c40);
CLANG_FORWARD_PROC_SYMBOL(public_476fe0);

#define public_476ff5 _public_476ff5
#define public_47700e _public_47700e
#define public_477020 _public_477020
#define public_47702c _public_47702c
#define public_477031 _public_477031

PROC_DECLARE(0x476fe0, internal_476fe0, public_476fe0);
extern "C" NAKED register_t __cdecl internal_476fe0()
{
    __asm
    {
        push esi
        push edi
        call public_476c40
        mov esi, dword ptr ds : [public_66dc0c]
        test esi, esi
        jne public_476ff5
        xor edx, edx
        jmp public_47700e
        public_476ff5 : nop
        mov ecx, dword ptr ds : [public_66dc10]
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_47700e : nop
        xor eax, eax
        test edx, edx
        jle public_47702c
        mov edi, dword ptr ss : [esp+0xC]
        mov ecx, esi
        lea ebx, ds:[ebx]
        public_477020 : nop
        cmp dword ptr ds : [ecx], edi
        je public_477031
        inc eax
        add ecx, 0x14
        cmp eax, edx
        jl public_477020
        public_47702c : nop
        pop edi
        pop esi
        xor al, al
        ret 
        public_477031 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[eax+eax*4]
        shl eax, 2
        lea ecx, ds:[eax+esi+4]
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ds : [public_66dc0c]
        mov eax, dword ptr ds : [eax+edx+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x476fe0)
    }
}

#undef public_476ff5
#undef public_47700e
#undef public_477020
#undef public_47702c
#undef public_477031
