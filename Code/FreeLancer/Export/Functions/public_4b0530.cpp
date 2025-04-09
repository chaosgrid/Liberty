#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b0530);
CLANG_FORWARD_PROC_SYMBOL(public_5646e0);

#define public_4b0565 _public_4b0565
#define public_4b0578 _public_4b0578
#define public_4b0585 _public_4b0585
#define public_4b0590 _public_4b0590
#define public_4b059d _public_4b059d
#define public_4b05e7 _public_4b05e7
#define public_4b060d _public_4b060d
#define public_4b064d _public_4b064d
#define public_4b0659 _public_4b0659
#define public_4b065f _public_4b065f
#define public_4b0694 _public_4b0694

PROC_DECLARE(0x4b0530, internal_4b0530, public_4b0530);
extern "C" NAKED register_t __cdecl internal_4b0530()
{
    __asm
    {
        sub esp, 0x3C
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+0x32E]
        test al, al
        jne public_4b0694
        push ebx
        push esi
        lea edx, ss:[ebp+0x7B8]
        push edi
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        mov byte ptr ss : [esp+0x48], 0
        mov byte ptr ss : [esp+0x4A], 0
        xor ebx, ebx
        mov dword ptr ss : [esp+0x10], edx
        public_4b0565 : nop
        mov eax, dword ptr ss : [ebp+0x7F4]
        cmp eax, 1
        jne public_4b0578
        mov esi, dword ptr ss : [ebp+0x508]
        jmp public_4b0590
        public_4b0578 : nop
        cmp eax, 2
        jne public_4b0585
        mov esi, dword ptr ss : [ebp+0x548]
        jmp public_4b0590
        public_4b0585 : nop
        cmp eax, 3
        jne public_4b059d
        mov esi, dword ptr ss : [ebp+0x528]
        public_4b0590 : nop
        add esi, ebx
        lea edi, ss:[esp+0x34]
        mov ecx, 6
        rep movsd
        public_4b059d : nop
        mov al, byte ptr ss : [esp+0x4A]
        test al, al
        jne public_4b0659
        mov al, byte ptr ss : [esp+0x48]
        test al, al
        push 0
        je public_4b060d
        cmp dword ptr ss : [esp+0x38], 0x536
        push 0
        push 0x3B
        jne public_4b05e7
        mov ecx, dword ptr ss : [ebp+0x564]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], 0
        fild qword ptr ss : [esp+0x1C]
        fstp dword ptr ds : [ecx]
        jmp public_4b065f
        public_4b05e7 : nop
        mov ecx, dword ptr ds : [edx-0x164]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xA8]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x28], 0
        fild qword ptr ss : [esp+0x24]
        fstp dword ptr ds : [eax]
        jmp public_4b065f
        public_4b060d : nop
        mov ecx, dword ptr ds : [edx-0x1D4]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x1C]
        push eax
        push 0x2F
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x2C], ecx
        xor ecx, ecx
        mov dword ptr ss : [esp+0x30], ecx
        fild qword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x14], 1
        fcomp qword ptr ds : [public_5c8b68]
        fnstsw ax
        test ah, 1
        je public_4b064d
        mov dword ptr ss : [esp+0x14], ecx
        public_4b064d : nop
        fild dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [edx]
        jmp public_4b065f
        public_4b0659 : nop
        mov dword ptr ds : [edx], 0xBF800000
        public_4b065f : nop
        mov edx, dword ptr ss : [esp+0x10]
        add edx, 4
        add ebx, 0x18
        cmp ebx, 0x150
        mov dword ptr ss : [esp+0x10], edx
        jl public_4b0565
        push 0x1E
        call public_5646e0
        push 0x1F
        call public_5646e0
        push 0x20
        call public_5646e0
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        public_4b0694 : nop
        pop ebp
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x4b0530)
    }
}

#undef public_4b0565
#undef public_4b0578
#undef public_4b0585
#undef public_4b0590
#undef public_4b059d
#undef public_4b05e7
#undef public_4b060d
#undef public_4b064d
#undef public_4b0659
#undef public_4b065f
#undef public_4b0694
