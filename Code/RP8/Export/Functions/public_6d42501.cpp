#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4215a);
CLANG_FORWARD_PROC_SYMBOL(public_6d42501);
CLANG_FORWARD_PROC_SYMBOL(public_6d4292b);

#define public_6d42525 _public_6d42525
#define public_6d4252f _public_6d4252f
#define public_6d42544 _public_6d42544
#define public_6d4254a _public_6d4254a

PROC_DECLARE(0x6d42501, internal_6d42501, public_6d42501);
extern "C" NAKED register_t __cdecl internal_6d42501()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        push edi
        push esi
        call public_6d4292b
        test eax, eax
        mov edi, dword ptr ds : [esi+0xBC]
        pop ecx
        mov dword ptr ds : [esi+0xC0], edi
        jle public_6d4254a
        mov dword ptr ss : [ebp-4], eax
        push ebx
        public_6d42525 : nop
        test edi, edi
        mov ebx, dword ptr ss : [ebp+0xC]
        jbe public_6d42544
        mov dword ptr ss : [ebp+8], edi
        public_6d4252f : nop
        push 0
        push dword ptr ds : [ebx]
        push esi
        call public_6d4215a
        add esp, 0xC
        add ebx, 4
        dec dword ptr ss : [ebp+8]
        jne public_6d4252f
        public_6d42544 : nop
        dec dword ptr ss : [ebp-4]
        jne public_6d42525
        pop ebx
        public_6d4254a : nop
        pop edi
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d42501)
    }
}

#undef public_6d42525
#undef public_6d4252f
#undef public_6d42544
#undef public_6d4254a
