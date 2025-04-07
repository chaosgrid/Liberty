#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59efa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_59efc6 _public_59efc6
#define public_59efdd _public_59efdd
#define public_59f078 _public_59f078
#define public_59f0a5 _public_59f0a5
#define public_59f0b4 _public_59f0b4

PROC_DECLARE(0x59efa0, internal_59efa0, public_59efa0);
extern "C" NAKED register_t __cdecl internal_59efa0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        sub esp, 0x30
        test al, al
        push esi
        mov esi, ecx
        je public_59efc6
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 4
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 0
        jmp public_59efdd
        public_59efc6 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 8
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 1
        public_59efdd : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        fld dword ptr ss : [esp+0x40]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x44
        jnp public_59f0a5
        mov eax, dword ptr ds : [public_67dd10]
        test eax, eax
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov dword ptr ss : [esp+4], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        jne public_59f078
        call public_5b73e0
        mov dword ptr ds : [public_67dd10], eax
        public_59f078 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ds : [eax]
        push ecx
        lea ecx, ss:[esp+8]
        push ecx
        lea ecx, ss:[esp+0xC]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        mov edx, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [edx]
        lea edx, ss:[esp+4]
        push 0
        push edx
        mov edx, dword ptr ss : [esp+0x4C]
        or edx, 0x30
        jmp public_59f0b4
        public_59f0a5 : nop
        mov eax, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x44]
        push 0
        push 0
        public_59f0b4 : nop
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push 0x3F800000
        push edx
        mov edx, dword ptr ss : [esp+0x4C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        pop esi
        add esp, 0x30
        ret 0x10
        UNREACHABLE_TRAP(0x59efa0)
    }
}

#undef public_59efc6
#undef public_59efdd
#undef public_59f078
#undef public_59f0a5
#undef public_59f0b4
