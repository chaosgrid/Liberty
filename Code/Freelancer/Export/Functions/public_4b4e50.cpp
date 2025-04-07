#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b4e50);

#define public_4b4e63 _public_4b4e63
#define public_4b4e72 _public_4b4e72
#define public_4b4e7e _public_4b4e7e

PROC_DECLARE(0x4b4e50, internal_4b4e50, public_4b4e50);
extern "C" NAKED register_t __cdecl internal_4b4e50()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_4b4e7e
        push esi
        push edi
        public_4b4e63 : nop
        test eax, eax
        je public_4b4e72
        mov ecx, 8
        mov esi, edx
        mov edi, eax
        rep movsd
        public_4b4e72 : nop
        add edx, 0x20
        add eax, 0x20
        cmp edx, ebx
        jne public_4b4e63
        pop edi
        pop esi
        public_4b4e7e : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4b4e50)
    }
}

#undef public_4b4e63
#undef public_4b4e72
#undef public_4b4e7e
