#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68038c0);
CLANG_FORWARD_PROC_SYMBOL(public_6803950);

#define public_68038d3 _public_68038d3
#define public_68038ef _public_68038ef
#define public_68038fb _public_68038fb

PROC_DECLARE(0x68038c0, internal_68038c0, public_68038c0);
extern "C" NAKED register_t __cdecl internal_68038c0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [ecx+0x70]
        push edi
        xor edi, edi
        test eax, eax
        jle public_68038fb
        push esi
        xor esi, esi
        public_68038d3 : nop
        mov eax, dword ptr ds : [ecx+0x6C]
        mov edx, dword ptr ds : [eax+esi+0x10]
        add eax, esi
        test edx, edx
        jne public_68038ef
        push eax
        call public_6803950
        mov ecx, dword ptr ds : [public_680e604]
        add esp, 4
        public_68038ef : nop
        mov eax, dword ptr ds : [ecx+0x70]
        inc edi
        add esi, 0x18
        cmp edi, eax
        jl public_68038d3
        pop esi
        public_68038fb : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x68038c0)
    }
}

#undef public_68038d3
#undef public_68038ef
#undef public_68038fb
