#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f0bb50);
CLANG_FORWARD_PROC_SYMBOL(public_6f0bb80);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f24870);
CLANG_FORWARD_PROC_SYMBOL(public_6f26460);
CLANG_FORWARD_PROC_SYMBOL(public_6f37ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6f60760);
CLANG_FORWARD_PROC_SYMBOL(public_6f61800);
CLANG_FORWARD_PROC_SYMBOL(public_6f61cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f64800);
CLANG_FORWARD_PROC_SYMBOL(public_6f695a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f69d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f78ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8130);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafbb3);

#define public_6f64873 _public_6f64873
#define public_6f64890 _public_6f64890
#define public_6f648e0 _public_6f648e0
#define public_6f648ea _public_6f648ea
#define public_6f648f4 _public_6f648f4
#define public_6f6490d _public_6f6490d
#define public_6f64978 _public_6f64978
#define public_6f649c2 _public_6f649c2
#define public_6f64a4e _public_6f64a4e
#define public_6f64a53 _public_6f64a53
#define public_6f64a80 _public_6f64a80
#define public_6f64afc _public_6f64afc
#define public_6f64be3 _public_6f64be3
#define public_6f64c5b _public_6f64c5b
#define public_6f64e61 _public_6f64e61
#define public_6f64e85 _public_6f64e85
#define public_6f64eee _public_6f64eee
#define public_6f64f0f _public_6f64f0f
#define public_6f64f51 _public_6f64f51
#define public_6f64f78 _public_6f64f78
#define public_6f64f9f _public_6f64f9f

