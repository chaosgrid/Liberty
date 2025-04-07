#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebe560);
CLANG_FORWARD_PROC_SYMBOL(public_6ecaa00);

#define public_6ec2857 _public_6ec2857
#define public_6ec285f _public_6ec285f

PROC_DECLARE(0x6ec2810, internal_6ec2810, public_6ec2810);
extern "C" NAKED register_t __cdecl internal_6ec2810()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+4]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        lea ecx, ds:[esi+0x54]
        or ebx, 0xFFFFFFFF
        call public_6ecaa00
        mov esi, dword ptr ds : [esi+0x58]
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, esi
        je public_6ec285f
        mov esi, dword ptr ss : [esp+0x18]
        test esi, esi
        je public_6ec2857
        mov ecx, dword ptr ds : [edi+0x10]
        call public_6ebe560
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi], ecx
        public_6ec2857 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0xC
        public_6ec285f : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ec2810)
    }
}

#undef public_6ec2857
#undef public_6ec285f
