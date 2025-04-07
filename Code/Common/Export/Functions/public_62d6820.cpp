#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e5950);
CLANG_FORWARD_PROC_SYMBOL(public_62e5b20);
CLANG_FORWARD_PROC_SYMBOL(public_62e5b50);

#define public_62d68a3 _public_62d68a3

PROC_DECLARE(0x62d6820, internal_62d6820, public_62d6820);
extern "C" NAKED register_t __cdecl internal_62d6820()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, ecx
        je public_62d68a3
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        je public_62d68a3
        push ebx
        push 0
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push 0x3F800000
        mov bl, 1
        push eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0xC], ecx
        mov byte ptr ds : [esi+0x10], bl
        call public_62e5b20
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [public_63a0400]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+4]
        push edx
        push eax
        push 0
        push 0
        push ecx
        call public_62e5950
        fstp dword ptr ds : [esi+0x98]
        mov edx, dword ptr ds : [esi+4]
        push 0
        push 0x3F800000
        push edx
        call public_62e5b50
        fstp st(0)
        add esp, 0x2C
        mov al, bl
        pop ebx
        mov dword ptr ds : [esi+0x9C], 0x3E490FDB
        mov byte ptr ds : [esi+0xAD], 0
        pop esi
        ret 0xC
        public_62d68a3 : nop
        xor al, al
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x62d6820)
    }
}

#undef public_62d68a3
