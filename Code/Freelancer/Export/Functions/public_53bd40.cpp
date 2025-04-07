#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5416c0);

#define public_53bd70 _public_53bd70
#define public_53bd72 _public_53bd72
#define public_53bdbf _public_53bdbf

PROC_DECLARE(0x53bd40, internal_53bd40, public_53bd40);
extern "C" NAKED register_t __cdecl internal_53bd40()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi]
        push 0
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_53bdbf
        lea esi, ds:[eax+0xC]
        test esi, esi
        je public_53bd70
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_53bd70
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_53bd72
        public_53bd70 : nop
        xor eax, eax
        public_53bd72 : nop
        fld dword ptr ds : [edi+0x20]
        sub esp, 8
        fstp qword ptr ss : [esp]
        lea edx, ds:[edi+4]
        push edx
        lea ecx, ds:[edi+0x14]
        push ecx
        push eax
        call dword ptr ds : [public_5c6a40]
        add esp, 0x14
        test esi, esi
        je public_53bdbf
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        je public_53bdbf
        mov edx, dword ptr ds : [esi+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_53bdbf
        mov eax, dword ptr ds : [edi+0x24]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6a3c]
        movzx ecx, byte ptr ds : [edi+0x28]
        mov dword ptr ds : [esi+0x1A0], ecx
        public_53bdbf : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x53bd40)
    }
}

#undef public_53bd70
#undef public_53bd72
#undef public_53bdbf
