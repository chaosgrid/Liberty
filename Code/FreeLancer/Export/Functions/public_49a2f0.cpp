#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_477510);
CLANG_FORWARD_PROC_SYMBOL(public_49a1e0);
CLANG_FORWARD_PROC_SYMBOL(public_49a2f0);

#define public_49a328 _public_49a328
#define public_49a350 _public_49a350
#define public_49a4b7 _public_49a4b7
#define public_49a4cf _public_49a4cf
#define public_49a4df _public_49a4df
#define public_49a4ef _public_49a4ef
#define public_49a4f7 _public_49a4f7
#define public_49a4ff _public_49a4ff
#define public_49a507 _public_49a507
#define public_49a517 _public_49a517
#define public_49a51d _public_49a51d
#define public_49a525 _public_49a525
#define public_49a52d _public_49a52d
#define public_49a535 _public_49a535

PROC_DECLARE(0x49a2f0, internal_49a2f0, public_49a2f0);
extern "C" NAKED register_t __cdecl internal_49a2f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        sub esp, 0x30
        push ebx
        mov ebx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [ebx]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x40]
        push eax
        mov eax, dword ptr ds : [edi]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_49a1e0
        test al, al
        je public_49a328
        fld dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [ebx]
        jmp public_49a52d
        public_49a328 : nop
        fild dword ptr ds : [public_610850]
        mov dword ptr ss : [esp+0x1C], 0
        fdivr qword ptr ds : [public_5c89b8]
        fstp dword ptr ss : [esp+0x24]
        fild dword ptr ds : [public_610854]
        fdivr qword ptr ds : [public_5c89b8]
        fstp dword ptr ss : [esp+0x20]
        public_49a350 : nop
        fild dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x48]
        push ecx
        mov ecx, dword ptr ds : [edi]
        fmul st, st(1)
        push edx
        fstp dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ds : [ebx]
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push ecx
        mov ecx, esi
        call public_49a1e0
        test al, al
        jne public_49a4b7
        fld dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x4C]
        fsub dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x48]
        push edx
        mov edx, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x10]
        push eax
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push edx
        mov ecx, esi
        call public_49a1e0
        test al, al
        jne public_49a4ff
        fld dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x4C]
        fadd dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ds : [ebx]
        push eax
        push ecx
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        push edx
        push eax
        mov ecx, esi
        call public_49a1e0
        test al, al
        jne public_49a4cf
        fld dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x4C]
        fsub dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [ebx]
        push ecx
        push edx
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        push eax
        push ecx
        mov ecx, esi
        call public_49a1e0
        test al, al
        jne public_49a4df
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_49a1e0
        test al, al
        jne public_49a4ef
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0xC]
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_49a1e0
        test al, al
        jne public_49a4f7
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call public_49a1e0
        test al, al
        jne public_49a507
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_49a1e0
        test al, al
        jne public_49a517
        mov eax, dword ptr ss : [esp+0x1C]
        inc eax
        cmp eax, 0xF
        mov dword ptr ss : [esp+0x1C], eax
        jl public_49a350
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x30
        ret 0x14
        public_49a4b7 : nop
        fld dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x50]
        fadd dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x38], eax
        fst dword ptr ds : [ebx]
        fld dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x28]
        jmp public_49a535
        public_49a4cf : nop
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ds : [edi]
        fst dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [ebx]
        jmp public_49a52d
        public_49a4df : nop
        fld dword ptr ds : [edi]
        fsub dword ptr ss : [esp+0x44]
        fst dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [ebx]
        jmp public_49a52d
        public_49a4ef : nop
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ds : [edi]
        jmp public_49a51d
        public_49a4f7 : nop
        fld dword ptr ds : [edi]
        fsub dword ptr ss : [esp+0x44]
        fstp dword ptr ds : [edi]
        public_49a4ff : nop
        fld dword ptr ds : [ebx]
        fsub dword ptr ss : [esp+0x40]
        jmp public_49a525
        public_49a507 : nop
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ds : [edi]
        fstp dword ptr ds : [edi]
        fld dword ptr ds : [ebx]
        fsub dword ptr ss : [esp+0x40]
        jmp public_49a525
        public_49a517 : nop
        fld dword ptr ds : [edi]
        fsub dword ptr ss : [esp+0x44]
        public_49a51d : nop
        fstp dword ptr ds : [edi]
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ds : [ebx]
        public_49a525 : nop
        fst dword ptr ds : [ebx]
        fld dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x28]
        public_49a52d : nop
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x38], ecx
        public_49a535 : nop
        mov eax, dword ptr ds : [esi+0x870]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x48]
        lea edx, ss:[esp+0x28]
        fmul dword ptr ds : [public_5d2ee8]
        push edx
        lea ecx, ds:[esi+0x868]
        push 1
        fstp dword ptr ss : [esp+0x38]
        push eax
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [public_5d2ee8]
        fstp dword ptr ss : [esp+0x40]
        call public_477510
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x30
        ret 0x14
        UNREACHABLE_TRAP(0x49a2f0)
    }
}

#undef public_49a328
#undef public_49a350
#undef public_49a4b7
#undef public_49a4cf
#undef public_49a4df
#undef public_49a4ef
#undef public_49a4f7
#undef public_49a4ff
#undef public_49a507
#undef public_49a517
#undef public_49a51d
#undef public_49a525
#undef public_49a52d
#undef public_49a535
