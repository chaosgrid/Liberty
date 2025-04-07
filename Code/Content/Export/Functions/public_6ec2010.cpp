#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f156b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ec2095 _public_6ec2095
#define public_6ec20a0 _public_6ec20a0
#define public_6ec20a4 _public_6ec20a4
#define public_6ec20a6 _public_6ec20a6
#define public_6ec20bd _public_6ec20bd

PROC_DECLARE(0x6ec2010, internal_6ec2010, public_6ec2010);
extern "C" NAKED register_t __cdecl internal_6ec2010()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xC
        push edi
        push eax
        xor bl, bl
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ec20a6
        mov ecx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f481e0
        push eax
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6fb34e8]
        lea edx, ss:[esp+0x10]
        mov edi, eax
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [public_6fb34e4]
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 0xC
        cmp edi, eax
        jne public_6ec20a6
        cmp edi, 0xA
        jne public_6ec2095
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx+0x10]
        lea eax, ss:[esp+0xC]
        push eax
        call public_6f156b0
        test eax, eax
        je public_6ec20a6
        test edi, edi
        je public_6ec20a6
        mov ecx, dword ptr ds : [eax+0x154]
        mov eax, dword ptr ds : [edi+0x154]
        jmp public_6ec20a0
        public_6ec2095 : nop
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        je public_6ec20a4
        mov ecx, dword ptr ss : [esp+0xC]
        public_6ec20a0 : nop
        cmp ecx, eax
        jne public_6ec20a6
        public_6ec20a4 : nop
        mov bl, 1
        public_6ec20a6 : nop
        mov al, byte ptr ds : [esi+0x44]
        test al, al
        je public_6ec20bd
        pop edi
        xor eax, eax
        test bl, bl
        pop esi
        sete al
        pop ebx
        add esp, 8
        ret 8
        public_6ec20bd : nop
        pop edi
        xor eax, eax
        pop esi
        mov al, bl
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6ec2010)
    }
}

#undef public_6ec2095
#undef public_6ec20a0
#undef public_6ec20a4
#undef public_6ec20a6
#undef public_6ec20bd
