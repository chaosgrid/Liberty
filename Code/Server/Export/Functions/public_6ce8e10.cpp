#include "Server-PCH.h"


#define public_6ce8e30 _public_6ce8e30
#define public_6ce8e32 _public_6ce8e32
#define public_6ce8e7b _public_6ce8e7b

PROC_DECLARE(0x6ce8e10, internal_6ce8e10, public_6ce8e10);
extern "C" NAKED register_t __cdecl internal_6ce8e10()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        push edi
        je public_6ce8e30
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_6ce8e30
        mov edi, eax
        jmp public_6ce8e32
        public_6ce8e30 : nop
        xor edi, edi
        public_6ce8e32 : nop
        mov edx, dword ptr ss : [esp+0xC]
        push 0
        push edx
        call dword ptr ds : [public_6d64250]
        mov dword ptr ss : [esp+0x14], eax
        add esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ds:[edi+0xE4]
        call dword ptr ds : [public_6d64254]
        test eax, eax
        je public_6ce8e7b
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi]
        push ebx
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push eax
        mov ecx, esi
        mov bl, 1
        call dword ptr ds : [edx+0x224]
        mov al, bl
        pop ebx
        pop edi
        pop esi
        ret 0xC
        public_6ce8e7b : nop
        pop edi
        xor al, al
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6ce8e10)
    }
}

#undef public_6ce8e30
#undef public_6ce8e32
#undef public_6ce8e7b
