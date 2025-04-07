#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4104c0);
CLANG_FORWARD_PROC_SYMBOL(public_421aa0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_4227d0);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_4dfca0);
CLANG_FORWARD_PROC_SYMBOL(public_4e04f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_PROC_SYMBOL(public_5b8070);

#define public_4e05c3 _public_4e05c3
#define public_4e05cf _public_4e05cf
#define public_4e05f2 _public_4e05f2
#define public_4e05fe _public_4e05fe
#define public_4e068d _public_4e068d
#define public_4e0699 _public_4e0699
#define public_4e06bc _public_4e06bc
#define public_4e06c8 _public_4e06c8
#define public_4e06eb _public_4e06eb
#define public_4e06f7 _public_4e06f7
#define public_4e0747 _public_4e0747

PROC_DECLARE(0x4e04f0, internal_4e04f0, public_4e04f0);
extern "C" NAKED register_t __cdecl internal_4e04f0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push edi
        push 0xDE1
        mov esi, ecx
        call public_421ed0
        push 0xB71
        call public_421ed0
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call public_4227d0
        push 0xBE2
        call public_421dd0
        push 4
        push 2
        call public_4220c0
        mov edi, dword ptr ss : [esp+0x34]
        fld dword ptr ds : [edi]
        add esp, 0x18
        fadd qword ptr ds : [public_5c75e8]
        call public_5b7ec0
        mov dword ptr ss : [esp+0x1C], eax
        fild dword ptr ss : [esp+0x1C]
        fstp dword ptr ds : [edi]
        fld dword ptr ds : [edi+4]
        fadd qword ptr ds : [public_5c75e8]
        call public_5b7ec0
        mov dword ptr ss : [esp+0x1C], eax
        fild dword ptr ss : [esp+0x1C]
        fstp dword ptr ds : [edi+4]
        fld qword ptr ds : [public_5ca228]
        fld dword ptr ds : [public_5d8850]
        fdiv dword ptr ds : [esi+8]
        fmul dword ptr ds : [esi+4]
        call public_5b8070
        fmul dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4e0747
        movzx ecx, byte ptr ds : [esi+0x20]
        mov dword ptr ss : [esp+8], ecx
        push ebx
        fild dword ptr ss : [esp+0xC]
        xor ebx, ebx
        mov byte ptr ss : [esp+0x23], bl
        mov byte ptr ss : [esp+0x22], bl
        fmul dword ptr ds : [public_5c94f8]
        mov byte ptr ss : [esp+0x21], bl
        mov byte ptr ss : [esp+0x20], bl
        call public_5b7ec0
        cmp eax, ebx
        jge public_4e05c3
        xor eax, eax
        jmp public_4e05cf
        public_4e05c3 : nop
        cmp eax, 0xFF
        jle public_4e05cf
        mov eax, 0xFF
        public_4e05cf : nop
        movzx edx, byte ptr ds : [esi+0x21]
        mov dword ptr ss : [esp+0x14], edx
        mov byte ptr ss : [esp+0xC], al
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c94f8]
        call public_5b7ec0
        cmp eax, ebx
        jge public_4e05f2
        xor eax, eax
        jmp public_4e05fe
        public_4e05f2 : nop
        cmp eax, 0xFF
        jle public_4e05fe
        mov eax, 0xFF
        public_4e05fe : nop
        mov byte ptr ss : [esp+0xD], al
        movzx eax, byte ptr ds : [esi+0x22]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c94f8]
        call public_5b7ec0
        push eax
        call public_4104c0
        movzx ecx, byte ptr ds : [esi+0x23]
        mov dword ptr ss : [esp+0x18], ecx
        mov byte ptr ss : [esp+0x12], al
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5c94f8]
        call public_5b7ec0
        push eax
        call public_4104c0
        mov byte ptr ss : [esp+0x17], al
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x28]
        push eax
        mov dword ptr ss : [esp+0x2C], edx
        call public_421aa0
        fld dword ptr ss : [esp+0x1C]
        fmul qword ptr ds : [public_5d8848]
        add esp, 8
        mov ecx, esi
        fstp dword ptr ss : [esp]
        push edi
        call public_4dfca0
        movzx ecx, byte ptr ds : [esi+0x20]
        mov dword ptr ss : [esp+0x14], ecx
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c75e0]
        call public_5b7ec0
        cmp eax, ebx
        jge public_4e068d
        xor eax, eax
        jmp public_4e0699
        public_4e068d : nop
        cmp eax, 0xFF
        jle public_4e0699
        mov eax, 0xFF
        public_4e0699 : nop
        movzx edx, byte ptr ds : [esi+0x21]
        mov dword ptr ss : [esp+0x14], edx
        mov byte ptr ss : [esp+0xC], al
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c75e0]
        call public_5b7ec0
        cmp eax, ebx
        jge public_4e06bc
        xor eax, eax
        jmp public_4e06c8
        public_4e06bc : nop
        cmp eax, 0xFF
        jle public_4e06c8
        mov eax, 0xFF
        public_4e06c8 : nop
        mov byte ptr ss : [esp+0xD], al
        movzx eax, byte ptr ds : [esi+0x22]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c75e0]
        call public_5b7ec0
        cmp eax, ebx
        jge public_4e06eb
        xor eax, eax
        jmp public_4e06f7
        public_4e06eb : nop
        cmp eax, 0xFF
        jle public_4e06f7
        mov eax, 0xFF
        public_4e06f7 : nop
        movzx ecx, byte ptr ds : [esi+0x23]
        mov dword ptr ss : [esp+0x14], ecx
        mov byte ptr ss : [esp+0xE], al
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c75e0]
        call public_5b7ec0
        push eax
        call public_4104c0
        mov byte ptr ss : [esp+0x13], al
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x24]
        push eax
        mov dword ptr ss : [esp+0x28], edx
        call public_421aa0
        fld dword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_5d3ed0]
        add esp, 4
        mov ecx, esi
        fstp dword ptr ss : [esp]
        push edi
        call public_4dfca0
        pop ebx
        public_4e0747 : nop
        lea ecx, ds:[esi+0x20]
        push ecx
        call public_421aa0
        mov edx, dword ptr ss : [esp+0x10]
        add esp, 4
        push edx
        push edi
        mov ecx, esi
        call public_4dfca0
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        call public_422950
        add esp, 4
        pop edi
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x4e04f0)
    }
}

#undef public_4e05c3
#undef public_4e05cf
#undef public_4e05f2
#undef public_4e05fe
#undef public_4e068d
#undef public_4e0699
#undef public_4e06bc
#undef public_4e06c8
#undef public_4e06eb
#undef public_4e06f7
#undef public_4e0747
