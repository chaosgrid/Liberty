#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ec2be2 _public_6ec2be2
#define public_6ec2c0c _public_6ec2c0c
#define public_6ec2c69 _public_6ec2c69
#define public_6ec2cd1 _public_6ec2cd1
#define public_6ec2cd6 _public_6ec2cd6

PROC_DECLARE(0x6ec2ba0, internal_6ec2ba0, public_6ec2ba0);
extern "C" NAKED register_t __cdecl internal_6ec2ba0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        test edi, edi
        mov esi, ecx
        mov byte ptr ss : [esp+0xF], 0
        je public_6ec2c69
        mov eax, dword ptr ds : [esi+0x78]
        xor bl, bl
        test eax, 0x3FFFFFFF
        jne public_6ec2be2
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        lea eax, ds:[esi+0xC]
        je public_6ec2be2
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call public_6f15b90
        test eax, 0x3FFFFFFF
        mov dword ptr ds : [esi+0x78], eax
        jne public_6ec2be2
        mov bl, 1
        public_6ec2be2 : nop
        test dword ptr ds : [esi+0x7C], 0x3FFFFFFF
        jne public_6ec2c0c
        mov ecx, dword ptr ds : [esi+0x40]
        test ecx, ecx
        lea eax, ds:[esi+0x40]
        je public_6ec2c0c
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call public_6f15b90
        test eax, 0x3FFFFFFF
        mov dword ptr ds : [esi+0x7C], eax
        je public_6ec2cd6
        public_6ec2c0c : nop
        test bl, bl
        jne public_6ec2cd6
        mov eax, dword ptr ds : [esi+0x78]
        cmp eax, dword ptr ds : [edi]
        jne public_6ec2cd6
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        jne public_6ec2cd6
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        jne public_6ec2cd6
        fld dword ptr ds : [edi+0x20]
        fcomp dword ptr ds : [esi+0x74]
        fnstsw ax
        test ah, 0x41
        jp public_6ec2cd6
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        je public_6ec2cd1
        mov ecx, dword ptr ds : [esi+0x7C]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ec2cd6
        pop edi
        mov byte ptr ss : [esp+0xB], 1
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebx
        pop ecx
        ret 8
        public_6ec2c69 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        lea edi, ds:[esi+0xC]
        je public_6ec2cd6
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        jne public_6ec2cd6
        mov edx, dword ptr ds : [esi+4]
        add edx, 0xC
        push edx
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ec2cd6
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [eax+0x10]
        test edx, edx
        je public_6ec2cd6
        push edi
        call public_6f15b90
        test eax, 0x3FFFFFFF
        lea ecx, ds:[esi+0x78]
        mov dword ptr ds : [ecx], eax
        je public_6ec2cd6
        lea edx, ss:[esp+0x18]
        push edx
        push ecx
        mov dword ptr ss : [esp+0x20], 0
        call dword ptr ds : [public_6fb339c]
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [esi+0x74]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jp public_6ec2cd6
        public_6ec2cd1 : nop
        mov byte ptr ss : [esp+0xF], 1
        public_6ec2cd6 : nop
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ec2ba0)
    }
}

#undef public_6ec2be2
#undef public_6ec2c0c
#undef public_6ec2c69
#undef public_6ec2cd1
#undef public_6ec2cd6
