#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66134d0);

#define public_6614d9d _public_6614d9d
#define public_6614db6 _public_6614db6
#define public_6614dc0 _public_6614dc0
#define public_6614dc9 _public_6614dc9

PROC_DECLARE(0x6614d40, internal_6614d40, public_6614d40);
extern "C" NAKED register_t __cdecl internal_6614d40()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        push edi
        mov edi, 0xFFFFFFFE
        test ebx, ebx
        je public_6614dc9
        mov esi, dword ptr ss : [esp+0x1C]
        cmp esi, 0xFFFFFFFF
        je public_6614dc9
        test esi, esi
        je public_6614dc9
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call dword ptr ds : [public_662900c]
        add esp, 4
        lea ecx, ss:[esp+0x1C]
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x1C], eax
        push ecx
        push edx
        lea ecx, ds:[esi+4]
        call public_66134d0
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, eax
        je public_6614dc9
        mov esi, dword ptr ds : [ecx+0x24]
        mov eax, dword ptr ds : [ecx+0x28]
        xor ebp, ebp
        cmp esi, eax
        je public_6614dc0
        mov edi, dword ptr ss : [esp+0x24]
        public_6614d9d : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6614db6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [esi]
        push edi
        push edx
        call ebx
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        public_6614db6 : nop
        mov eax, dword ptr ds : [ecx+0x28]
        add esi, 0x14
        cmp esi, eax
        jne public_6614d9d
        public_6614dc0 : nop
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret 0x14
        public_6614dc9 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x14
        UNREACHABLE_TRAP(0x6614d40)
    }
}

#undef public_6614d9d
#undef public_6614db6
#undef public_6614dc0
#undef public_6614dc9
