#include "EngBase-PCH.h"


#define public_662003f _public_662003f
#define public_662006a _public_662006a
#define public_6620077 _public_6620077
#define public_662008f _public_662008f
#define public_6620095 _public_6620095
#define public_66200aa _public_66200aa

PROC_DECLARE(0x661ffc0, internal_661ffc0, public_661ffc0);
extern "C" NAKED register_t __cdecl internal_661ffc0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        sub esp, 0x34
        test edx, edx
        push ebx
        je public_66200aa
        mov ebx, dword ptr ss : [esp+0x44]
        test ebx, ebx
        je public_66200aa
        push esi
        push edi
        mov ecx, 0xB
        xor eax, eax
        lea edi, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x10], offset public_662a030
        rep stosd
        mov eax, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x1C], 0x80000000
        test eax, eax
        mov dword ptr ss : [esp+0x20], 1
        mov dword ptr ss : [esp+0x28], 3
        mov dword ptr ss : [esp+0x2C], 0x8000080
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0xC], 0x34
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        jne public_6620095
        mov al, byte ptr ds : [edx+1]
        cmp al, 0x3A
        je public_662008f
        cmp byte ptr ds : [edx], 0x5C
        jne public_662003f
        cmp al, 0x5C
        je public_662008f
        public_662003f : nop
        mov esi, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6620095
        call dword ptr ds : [public_6629000]
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        je public_6620077
        test eax, eax
        je public_662006a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], 0
        public_662006a : nop
        test edi, edi
        mov dword ptr ds : [esi+4], edi
        je public_6620077
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_6620077 : nop
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0xC]
        push ebx
        push edx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        pop edi
        pop esi
        pop ebx
        add esp, 0x34
        ret 0x10
        public_662008f : nop
        call dword ptr ds : [public_6629000]
        public_6620095 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        pop edi
        pop esi
        pop ebx
        add esp, 0x34
        ret 0x10
        public_66200aa : nop
        mov eax, 0xFFFFFFFE
        pop ebx
        add esp, 0x34
        ret 0x10
        UNREACHABLE_TRAP(0x661ffc0)
    }
}

#undef public_662003f
#undef public_662006a
#undef public_6620077
#undef public_662008f
#undef public_6620095
#undef public_66200aa
