#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_577ef0);

#define public_577f00 _public_577f00
#define public_577f1d _public_577f1d
#define public_577f30 _public_577f30
#define public_577f3b _public_577f3b
#define public_577f41 _public_577f41

PROC_DECLARE(0x577ef0, internal_577ef0, public_577ef0);
extern "C" NAKED register_t __cdecl internal_577ef0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_5c6d24]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        xor esi, esi
        nop 
        public_577f00 : nop
        mov eax, dword ptr ds : [esi*4+public_614dd8]
        push eax
        push edi
        call ebx
        add esp, 8
        test eax, eax
        je public_577f1d
        inc esi
        cmp esi, 0xCC
        jb public_577f00
        xor esi, esi
        public_577f1d : nop
        mov ecx, dword ptr ds : [public_67c258]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_577f3b
        lea esp, ss:[esp]
        public_577f30 : nop
        cmp esi, dword ptr ds : [eax+8]
        je public_577f41
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_577f30
        public_577f3b : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        public_577f41 : nop
        pop edi
        pop esi
        add eax, 8
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x577ef0)
    }
}

#undef public_577f00
#undef public_577f1d
#undef public_577f30
#undef public_577f3b
#undef public_577f41
