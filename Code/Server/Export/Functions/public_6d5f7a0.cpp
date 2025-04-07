#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5f130);

#define public_6d5f806 _public_6d5f806
#define public_6d5f808 _public_6d5f808

PROC_DECLARE(0x6d5f7a0, internal_6d5f7a0, public_6d5f7a0);
extern "C" NAKED register_t __cdecl internal_6d5f7a0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi]
        cmp ecx, 0xFFFFFFFF
        push edi
        mov eax, 0xFFFFFFFC
        je public_6d5f808
        mov edi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [edi]
        cmp edx, 0xFFFFFFFF
        je public_6d5f808
        lea eax, ss:[esp+0x10]
        push eax
        push edx
        push ecx
        mov ebx, 0xFFFFFFFE
        call dword ptr ds : [public_6d64890]
        add esp, 0xC
        test eax, eax
        jne public_6d5f806
        fld dword ptr ss : [esp+0x18]
        push ecx
        fsub dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp]
        push edi
        push esi
        call dword ptr ds : [public_6d64a2c]
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x20]
        push 0
        push edx
        mov dword ptr ss : [esp+0x28], ecx
        call public_6d5f130
        add esp, 0x14
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        public_6d5f806 : nop
        mov eax, ebx
        public_6d5f808 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d5f7a0)
    }
}

#undef public_6d5f806
#undef public_6d5f808
