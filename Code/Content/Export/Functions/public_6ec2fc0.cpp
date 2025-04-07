#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f47980);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ec3002 _public_6ec3002
#define public_6ec3004 _public_6ec3004

PROC_DECLARE(0x6ec2fc0, internal_6ec2fc0, public_6ec2fc0);
extern "C" NAKED register_t __cdecl internal_6ec2fc0()
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
        je public_6ec3002
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ec3002
        mov ecx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f47980
        test eax, eax
        je public_6ec3002
        mov edx, dword ptr ds : [eax+0x48]
        cmp edx, dword ptr ds : [esi+0x10]
        jne public_6ec3002
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, dword ptr ds : [edi]
        mov al, 1
        je public_6ec3004
        public_6ec3002 : nop
        mov al, bl
        public_6ec3004 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ec2fc0)
    }
}

#undef public_6ec3002
#undef public_6ec3004
