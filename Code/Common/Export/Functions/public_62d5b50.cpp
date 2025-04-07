#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e5850);
CLANG_FORWARD_PROC_SYMBOL(public_62e5af0);

#define public_62d5be3 _public_62d5be3

PROC_DECLARE(0x62d5b50, internal_62d5b50, public_62d5b50);
extern "C" NAKED register_t __cdecl internal_62d5b50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, ecx
        je public_62d5be3
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        je public_62d5be3
        push ebx
        push 4
        push 0
        push 4
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push 0x3F800000
        mov ebx, 1
        push eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0xC], ecx
        mov byte ptr ds : [esi+0x10], bl
        call public_62e5af0
        fstp dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [esi+4]
        add esp, 8
        push 0
        push edx
        call public_62e5850
        fadd dword ptr ds : [public_639fe30]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0x14
        push ebx
        fstp dword ptr ds : [esi+0x4C]
        push 0
        push ebx
        push 0x3F800000
        push eax
        call public_62e5af0
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+4]
        add esp, 8
        push 0
        push ecx
        call public_62e5850
        fadd dword ptr ds : [public_639e6d4]
        add esp, 0x14
        mov al, bl
        pop ebx
        fstp dword ptr ds : [esi+0x50]
        pop esi
        ret 0xC
        public_62d5be3 : nop
        xor al, al
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x62d5b50)
    }
}

#undef public_62d5be3
