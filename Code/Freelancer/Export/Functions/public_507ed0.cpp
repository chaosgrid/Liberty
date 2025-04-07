#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421ad0);
CLANG_FORWARD_PROC_SYMBOL(public_421bd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ca0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220a0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422190);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_507ed0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7030);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_507f75 _public_507f75
#define public_507ff5 _public_507ff5
#define public_508020 _public_508020
#define public_5080cc _public_5080cc
#define public_50829b _public_50829b
#define public_5082a2 _public_5082a2
#define public_5082c8 _public_5082c8
#define public_5082d2 _public_5082d2
#define public_50835d _public_50835d
#define public_508369 _public_508369
#define public_50836f _public_50836f
#define public_508383 _public_508383
#define public_508387 _public_508387
#define public_5083ff _public_5083ff
#define public_508464 _public_508464
#define public_50846c _public_50846c
#define public_508514 _public_508514
#define public_508595 _public_508595
#define public_5085ed _public_5085ed
#define public_508689 _public_508689
#define public_5086a4 _public_5086a4
#define public_5086a6 _public_5086a6
#define public_5087a0 _public_5087a0
#define public_5087f5 _public_5087f5
#define public_508850 _public_508850
#define public_508a5c _public_508a5c
#define public_508a5e _public_508a5e
#define public_508a82 _public_508a82
#define public_508ae9 _public_508ae9

