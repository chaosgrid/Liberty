#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410190);
CLANG_FORWARD_PROC_SYMBOL(public_4104c0);
CLANG_FORWARD_PROC_SYMBOL(public_411350);
CLANG_FORWARD_PROC_SYMBOL(public_411470);
CLANG_FORWARD_PROC_SYMBOL(public_4114f0);
CLANG_FORWARD_PROC_SYMBOL(public_411d60);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_4a1ad0);
CLANG_FORWARD_PROC_SYMBOL(public_4e7090);
CLANG_FORWARD_PROC_SYMBOL(public_4ff3c0);
CLANG_FORWARD_PROC_SYMBOL(public_500a80);
CLANG_FORWARD_PROC_SYMBOL(public_500de0);
CLANG_FORWARD_PROC_SYMBOL(public_5012e0);
CLANG_FORWARD_PROC_SYMBOL(public_501470);
CLANG_FORWARD_PROC_SYMBOL(public_501810);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4ff3e4 _public_4ff3e4
#define public_4ff411 _public_4ff411
#define public_4ff45b _public_4ff45b
#define public_4ff45d _public_4ff45d
#define public_4ff4c3 _public_4ff4c3
#define public_4ff4e4 _public_4ff4e4
#define public_4ff50f _public_4ff50f
#define public_4ff530 _public_4ff530
#define public_4ff57a _public_4ff57a
#define public_4ff591 _public_4ff591
#define public_4ff5c5 _public_4ff5c5
#define public_4ff888 _public_4ff888
#define public_4ff88a _public_4ff88a
#define public_4ff893 _public_4ff893
#define public_4ff942 _public_4ff942
#define public_4ff94e _public_4ff94e
#define public_4ffa6f _public_4ffa6f
#define public_4ffa80 _public_4ffa80
#define public_4ffaa5 _public_4ffaa5

