#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d9d30);

#define public_4d9d45 _public_4d9d45
#define public_4d9d54 _public_4d9d54
#define public_4d9d5f _public_4d9d5f

PROC_DECLARE(0x4d9d30, internal_4d9d30, public_4d9d30);
extern "C" NAKED register_t __cdecl internal_4d9d30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_4d9d5f
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov edx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_4d9d45 : nop
        test eax, eax
        je public_4d9d54
        mov ecx, 0x52
        mov esi, ebx
        mov edi, eax
        rep movsd
        public_4d9d54 : nop
        add eax, 0x148
        dec edx
        jne public_4d9d45
        pop edi
        pop esi
        pop ebx
        public_4d9d5f : nop
        ret 0xC
        UNREACHABLE_TRAP(0x4d9d30)
    }
}

#undef public_4d9d45
#undef public_4d9d54
#undef public_4d9d5f