PROC_DECLARE(0x507ed0, internal_507ed0, public_507ed0);
extern "C" NAKED register_t __cdecl internal_507ed0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x16C
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0xDC]
        test eax, eax
        push esi
        push edi
        jle public_508ae9
        fld dword ptr ds : [ebx+0x294]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 5
        jp public_508ae9
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x10]
        mov esi, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x148]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x174]
        mov edx, dword ptr ss : [esp+0x16C]
        mov eax, dword ptr ss : [esp+0x170]
        mov dword ptr ss : [esp+0x84], ecx
        mov ecx, dword ptr ds : [ebx+0x20]
        mov dword ptr ss : [esp+0x7C], edx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x80], eax
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x70], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x74], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x78], eax
        mov eax, dword ptr ds : [public_675000]
        test eax, eax
        jne public_507f75
        call public_5b73e0
        mov dword ptr ds : [public_675000], eax
        public_507f75 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x70]
        push edx
        lea edx, ss:[esp+0x14C]
        push edx
        lea edx, ss:[esp+0x90]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov ecx, dword ptr ss : [esp+0x8C]
        mov eax, dword ptr ss : [esp+0x88]
        mov edx, dword ptr ss : [esp+0x90]
        mov esi, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0xF8], ecx
        mov ecx, dword ptr ds : [ebx+0x20]
        mov dword ptr ss : [esp+0xF4], eax
        mov dword ptr ss : [esp+0xFC], edx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x30]
        push ecx
        fstp dword ptr ss : [esp]
        lea ecx, ss:[esp+0xF8]
        push ecx
        push esi
        call dword ptr ds : [edi+0x3C]
        cmp ax, 3
        jb public_508ae9
        fld dword ptr ds : [ebx+0x54]
        fcomp dword ptr ds : [public_5db09c]
        fnstsw ax
        test ah, 0x41
        jne public_5082d2
        public_507ff5 : nop
        mov ecx, dword ptr ds : [ebx+0xDC]
        mov eax, 1
        cmp ecx, eax
        mov dword ptr ss : [esp+0x18], 0
        mov byte ptr ss : [esp+0xF], 0
        mov dword ptr ss : [esp+0x10], eax
        jle public_5082c8
        mov esi, 0x20
        mov edi, edi
        public_508020 : nop
        mov al, byte ptr ss : [esp+0xF]
        test al, al
        jne public_5080cc
        mov edx, dword ptr ds : [ebx+0xE0]
        fld dword ptr ss : [esp+0x78]
        fadd dword ptr ds : [esi+edx-0x18]
        lea eax, ds:[esi+edx-0x20]
        sub esp, 0xC
        lea ecx, ss:[esp+0x94]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x80]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x7C]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x90]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x90]
        lea ecx, ss:[esp+0x54]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x98]
        fsub dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x94]
        fsub dword ptr ss : [esp+0x88]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x4C]
        faddp 
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x50]
        faddp 
        fstp qword ptr ss : [esp+0xA0]
        public_5080cc : nop
        mov eax, dword ptr ds : [ebx+0xE0]
        fld dword ptr ss : [esp+0x78]
        fadd dword ptr ds : [esi+eax+8]
        lea edi, ds:[esi+eax]
        sub esp, 0xC
        lea ecx, ss:[esp+0xA0]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x80]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x7C]
        fadd dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x9C]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x90]
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xA4]
        fsub dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xA0]
        fsub dword ptr ss : [esp+0x88]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fld qword ptr ss : [esp+0xA0]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_50829b
        fld qword ptr ss : [esp+0xA0]
        fsub st, st(1)
        fabs 
        fcomp qword ptr ds : [public_5c9ce8]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_5082a2
        inc dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx+0xE0]
        fld dword ptr ds : [esi+eax-0x14]
        lea eax, ds:[esi+eax-0x20]
        mov ecx, eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xD4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0xD8], edx
        lea edx, ds:[eax+0x14]
        mov dword ptr ss : [esp+0xDC], ecx
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0xE8], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0xF0], edx
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0xE4], edx
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [ebx+0xE0]
        mov edx, dword ptr ds : [esi+eax+0xC]
        mov dword ptr ds : [esi+eax-0x14], edx
        mov eax, dword ptr ds : [ebx+0xE0]
        mov edx, dword ptr ds : [esi+eax+0x10]
        mov dword ptr ds : [esi+eax-0x10], edx
        mov eax, dword ptr ds : [ebx+0xE0]
        lea edx, ds:[esi+eax+0x14]
        mov edi, dword ptr ds : [edx]
        lea eax, ds:[esi+eax-0xC]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [ebx+0xE0]
        mov edx, dword ptr ss : [esp+0xD4]
        add eax, esi
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0xD8]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0xDC]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [ebx+0xE0]
        fstp dword ptr ds : [esi+eax+0xC]
        mov edx, dword ptr ds : [ebx+0xE0]
        mov eax, dword ptr ss : [esp+0xE4]
        mov dword ptr ds : [esi+edx+0x10], eax
        mov edx, dword ptr ds : [ebx+0xE0]
        lea eax, ds:[esi+edx+0x14]
        mov edx, dword ptr ss : [esp+0xE8]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [esp+0xF0]
        mov dword ptr ds : [eax+8], ecx
        mov byte ptr ss : [esp+0xF], 1
        jmp public_5082a2
        public_50829b : nop
        fstp st(0)
        mov byte ptr ss : [esp+0xF], 0
        public_5082a2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ebx+0xDC]
        inc eax
        add esi, 0x20
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jl public_508020
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        jg public_507ff5
        public_5082c8 : nop
        mov esi, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+0x54], 0
        public_5082d2 : nop
        push 0xB50
        call public_421ed0
        push 0xB44
        call public_421ed0
        xor edi, edi
        push edi
        call public_422190
        push 0xB71
        call public_421ed0
        push 0xBE2
        call public_421dd0
        push esi
        call public_422950
        mov ecx, dword ptr ds : [ebx+0x60]
        add esp, 0x18
        push edi
        call public_425640
        push eax
        call public_4220a0
        mov esi, dword ptr ds : [ebx+0x60]
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edi
        jge public_50836f
        push edi
        call public_5b7010
        mov edx, dword ptr ds : [public_5c6d4c]
        add esp, 4
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        mov edx, dword ptr ds : [esi]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x5C]
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, 0xA
        jl public_50835d
        cmp eax, 0xE
        jg public_50835d
        mov al, 1
        jmp public_508369
        public_50835d : nop
        push eax
        call public_5b7030
        mov al, byte ptr ds : [eax+0x48]
        add esp, 4
        public_508369 : nop
        movzx eax, al
        mov dword ptr ds : [esi+4], eax
        public_50836f : nop
        cmp dword ptr ds : [esi+4], edi
        setne al
        test al, al
        mov byte ptr ss : [esp+0xF], al
        je public_508383
        push 6
        push 5
        jmp public_508387
        public_508383 : nop
        push 2
        push 2
        public_508387 : nop
        call public_4220c0
        mov ecx, dword ptr ds : [public_5c6de0]
        mov dword ptr ss : [esp+0xB4], edi
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add esp, 8
        lea ecx, ss:[esp+0xAC]
        push ecx
        push 0x18
        push eax
        call dword ptr ds : [edx+0xF4]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 4
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF0]
        fld dword ptr ds : [ebx+0x294]
        fcomp qword ptr ds : [public_5c75e8]
        mov edx, dword ptr ds : [ebx+0xB8]
        mov dword ptr ss : [esp+0x18], edx
        fnstsw ax
        test ah, 0x41
        jne public_5083ff
        fld dword ptr ds : [ebx+0x294]
        fsub qword ptr ds : [public_5c75e8]
        fadd st(0), st
        fsubr qword ptr ds : [public_5c89b8]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x18]
        public_5083ff : nop
        fld dword ptr ds : [ebx+0x294]
        mov dword ptr ss : [esp+0x54], 0x3F800000
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_508464
        fld dword ptr ds : [ebx+0x2AC]
        fsub dword ptr ds : [ebx+0x29C]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5db0b4]
        fnstsw ax
        test ah, 5
        jnp public_508464
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5ca218]
        fnstsw ax
        test ah, 5
        jp public_50846c
        fld dword ptr ds : [public_5ca218]
        fsub dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5db0b0]
        fsubr qword ptr ds : [public_5c89b8]
        fstp dword ptr ss : [esp+0x54]
        jmp public_50846c
        public_508464 : nop
        mov dword ptr ss : [esp+0x54], 0
        public_50846c : nop
        push 8
        call public_421670
        fld dword ptr ss : [esp+0x88]
        fsub dword ptr ss : [esp+0x7C]
        mov esi, dword ptr ds : [ebx+0xE0]
        sub esp, 8
        lea ecx, ss:[esp+0x70]
        fstp dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xAC], esi
        fld dword ptr ss : [esp+0x8C]
        fsub dword ptr ss : [esp+0x80]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x88]
        fsub dword ptr ss : [esp+0x7C]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x64]
        mov eax, dword ptr ds : [ebx+0xDC]
        cmp eax, edi
        fmul dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x10], edi
        fmul dword ptr ss : [esp+0x6C]
        faddp 
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp+0x68]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x64]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x68]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x6C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x6C]
        fstp st(0)
        jle public_508a82
        lea edi, ds:[esi+0x18]
        public_508514 : nop
        fld dword ptr ss : [esp+0x78]
        mov eax, dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [edi-0x10]
        sub esp, 0xC
        lea ecx, ss:[esp+0x64]
        mov dword ptr ss : [esp+0x20], eax
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x80]
        fadd dword ptr ds : [edi-0x14]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x7C]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x60]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x90]
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x68]
        fsub dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x64]
        fsub dword ptr ss : [esp+0x88]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ds : [public_675000]
        test eax, eax
        jne public_508595
        call public_5b73e0
        mov dword ptr ds : [public_675000], eax
        public_508595 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x58]
        push edx
        lea edx, ss:[esp+0x14C]
        push edx
        lea edx, ss:[esp+0x120]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        fld dword ptr ss : [esp+0x120]
        fchs 
        fst dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jnp public_508a5e
        mov ecx, dword ptr ds : [ebx+0xD8]
        test ecx, ecx
        jne public_5085ed
        fld dword ptr ss : [esp+0x54]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_5086a6
        public_5085ed : nop
        test ecx, ecx
        mov eax, esi
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x48], edx
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x50], eax
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x4C], edx
        faddp 
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x4C]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x4C]
        fmul st, st(2)
        fld dword ptr ss : [esp+0x50]
        fmul st, st(3)
        fld dword ptr ss : [esp+0x64]
        fmul st, st(3)
        fld dword ptr ss : [esp+0x6C]
        fmul st, st(2)
        faddp 
        fld dword ptr ss : [esp+0x68]
        fmul st, st(3)
        faddp 
        fstp st(4)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        je public_508689
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jnp public_508a5c
        fcom qword ptr ds : [public_5d5b58]
        fnstsw ax
        test ah, 5
        jp public_5086a4
        fmul dword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_5db0a8]
        fstp dword ptr ss : [esp+0x14]
        jmp public_5086a6
        public_508689 : nop
        fcomp dword ptr ds : [public_5d3ee0]
        fnstsw ax
        test ah, 5
        jp public_5086a6
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x14]
        jmp public_5086a6
        public_5086a4 : nop
        fstp st(0)
        public_5086a6 : nop
        fld dword ptr ds : [edi-0xC]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [edi+4]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [edi]
        fsubp 
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [edi-4]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [edi+4]
        fsubp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [edi]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [edi-4]
        fsubp 
        fstp dword ptr ss : [esp+0x24]
        fld st(1)
        fmul st, st(2)
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fsqrt 
        fdivr st, st(3)
        fstp dword ptr ss : [esp+0x28]
        fxch 
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x34]
        fsubp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x1C]
        fsubp 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x30]
        fsubp 
        fst dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fdivr st, st(3)
        fstp dword ptr ss : [esp+0x28]
        fxch 
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x2C]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_5087a0
        fld dword ptr ss : [esp+0x2C]
        fdiv st, st(1)
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x14]
        public_5087a0 : nop
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_5d5138]
        fnstsw ax
        test ah, 5
        jnp public_508a5e
        cmp byte ptr ss : [esp+0xF], 0
        lea ecx, ds:[ebx+0xA8]
        mov edx, ecx
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0xBC], eax
        mov dword ptr ss : [esp+0xC0], ecx
        mov dword ptr ss : [esp+0xC4], edx
        je public_5087f5
        mov esi, dword ptr ss : [esp+0x14]
        push esi
        push edx
        push ecx
        push eax
        call public_421bd0
        add esp, 0x10
        jmp public_508850
        public_5087f5 : nop
        fld dword ptr ss : [esp+0xC4]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x118]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xCC]
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xC8]
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x114]
        mov ecx, dword ptr ss : [esp+0x110]
        mov edx, dword ptr ss : [esp+0x10C]
        push eax
        push ecx
        push edx
        call public_421ad0
        add esp, 0xC
        public_508850 : nop
        mov esi, dword ptr ds : [edi-8]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push ecx
        call public_421ca0
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp]
        push ecx
        fld dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x10C]
        fadd dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x100]
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0xC8]
        fld dword ptr ss : [esp+0x104]
        mov ecx, dword ptr ss : [esp+0xC8]
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0xCC]
        fld dword ptr ss : [esp+0x108]
        mov eax, dword ptr ss : [esp+0xCC]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0xD0]
        mov edx, dword ptr ss : [esp+0xD0]
        push edx
        push eax
        push ecx
        call public_421cc0
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [esi+0x10]
        push edx
        push eax
        call public_421ca0
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x74]
        fstp dword ptr ss : [esp+0x14C]
        fxch 
        fsub dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0xC4]
        mov eax, dword ptr ss : [esp+0xC4]
        fsub dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0xC8]
        fld dword ptr ss : [esp+0x14C]
        mov edx, dword ptr ss : [esp+0xC8]
        fsub dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+0xCC]
        mov ecx, dword ptr ss : [esp+0xCC]
        push ecx
        push edx
        push eax
        call public_421cc0
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+0x10]
        push ecx
        push edx
        call public_421ca0
        fld dword ptr ss : [esp+0x80]
        fsub dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x84]
        fsub dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x88]
        fsub dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x16C]
        fxch 
        fsub dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+0xBC]
        mov edx, dword ptr ss : [esp+0xBC]
        fsub dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+0xC0]
        fld dword ptr ss : [esp+0x16C]
        mov ecx, dword ptr ss : [esp+0xC0]
        fsub dword ptr ss : [esp+0x6C]
        fstp dword ptr ss : [esp+0xC4]
        mov eax, dword ptr ss : [esp+0xC4]
        push eax
        push ecx
        push edx
        call public_421cc0
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push ecx
        call public_421ca0
        fld dword ptr ss : [esp+0x94]
        fsub dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x98]
        fsub dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x9C]
        fsub dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x168]
        fxch 
        fadd dword ptr ss : [esp+0x78]
        fstp dword ptr ss : [esp+0xC4]
        mov ecx, dword ptr ss : [esp+0xC4]
        fadd dword ptr ss : [esp+0x7C]
        fstp dword ptr ss : [esp+0xC8]
        fld dword ptr ss : [esp+0x168]
        mov eax, dword ptr ss : [esp+0xC8]
        fadd dword ptr ss : [esp+0x80]
        fstp dword ptr ss : [esp+0xCC]
        mov edx, dword ptr ss : [esp+0xCC]
        push edx
        push eax
        push ecx
        call public_421cc0
        mov esi, dword ptr ss : [esp+0xE8]
        add esp, 0x48
        jmp public_508a5e
        public_508a5c : nop
        fstp st(0)
        public_508a5e : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ebx+0xDC]
        inc eax
        add esi, 0x20
        add edi, 0x20
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0xA0], esi
        jl public_508514
        public_508a82 : nop
        call public_421690
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0xAC]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 0xB71
        call public_421dd0
        push 1
        call public_422190
        push 0xBE2
        call public_421ed0
        push 0xB44
        call public_421dd0
        mov ecx, dword ptr ds : [ebx+0xEC]
        add esp, 0x10
        test ecx, ecx
        je public_508ae9
        fld dword ptr ds : [ebx+0x294]
        mov eax, dword ptr ds : [ecx]
        fsubr qword ptr ds : [public_5c89b8]
        push ecx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [eax+0xC]
        public_508ae9 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x507ed0)
    }
}

#undef public_507f75
#undef public_507ff5
#undef public_508020
#undef public_5080cc
#undef public_50829b
#undef public_5082a2
#undef public_5082c8
#undef public_5082d2
#undef public_50835d
#undef public_508369
#undef public_50836f
#undef public_508383
#undef public_508387
#undef public_5083ff
#undef public_508464
#undef public_50846c
#undef public_508514
#undef public_508595
#undef public_5085ed
#undef public_508689
#undef public_5086a4
#undef public_5086a6
#undef public_5087a0
#undef public_5087f5
#undef public_508850
#undef public_508a5c
#undef public_508a5e
#undef public_508a82
#undef public_508ae9
