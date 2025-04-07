#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6223070);

#define public_62230a8 _public_62230a8
#define public_62230ba _public_62230ba
#define public_62230d4 _public_62230d4
#define public_62230ed _public_62230ed
#define public_6223117 _public_6223117
#define public_6223121 _public_6223121
#define public_6223161 _public_6223161
#define public_622316b _public_622316b

PROC_DECLARE(0x6223070, internal_6223070, public_6223070);
extern "C" NAKED register_t __cdecl internal_6223070()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        lea edx, ss:[esp+8]
        push 0
        mov esi, ecx
        push edx
        lea edx, ss:[esp+0x14]
        push 2
        mov eax, dword ptr ds : [esi]
        push edx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        jne public_62230a8
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 8
        ret 8
        public_62230a8 : nop
        cmp dword ptr ss : [esp+8], 2
        je public_62230ba
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 8
        ret 8
        public_62230ba : nop
        mov edi, dword ptr ss : [esp+0xC]
        test di, di
        jne public_62230d4
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov byte ptr ds : [eax], 0
        xor eax, eax
        add esp, 8
        ret 8
        public_62230d4 : nop
        mov eax, dword ptr ss : [esp+0x18]
        and edi, 0xFFFF
        cmp edi, eax
        jbe public_62230ed
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 8
        ret 8
        public_62230ed : nop
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0x18]
        push 0
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edi
        push edx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        jne public_6223117
        or eax, 0xFFFFFFFF
        jmp public_6223121
        public_6223117 : nop
        mov eax, dword ptr ss : [esp+0x18]
        sub eax, edi
        neg eax
        sbb eax, eax
        public_6223121 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        and ecx, 1
        je public_622316b
        mov eax, dword ptr ds : [esi]
        mov edi, 2
        lea edx, ss:[esp+0x18]
        push 0
        sub edi, ecx
        push edx
        lea edx, ss:[esp+0x1C]
        push edi
        push edx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        jne public_6223161
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 8
        ret 8
        public_6223161 : nop
        mov eax, dword ptr ss : [esp+0x18]
        sub eax, edi
        neg eax
        sbb eax, eax
        public_622316b : nop
        pop edi
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6223070)
    }
}

#undef public_62230a8
#undef public_62230ba
#undef public_62230d4
#undef public_62230ed
#undef public_6223117
#undef public_6223121
#undef public_6223161
#undef public_622316b
