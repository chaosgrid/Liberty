#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5420a0);
CLANG_FORWARD_PROC_SYMBOL(public_542330);

#define public_5420b8 _public_5420b8
#define public_5420c3 _public_5420c3
#define public_5420ee _public_5420ee
#define public_5420f0 _public_5420f0
#define public_54210e _public_54210e
#define public_54211d _public_54211d

PROC_DECLARE(0x5420a0, internal_5420a0, public_5420a0);
extern "C" NAKED register_t __cdecl internal_5420a0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ebx]
        push ebp
        push esi
        xor eax, eax
        test ecx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        je public_5420b8
        cmp ecx, edi
        jne public_54211d
        public_5420b8 : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x20], eax
        public_5420c3 : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call public_542330
        mov esi, eax
        test esi, esi
        je public_54210e
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_5420ee
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_5420f0
        public_5420ee : nop
        xor eax, eax
        public_5420f0 : nop
        mov edx, dword ptr ss : [esp+0x14]
        test dword ptr ds : [eax+0xE0], edx
        je public_5420c3
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [ebp], eax
        mov dword ptr ds : [ebx], edi
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        public_54210e : nop
        mov dword ptr ss : [ebp], 0
        mov dword ptr ds : [ebx], 0
        mov eax, esi
        public_54211d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x5420a0)
    }
}

#undef public_5420b8
#undef public_5420c3
#undef public_5420ee
#undef public_5420f0
#undef public_54210e
#undef public_54211d
