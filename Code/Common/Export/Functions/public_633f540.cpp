#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633f540);

#define public_633f553 _public_633f553
#define public_633f562 _public_633f562
#define public_633f56e _public_633f56e

PROC_DECLARE(0x633f540, internal_633f540, public_633f540);
extern "C" NAKED register_t __cdecl internal_633f540()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_633f56e
        push esi
        push edi
        public_633f553 : nop
        test eax, eax
        je public_633f562
        mov ecx, 8
        mov esi, edx
        mov edi, eax
        rep movsd
        public_633f562 : nop
        add edx, 0x20
        add eax, 0x20
        cmp edx, ebx
        jne public_633f553
        pop edi
        pop esi
        public_633f56e : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x633f540)
    }
}

#undef public_633f553
#undef public_633f562
#undef public_633f56e
