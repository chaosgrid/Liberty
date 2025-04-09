#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5658d0);

#define public_565949 _public_565949
#define public_565983 _public_565983
#define public_5659a6 _public_5659a6

PROC_DECLARE(0x5658d0, internal_5658d0, public_5658d0);
extern "C" NAKED register_t __cdecl internal_5658d0()
{
    __asm
    {
        sub esp, 0x34
        push esi
        push edi
        mov esi, ecx
        xor eax, eax
        mov dword ptr ss : [esp+0xC], offset public_5c7388
        mov ecx, 0xB
        lea edi, ss:[esp+0x10]
        rep stosd
        mov ecx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi+0x10]
        lea ecx, ss:[esp+8]
        push ecx
        mov dword ptr ss : [esp+0x1C], 0x80000000
        mov dword ptr ss : [esp+0x20], 1
        mov dword ptr ss : [esp+0x28], 3
        mov dword ptr ss : [esp+0x2C], 0x8000080
        mov dword ptr ss : [esp+0xC], 0x34
        mov edx, dword ptr ds : [eax]
        push eax
        or edi, 0xFFFFFFFF
        call dword ptr ds : [edx+0x7C]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi], eax
        jne public_565949
        pop edi
        mov eax, 0xFFFFFFF8
        pop esi
        add esp, 0x34
        ret 8
        public_565949 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push ecx
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ds : [esi]
        push 0
        push 0
        push 0
        push 2
        push 0
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+8], eax
        jne public_565983
        pop edi
        mov eax, 0xFFFFFFFA
        pop esi
        add esp, 0x34
        ret 8
        public_565983 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 0
        push 4
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        test eax, eax
        mov dword ptr ds : [esi+0xC], eax
        je public_5659a6
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x34
        ret 8
        public_5659a6 : nop
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x34
        ret 8
        UNREACHABLE_TRAP(0x5658d0)
    }
}

#undef public_565949
#undef public_565983
#undef public_5659a6
