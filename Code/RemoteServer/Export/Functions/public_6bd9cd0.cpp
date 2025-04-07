#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd1260);
CLANG_FORWARD_PROC_SYMBOL(public_6bd9cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6be1750);

#define public_6bd9ce2 _public_6bd9ce2
#define public_6bd9d47 _public_6bd9d47
#define public_6bd9d4c _public_6bd9d4c

PROC_DECLARE(0x6bd9cd0, internal_6bd9cd0, public_6bd9cd0);
extern "C" NAKED register_t __cdecl internal_6bd9cd0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, 2
        mov ebx, ecx
        jb public_6bd9d4c
        public_6bd9ce2 : nop
        movzx ecx, word ptr ds : [esi]
        mov eax, ecx
        and eax, 0xFFFFFF00
        and ecx, 0xFF
        shl eax, 8
        or eax, ecx
        mov ecx, dword ptr ds : [ebx+8]
        add esi, 2
        sub edi, 2
        test ecx, ecx
        je public_6bd9d47
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, eax
        and edx, 0xFFF
        push edx
        shr eax, 0x10
        push eax
        call public_6be1750
        test eax, eax
        jne public_6bd9d47
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x14]
        push edx
        push edi
        push esi
        call dword ptr ds : [eax+8]
        test eax, eax
        jne public_6bd9d47
        mov eax, dword ptr ss : [esp+0x14]
        add esi, eax
        sub edi, eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        mov ecx, ebx
        call public_6bd1260
        public_6bd9d47 : nop
        cmp edi, 2
        jae public_6bd9ce2
        public_6bd9d4c : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6bd9cd0)
    }
}

#undef public_6bd9ce2
#undef public_6bd9d47
#undef public_6bd9d4c
