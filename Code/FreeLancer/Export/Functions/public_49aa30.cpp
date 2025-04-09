#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_498470);
CLANG_FORWARD_PROC_SYMBOL(public_49aa30);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_49ad45 _public_49ad45
#define public_49ad50 _public_49ad50
#define public_49ad84 _public_49ad84
#define public_49ae14 _public_49ae14
#define public_49ae5a _public_49ae5a
#define public_49aed5 _public_49aed5
#define public_49af55 _public_49af55
#define public_49afd3 _public_49afd3
#define public_49b00b _public_49b00b
#define public_49b023 _public_49b023
#define public_49b063 _public_49b063
#define public_49b0c1 _public_49b0c1
#define public_49b0e0 _public_49b0e0
#define public_49b194 _public_49b194
#define public_49b1de _public_49b1de
#define public_49b25c _public_49b25c
#define public_49b2dc _public_49b2dc
#define public_49b35a _public_49b35a
#define public_49b391 _public_49b391
#define public_49b3a6 _public_49b3a6
#define public_49b3c0 _public_49b3c0
#define public_49b485 _public_49b485
#define public_49b4d4 _public_49b4d4
#define public_49b55e _public_49b55e
#define public_49b5ba _public_49b5ba
#define public_49b5d4 _public_49b5d4
#define public_49b5e3 _public_49b5e3

