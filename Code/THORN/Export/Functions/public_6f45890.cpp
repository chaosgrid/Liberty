#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2eb20);
CLANG_FORWARD_PROC_SYMBOL(public_6f41b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f431d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4aa40);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f45942 _public_6f45942
#define public_6f459c8 _public_6f459c8
#define public_6f459e3 _public_6f459e3
#define public_6f459ea _public_6f459ea
#define public_6f45a43 _public_6f45a43
#define public_6f45a6e _public_6f45a6e
#define public_6f45a8f _public_6f45a8f
#define public_6f45ad1 _public_6f45ad1
#define public_6f45adc _public_6f45adc
#define public_6f45b02 _public_6f45b02
#define public_6f45b25 _public_6f45b25
#define public_6f45b46 _public_6f45b46
#define public_6f45b68 _public_6f45b68
#define public_6f45bbe _public_6f45bbe
#define public_6f45c1d _public_6f45c1d
#define public_6f45c73 _public_6f45c73
#define public_6f45cd2 _public_6f45cd2
#define public_6f45d54 _public_6f45d54
#define public_6f45d78 _public_6f45d78
#define public_6f45e12 _public_6f45e12
#define public_6f45e33 _public_6f45e33
#define public_6f45e57 _public_6f45e57
#define public_6f45eb7 _public_6f45eb7
#define public_6f45ed6 _public_6f45ed6

