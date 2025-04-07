#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);

#define public_6ebf917 _public_6ebf917
#define public_6ebf939 _public_6ebf939

PROC_DECLARE(0x6ebf8f0, internal_6ebf8f0, public_6ebf8f0);
extern "C" NAKED register_t __cdecl internal_6ebf8f0()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov edi, offset public_6fb57a0
        lea esi, ds:[ebx+0x10]
        mov ecx, 5
        xor eax, eax
        repe cmpsb
        je public_6ebf917
        lea ecx, ds:[ebx+0xC]
        push ecx
        mov ecx, dword ptr ds : [ebx+4]
        call public_6f15940
        mov dword ptr ds : [ebx+0x74], eax
        public_6ebf917 : nop
        mov edi, offset public_6fb57a0
        lea esi, ds:[ebx+0x44]
        mov ecx, 5
        xor edx, edx
        repe cmpsb
        je public_6ebf939
        mov ecx, dword ptr ds : [ebx+4]
        lea eax, ds:[ebx+0x40]
        push eax
        call public_6f15940
        mov dword ptr ds : [ebx+0x78], eax
        public_6ebf939 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ebf8f0)
    }
}

#undef public_6ebf917
#undef public_6ebf939
