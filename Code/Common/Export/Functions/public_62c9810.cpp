#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62a66b0);
CLANG_FORWARD_PROC_SYMBOL(public_62c5a70);
CLANG_FORWARD_PROC_SYMBOL(public_62c9810);
CLANG_FORWARD_PROC_SYMBOL(public_62d5840);
CLANG_FORWARD_PROC_SYMBOL(public_62d7560);
CLANG_FORWARD_PROC_SYMBOL(public_62d88b0);
CLANG_FORWARD_PROC_SYMBOL(public_62e6010);
CLANG_FORWARD_PROC_SYMBOL(public_62e60e0);
CLANG_FORWARD_PROC_SYMBOL(public_631e050);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);

#define public_62c9845 _public_62c9845
#define public_62c9847 _public_62c9847
#define public_62c99bc _public_62c99bc
#define public_62c9a55 _public_62c9a55
#define public_62c9b18 _public_62c9b18
#define public_62c9b42 _public_62c9b42
#define public_62c9bc3 _public_62c9bc3
#define public_62c9bc5 _public_62c9bc5
#define public_62c9cd1 _public_62c9cd1
#define public_62c9d04 _public_62c9d04

PROC_DECLARE(0x62c9810, internal_62c9810, public_62c9810);
extern "C" NAKED register_t __cdecl internal_62c9810()
{
    __asm
    {
        sub esp, 0x90
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0xA0]
        mov eax, ecx
        sub eax, 0
        je public_62c9b42
        dec eax
        jne public_62c9d04
        mov eax, dword ptr ds : [edi+0x24]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62c9845
        lea ecx, ds:[eax-8]
        jmp public_62c9847
        public_62c9845 : nop
        xor ecx, ecx
        public_62c9847 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov esi, dword ptr ss : [esp+0xA4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], eax
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        push esi
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x28], eax
        call public_62e6010
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x34]
        sub esp, 8
        fsub dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x48]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x44]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x50]
        mov edx, 0x5F3759DF
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x4C]
        faddp 
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        faddp 
        fst dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x30]
        sar ecx, 1
        fsub dword ptr ss : [esp+0x3C]
        sub edx, ecx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x24], edx
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x38]
        fcomp dword ptr ss : [esp+0x34]
        fnstsw ax
        test ah, 5
        jp public_62c99bc
        push 0x3E20D97C
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x78]
        push ecx
        call public_631e050
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x38]
        mov edx, esi
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        jmp public_62c9a55
        public_62c99bc : nop
        fld dword ptr ss : [esp+0x10]
        lea esi, ds:[edi+0x38]
        fmul dword ptr ds : [public_6399408]
        mov ecx, esi
        fld dword ptr ss : [esp+0x14]
        fsubr st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_6399408]
        mov dword ptr ds : [ecx], edx
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_6399408]
        fsubp 
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x20]
        fsub st, st(1)
        mov dword ptr ds : [ecx+4], eax
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        fstp st(0)
        mov dword ptr ds : [ecx+8], edx
        call public_6347e60
        fdivr dword ptr ds : [public_639a1d0]
        push 0x3EB2B8C3
        push 0
        lea eax, ss:[esp+0x8C]
        push esi
        push eax
        fld st(0)
        fmul dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        call public_631e050
        mov edx, dword ptr ds : [eax]
        mov ecx, esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        public_62c9a55 : nop
        mov ecx, esi
        add esp, 0x10
        mov dword ptr ds : [edi+0x3C], 0
        call public_6347e60
        fdivr dword ptr ds : [public_639a1d0]
        push ecx
        lea ecx, ss:[esp+0x58]
        fld st(0)
        fmul dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        fld dword ptr ds : [edi+0x34]
        fstp dword ptr ss : [esp]
        push esi
        push ecx
        call public_6288830
        fld dword ptr ss : [esp+0x68]
        fadd dword ptr ss : [esp+0x3C]
        lea ecx, ss:[esp+0x54]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x64]
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x60]
        fadd dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x4C]
        lea esi, ds:[edi+0x4C]
        mov edx, esi
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [edx+4], ecx
        lea ebp, ds:[edi+0x70]
        push esi
        mov ecx, ebp
        mov dword ptr ds : [edx+8], eax
        call public_62d5840
        push esi
        lea ecx, ds:[edi+0xE8]
        call public_62d7560
        mov esi, dword ptr ds : [edi+0x24]
        mov al, byte ptr ds : [esi+0x157A]
        add esi, 0x14FC
        test al, al
        jne public_62c9b18
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62c9b18 : nop
        fld dword ptr ds : [esi+0x18]
        push ecx
        fmul qword ptr ds : [public_639fa58]
        mov ecx, ebp
        fstp dword ptr ss : [esp]
        call public_62a66b0
        mov ecx, dword ptr ss : [esp+0xA0]
        mov dword ptr ds : [edi+0x48], ecx
        pop edi
        pop esi
        pop ebp
        add esp, 0x90
        ret 8
        public_62c9b42 : nop
        mov esi, dword ptr ss : [esp+0xA4]
        lea edx, ss:[esp+0x78]
        push esi
        push edx
        call public_62e60e0
        mov edx, dword ptr ds : [eax]
        lea ebp, ds:[edi+0x4C]
        mov ecx, ebp
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [edi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        add esp, 8
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x78]
        mov dx, word ptr ss : [esp+0x18]
        cmp dx, word ptr ds : [public_63a4aa4]
        je public_62c9cd1
        mov eax, dword ptr ds : [edi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x78]
        mov eax, dword ptr ds : [edi+0x24]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62c9bc3
        lea ecx, ds:[eax-8]
        jmp public_62c9bc5
        public_62c9bc3 : nop
        xor ecx, ecx
        public_62c9bc5 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x1C]
        push eax
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        call dword ptr ds : [edx+0x18]
        test eax, eax
        jne public_62c9cd1
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x90]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x24]
        sub esp, 0xC
        lea ecx, ss:[esp+0x18]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+0x24]
        fmul dword ptr ss : [esp+0x14]
        add eax, 0x14FC
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        fstp st(0)
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x34]
        call public_628b030
        lea ecx, ss:[esp+0x60]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_62c5a70
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x64]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fcomp qword ptr ds : [public_639fa50]
        fnstsw ax
        test ah, 0x41
        jne public_62c9cd1
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, ebp
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        public_62c9cd1 : nop
        lea esi, ds:[edi+0x70]
        push 2
        mov ecx, esi
        call public_62d88b0
        push 0x3F800000
        mov ecx, esi
        call public_62a66b0
        push ebp
        mov ecx, esi
        call public_62d5840
        push ebp
        lea ecx, ds:[edi+0xE8]
        call public_62d7560
        mov ecx, dword ptr ss : [esp+0xA0]
        public_62c9d04 : nop
        mov dword ptr ds : [edi+0x48], ecx
        pop edi
        pop esi
        pop ebp
        add esp, 0x90
        ret 8
        UNREACHABLE_TRAP(0x62c9810)
    }
}

#undef public_62c9845
#undef public_62c9847
#undef public_62c99bc
#undef public_62c9a55
#undef public_62c9b18
#undef public_62c9b42
#undef public_62c9bc3
#undef public_62c9bc5
#undef public_62c9cd1
#undef public_62c9d04