PROC_DECLARE(0x49aa30, internal_49aa30, public_49aa30);
extern "C" NAKED register_t __cdecl internal_49aa30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0xF4C
        push ebx
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+0x898]
        test al, al
        push esi
        push edi
        je public_49b5e3
        mov dword ptr ss : [esp+0x6C], 0
        mov eax, dword ptr ss : [esp+0x6C]
        lea esi, ss:[ebp+0x3D4]
        mov ecx, 9
        lea edi, ss:[esp+0x1A0]
        rep movsd
        mov dword ptr ss : [esp+0x1C4], eax
        lea eax, ss:[esp+0x1A0]
        push eax
        mov dword ptr ss : [esp+0x74], 0
        mov ecx, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0x78], 0xBF0CCCCC
        mov edx, dword ptr ss : [esp+0x78]
        push 0
        mov dword ptr ss : [esp+0x1D0], ecx
        mov dword ptr ss : [esp+0x1D4], edx
        call public_422690
        push 0xB50
        call public_421ed0
        push 0xB71
        call public_421ed0
        push 0xB44
        call public_421ed0
        push 0xDE1
        call public_421ed0
        push 0xBE2
        call public_421dd0
        push 6
        push 5
        call public_4220c0
        push 4
        call public_421670
        lea esi, ss:[ebp+0x418]
        mov ecx, esi
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x7C], edx
        fld dword ptr ss : [esp+0x7C]
        fmul dword ptr ds : [public_5c75e0]
        mov dword ptr ss : [esp+0x80], eax
        mov dword ptr ss : [esp+0x84], ecx
        lea edx, ss:[esp+0x7C]
        fstp dword ptr ss : [esp+0x7C]
        push edx
        fld dword ptr ss : [esp+0x84]
        lea eax, ss:[esp+0x8C]
        fmul dword ptr ds : [public_5c75e0]
        push eax
        lea ecx, ss:[esp+0xAC]
        push ecx
        fstp dword ptr ss : [esp+0x8C]
        mov dword ptr ss : [esp+0x94], 0
        fld dword ptr ss : [esp+0x90]
        mov dword ptr ss : [esp+0x98], 0
        fmul dword ptr ds : [public_5c75e0]
        mov dword ptr ss : [esp+0x9C], 0
        fstp dword ptr ss : [esp+0x90]
        call public_423b60
        mov eax, dword ptr ss : [esp+0xB0]
        mov ecx, dword ptr ss : [esp+0xB4]
        mov edx, dword ptr ss : [esp+0xB8]
        mov edi, esi
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x58], ebx
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [public_5c75e0]
        mov ebx, dword ptr ds : [edi+4]
        mov edi, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x5C], ebx
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ds : [public_5c75e0]
        mov dword ptr ss : [esp+0x60], edi
        fld dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x88], eax
        fmul dword ptr ds : [public_5c75e0]
        mov dword ptr ss : [esp+0x8C], ecx
        mov dword ptr ss : [esp+0x90], edx
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ss : [ebp+0x3F8]
        fsub dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x50]
        fxch 
        mov dword ptr ss : [esp+0x70], eax
        fmul dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x74], ecx
        mov dword ptr ss : [esp+0x78], edx
        lea edx, ss:[ebp+0x46C]
        fstp dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        fmul dword ptr ss : [esp+0x50]
        mov edx, dword ptr ds : [edx+8]
        fld dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0xBC], eax
        fmul dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0xC0], ecx
        fld dword ptr ss : [esp+0xB0]
        mov dword ptr ss : [esp+0xC4], edx
        fsub dword ptr ss : [esp+0x58]
        lea eax, ss:[esp+0xBC]
        push eax
        lea ecx, ss:[esp+0x74]
        fstp dword ptr ss : [esp+0x74]
        push ecx
        fld dword ptr ss : [esp+0x7C]
        lea edx, ss:[esp+0x9C]
        fsub st, st(2)
        push edx
        fstp dword ptr ss : [esp+0x80]
        fld dword ptr ss : [esp+0x84]
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x84]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [ebp+0x3F8]
        fld dword ptr ss : [esp+0xC8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC8]
        fld dword ptr ss : [esp+0xCC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xCC]
        fld dword ptr ss : [esp+0xD0]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xD0]
        fstp st(0)
        call public_423b30
        mov eax, dword ptr ss : [esp+0xA0]
        fld dword ptr ss : [ebp+0x3F8]
        mov ecx, dword ptr ss : [esp+0xA4]
        mov edx, dword ptr ss : [esp+0xA8]
        mov dword ptr ss : [esp+0x7C], eax
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x64], eax
        fld dword ptr ss : [esp+0x64]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x80], ecx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x68], ecx
        mov ecx, dword ptr ss : [ebp+0x7E0]
        fstp dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x84], edx
        mov edx, dword ptr ds : [esi+8]
        fmul st, st(1)
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x6C], edx
        fstp dword ptr ss : [esp+0x68]
        add esp, 0x40
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fstp st(0)
        call dword ptr ds : [eax+0x18]
        mov dword ptr ss : [esp+0x94], eax
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x78], ecx
        je public_49b5d4
        jmp public_49ad50
        public_49ad45 : nop
        mov ecx, dword ptr ss : [esp+0x78]
        lea esp, ss:[esp]
        public_49ad50 : nop
        mov al, byte ptr ss : [ebp+0xB48]
        test al, al
        lea esi, ds:[ecx+8]
        mov ecx, 0x303
        lea edi, ss:[esp+0x350]
        rep movsd
        mov ebx, dword ptr ss : [esp+0xF58]
        je public_49ad84
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x1C]
        test eax, 0xFFC0
        je public_49b5ba
        public_49ad84 : nop
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x28]
        fld dword ptr ss : [ebp+0xF48]
        fld dword ptr ss : [esp+0x10]
        mov ecx, ebx
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ebx]
        call dword ptr ds : [edx+0xC]
        fld dword ptr ss : [ebp+0xF48]
        mov esi, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x98]
        rep movsd
        fld dword ptr ss : [esp+0xBC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xBC]
        fld dword ptr ss : [esp+0xC4]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC4]
        mov dword ptr ss : [esp+0xC0], 0
        fstp st(0)
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x18]
        dec eax
        cmp eax, 3
        ja public_49b55e
