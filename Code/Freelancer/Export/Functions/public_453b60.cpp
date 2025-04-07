#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_453b60);

#define public_453b80 _public_453b80
#define public_453b90 _public_453b90
#define public_453b9b _public_453b9b
#define public_453bab _public_453bab
#define public_453bb5 _public_453bb5

PROC_DECLARE(0x453b60, internal_453b60, public_453b60);
extern "C" NAKED register_t __cdecl internal_453b60()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        xor ecx, ecx
        cmp esi, eax
        je public_453bb5
        mov ebx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [public_5c6d24]
        nop 
        lea esp, ss:[esp]
        public_453b80 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_453b90
        mov eax, dword ptr ds : [public_5c7078]
        test eax, eax
        je public_453b9b
        public_453b90 : nop
        push ebx
        push eax
        call ebp
        add esp, 8
        test eax, eax
        je public_453bab
        public_453b9b : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+4]
        jne public_453b80
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 4
        public_453bab : nop
        mov eax, dword ptr ds : [esi+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_453bb5 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x453b60)
    }
}

#undef public_453b80
#undef public_453b90
#undef public_453b9b
#undef public_453bab
#undef public_453bb5
