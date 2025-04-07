#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d1680);

#define public_62d16a0 _public_62d16a0
#define public_62d16bf _public_62d16bf
#define public_62d16c7 _public_62d16c7

PROC_DECLARE(0x62d1680, internal_62d1680, public_62d1680);
extern "C" NAKED register_t __cdecl internal_62d1680()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fc8e0]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        jle public_62d16bf
        mov ebx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [public_639902c]
        mov esi, offset public_63fc8e4
        mov edi, edi
        public_62d16a0 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [eax+8]
        push eax
        call ebp
        add esp, 8
        test eax, eax
        je public_62d16c7
        mov eax, dword ptr ds : [public_63fc8e0]
        inc edi
        add esi, 4
        cmp edi, eax
        jl public_62d16a0
        public_62d16bf : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 
        public_62d16c7 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62d1680)
    }
}

#undef public_62d16a0
#undef public_62d16bf
#undef public_62d16c7