/*FIXUP jmp dword ptr ds : [eax*4+public_49b5f0] @0x49ae0d*/
  JMPTB cmp eax, 0
  JMPTB je public_49b00b
  JMPTB cmp eax, 1
  JMPTB je public_49b0c1
  JMPTB cmp eax, 2
  JMPTB je public_49ae14
  JMPTB cmp eax, 3
  JMPTB je public_49b194
  JMPTB int 3
        public_49ae14 : nop
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        fmul dword ptr ds : [public_5c75e0]
        mov esi, 4
        mov dword ptr ss : [esp+0x20], esi
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x18]
        jne public_49ae5a
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49ae5a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x9C]
        push edx
        lea edx, ss:[esp+0x178]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x170]
        fchs 
        mov ecx, dword ptr ss : [esp+0x174]
        mov edx, dword ptr ss : [esp+0x178]
        fstp dword ptr ss : [esp+0xC8]
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1D0], eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        fstp dword ptr ss : [esp+0xCC]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1D4], ecx
        fstp dword ptr ss : [esp+0xD0]
        mov dword ptr ss : [esp+0x1D8], edx
        jne public_49aed5
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49aed5 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC8]
        push edx
        lea edx, ss:[esp+0x9C]
        push edx
        lea edx, ss:[esp+0x154]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14C]
        fchs 
        mov ecx, dword ptr ss : [esp+0x150]
        mov edx, dword ptr ss : [esp+0x154]
        fstp dword ptr ss : [esp+0xEC]
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1DC], eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        fstp dword ptr ss : [esp+0xF0]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1E0], ecx
        fchs 
        mov dword ptr ss : [esp+0x1E4], edx
        fstp dword ptr ss : [esp+0xF4]
        jne public_49af55
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49af55 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xEC]
        push edx
        lea edx, ss:[esp+0x9C]
        push edx
        lea edx, ss:[esp+0x19C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x194]
        mov ecx, dword ptr ss : [esp+0x198]
        mov edx, dword ptr ss : [esp+0x19C]
        fstp dword ptr ss : [esp+0x104]
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1E8], eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        fstp dword ptr ss : [esp+0x108]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1EC], ecx
        fchs 
        mov dword ptr ss : [esp+0x1F0], edx
        fstp dword ptr ss : [esp+0x10C]
        jne public_49afd3
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49afd3 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x104]
        push edx
        lea edx, ss:[esp+0x9C]
        push edx
        lea edx, ss:[esp+0x16C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x164]
        mov ecx, dword ptr ss : [esp+0x168]
        mov edx, dword ptr ss : [esp+0x16C]
        jmp public_49b391
        public_49b00b : nop
        mov edi, 0x10
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x48], 0
        lea esi, ss:[esp+0x1D0]
        public_49b023 : nop
        fld dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        fsin 
        mov dword ptr ss : [esp+0x120], 0
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x11C]
        fld dword ptr ss : [esp+0x48]
        fcos 
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x124]
        jne public_49b063
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49b063 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x11C]
        push edx
        lea edx, ss:[esp+0x9C]
        push edx
        lea edx, ss:[esp+0x190]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x188]
        fadd dword ptr ds : [public_5d3f00]
        mov edx, dword ptr ss : [esp+0x18C]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x190]
        mov dword ptr ds : [eax+4], edx
        add esi, 0xC
        dec edi
        mov dword ptr ds : [eax+8], ecx
        jne public_49b023
        mov esi, dword ptr ss : [esp+0x20]
        jmp public_49b3a6
        public_49b0c1 : nop
        mov edi, 0x10
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x50], 0
        lea esi, ss:[esp+0x1D0]
        lea esp, ss:[esp]
        public_49b0e0 : nop
        fld dword ptr ss : [esp+0x50]
        mov edx, dword ptr ds : [ebx]
        fsin 
        lea eax, ss:[esp+0x6C]
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x74], 0
        fstp dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x54]
        fcos 
        fstp dword ptr ss : [esp+0x78]
        call dword ptr ds : [edx+0x40]
        fmul dword ptr ss : [ebp+0xF48]
        fld dword ptr ss : [esp+0x6C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x140]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x7C]
        fmul st, st(2)
        fld dword ptr ss : [esp+0x80]
        fmul st, st(3)
        fadd dword ptr ss : [esp+0xD0]
        fstp dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0xCC]
        fstp dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+0xC8]
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_422b80
        mov edx, dword ptr ss : [esp+0x134]
        fld dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x138]
        fadd dword ptr ds : [public_5d3f00]
        mov ecx, esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x13C]
        fstp dword ptr ss : [esp+0x50]
        mov dword ptr ds : [ecx+4], eax
        add esi, 0xC
        dec edi
        mov dword ptr ds : [ecx+8], edx
        jne public_49b0e0
        mov esi, dword ptr ss : [esp+0x20]
        jmp public_49b3a6
        public_49b194 : nop
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        fmul dword ptr ds : [public_5c75e0]
        mov dword ptr ss : [esp+0x20], 4
        mov dword ptr ss : [esp+0x184], 0
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x17C]
        fld dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x180]
        jne public_49b1de
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49b1de : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x17C]
        push edx
        lea edx, ss:[esp+0x9C]
        push edx
        lea edx, ss:[esp+0xDC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xD4]
        fchs 
        mov ecx, dword ptr ss : [esp+0xD8]
        mov edx, dword ptr ss : [esp+0xDC]
        fstp dword ptr ss : [esp+0xE0]
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1D0], eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        fstp dword ptr ss : [esp+0xE4]
        mov dword ptr ss : [esp+0x1D4], ecx
        mov dword ptr ss : [esp+0x1D8], edx
        mov dword ptr ss : [esp+0xE8], 0
        jne public_49b25c
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49b25c : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xE0]
        push edx
        lea edx, ss:[esp+0x9C]
        push edx
        lea edx, ss:[esp+0x100]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xF8]
        fchs 
        mov ecx, dword ptr ss : [esp+0xFC]
        mov edx, dword ptr ss : [esp+0x100]
        fstp dword ptr ss : [esp+0x110]
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1DC], eax
        mov eax, dword ptr ds : [public_67209c]
        fchs 
        test eax, eax
        fstp dword ptr ss : [esp+0x114]
        mov dword ptr ss : [esp+0x1E0], ecx
        mov dword ptr ss : [esp+0x1E4], edx
        mov dword ptr ss : [esp+0x118], 0
        jne public_49b2dc
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49b2dc : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x110]
        push edx
        lea edx, ss:[esp+0x9C]
        push edx
        lea edx, ss:[esp+0x130]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x128]
        mov ecx, dword ptr ss : [esp+0x12C]
        mov edx, dword ptr ss : [esp+0x130]
        fstp dword ptr ss : [esp+0x140]
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1E8], eax
        mov eax, dword ptr ds : [public_67209c]
        fchs 
        test eax, eax
        fstp dword ptr ss : [esp+0x144]
        mov dword ptr ss : [esp+0x1EC], ecx
        mov dword ptr ss : [esp+0x1F0], edx
        mov dword ptr ss : [esp+0x148], 0
        jne public_49b35a
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49b35a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x140]
        push edx
        lea edx, ss:[esp+0x9C]
        push edx
        lea edx, ss:[esp+0x160]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x158]
        mov ecx, dword ptr ss : [esp+0x15C]
        mov edx, dword ptr ss : [esp+0x160]
        mov esi, dword ptr ss : [esp+0x20]
        public_49b391 : nop
        mov dword ptr ss : [esp+0x1F4], eax
        mov dword ptr ss : [esp+0x1F8], ecx
        mov dword ptr ss : [esp+0x1FC], edx
        public_49b3a6 : nop
        fld dword ptr ss : [ebp+0x4A8]
        lea eax, ss:[esp+0x1D0]
        fadd st(0), st
        mov ecx, esi
        fld dword ptr ss : [ebp+0x4AC]
        fadd st(0), st
        nop 
        public_49b3c0 : nop
        fld dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [ebp+0x4A8]
        mov dword ptr ss : [esp+0x60], edx
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x64], edx
        fdiv st, st(2)
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x68], edx
        mov edx, eax
        add eax, 0xC
        dec ecx
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ds : [eax-4]
        fadd dword ptr ss : [ebp+0x4AC]
        fdiv st, st(2)
        fsubr qword ptr ds : [public_5c89b8]
        fmul dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x3C]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0x7C]
        fld dword ptr ss : [esp+0x40]
        mov edi, dword ptr ss : [esp+0x7C]
        fadd st, st(1)
        mov dword ptr ds : [edx], edi
        fstp dword ptr ss : [esp+0x80]
        mov edi, dword ptr ss : [esp+0x80]
        fstp st(0)
        mov dword ptr ds : [edx+4], edi
        fstp st(0)
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+0x84]
        mov edi, dword ptr ss : [esp+0x84]
        mov dword ptr ds : [edx+8], edi
        jne public_49b3c0
        lea ebx, ds:[esi-1]
        fstp st(0)
        test ebx, ebx
        fstp st(0)
        jle public_49b4d4
        mov byte ptr ss : [esp+0x34], 0x1F
        mov byte ptr ss : [esp+0x35], 0
        mov byte ptr ss : [esp+0x36], 0
        mov byte ptr ss : [esp+0x37], 0
        mov byte ptr ss : [esp+0x4C], 0xFF
        mov byte ptr ss : [esp+0x4D], 0
        mov byte ptr ss : [esp+0x4E], 0
        mov byte ptr ss : [esp+0x4F], 0xFF
        lea eax, ss:[esp+0x1D0]
        public_49b485 : nop
        push 0x3B23D70A
        lea ecx, ss:[esp+0x38]
        push ecx
        lea esi, ds:[eax+0xC]
        lea edx, ss:[esp+0x54]
        push edx
        sub esp, 0xC
        mov ecx, esi
        mov edi, dword ptr ds : [ecx]
        mov edx, esp
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ds : [eax]
        sub esp, 0xC
        mov edx, esp
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        call public_498470
        add esp, 0x24
        dec ebx
        mov eax, esi
        jne public_49b485
        mov esi, dword ptr ss : [esp+0x20]
        public_49b4d4 : nop
        push 0x3B23D70A
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1D8]
        lea edx, ss:[esp+0x38]
        push edx
        mov edx, dword ptr ss : [esp+0x1E0]
        sub esp, 0xC
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x1F0]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        lea edx, ds:[esi+esi*2]
        lea eax, ss:[esp+edx*4+0x1DC]
        mov edx, dword ptr ds : [eax]
        sub esp, 0xC
        mov ecx, esp
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+4], edx
        mov byte ptr ss : [esp+0x5C], 0x1F
        mov byte ptr ss : [esp+0x5D], 0
        mov byte ptr ss : [esp+0x5E], 0
        mov byte ptr ss : [esp+0x5F], 0
        mov byte ptr ss : [esp+0x54], 0xFF
        mov byte ptr ss : [esp+0x55], 0
        mov byte ptr ss : [esp+0x56], 0
        mov byte ptr ss : [esp+0x57], 0xFF
        mov dword ptr ds : [ecx+8], eax
        call public_498470
        mov eax, dword ptr ss : [esp+0x40]
        add esp, 0x24
        add eax, esi
        mov dword ptr ss : [esp+0x1C], eax
        public_49b55e : nop
        cmp dword ptr ss : [esp+0x1C], 0x100
        jl public_49b5ba
        mov dword ptr ss : [esp+0x1C], 0
        call public_421690
        push 0xB50
        call public_421ed0
        push 0xB71
        call public_421ed0
        push 0xB44
        call public_421ed0
        push 0xDE1
        call public_421ed0
        push 0xBE2
        call public_421dd0
        push 6
        push 5
        call public_4220c0
        push 4
        call public_421670
        add esp, 0x20
        public_49b5ba : nop
        mov ecx, dword ptr ss : [esp+0x78]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+0x94]
        cmp eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x78], eax
        jne public_49ad45
        public_49b5d4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xF4C
        jmp public_421690
        public_49b5e3 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xF4C
        ret 
        UNREACHABLE_TRAP(0x49aa30)
        ASM_EXPORT_ENTRY_SINGLE(0x49b194, public_49b194)
    }
}

#undef public_49ad45
#undef public_49ad50
#undef public_49ad84
#undef public_49ae14
#undef public_49ae5a
#undef public_49aed5
#undef public_49af55
#undef public_49afd3
#undef public_49b00b
#undef public_49b023
#undef public_49b063
#undef public_49b0c1
#undef public_49b0e0
#undef public_49b194
#undef public_49b1de
#undef public_49b25c
#undef public_49b2dc
#undef public_49b35a
#undef public_49b391
#undef public_49b3a6
#undef public_49b3c0
#undef public_49b485
#undef public_49b4d4
#undef public_49b55e
#undef public_49b5ba
#undef public_49b5d4
#undef public_49b5e3

#pragma init_seg(compiler)
extern "C" void const* const public_49b194 = __AsmFindLabelExport(&internal_49aa30, 0x49b194);
