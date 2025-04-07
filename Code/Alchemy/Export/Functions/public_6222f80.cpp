#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222f80);

#define public_6222fa7 _public_6222fa7
#define public_6222fdd _public_6222fdd
#define public_622300a _public_622300a
#define public_6223014 _public_6223014
#define public_622305d _public_622305d
#define public_6223067 _public_6223067

PROC_DECLARE(0x6222f80, internal_6222f80, public_6222f80);
extern "C" NAKED register_t __cdecl internal_6222f80()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        test ebx, ebx
        mov esi, ecx
        mov dword ptr ss : [esp+0xC], 0
        je public_6222fa7
        mov edi, ebx
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        mov dword ptr ss : [esp+0xC], ecx
        public_6222fa7 : nop
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0x18]
        push 0
        push edx
        lea edx, ss:[esp+0x14]
        push 2
        push edx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+0xC]
        test ax, ax
        jne public_6222fdd
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
        public_6222fdd : nop
        and eax, 0xFFFF
        lea edx, ss:[esp+0x18]
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        push 0
        push edx
        mov edx, dword ptr ds : [esi+4]
        push edi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        test eax, eax
        jne public_622300a
        or eax, 0xFFFFFFFF
        jmp public_6223014
        public_622300a : nop
        mov eax, dword ptr ss : [esp+0x18]
        sub eax, edi
        neg eax
        sbb eax, eax
        public_6223014 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        and ecx, 1
        je public_6223067
        mov eax, dword ptr ds : [esi]
        mov edi, 2
        lea edx, ss:[esp+0x18]
        push 0
        sub edi, ecx
        push edx
        lea edx, ss:[esp+0x18]
        push edi
        push edx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        test eax, eax
        jne public_622305d
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 8
        ret 4
        public_622305d : nop
        mov eax, dword ptr ss : [esp+0x18]
        sub eax, edi
        neg eax
        sbb eax, eax
        public_6223067 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6222f80)
    }
}

#undef public_6222fa7
#undef public_6222fdd
#undef public_622300a
#undef public_6223014
#undef public_622305d
#undef public_6223067
