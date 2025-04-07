#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15710);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57710);

#define public_6ec2808 _public_6ec2808
#define public_6ec2813 _public_6ec2813
#define public_6ec2829 _public_6ec2829
#define public_6ec283b _public_6ec283b
#define public_6ec283d _public_6ec283d

PROC_DECLARE(0x6ec27c0, internal_6ec27c0, public_6ec27c0);
extern "C" NAKED register_t __cdecl internal_6ec27c0()
{
    __asm
    {
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
        je public_6ec283d
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+0x10]
        test eax, eax
        je public_6ec283d
        lea eax, ds:[esi+0x10]
        push eax
/*FIXUP push offset public_6fb4708 @0x6ec27eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4708
        call dword ptr ds : [public_6fb3294]
        mov ecx, dword ptr ds : [esi+4]
        add esp, 8
        test eax, eax
        jne public_6ec2808
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx+0x10]
        jmp public_6ec2813
        public_6ec2808 : nop
        lea eax, ds:[esi+0xC]
        push eax
        call public_6f15710
        mov edi, eax
        public_6ec2813 : nop
        test edi, edi
        je public_6ec283d
        mov ecx, edi
        call public_6f57710
        test al, al
        je public_6ec2829
        mov al, byte ptr ds : [esi+0x40]
        test al, al
        jne public_6ec283b
        public_6ec2829 : nop
        mov ecx, edi
        call public_6f57710
        test al, al
        jne public_6ec283d
        mov al, byte ptr ds : [esi+0x40]
        test al, al
        jne public_6ec283d
        public_6ec283b : nop
        mov bl, 1
        public_6ec283d : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ec27c0)
    }
}

#undef public_6ec2808
#undef public_6ec2813
#undef public_6ec2829
#undef public_6ec283b
#undef public_6ec283d
