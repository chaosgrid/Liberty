#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ec2ded _public_6ec2ded
#define public_6ec2e12 _public_6ec2e12
#define public_6ec2e14 _public_6ec2e14

PROC_DECLARE(0x6ec2dd0, internal_6ec2dd0, public_6ec2dd0);
extern "C" NAKED register_t __cdecl internal_6ec2dd0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        xor bl, bl
        test edi, edi
        mov esi, ecx
        je public_6ec2e12
        mov eax, dword ptr ds : [esi+0xC]
        cmp dword ptr ds : [edi], eax
        je public_6ec2ded
        test eax, 0x3FFFFFFF
        jne public_6ec2e12
        public_6ec2ded : nop
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ec2e12
        mov ecx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f481e0
        cmp dword ptr ds : [edi+4], eax
        mov al, 1
        je public_6ec2e14
        public_6ec2e12 : nop
        mov al, bl
        public_6ec2e14 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ec2dd0)
    }
}

#undef public_6ec2ded
#undef public_6ec2e12
#undef public_6ec2e14
