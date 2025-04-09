#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d9cf0);

#define public_4d9d03 _public_4d9d03
#define public_4d9d12 _public_4d9d12
#define public_4d9d23 _public_4d9d23

PROC_DECLARE(0x4d9cf0, internal_4d9cf0, public_4d9cf0);
extern "C" NAKED register_t __cdecl internal_4d9cf0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_4d9d23
        push esi
        push edi
        public_4d9d03 : nop
        test eax, eax
        je public_4d9d12
        mov ecx, 0x52
        mov esi, edx
        mov edi, eax
        rep movsd
        public_4d9d12 : nop
        add edx, 0x148
        add eax, 0x148
        cmp edx, ebx
        jne public_4d9d03
        pop edi
        pop esi
        public_4d9d23 : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4d9cf0)
    }
}

#undef public_4d9d03
#undef public_4d9d12
#undef public_4d9d23
