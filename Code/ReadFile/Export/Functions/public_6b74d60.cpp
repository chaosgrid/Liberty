#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b76470);

#define public_6b74d7e _public_6b74d7e
#define public_6b74db1 _public_6b74db1
#define public_6b74db8 _public_6b74db8
#define public_6b74dc6 _public_6b74dc6
#define public_6b74e2b _public_6b74e2b
#define public_6b74e52 _public_6b74e52
#define public_6b74e57 _public_6b74e57
#define public_6b74e77 _public_6b74e77
#define public_6b74e93 _public_6b74e93
#define public_6b74e9d _public_6b74e9d

PROC_DECLARE(0x6b74d60, internal_6b74d60, public_6b74d60);
extern "C" NAKED register_t __cdecl internal_6b74d60()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        push esi
        mov eax, dword ptr ss : [ebp+0x120]
        test eax, eax
        je public_6b74db8
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        jne public_6b74d7e
        mov ecx, dword ptr ss : [ebp+0x130]
        public_6b74d7e : nop
        mov esi, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        mov esi, eax
        test esi, esi
        jne public_6b74db1
        mov eax, dword ptr ss : [ebp+0x120]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x78]
        mov dword ptr ss : [ebp+0x11C], eax
        public_6b74db1 : nop
        mov eax, esi
        pop esi
        pop ebp
        ret 0x18
        public_6b74db8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_6b74dc6
        mov eax, dword ptr ss : [ebp+0x130]
        public_6b74dc6 : nop
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        lea esi, ss:[ebp+0x134]
        je public_6b74e9d
        lea edx, ss:[esp+0x10]
        lea eax, ss:[esp+0x20]
        push edx
        push eax
        mov ecx, esi
        call public_6b76470
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ecx
        je public_6b74e9d
        add eax, 0x10
        test eax, eax
        je public_6b74e9d
        mov ecx, dword ptr ds : [eax+8]
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        test ecx, ecx
        je public_6b74e57
        push edi
        mov edi, ecx
        test edi, edi
        mov edx, ebx
        je public_6b74e52
        mov esi, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp esi, ecx
        jae public_6b74e52
        sub ecx, esi
        cmp ebx, ecx
        jbe public_6b74e2b
        mov edx, ecx
        public_6b74e2b : nop
        mov ecx, edx
        add esi, edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        mov ebp, dword ptr ss : [esp+0x14]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [eax+0x10]
        pop edi
        add ecx, edx
        mov dword ptr ds : [eax+0x10], ecx
        mov eax, edx
        jmp public_6b74e77
        public_6b74e52 : nop
        xor eax, eax
        pop edi
        jmp public_6b74e77
        public_6b74e57 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push 0
        push ecx
        push ebx
        push edx
        push eax
        call dword ptr ds : [public_6b79018]
        neg eax
        mov ecx, dword ptr ss : [esp+0x1C]
        sbb eax, eax
        and eax, ecx
        public_6b74e77 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        cmp eax, ebx
        pop ebx
        mov dword ptr ds : [ecx], eax
        je public_6b74e93
        mov dword ptr ss : [ebp+0x11C], 0xFFFFFFFF
        pop esi
        xor eax, eax
        pop ebp
        ret 0x18
        public_6b74e93 : nop
        pop esi
        mov eax, 1
        pop ebp
        ret 0x18
        public_6b74e9d : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop esi
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x6b74d60)
    }
}

#undef public_6b74d7e
#undef public_6b74db1
#undef public_6b74db8
#undef public_6b74dc6
#undef public_6b74e2b
#undef public_6b74e52
#undef public_6b74e57
#undef public_6b74e77
#undef public_6b74e93
#undef public_6b74e9d
