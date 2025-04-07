#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ec2a30 _public_6ec2a30
#define public_6ec2a4c _public_6ec2a4c
#define public_6ec2a56 _public_6ec2a56
#define public_6ec2a65 _public_6ec2a65
#define public_6ec2a74 _public_6ec2a74
#define public_6ec2a79 _public_6ec2a79

PROC_DECLARE(0x6ec2980, internal_6ec2980, public_6ec2980);
extern "C" NAKED register_t __cdecl internal_6ec2980()
{
    __asm
    {
        sub esp, 0x5C
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xC
        push edi
        push eax
        mov byte ptr ss : [esp+0x13], 0
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ec2a79
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+0x10]
        test eax, eax
        je public_6ec2a79
        lea eax, ds:[esi+0x14]
        push eax
        call public_6f15940
        test eax, 0x3FFFFFFF
        mov dword ptr ds : [esi+0x48], eax
        je public_6ec2a79
        mov ecx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f478c0
        test eax, eax
        je public_6ec2a79
        mov edi, dword ptr ds : [eax+0x48]
        mov ecx, dword ptr ds : [esi+0x48]
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3664]
        add esp, 0xC
        test eax, eax
        jne public_6ec2a79
        lea edx, ss:[esp+0x10]
        push edx
        push 8
        lea eax, ss:[esp+0x2C]
        push eax
        push 0
        lea ecx, ss:[esp+0x28]
        push ecx
        push edi
        call dword ptr ds : [public_6fb3398]
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0x18
        xor bl, bl
        xor edi, edi
        test eax, eax
        jbe public_6ec2a56
        push ebp
        mov ebp, dword ptr ds : [public_6fb33a4]
        lea ecx, ds:[ecx]
        public_6ec2a30 : nop
        mov eax, dword ptr ss : [esp+edi*4+0x28]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call ebp
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+0x10]
        add esp, 8
        test eax, ecx
        je public_6ec2a4c
        mov bl, 1
        public_6ec2a4c : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc edi
        cmp edi, eax
        jb public_6ec2a30
        pop ebp
        public_6ec2a56 : nop
        mov al, byte ptr ds : [esi+0xC]
        test al, al
        je public_6ec2a65
        test bl, bl
        jne public_6ec2a74
        test al, al
        jne public_6ec2a79
        public_6ec2a65 : nop
        test bl, bl
        je public_6ec2a74
        test al, al
        jne public_6ec2a79
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_6ec2a79
        public_6ec2a74 : nop
        mov byte ptr ss : [esp+0xF], 1
        public_6ec2a79 : nop
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebx
        add esp, 0x5C
        ret 8
        UNREACHABLE_TRAP(0x6ec2980)
    }
}

#undef public_6ec2a30
#undef public_6ec2a4c
#undef public_6ec2a56
#undef public_6ec2a65
#undef public_6ec2a74
#undef public_6ec2a79