PROC_DECLARE(0x6f45890, internal_6f45890, public_6f45890);
extern "C" NAKED register_t __cdecl internal_6f45890()
{
    __asm
    {
        sub esp, 0x220
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x54]
        test eax, eax
        push esi
        push edi
        je public_6f45eb7
        lea esi, ss:[ebp+0x58]
        mov ecx, 0x24
        lea edi, ss:[esp+0xC8]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x18]
        cmp ecx, 0xFFFFFFFF
        mov edi, dword ptr ss : [esp+0x238]
        lea eax, ss:[ebp+0x18]
        je public_6f459e3
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call public_6f4aa40
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [edi+4]
        je public_6f459e3
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        cmp eax, 5
        mov eax, dword ptr ss : [esp+0x10]
        jne public_6f45a43
        mov esi, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [esi+0x15C]
        test eax, eax
        je public_6f45942
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x188]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0x15C]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x180]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [esi+0x15C]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x16C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        jmp public_6f459c8
        public_6f45942 : nop
        mov eax, dword ptr ds : [esi+0x158]
        test eax, eax
        je public_6f459c8
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x160]
        push edi
        push eax
        call dword ptr ds : [ecx+0x24]
        mov eax, dword ptr ds : [esi+0x158]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x16C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi+0x158]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x178]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ds : [esi+0x158]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x17C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x30]
        mov eax, dword ptr ds : [esi+0x158]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x184]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [esi+0x158]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x180]
        push ecx
        push eax
        call dword ptr ds : [edx+0x34]
        lea edx, ds:[esi+0x188]
        push edx
        push edi
        call public_6f2eb20
        add esp, 8
        public_6f459c8 : nop
        add esi, 0x160
        mov ecx, 0x24
        lea edi, ss:[esp+0xC8]
        rep movsd
        mov edi, dword ptr ss : [esp+0x238]
        public_6f459e3 : nop
        mov ebx, dword ptr ss : [esp+0xD0]
        public_6f459ea : nop
        lea edx, ss:[ebp+0x14]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6f4aa40
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [edi+4]
        je public_6f45eb7
        mov eax, dword ptr ss : [esp+0x234]
        mov edx, dword ptr ss : [ebp]
        push 0x3F800000
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x18]
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        cmp eax, 5
        jne public_6f45a8f
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax+0x10]
        add esi, 0x160
        jmp public_6f45ad1
        public_6f45a43 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        cmp eax, 9
        jne public_6f459e3
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [esi+0x104]
        test eax, eax
        je public_6f45a6e
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x11C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x24]
        public_6f45a6e : nop
        add esi, 0x11C
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0xC8], eax
        mov dword ptr ss : [esp+0xCC], ecx
        jmp public_6f459ea
        public_6f45a8f : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        cmp eax, 9
        jne public_6f45adc
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x10]
        add ecx, 0x11C
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x1A0], edx
        mov dword ptr ss : [esp+0x1A4], eax
        mov dword ptr ss : [esp+0x1A8], ecx
        lea esi, ss:[esp+0x1A0]
        public_6f45ad1 : nop
        lea edi, ss:[esp+0x38]
        mov ecx, 0x24
        rep movsd
        public_6f45adc : nop
        mov ecx, dword ptr ss : [ebp+0x54]
        test cl, 4
        je public_6f45b02
        fld dword ptr ss : [ebp+0x15C]
        fld dword ptr ss : [esp+0x13C]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x10]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0xAC]
        fstp st(0)
        public_6f45b02 : nop
        test cl, 8
        je public_6f45b25
        fld dword ptr ss : [ebp+0x174]
        fld dword ptr ss : [esp+0x154]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x10]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0xC4]
        fstp st(0)
        public_6f45b25 : nop
        test ch, 1
        je public_6f45b46
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6f5a1b8]
        fnstsw ax
        test ah, 1
        jne public_6f45b46
        mov edx, dword ptr ss : [esp+0xF0]
        mov dword ptr ss : [esp+0x60], edx
        public_6f45b46 : nop
        test cl, cl
        jns public_6f45b68
        fld dword ptr ss : [ebp+0x170]
        fld dword ptr ss : [esp+0x150]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x10]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0xC0]
        fstp st(0)
        public_6f45b68 : nop
        test ch, 2
        je public_6f45bbe
        fld dword ptr ss : [ebp+0x124]
        fld dword ptr ss : [esp+0x104]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x10]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x74]
        fstp st(0)
        fld dword ptr ss : [ebp+0x128]
        fld dword ptr ss : [esp+0x108]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x10]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x78]
        fstp st(0)
        fld dword ptr ss : [ebp+0x12C]
        fld dword ptr ss : [esp+0x10C]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x10]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x7C]
        fstp st(0)
        public_6f45bbe : nop
        test ch, 4
        je public_6f45c1d
        fld dword ptr ss : [ebp+0x134]
        fld dword ptr ss : [esp+0x114]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x10]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x84]
        fstp st(0)
        fld dword ptr ss : [ebp+0x138]
        fld dword ptr ss : [esp+0x118]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x10]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x88]
        fstp st(0)
        fld dword ptr ss : [ebp+0x13C]
        fld dword ptr ss : [esp+0x11C]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x10]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x8C]
        fstp st(0)
        public_6f45c1d : nop
        test ch, 8
        je public_6f45c73
        fld dword ptr ss : [ebp+0x114]
        fld dword ptr ss : [esp+0xF4]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x10]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x64]
        fstp st(0)
        fld dword ptr ss : [ebp+0x118]
        fld dword ptr ss : [esp+0xF8]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x10]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x68]
        fstp st(0)
        fld dword ptr ss : [ebp+0x11C]
        fld dword ptr ss : [esp+0xFC]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x10]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x6C]
        fstp st(0)
        public_6f45c73 : nop
        test cl, 0x40
        je public_6f45cd2
        fld dword ptr ss : [ebp+0x164]
        fld dword ptr ss : [esp+0x144]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x10]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0xB4]
        fstp st(0)
        fld dword ptr ss : [ebp+0x168]
        fld dword ptr ss : [esp+0x148]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x10]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0xB8]
        fstp st(0)
        fld dword ptr ss : [ebp+0x16C]
        fld dword ptr ss : [esp+0x14C]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x10]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0xBC]
        fstp st(0)
        public_6f45cd2 : nop
        test cl, 1
        je public_6f45d54
        mov eax, dword ptr ss : [ebp+0xE8]
        mov ecx, dword ptr ss : [esp+0xC8]
        sub ecx, eax
        mov dword ptr ss : [esp+0x18], ecx
        fild dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], eax
        fmul dword ptr ss : [esp+0x10]
        fiadd dword ptr ss : [esp+0x1C]
        call public_6f57f16
        mov ecx, dword ptr ss : [esp+0xCC]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [ebp+0xEC]
        sub ecx, eax
        mov dword ptr ss : [esp+0x1C], ecx
        fild dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        fmul dword ptr ss : [esp+0x10]
        fiadd dword ptr ss : [esp+0x18]
        call public_6f57f16
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [ebp+0xF0]
        sub ebx, eax
        mov dword ptr ss : [esp+0x1C], ebx
        fild dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        fmul dword ptr ss : [esp+0x10]
        fiadd dword ptr ss : [esp+0x18]
        call public_6f57f16
        mov dword ptr ss : [esp+0x40], eax
        public_6f45d54 : nop
        mov ecx, dword ptr ss : [ebp+0x54]
        test cl, 0x20
        je public_6f45d78
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6f5a1b8]
        fnstsw ax
        test ah, 1
        jne public_6f45d78
        mov eax, dword ptr ss : [esp+0xEC]
        mov dword ptr ss : [esp+0x5C], eax
        public_6f45d78 : nop
        test cl, 2
        je public_6f45e12
        fld dword ptr ss : [esp+0xD4]
        lea edx, ss:[ebp+0xF4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x20], eax
        fsub dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edx+4]
        fld dword ptr ss : [esp+0xD8]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x24], eax
        fsub dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0xDC]
        mov dword ptr ss : [esp+0x28], edx
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x34]
        fxch 
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x158]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x158]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x2C]
        fxch 
        fadd dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x44], eax
        fstp dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x48], edx
        fstp dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x4C], eax
        public_6f45e12 : nop
        test cl, 0x10
        je public_6f45e33
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6f5a1b8]
        fnstsw ax
        test ah, 1
        jne public_6f45e33
        mov ecx, dword ptr ss : [esp+0xE8]
        mov dword ptr ss : [esp+0x58], ecx
        public_6f45e33 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        cmp eax, 5
        jne public_6f45e57
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, dword ptr ds : [edx+0x10]
        call public_6f41b00
        jmp public_6f45eb7
        public_6f45e57 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        cmp eax, 9
        jne public_6f45eb7
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [esp+0x3C]
        lea esi, ds:[eax+0x11C]
        mov ecx, 0xF
        lea edi, ss:[esp+0x164]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x164], ecx
        mov ecx, dword ptr ss : [esp+0x40]
        push 0xFFFFFFFF
        mov dword ptr ss : [esp+0x16C], edx
        push 0xFFFFFFFF
        lea edx, ss:[esp+0x16C]
        mov dword ptr ss : [esp+0x174], ecx
        push edx
        mov ecx, eax
        call public_6f431d0
        public_6f45eb7 : nop
        mov ebp, dword ptr ss : [ebp+0x1C]
        cmp dword ptr ss : [esp+0x234], ebp
        jb public_6f45ed6
        test ebp, ebp
        jl public_6f45ed6
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x220
        ret 8
        public_6f45ed6 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x220
        ret 8
        UNREACHABLE_TRAP(0x6f45890)
    }
}

#undef public_6f45942
#undef public_6f459c8
#undef public_6f459e3
#undef public_6f459ea
#undef public_6f45a43
#undef public_6f45a6e
#undef public_6f45a8f
#undef public_6f45ad1
#undef public_6f45adc
#undef public_6f45b02
#undef public_6f45b25
#undef public_6f45b46
#undef public_6f45b68
#undef public_6f45bbe
#undef public_6f45c1d
#undef public_6f45c73
#undef public_6f45cd2
#undef public_6f45d54
#undef public_6f45d78
#undef public_6f45e12
#undef public_6f45e33
#undef public_6f45e57
#undef public_6f45eb7
#undef public_6f45ed6
