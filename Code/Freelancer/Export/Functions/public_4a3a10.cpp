#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a3a10);

#define public_4a3a23 _public_4a3a23
#define public_4a3a32 _public_4a3a32
#define public_4a3a3e _public_4a3a3e

PROC_DECLARE(0x4a3a10, internal_4a3a10, public_4a3a10);
extern "C" NAKED register_t __cdecl internal_4a3a10()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_4a3a3e
        push esi
        push edi
        public_4a3a23 : nop
        test eax, eax
        je public_4a3a32
        mov ecx, 6
        mov esi, edx
        mov edi, eax
        rep movsd
        public_4a3a32 : nop
        add edx, 0x18
        add eax, 0x18
        cmp edx, ebx
        jne public_4a3a23
        pop edi
        pop esi
        public_4a3a3e : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4a3a10)
    }
}

#undef public_4a3a23
#undef public_4a3a32
#undef public_4a3a3e