PROC_DECLARE(0x4ff3c0, internal_4ff3c0, public_4ff3c0);
extern "C" NAKED register_t __cdecl internal_4ff3c0()
{
    __asm
    {
        sub esp, 0x58
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2A4]
        test eax, eax
        je public_4ffaa5
        cmp eax, 2
        push ebx
        push edi
        je public_4ff3e4
        cmp eax, 3
        jne public_4ff893
        public_4ff3e4 : nop
        fld dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [esi+0x264]
        fst dword ptr ds : [esi+0x264]
        fdiv dword ptr ds : [esi+0x9C]
        fld dword ptr ds : [public_5c75dc]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_4ff411
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_4ff411 : nop
        mov al, byte ptr ds : [public_613264]
        fld dword ptr ds : [esi+0x94]
        test al, al
        je public_4ff45b
        fld dword ptr ds : [esi+0x98]
        mov eax, dword ptr ds : [esi+0x78]
        fsub st, st(1)
        dec eax
        mov dword ptr ss : [esp+0x18], eax
        fmulp st(2), st
        fxch 
        fadd st, st(1)
        fmul dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [esi+0x270]
        fst dword ptr ds : [esi+0x270]
        fstp st(1)
        fild dword ptr ss : [esp+0x18]
        fmul st, st(1)
        call public_5b7ec0
        mov dword ptr ds : [esi+0x26C], eax
        jmp public_4ff45d
        public_4ff45b : nop
        fstp st(0)
        public_4ff45d : nop
        mov eax, dword ptr ds : [esi+0x78]
        fstp st(0)
        mov ecx, dword ptr ds : [public_61325c]
        mov edx, dword ptr ds : [public_613254]
        mov edi, dword ptr ds : [esi+0x26C]
        sub eax, ecx
        sub eax, edx
        dec eax
        cmp edi, eax
        mov dword ptr ss : [esp+0xC], eax
        jl public_4ff5c5
        mov eax, dword ptr ds : [public_613258]
        add eax, ecx
        lea ecx, ds:[eax+edx+1]
        push ecx
        mov ecx, esi
        call public_500a80
        mov edx, dword ptr ds : [public_61325c]
        mov eax, dword ptr ds : [public_613258]
        mov ecx, dword ptr ds : [public_613254]
        add eax, edx
        lea eax, ds:[eax+ecx+1]
        test eax, eax
        jle public_4ff4c3
        push eax
        lea ecx, ds:[esi+0x168]
        call public_501470
        fstp st(0)
        jmp public_4ff4e4
        public_4ff4c3 : nop
        mov edx, dword ptr ds : [esi+0xAC]
        mov eax, dword ptr ds : [esi+0xA8]
        mov ecx, dword ptr ds : [esi+0x78]
        push 0
        push 3
        push edx
        push eax
        push ecx
        lea ecx, ds:[esi+0x168]
        call public_5012e0
        public_4ff4e4 : nop
        mov edx, dword ptr ds : [public_61325c]
        mov eax, dword ptr ds : [public_613258]
        mov ecx, dword ptr ds : [public_613254]
        add eax, edx
        lea eax, ds:[eax+ecx+1]
        test eax, eax
        jle public_4ff50f
        push eax
        lea ecx, ds:[esi+0x140]
        call public_501470
        fstp st(0)
        jmp public_4ff530
        public_4ff50f : nop
        mov edx, dword ptr ds : [esi+0x8C]
        mov eax, dword ptr ds : [esi+0x88]
        mov ecx, dword ptr ds : [esi+0x78]
        push 0
        push 0
        push edx
        push eax
        push ecx
        lea ecx, ds:[esi+0x140]
        call public_5012e0
        public_4ff530 : nop
        mov edx, dword ptr ds : [public_61325c]
        mov eax, dword ptr ds : [public_613258]
        mov ecx, dword ptr ds : [public_613254]
        add eax, edx
        lea edx, ds:[eax+ecx+1]
        push edx
        mov ecx, esi
        call public_500de0
        mov eax, dword ptr ds : [public_61325c]
        mov ecx, dword ptr ds : [public_613258]
        mov edx, dword ptr ds : [public_613254]
        add ecx, eax
        lea eax, ds:[ecx+edx+1]
        test eax, eax
        lea ecx, ds:[esi+0x190]
        jle public_4ff57a
        push eax
        call public_501470
        fstp st(0)
        jmp public_4ff591
        public_4ff57a : nop
        mov eax, dword ptr ds : [esi+0x78]
        push 0
        push 0
        push 0x3F800000
        push 0x3F000000
        push eax
        call public_5012e0
        public_4ff591 : nop
        mov ecx, dword ptr ds : [esi+0x78]
        dec ecx
        mov dword ptr ss : [esp+0x18], ecx
        fild dword ptr ss : [esp+0x18]
        fild dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x26C], 3
        fdiv st, st(1)
        fsubr dword ptr ds : [esi+0x270]
        fld dword ptr ds : [public_5d4f28]
        fdiv st, st(2)
        faddp 
        fstp dword ptr ds : [esi+0x270]
        fstp st(0)
        public_4ff5c5 : nop
        mov al, byte ptr ds : [public_613264]
        test al, al
        je public_4ff893
        fld dword ptr ds : [public_613268]
        mov edx, dword ptr ds : [esi+0x270]
        fadd dword ptr ds : [esi+0x270]
        push ebp
        mov eax, edx
        lea edi, ds:[esi+0x118]
        push eax
        fstp dword ptr ss : [esp+0x20]
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], edx
        lea ebx, ds:[esi+0xF0]
        lea ebp, ds:[esi+0xC8]
        call public_501810
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp]
        push ecx
        mov ecx, ebx
        call public_501810
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        mov ecx, ebp
        call public_501810
        push ecx
        lea ecx, ss:[esp+0x68]
        fstp dword ptr ss : [esp]
        call public_422b80
        push eax
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ds:[esi+0x230]
        call public_4e7090
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x48]
        lea eax, ds:[esi+0x274]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+8], ecx
        push edx
        mov ecx, edi
        call public_501810
        mov edi, dword ptr ss : [esp+0x1C]
        push ecx
        fstp dword ptr ss : [esp]
        push edi
        mov ecx, ebx
        call public_501810
        push ecx
        fstp dword ptr ss : [esp]
        push edi
        mov ecx, ebp
        call public_501810
        push ecx
        lea ecx, ss:[esp+0x68]
        fstp dword ptr ss : [esp]
        call public_422b80
        push eax
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ds:[esi+0x230]
        call public_4e7090
        lea ebx, ds:[esi+0x274]
        push ebx
        lea ecx, ss:[esp+0x54]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        call public_423b60
        add esp, 0xC
        lea ecx, ss:[esp+0x10]
        call public_410190
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x20]
        fld dword ptr ss : [esp+0x18]
        push eax
        fmul st, st(1)
        lea ecx, ss:[esp+0x14]
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        call public_411350
        fld dword ptr ss : [esp+0x24]
        sub esp, 0xC
        fmul dword ptr ds : [public_5c7474]
        lea ecx, ss:[esp+0x50]
        fld dword ptr ss : [esp+0x2C]
        fsub st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [public_5c7474]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [public_5c7474]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp]
        call public_422b80
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x48]
        call public_411350
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x20]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x44]
        fmul dword ptr ss : [esp+0x38]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x2C]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x34]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_422b80
        lea ecx, ss:[esp+0x2C]
        call public_410190
        fdivr dword ptr ds : [public_5c75dc]
        lea edi, ds:[esi+0x280]
        lea ecx, ss:[esp+0x38]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fst dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edi+0xC], edx
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edi+0x18], eax
        fstp dword ptr ds : [edi]
        fstp st(0)
        call public_410190
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fst dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x3C]
        fstp dword ptr ds : [edi+4]
        mov edx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [edi+0x10], ecx
        fstp st(0)
        lea ecx, ss:[esp+0x20]
        mov dword ptr ds : [edi+0x1C], edx
        call public_410190
        fdivr dword ptr ds : [public_5c75dc]
        pop ebp
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fst dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edi+0x14], eax
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edi+0x20], ecx
        fstp dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [esi+0x260]
        test eax, eax
        fstp st(0)
        je public_4ff893
        add eax, 0xC
        test eax, eax
        je public_4ff888
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_4ff888
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_4ff88a
        public_4ff888 : nop
        xor ecx, ecx
        public_4ff88a : nop
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push ebx
        call dword ptr ds : [eax+0x7C]
        public_4ff893 : nop
        mov eax, dword ptr ds : [esi+0x2A8]
        test eax, eax
        je public_4ffa6f
        test byte ptr ds : [eax+0xB4], 8
        je public_4ffa6f
        mov ebx, dword ptr ds : [public_5c71dc]
        mov dword ptr ss : [esp+0x34], 0x3F4CCCCD
        mov dword ptr ss : [esp+0x38], 0x3F4CCCCD
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        call ebx
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5caeec]
        fstp dword ptr ss : [esp+0xC]
        call ebx
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        push 0x437F0000
        lea ecx, ss:[esp+0x38]
        fmul dword ptr ss : [esp+0x10]
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        fmul dword ptr ds : [public_5caeec]
        fsubr qword ptr ds : [public_5c89b8]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x48]
        fstp st(0)
        call public_411d60
        fld dword ptr ss : [esp+0x54]
        add esp, 0xC
        call public_5b7ec0
        test eax, eax
        jge public_4ff942
        xor eax, eax
        jmp public_4ff94e
        public_4ff942 : nop
        cmp eax, 0xFF
        jle public_4ff94e
        mov eax, 0xFF
        public_4ff94e : nop
        fld dword ptr ss : [esp+0x44]
        push 0xFF
        push eax
        call public_5b7ec0
        push eax
        call public_4104c0
        fld dword ptr ss : [esp+0x4C]
        add esp, 4
        push eax
        call public_5b7ec0
        push eax
        call public_4104c0
        add esp, 4
        lea ecx, ss:[esp+0x24]
        push eax
        call public_4a1ad0
        mov ecx, dword ptr ds : [esi+0x2A8]
        lea eax, ss:[esp+0x18]
        push eax
        call public_4114f0
        fld dword ptr ds : [public_613260]
        fld dword ptr ds : [public_613260]
        lea edi, ds:[esi+0x2AC]
        fmul dword ptr ds : [edi]
        fstp dword ptr ds : [edi]
        fld st(0)
        fmul dword ptr ds : [edi+4]
        fstp dword ptr ds : [edi+4]
        fmul dword ptr ds : [edi+8]
        fstp dword ptr ds : [edi+8]
        call ebx
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5caeec]
        fstp qword ptr ss : [esp+0x1C]
        call ebx
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5caeec]
        fstp qword ptr ss : [esp+0xC]
        call ebx
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5caeec]
        fadd st(0), st
        fsub qword ptr ds : [public_5c89b8]
        fld qword ptr ss : [esp+0xC]
        fadd st(0), st
        fsub qword ptr ds : [public_5c89b8]
        fld qword ptr ss : [esp+0x1C]
        fadd st(0), st
        fsub qword ptr ds : [public_5c89b8]
        fstp dword ptr ss : [esp+0x54]
        fxch 
        fadd dword ptr ds : [edi]
        fstp dword ptr ds : [edi]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ds : [edi+4]
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ds : [edi+8]
        fstp dword ptr ds : [edi+8]
        fld dword ptr ds : [edi+8]
        fld dword ptr ds : [edi+4]
        fld dword ptr ds : [edi]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        push edi
        fmul dword ptr ds : [edi]
        fstp dword ptr ds : [edi]
        fld st(0)
        fmul dword ptr ds : [edi+4]
        fstp dword ptr ds : [edi+4]
        fmul dword ptr ds : [edi+8]
        fstp dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [esi+0x2A8]
        call public_411470
        public_4ffa6f : nop
        mov eax, dword ptr ds : [esi+8]
        xor ecx, ecx
        test eax, eax
        pop edi
        pop ebx
        jle public_4ffaa5
        lea eax, ds:[esi+0x2C]
        lea ecx, ds:[ecx]
        public_4ffa80 : nop
        fld dword ptr ss : [esp+0x60]
        inc ecx
        fmul dword ptr ds : [eax+8]
        add eax, 0x34
        fadd dword ptr ds : [eax-0x34]
        fstp dword ptr ds : [eax-0x34]
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ds : [eax-0x28]
        fadd dword ptr ds : [eax-0x30]
        fstp dword ptr ds : [eax-0x30]
        mov edx, dword ptr ds : [esi+8]
        cmp ecx, edx
        jl public_4ffa80
        public_4ffaa5 : nop
        pop esi
        add esp, 0x58
        ret 4
        UNREACHABLE_TRAP(0x4ff3c0)
    }
}

#undef public_4ff3e4
#undef public_4ff411
#undef public_4ff45b
#undef public_4ff45d
#undef public_4ff4c3
#undef public_4ff4e4
#undef public_4ff50f
#undef public_4ff530
#undef public_4ff57a
#undef public_4ff591
#undef public_4ff5c5
#undef public_4ff888
#undef public_4ff88a
#undef public_4ff893
#undef public_4ff942
#undef public_4ff94e
#undef public_4ffa6f
#undef public_4ffa80
#undef public_4ffaa5
