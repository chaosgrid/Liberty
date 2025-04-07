#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f19b80);

#define public_6ec24c5 _public_6ec24c5
#define public_6ec24f3 _public_6ec24f3
#define public_6ec2505 _public_6ec2505
#define public_6ec2509 _public_6ec2509
#define public_6ec2521 _public_6ec2521
#define public_6ec2523 _public_6ec2523

PROC_DECLARE(0x6ec24a0, internal_6ec24a0, public_6ec24a0);
extern "C" NAKED register_t __cdecl internal_6ec24a0()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        xor al, al
        test ebp, ebp
        push edi
        mov esi, ecx
        je public_6ec2523
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        lea edi, ds:[esi+0x10]
        je public_6ec24c5
        mov ecx, dword ptr ds : [esi+4]
        push edi
        call public_6f15b90
        mov dword ptr ds : [esi+0x48], eax
        public_6ec24c5 : nop
        mov ecx, dword ptr ss : [ebp]
        lea eax, ds:[esi+0xC]
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        call public_6f19b80
        test al, al
        je public_6ec2521
        cmp dword ptr ds : [edi], 0
        je public_6ec24f3
        test dword ptr ds : [esi+0x48], 0x3FFFFFFF
        jne public_6ec24f3
        mov ecx, dword ptr ds : [esi+4]
        push edi
        call public_6f15b90
        mov dword ptr ds : [esi+0x48], eax
        public_6ec24f3 : nop
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, eax
        and ecx, 0x3FFFFFFF
        je public_6ec2505
        cmp dword ptr ss : [ebp+8], eax
        je public_6ec2509
        public_6ec2505 : nop
        test ecx, ecx
        jne public_6ec2521
        public_6ec2509 : nop
        mov edx, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [esi+0x44]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi+0x4C], edx
        jl public_6ec2521
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 8
        public_6ec2521 : nop
        xor al, al
        public_6ec2523 : nop
        pop edi
        pop esi
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6ec24a0)
    }
}

#undef public_6ec24c5
#undef public_6ec24f3
#undef public_6ec2505
#undef public_6ec2509
#undef public_6ec2521
#undef public_6ec2523
