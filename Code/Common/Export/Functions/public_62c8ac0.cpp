#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2090);
CLANG_FORWARD_PROC_SYMBOL(public_62e5b20);

#define public_62c8b23 _public_62c8b23

PROC_DECLARE(0x62c8ac0, internal_62c8ac0, public_62c8ac0);
extern "C" NAKED register_t __cdecl internal_62c8ac0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        push edi
        push ebp
        push eax
        mov esi, ecx
        call public_62d2090
        mov bl, al
        test bl, bl
        je public_62c8b23
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi+0xE0]
        push ebp
        lea ecx, ds:[esi+0xE0]
        push edi
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi+0x1A0]
        push ebp
        lea ecx, ds:[esi+0x1A0]
        push edi
        push eax
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi+0x14]
        push 0x3F800000
        push 0
        push ecx
        call public_62e5b20
        fstp dword ptr ds : [esi+0x1CC]
        add esp, 0xC
        public_62c8b23 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62c8ac0)
    }
}

#undef public_62c8b23