PROC_DECLARE(0x6f64800, internal_6f64800, public_6f64800);
extern "C" NAKED register_t __cdecl internal_6f64800()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafbb3 @0x6f64802*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafbb3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x9C
        mov al, byte ptr ss : [esp+7]
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        push edi
        mov byte ptr ss : [esp+0x48], al
        mov dword ptr ss : [esp+0x4C], ebp
        mov dword ptr ss : [esp+0x50], ebp
        mov dword ptr ss : [esp+0x54], ebp
        mov cl, byte ptr ss : [esp+0x17]
        mov dword ptr ss : [esp+0xB4], ebp
        mov byte ptr ss : [esp+0x58], cl
        mov dword ptr ss : [esp+0x5C], ebp
        mov dword ptr ss : [esp+0x60], ebp
        mov dword ptr ss : [esp+0x64], ebp
        cmp dword ptr ss : [esp+0xC4], ebp
        mov byte ptr ss : [esp+0xB4], 1
        je public_6f64873
        lea edx, ss:[esp+0xC4]
        push edx
        push ebp
        lea ecx, ss:[esp+0x60]
        call public_6eb5770
        public_6f64873 : nop
        mov ecx, dword ptr ss : [esp+0xC0]
        call public_6f78ee0
        mov esi, dword ptr ss : [esp+0xBC]
        mov ebx, eax
        mov edi, dword ptr ds : [ebx+4]
        cmp edi, dword ptr ds : [ebx+8]
        je public_6f648ea
        public_6f64890 : nop
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx+0x10]
        cmp eax, ebp
        je public_6f648e0
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi+0xC]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f648e0
        mov ecx, dword ptr ds : [ecx+0x10]
        lea eax, ss:[esp+0x38]
        push eax
        call public_6eb70f0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x24], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x28], edx
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+0x50]
        lea ecx, ss:[esp+0x24]
        push ecx
        push edx
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], 0x451C4000
        call public_6f695a0
        public_6f648e0 : nop
        mov eax, dword ptr ds : [ebx+8]
        add edi, 4
        cmp edi, eax
        jne public_6f64890
        public_6f648ea : nop
        mov edi, dword ptr ds : [esi+0x50]
        mov eax, dword ptr ds : [esi+0x54]
        cmp edi, eax
        je public_6f6490d
        public_6f648f4 : nop
        mov eax, dword ptr ss : [esp+0x50]
        push edi
        push eax
        lea ecx, ss:[esp+0x50]
        call public_6f695a0
        mov eax, dword ptr ds : [esi+0x54]
        add edi, 0x10
        cmp edi, eax
        jne public_6f648f4
        public_6f6490d : nop
        mov ecx, dword ptr ss : [esp+0xD0]
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+0x104]
        cmp dword ptr ds : [eax+8], 3
        jne public_6f64a80
        mov ecx, dword ptr ss : [esp+0xC4]
        call public_6fa8130
        mov ebp, eax
        mov al, byte ptr ds : [esi]
        lea ebx, ds:[esi+0x34]
        mov edx, ebx
        test al, al
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ss : [esp+0x50]
        lea eax, ss:[esp+0x24]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x34], edx
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x38], 0x43480000
        jne public_6f64978
        mov dword ptr ss : [esp+0x38], 0x451C4000
        public_6f64978 : nop
        call public_6f695a0
        mov dl, byte ptr ss : [esp+0x17]
        xor edi, edi
        mov byte ptr ss : [esp+0x38], dl
        mov dword ptr ss : [esp+0x3C], edi
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ss : [esp+0x44], edi
        mov ecx, dword ptr ss : [esp+0xC4]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x38]
        push eax
        push edx
        mov ecx, ebp
        mov byte ptr ss : [esp+0xBC], 2
        call public_6f37ea0
        mov esi, dword ptr ss : [esp+0x3C]
        cmp esi, edi
        je public_6f649c2
        mov edi, dword ptr ss : [esp+0x40]
        sub edi, esi
        sar edi, 3
        public_6f649c2 : nop
        call dword ptr ds : [public_6fb3370]
        imul eax, edi
        mov ecx, dword ptr ss : [esp+0xC0]
        cdq 
        push ecx
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        lea esi, ds:[esi+eax*8]
        mov eax, dword ptr ss : [ebp+0x18]
        mov ebp, dword ptr ss : [esp+0xD0]
        lea edi, ss:[ebp+0x34]
        push edi
        lea edx, ss:[esp+0x74]
        push edx
        lea ecx, ss:[esp+0x84]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ecx+ecx*2]
        lea ecx, ds:[eax+edx*4]
        push ecx
        mov ecx, dword ptr ds : [esi]
        lea edx, ds:[ecx+ecx*2]
        mov ecx, dword ptr ss : [esp+0xDC]
        lea eax, ds:[eax+edx*4]
        push eax
        fld qword ptr ds : [ecx]
        push ebx
        push ecx
        lea edx, ss:[esp+0x78]
        lea eax, ss:[esp+0x68]
        fstp dword ptr ss : [esp]
        push edx
        push 0
        push 0
        push eax
        call public_6f61800
        mov bl, al
        add esp, 0x30
        test bl, bl
        je public_6f64a53
        cmp dword ptr ds : [edi], 1
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0x28], ecx
        jne public_6f64a4e
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [ebp+0x30], edx
        jmp public_6f64a53
        public_6f64a4e : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [ebp+0x30], eax
        public_6f64a53 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x3C]
        push ecx
        push edx
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0xBC], 1
        call public_6ea1490
        mov eax, dword ptr ss : [esp+0x3C]
        push eax
        call public_6fa8fe0
        add esp, 4
        jmp public_6f64c5b
        public_6f64a80 : nop
        cmp byte ptr ds : [esi], 0
        je public_6f64afc
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+0x34]
        mov ecx, eax
        mov ebx, dword ptr ds : [ecx]
        fmul dword ptr ds : [public_6fb4448]
        mov ebp, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [ecx+8]
        fmul qword ptr ds : [public_6fbbc80]
        mov edx, eax
        mov edi, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        fadd qword ptr ds : [public_6fbbc78]
        mov dword ptr ss : [esp+0x28], ecx
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x38], ecx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x3C], edx
        mov edx, dword ptr ss : [esp+0x50]
        push ecx
        push edx
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x4C], 0x42C80000
        call public_6f695a0
        jmp public_6f64be3
        public_6f64afc : nop
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        push 0x40A00000
        lea edi, ds:[esi+0x40]
        fmul dword ptr ds : [public_6fb4448]
        lea eax, ss:[esp+0x28]
        push edi
        push eax
        fmul qword ptr ds : [public_6fbbc70]
        fadd qword ptr ds : [public_6fbbc68]
        fstp dword ptr ss : [esp+0x1C]
        call public_6f60760
        lea ecx, ss:[esp+0x30]
        push ecx
        add esi, 0x34
        lea edx, ss:[esp+0x48]
        push esi
        push edx
        call public_6f0bb80
        fld dword ptr ds : [edi+8]
        fmul dword ptr ds : [public_6fbbc5c]
        mov eax, dword ptr ss : [esp+0x58]
        mov ebx, dword ptr ss : [esp+0x50]
        mov ebp, dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x14]
        add esp, 0xC
        fld dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x30]
        fmul dword ptr ds : [public_6fbbc5c]
        mov dword ptr ss : [esp+0x2C], eax
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edi]
        fmul dword ptr ds : [public_6fbbc5c]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x3C]
        push esi
        push edx
        call public_6f0bb80
        mov eax, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x4C]
        add esp, 0xC
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x38], edx
        lea edx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ss : [esp+0x54]
        push 1
        mov dword ptr ss : [esp+0x48], ecx
        push eax
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x50], 0x451C4000
        call public_6f69d50
        mov esi, dword ptr ss : [esp+0x20]
        public_6f64be3 : nop
        mov ecx, dword ptr ss : [esp+0xC0]
        push ecx
        lea edx, ss:[esp+0x70]
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        lea eax, ss:[esp+0x80]
        push eax
        mov eax, dword ptr ss : [esp+0x38]
        push 0x43FA0000
        push 0x44FA0000
        sub esp, 0xC
        mov ecx, esp
        mov dword ptr ds : [ecx], edi
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0xE8]
        fld qword ptr ds : [eax]
        push ecx
        sub esp, 0xC
        mov edx, esp
        mov dword ptr ds : [edx], ebx
        push ecx
        mov dword ptr ds : [edx+4], ebp
        mov dword ptr ds : [edx+8], esi
        fstp dword ptr ss : [esp]
        lea ecx, ss:[esp+0x8C]
        push ecx
        push 0
        lea edx, ss:[esp+0x84]
        push 0
        push edx
        call public_6f61cb0
        mov ebp, dword ptr ss : [esp+0x110]
        add esp, 0x44
        mov bl, al
        public_6f64c5b : nop
        test bl, bl
        je public_6f64f78
        mov edx, dword ptr ss : [esp+0x7C]
        mov esi, dword ptr ss : [esp+0xD0]
        lea eax, ss:[ebp+0x10]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x78]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x80]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ss : [esp+0x6C]
        mov edx, dword ptr ss : [esp+0x70]
        mov dword ptr ss : [ebp], 7
        add ebp, 0x1C
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], ecx
        mov ecx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ecx]
        add ecx, 0xBC
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [esp+0x7C]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ss : [esp+0x80]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea edx, ss:[esp+0x7C]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        call public_6eeaee0
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        add esp, 0xC
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6fb5810]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_6fb444c]
        fld dword ptr ss : [esp+0x18]
        fsubr st, st(1)
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_6fb444c]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_6fb444c]
        fsubp 
        fld dword ptr ss : [esp+0x20]
        fsub st, st(3)
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6fb5810]
        fstp dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x2C]
        fstp st(0)
        lea ecx, ss:[esp+0x38]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x24]
        fsubp 
        fst dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x18]
        fsubp 
        fst dword ptr ss : [esp+0x84]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x20]
        fsubp 
        fst dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x40]
        call public_6f0bb50
        fdivr dword ptr ds : [public_6fb5810]
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x88], ecx
        mov dword ptr ss : [esp+0xA0], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x9C], eax
        mov dword ptr ss : [esp+0x94], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x90], edx
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x84]
        fmul st, st(2)
        fld dword ptr ss : [esp+0x68]
        fmul st, st(3)
        fstp dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0xA4], ecx
        fxch 
        mov ecx, dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x8C]
        mov dword ptr ss : [esp+0xA8], ecx
        mov ecx, dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x98]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        fstp st(0)
        je public_6f64e85
        public_6f64e61 : nop
        mov edx, dword ptr ss : [esp+0xD0]
        lea edi, ds:[eax+0x98]
        mov eax, dword ptr ds : [eax]
        mov ecx, 9
        lea esi, ss:[esp+0x88]
        rep movsd
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f64e61
        mov esi, edx
        public_6f64e85 : nop
        xor edi, edi
        mov dword ptr ss : [esp+0x34], edi
        lea eax, ss:[esp+0x34]
        push eax
        push 5
        mov byte ptr ss : [esp+0xBC], 3
        call public_6f24870
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [ecx+0x114], 1
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+0x104]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        cmp ecx, 3
        push edi
        push edi
        push edi
        push 0xBF800000
        jne public_6f64eee
        mov ecx, dword ptr ss : [esp+0x44]
        push 0x43FA0000
        lea edx, ss:[esp+0x80]
        push edx
        call public_6f26460
        mov eax, dword ptr ss : [esp+0x34]
        mov byte ptr ds : [eax+0x164], 1
        jmp public_6f64f0f
        public_6f64eee : nop
        push 0x42C80000
        lea ecx, ss:[esp+0x80]
        push ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        call public_6f26460
        mov edx, dword ptr ss : [esp+0x34]
        mov byte ptr ds : [edx+0x164], 1
        public_6f64f0f : nop
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ds : [eax]
        add ecx, 0x68
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x70]
        push eax
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x34]
        cmp ecx, edi
        mov byte ptr ss : [esp+0xB4], 1
        je public_6f64f51
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_6f64f51 : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x50]
        push edx
        mov dword ptr ss : [esp+0x64], edi
        mov dword ptr ss : [esp+0x68], edi
        mov dword ptr ss : [esp+0x6C], edi
        call public_6fa8fe0
        add esp, 8
        mov al, 1
        jmp public_6f64f9f
        public_6f64f78 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x50]
        xor eax, eax
        push ecx
        mov dword ptr ss : [esp+0x64], eax
        mov dword ptr ss : [esp+0x68], eax
        mov dword ptr ss : [esp+0x6C], eax
        call public_6fa8fe0
        add esp, 8
        xor al, al
        public_6f64f9f : nop
        mov ecx, dword ptr ss : [esp+0xAC]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xA8
        ret 
        UNREACHABLE_TRAP(0x6f64800)
    }
}

#undef public_6f64873
#undef public_6f64890
#undef public_6f648e0
#undef public_6f648ea
#undef public_6f648f4
#undef public_6f6490d
#undef public_6f64978
#undef public_6f649c2
#undef public_6f64a4e
#undef public_6f64a53
#undef public_6f64a80
#undef public_6f64afc
#undef public_6f64be3
#undef public_6f64c5b
#undef public_6f64e61
#undef public_6f64e85
#undef public_6f64eee
#undef public_6f64f0f
#undef public_6f64f51
#undef public_6f64f78
#undef public_6f64f9f
