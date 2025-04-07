#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ec2731 _public_6ec2731
#define public_6ec273e _public_6ec273e
#define public_6ec2745 _public_6ec2745

PROC_DECLARE(0x6ec2700, internal_6ec2700, public_6ec2700);
extern "C" NAKED register_t __cdecl internal_6ec2700()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xC
        push eax
        xor bl, bl
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ec2745
        mov al, byte ptr ds : [esi+0xC]
        test al, al
        je public_6ec2731
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [edx+0x10]
        test ecx, ecx
        jne public_6ec273e
        test al, al
        jne public_6ec2745
        public_6ec2731 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        jne public_6ec2745
        public_6ec273e : nop
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_6ec2745 : nop
        pop esi
        mov al, bl
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ec2700)
    }
}

#undef public_6ec2731
#undef public_6ec273e
#undef public_6ec2745
