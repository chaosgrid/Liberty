#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410190);
CLANG_FORWARD_PROC_SYMBOL(public_411d60);
CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421ad0);
CLANG_FORWARD_PROC_SYMBOL(public_421ca0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220a0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_4231f0);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_423be0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_423bff _public_423bff
#define public_423c0a _public_423c0a
#define public_423d39 _public_423d39
#define public_423d40 _public_423d40
#define public_423d54 _public_423d54
#define public_423dc5 _public_423dc5
#define public_42419f _public_42419f
#define public_4241e2 _public_4241e2
#define public_424281 _public_424281

PROC_DECLARE(0x423be0, internal_423be0, public_423be0);
extern "C" NAKED register_t __cdecl internal_423be0()
{
    __asm
    {
        sub esp, 0x13C
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14C]
        cmp byte ptr ds : [esi], 0
        push edi
        je public_423c0a
        push esi
        call public_4231f0
        add esp, 4
        public_423bff : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x13C
        ret 
        public_423c0a : nop
        lea edi, ds:[esi+8]
        lea ebp, ds:[esi+0x14]
        push edi
        lea eax, ss:[esp+0x5C]
        push ebp
        push eax
        mov dword ptr ss : [esp+0x88], ebp
        call public_423b60
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp+0x68]
        add esp, 4
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp+0x68]
        faddp 
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x60]
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x18]
        fdiv dword ptr ds : [esi+0x44]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        fadd qword ptr ds : [public_5c89b8]
        add esp, 8
        call public_5b7ec0
        mov ebx, eax
        mov dword ptr ss : [esp+0x14], ebx
        fild dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ss : [esp+0x60]
        fdivr dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x28], ecx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x30], eax
        fstp dword ptr ss : [esp+0x18]
        call public_410190
        fdivr dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+0x40]
        mov edx, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ds : [esi+0x38]
        push ecx
        push edx
        push eax
        fld dword ptr ss : [esp+0x64]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        fstp st(0)
        call public_421ad0
        fld dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+0x44]
        add esp, 0xC
        test ecx, ecx
        fstp dword ptr ss : [esp+0x18]
        je public_42419f
        mov edx, edi
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        lea ebp, ss:[esp+0x138]
        push ebp
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        push 0
        push ecx
        mov dword ptr ss : [esp+0x60], edx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x58]
        push 0xBE2
        call public_421dd0
        push 2
        push 2
        call public_4220c0
        add esp, 0xC
        cmp ebx, 1
        mov dword ptr ss : [esp+0x10], 1
        jl public_423bff
        jmp public_423d40
        public_423d39 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        lea ecx, ds:[ecx]
        public_423d40 : nop
        cmp dword ptr ss : [esp+0x10], ebx
        jne public_423d54
        mov eax, dword ptr ss : [esp+0x7C]
        mov ebx, dword ptr ds : [eax]
        mov ebp, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+8]
        jmp public_423dc5
        public_423d54 : nop
        fild dword ptr ss : [esp+0x10]
        push ecx
        lea edx, ss:[esp+0x2C]
        lea eax, ss:[esp+0x100]
        fstp dword ptr ss : [esp]
        push edx
        push eax
        call public_411d60
        lea ecx, ss:[esp+0x108]
        push ecx
        lea edx, ss:[esp+0x124]
        push edi
        push edx
        call public_423b30
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        lea ecx, ss:[esp+0x13C]
        push ecx
        call dword ptr ds : [public_5c60a4]
        push eax
        lea edx, ss:[esp+0x138]
        push edx
        lea eax, ss:[esp+0xDC]
        push eax
        call public_423b30
        mov ebx, dword ptr ss : [esp+0xE0]
        mov ebp, dword ptr ss : [esp+0xE4]
        mov ecx, dword ptr ss : [esp+0xE8]
        add esp, 0x2C
        public_423dc5 : nop
        lea edx, ss:[esp+0x4C]
        push edx
        lea eax, ds:[esi+0x2C]
        push eax
        lea eax, ss:[esp+0xA0]
        push eax
        mov dword ptr ss : [esp+0x7C], ebx
        mov dword ptr ss : [esp+0x80], ebp
        mov dword ptr ss : [esp+0x84], ecx
        call public_423b60
        lea ecx, ss:[esp+0x58]
        push ecx
        lea edx, ss:[esp+0x80]
        push edx
        lea eax, ss:[esp+0xA0]
        push eax
        call public_423b60
        fld dword ptr ss : [esp+0xB4]
        fmul dword ptr ss : [esp+0xA4]
        add esp, 0xC
        fld dword ptr ss : [esp+0x9C]
        lea ecx, ss:[esp+0x70]
        fmul dword ptr ss : [esp+0xA4]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xA0]
        fmul dword ptr ss : [esp+0xA4]
        fld dword ptr ss : [esp+0xAC]
        fmul dword ptr ss : [esp+0x98]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xAC]
        fmul dword ptr ss : [esp+0x9C]
        fld dword ptr ss : [esp+0xA8]
        fmul dword ptr ss : [esp+0xA0]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_422b80
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x74]
        push edx
        lea eax, ss:[esp+0x134]
        push eax
        call public_423b60
        push 0x3F000000
        lea ecx, ss:[esp+0x13C]
        push ecx
        lea edx, ss:[esp+0x11C]
        push edx
        call public_411d60
        lea eax, ss:[esp+0x120]
        push eax
        lea ecx, ss:[esp+0x68]
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        call public_423b30
        lea eax, ss:[esp+0x70]
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea edx, ss:[esp+0x6C]
        push edx
        call public_423b60
        fld dword ptr ss : [esp+0x78]
        fmul dword ptr ss : [esp+0x78]
        add esp, 0x30
        fld dword ptr ss : [esp+0x44]
        lea ecx, ss:[esp+0x64]
        fmul dword ptr ss : [esp+0x44]
        faddp 
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        faddp 
        fsqrt 
        fmul qword ptr ds : [public_5c75e8]
        fstp dword ptr ss : [esp+0xA4]
        call public_410190
        fdivr dword ptr ss : [esp+0xA4]
        fld dword ptr ss : [esp+0x64]
        lea eax, ss:[esp+0x34]
        fmul st, st(1)
        push eax
        lea ecx, ss:[esp+0x50]
        push ecx
        fstp dword ptr ss : [esp+0x6C]
        lea edx, ss:[esp+0xF8]
        fld dword ptr ss : [esp+0x70]
        push edx
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x74]
        fld dword ptr ss : [esp+0x78]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x78]
        fstp st(0)
        call public_423b60
        fld dword ptr ss : [esp+0x104]
        lea ecx, ss:[esp+0xB4]
        fmul dword ptr ds : [public_5c9804]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x100]
        fmul dword ptr ds : [public_5c9804]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xFC]
        fmul dword ptr ds : [public_5c9804]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x6C]
        sub esp, 0xC
        fmul dword ptr ds : [public_5c9804]
        lea ecx, ss:[esp+0xD8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x74]
        fmul dword ptr ds : [public_5c9804]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x70]
        fmul dword ptr ds : [public_5c9804]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ds : [esi+0x4C]
        sub esp, 0xC
        fld dword ptr ss : [esp+0xE0]
        lea ecx, ss:[esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xDC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xD8]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_422b80
        mov eax, dword ptr ss : [esp+0x138]
        push eax
        call public_4220a0
        push 8
        call public_421670
        push 0
        push 0
        call public_421ca0
        lea ecx, ss:[esp+0xB8]
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0xFC]
        push eax
        call public_423b30
        mov ecx, dword ptr ss : [esp+0x108]
        mov edx, dword ptr ss : [esp+0x104]
        mov eax, dword ptr ss : [esp+0x100]
        push ecx
        push edx
        push eax
        call public_421cc0
        push 0
        push 0x3F800000
        call public_421ca0
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ss : [esp+0x6C]
        fstp dword ptr ss : [esp+0x2C]
        add esp, 0x24
        fld dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0xCC]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ss : [esp+0xC8]
        mov edx, dword ptr ss : [esp+0xC4]
        mov eax, dword ptr ss : [esp+0xC0]
        push ecx
        push edx
        push eax
        call public_421cc0
        push 0x3F800000
        push 0x3F800000
        call public_421ca0
        fld dword ptr ss : [esp+0x50]
        fsub dword ptr ss : [esp+0xC4]
        add esp, 8
        lea ecx, ss:[esp+0xE4]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x44]
        fsub dword ptr ss : [esp+0xB8]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x40]
        fsub dword ptr ss : [esp+0xB4]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ss : [esp+0xE0]
        mov edx, dword ptr ss : [esp+0xDC]
        mov eax, dword ptr ss : [esp+0xD8]
        push ecx
        push edx
        push eax
        call public_421cc0
        push 0x3F800000
        push 0
        call public_421ca0
        fld dword ptr ss : [esp+0x50]
        fsub dword ptr ss : [esp+0x38]
        add esp, 8
        lea ecx, ss:[esp+0x8C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x44]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x40]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ss : [esp+0x88]
        mov edx, dword ptr ss : [esp+0x84]
        mov eax, dword ptr ss : [esp+0x80]
        push ecx
        push edx
        push eax
        call public_421cc0
        add esp, 0xC
        call public_421690
        mov ecx, dword ptr ss : [esp+0x78]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x54], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebp
        mov dword ptr ss : [esp+0x10], eax
        jle public_423d39
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x13C
        ret 
        public_42419f : nop
        push 0xDE1
        call public_421ed0
        push 0xBE2
        call public_421ed0
        push 3
        call public_421670
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push ecx
        call public_421cc0
        mov esi, 1
        add esp, 0x18
        cmp ebx, esi
        mov dword ptr ss : [esp+0x14], esi
        jle public_424281
        mov ebp, dword ptr ss : [esp+0x18]
        public_4241e2 : nop
        fild dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x120]
        fld dword ptr ss : [esp+0x28]
        push ebp
        push edx
        fmul st, st(1)
        fld dword ptr ss : [esp+0x34]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x8C]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x90]
        fadd dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        fld dword ptr ss : [esp+0x8C]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x90]
        fadd dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x2C]
        call dword ptr ds : [public_5c60a4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x48]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x4C]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x50]
        push eax
        push ecx
        push edx
        call public_421cc0
        add esp, 0x14
        inc esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x14], esi
        jl public_4241e2
        mov ebp, dword ptr ss : [esp+0x7C]
        public_424281 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ss : [ebp]
        push eax
        push ecx
        push edx
        call public_421cc0
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x13C
        jmp public_421690
        UNREACHABLE_TRAP(0x423be0)
    }
}

#undef public_423bff
#undef public_423c0a
#undef public_423d39
#undef public_423d40
#undef public_423d54
#undef public_423dc5
#undef public_42419f
#undef public_4241e2
#undef public_424281
