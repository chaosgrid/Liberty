#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaee0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f0bb50);
CLANG_FORWARD_PROC_SYMBOL(public_6f0bb80);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f24870);
CLANG_FORWARD_PROC_SYMBOL(public_6f26460);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f5aeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f60760);
CLANG_FORWARD_PROC_SYMBOL(public_6f61cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f64fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f658d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f695a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f78ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafbdb);

#define public_6f65055 _public_6f65055
#define public_6f6506e _public_6f6506e
#define public_6f65084 _public_6f65084
#define public_6f650d4 _public_6f650d4
#define public_6f650de _public_6f650de
#define public_6f6516e _public_6f6516e
#define public_6f6535b _public_6f6535b
#define public_6f6542f _public_6f6542f
#define public_6f65463 _public_6f65463
#define public_6f65706 _public_6f65706
#define public_6f65721 _public_6f65721
#define public_6f65842 _public_6f65842
#define public_6f6588e _public_6f6588e
#define public_6f658b3 _public_6f658b3

PROC_DECLARE(0x6f64fc0, internal_6f64fc0, public_6f64fc0);
extern "C" NAKED register_t __cdecl internal_6f64fc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafbdb @0x6f64fc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafbdb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xB4
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xD4]
        lea ebx, ds:[edi+0x40]
        mov eax, ebx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], ecx
        mov cl, byte ptr ss : [esp+0x33]
        mov dword ptr ss : [esp+0x18], eax
        xor eax, eax
        mov dword ptr ss : [esp+0x14], edx
        mov byte ptr ss : [esp+0x74], cl
        mov dword ptr ss : [esp+0x78], eax
        mov dword ptr ss : [esp+0x7C], eax
        mov dword ptr ss : [esp+0x80], eax
        mov dl, byte ptr ss : [esp+0x33]
        mov dword ptr ss : [esp+0xCC], eax
        mov byte ptr ss : [esp+0x50], dl
        mov dword ptr ss : [esp+0x54], eax
        mov dword ptr ss : [esp+0x58], eax
        mov dword ptr ss : [esp+0x5C], eax
        lea ecx, ss:[esp+0xDC]
        push ecx
        push eax
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0xD4], 1
        call public_6eb5770
        mov esi, dword ptr ds : [edi+0x50]
        cmp esi, dword ptr ds : [edi+0x54]
        je public_6f6506e
        public_6f65055 : nop
        mov edx, dword ptr ss : [esp+0x7C]
        push esi
        push edx
        lea ecx, ss:[esp+0x7C]
        call public_6f695a0
        mov eax, dword ptr ds : [edi+0x54]
        add esi, 0x10
        cmp esi, eax
        jne public_6f65055
        public_6f6506e : nop
        mov ecx, dword ptr ss : [esp+0xD8]
        call public_6f78ee0
        mov ebp, eax
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, dword ptr ss : [ebp+8]
        je public_6f650de
        public_6f65084 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f650d4
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [edi+0xC]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f650d4
        mov ecx, dword ptr ds : [ecx+0x10]
        lea eax, ss:[esp+0x64]
        push eax
        call public_6eb70f0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x34], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x38], edx
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+0x7C]
        lea ecx, ss:[esp+0x34]
        push ecx
        push edx
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], 0x451C4000
        call public_6f695a0
        public_6f650d4 : nop
        mov eax, dword ptr ss : [ebp+8]
        add esi, 4
        cmp esi, eax
        jne public_6f65084
        public_6f650de : nop
        fld dword ptr ds : [ebx+8]
        fld dword ptr ds : [ebx+4]
        fld dword ptr ds : [ebx]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call public_6f5aeb0
        fmul dword ptr ss : [esp+0x20]
        add esp, 4
        fcomp dword ptr ds : [public_6fb6280]
        fnstsw ax
        test ah, 0x41
        jp public_6f6516e
        lea esi, ds:[edi+0x34]
        mov ecx, esi
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x44], edx
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x4C], ecx
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x2C], eax
        fild dword ptr ss : [esp+0x2C]
        mov edx, esi
        mov ebx, dword ptr ds : [edx]
        fmul dword ptr ds : [public_6fb4448]
        mov ebp, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x3C], eax
        fmul qword ptr ds : [public_6fbbc70]
        fadd qword ptr ds : [public_6fbbc68]
        fstp dword ptr ss : [esp+0x1C]
        jmp public_6f6542f
        public_6f6516e : nop
        lea ecx, ss:[esp+0x10]
        call public_6f0bb50
        fdivr dword ptr ds : [public_6fb5810]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        fld dword ptr ds : [ebx+8]
        fld dword ptr ds : [ebx+4]
        fld dword ptr ds : [ebx]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call public_6f5aeb0
        fmul dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0x14]
        lea ecx, ss:[esp+0x68]
        fmul qword ptr ds : [public_6fbbc90]
        fadd qword ptr ds : [public_6fbbc68]
        fstp dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        push eax
        push ecx
        call public_6f60760
        lea edx, ss:[esp+0x74]
        push edx
        lea esi, ds:[edi+0x34]
        lea eax, ss:[esp+0x48]
        push esi
        push eax
        call public_6f0bb80
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x60], ecx
        push 0x459C4000
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x68], edx
        push ecx
        lea edx, ss:[esp+0x88]
        push edx
        mov dword ptr ss : [esp+0x74], eax
        call public_6f60760
        lea eax, ss:[esp+0x8C]
        push eax
        lea ecx, ss:[esp+0x3C]
        push esi
        push ecx
        call public_6eeaee0
        mov edx, dword ptr ss : [esp+0x4C]
        mov ebx, dword ptr ss : [esp+0x44]
        mov ebp, dword ptr ss : [esp+0x48]
        lea eax, ss:[esp+0x68]
        push eax
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x74], edx
        push ecx
        lea edx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x70], ebx
        mov dword ptr ss : [esp+0x74], ebp
        push edx
        call public_6eeaee0
        add esp, 0x40
        lea ecx, ss:[esp+0x10]
        call public_6f0bb50
        fdivr dword ptr ds : [public_6fb5810]
        sub esp, 0xC
        lea ecx, ss:[esp+0x2C]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_6fb444c]
        fld dword ptr ss : [esp+0x1C]
        fsubr st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_6fb444c]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_6fb444c]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fsub st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_6eb7810
        fld dword ptr ss : [esp+0x20]
        fcomp qword ptr ds : [public_6fbbc88]
        fnstsw ax
        test ah, 0x44
        jp public_6f6535b
        fld dword ptr ss : [esp+0x24]
        fcomp qword ptr ds : [public_6fbbc88]
        fnstsw ax
        test ah, 0x44
        jp public_6f6535b
        fld dword ptr ss : [esp+0x28]
        fcomp qword ptr ds : [public_6fbbc88]
        fnstsw ax
        test ah, 0x44
        jp public_6f6535b
        mov eax, esi
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x48], edx
        mov dword ptr ss : [esp+0x4C], eax
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x2C], eax
        fild dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [public_6fb4448]
        fmul qword ptr ds : [public_6fbbc70]
        fadd qword ptr ds : [public_6fbbc68]
        fstp dword ptr ss : [esp+0x1C]
        jmp public_6f6542f
        public_6f6535b : nop
        lea ecx, ss:[esp+0x20]
        call public_6f0bb50
        fdivr dword ptr ds : [public_6fb5810]
        sub esp, 0xC
        lea ecx, ss:[esp+0x1C]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x2C]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x34]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x30]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_6eb7810
        lea ecx, ss:[esp+0x10]
        call public_6f0bb50
        fdivr dword ptr ds : [public_6fb5810]
        push 0x43160000
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x6C]
        push edx
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        call public_6f60760
        add esp, 0xC
        lea eax, ss:[esp+0x64]
        push eax
        lea ecx, ss:[esp+0x48]
        call public_6f658d0
        mov dword ptr ss : [esp+0x1C], 0x42340000
        public_6f6542f : nop
        cmp byte ptr ds : [edi], 0
        jne public_6f65463
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x64], ecx
        lea ecx, ss:[esp+0x64]
        mov dword ptr ss : [esp+0x68], edx
        mov edx, dword ptr ss : [esp+0x7C]
        push ecx
        push edx
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x74], eax
        mov dword ptr ss : [esp+0x78], 0x451C4000
        call public_6f695a0
        public_6f65463 : nop
        mov eax, dword ptr ss : [esp+0xD8]
        push eax
        lea ecx, ss:[esp+0x98]
        push ecx
        mov ecx, dword ptr ss : [esp+0x44]
        lea edx, ss:[esp+0x90]
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push 0x42480000
        push 0x42480000
        sub esp, 0xC
        mov eax, esp
        mov dword ptr ds : [eax], ebx
        push edx
        mov edx, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp+0x68]
        sub esp, 0xC
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x7C]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x110]
        fld qword ptr ds : [edx]
        push ecx
        mov dword ptr ds : [eax+8], ecx
        fstp dword ptr ss : [esp]
        lea eax, ss:[esp+0x84]
        push eax
        xor esi, esi
        push esi
        lea ecx, ss:[esp+0xB0]
        push esi
        push ecx
        call public_6f61cb0
        add esp, 0x44
        test al, al
        je public_6f6588e
        mov eax, dword ptr ss : [esp+0xE4]
        mov ecx, dword ptr ss : [esp+0x88]
        mov esi, dword ptr ss : [esp+0x8C]
        mov ebp, dword ptr ss : [esp+0xE8]
        lea edx, ds:[eax+0x10]
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ss : [esp+0x90]
        mov dword ptr ds : [eax], 8
        mov dword ptr ds : [edx+8], esi
        mov edx, dword ptr ss : [esp+0x94]
        add eax, 0x1C
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x98]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x9C]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [eax]
        add eax, 0xBC
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x8C]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [esp+0x90]
        mov dword ptr ds : [eax+8], edx
        lea eax, ss:[esp+0x94]
        push eax
        lea ecx, ss:[esp+0x8C]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        call public_6eeaee0
        add esp, 0xC
        lea ecx, ss:[esp+0x10]
        call public_6f0bb50
        fdivr dword ptr ds : [public_6fb5810]
        sub esp, 0xC
        lea ecx, ss:[esp+0x2C]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_6fb444c]
        fld dword ptr ss : [esp+0x1C]
        fsubr st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_6fb444c]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_6fb444c]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fsub st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_6eb7810
        lea ecx, ss:[esp+0x20]
        call public_6f0bb50
        fdivr dword ptr ds : [public_6fb5810]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x20]
        fsubp 
        fstp dword ptr ss : [esp+0x84]
        mov ebx, dword ptr ss : [esp+0x84]
        fld dword ptr ss : [esp+0x18]
        push ebx
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x14]
        fsubp 
        fstp dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x2C]
        push eax
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x20]
        fsubp 
        fstp dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_6eb7810
        lea ecx, ss:[esp+0x34]
        call public_6f0bb50
        fdivr dword ptr ds : [public_6fb5810]
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xB8], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0xAC], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0xA0], edx
        mov dword ptr ss : [esp+0xB4], ecx
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0xA8], eax
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x38]
        fmul st, st(2)
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(3)
        fstp dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x3C]
        fxch 
        mov dword ptr ss : [esp+0xBC], edx
        mov edx, dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0xA4]
        mov dword ptr ss : [esp+0xC0], edx
        fstp dword ptr ss : [esp+0xB0]
        fstp st(0)
        je public_6f65721
        public_6f65706 : nop
        lea edi, ds:[eax+0x98]
        mov eax, dword ptr ds : [eax]
        mov ecx, 9
        lea esi, ss:[esp+0xA0]
        rep movsd
        cmp eax, dword ptr ss : [ebp+4]
        jne public_6f65706
        public_6f65721 : nop
        mov eax, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [esp+0x2C]
        push ebx
        push eax
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_6eb7810
        lea ecx, ss:[esp+0x20]
        call public_6f0bb50
        fdivr dword ptr ds : [public_6fb5810]
        push 0x42480000
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x6C]
        push eax
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        fstp st(0)
        call public_6f60760
        add esp, 0xC
        lea edx, ss:[esp+0x64]
        lea ecx, ds:[esi+0xBC]
        push edx
        call public_6f658d0
        xor edi, edi
        mov dword ptr ss : [esp+0x1C], edi
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0xCC], 2
        call public_6f28e10
        lea eax, ss:[esp+0x1C]
        push eax
        push 5
        call public_6f24870
        add esp, 8
        push edi
        push edi
        push edi
        push 0xBF800000
        push 0x43C88000
        lea ecx, ss:[esp+0xA8]
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        call public_6f26460
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+0x114], 1
        mov eax, dword ptr ss : [esp+0x1C]
        mov byte ptr ds : [eax+0x164], 1
        mov ebp, dword ptr ss : [ebp+4]
        mov ebp, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x84]
        mov dword ptr ss : [esp+0x2C], ecx
        lea esi, ss:[ebp+0x68]
        push edx
        mov ecx, esi
        call public_6f1df30
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push edx
        lea eax, ss:[esp+0x68]
        push eax
        mov ecx, esi
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, edi
        mov byte ptr ss : [esp+0xCC], 1
        je public_6f65842
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], edi
        public_6f65842 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x54]
        push ecx
        push edx
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0xD4], 0
        call public_6ea1490
        mov eax, dword ptr ss : [esp+0x54]
        push eax
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x54], edi
        mov dword ptr ss : [esp+0x58], edi
        mov dword ptr ss : [esp+0x5C], edi
        mov dword ptr ss : [esp+0xCC], 0xFFFFFFFF
        call public_6eec8d0
        mov al, 1
        jmp public_6f658b3
        public_6f6588e : nop
        mov ecx, dword ptr ss : [esp+0x54]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x7C]
        push edx
        mov dword ptr ss : [esp+0x5C], esi
        mov dword ptr ss : [esp+0x60], esi
        mov dword ptr ss : [esp+0x64], esi
        call public_6fa8fe0
        add esp, 8
        xor al, al
        public_6f658b3 : nop
        mov ecx, dword ptr ss : [esp+0xC4]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC0
        ret 
        UNREACHABLE_TRAP(0x6f64fc0)
    }
}

#undef public_6f65055
#undef public_6f6506e
#undef public_6f65084
#undef public_6f650d4
#undef public_6f650de
#undef public_6f6516e
#undef public_6f6535b
#undef public_6f6542f
#undef public_6f65463
#undef public_6f65706
#undef public_6f65721
#undef public_6f65842
#undef public_6f6588e
#undef public_6f658b3
