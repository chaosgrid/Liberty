#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68037a0);
CLANG_FORWARD_PROC_SYMBOL(public_6803800);

#define public_68037b2 _public_68037b2
#define public_68037de _public_68037de
#define public_68037ef _public_68037ef

PROC_DECLARE(0x68037a0, internal_68037a0, public_68037a0);
extern "C" NAKED register_t __cdecl internal_68037a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0x70]
        push edi
        xor edi, edi
        test ecx, ecx
        jle public_68037ef
        push esi
        xor esi, esi
        public_68037b2 : nop
        mov eax, dword ptr ds : [eax+0x6C]
        mov ecx, dword ptr ds : [eax+esi+0x10]
        add eax, esi
        cmp ecx, 1
        jne public_68037de
        push eax
        call public_6803800
        add esp, 4
        test eax, eax
        jne public_68037de
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx+0x6C]
        mov dword ptr ds : [edx+esi+0x10], 3
        public_68037de : nop
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0x70]
        inc edi
        add esi, 0x18
        cmp edi, ecx
        jl public_68037b2
        pop esi
        public_68037ef : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x68037a0)
    }
}

#undef public_68037b2
#undef public_68037de
#undef public_68037ef
