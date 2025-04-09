#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_4145d0);
CLANG_FORWARD_PROC_SYMBOL(public_415860);
CLANG_FORWARD_PROC_SYMBOL(public_41bd10);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_445dc0);
CLANG_FORWARD_PROC_SYMBOL(public_4ebde0);
CLANG_FORWARD_PROC_SYMBOL(public_4ecfd0);
CLANG_FORWARD_PROC_SYMBOL(public_4ee260);
CLANG_FORWARD_PROC_SYMBOL(public_4ef030);
CLANG_FORWARD_PROC_SYMBOL(public_4f0620);
CLANG_FORWARD_PROC_SYMBOL(public_4f0900);
CLANG_FORWARD_PROC_SYMBOL(public_4f2910);
CLANG_FORWARD_PROC_SYMBOL(public_4f2a80);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_58a5d0);
CLANG_FORWARD_PROC_SYMBOL(public_58a5e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf045);

#define public_4ee33b _public_4ee33b
#define public_4ee386 _public_4ee386
#define public_4ee3d6 _public_4ee3d6
#define public_4ee3de _public_4ee3de
#define public_4ee4e4 _public_4ee4e4
#define public_4ee4ef _public_4ee4ef
#define public_4ee4f5 _public_4ee4f5
#define public_4ee607 _public_4ee607
#define public_4ee615 _public_4ee615
#define public_4ee633 _public_4ee633
#define public_4ee643 _public_4ee643
#define public_4ee645 _public_4ee645
#define public_4ee66e _public_4ee66e
#define public_4ee697 _public_4ee697
#define public_4ee8cf _public_4ee8cf
#define public_4ee8dd _public_4ee8dd
#define public_4ee926 _public_4ee926
#define public_4ee97a _public_4ee97a
#define public_4ee99b _public_4ee99b
#define public_4ee9c5 _public_4ee9c5
#define public_4eea00 _public_4eea00
#define public_4eea24 _public_4eea24
#define public_4eea2b _public_4eea2b
#define public_4eea4e _public_4eea4e
#define public_4eea90 _public_4eea90
#define public_4eeaa6 _public_4eeaa6
#define public_4eeace _public_4eeace
#define public_4eeae2 _public_4eeae2
#define public_4eebb3 _public_4eebb3
#define public_4eebe1 _public_4eebe1
#define public_4eecb5 _public_4eecb5
#define public_4eecbd _public_4eecbd
#define public_4eed06 _public_4eed06
#define public_4eed0e _public_4eed0e
#define public_4eed20 _public_4eed20
#define public_4eed71 _public_4eed71
#define public_4eed79 _public_4eed79
#define public_4eedc2 _public_4eedc2
#define public_4eedca _public_4eedca
#define public_4eedd9 _public_4eedd9
#define public_4eedef _public_4eedef

PROC_DECLARE(0x4ee260, internal_4ee260, public_4ee260);
extern "C" NAKED register_t __cdecl internal_4ee260()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf045 @0x4ee262*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf045
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x418
        push ebx
        push ebp
        push esi
        push edi
        push 0
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x40C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        xor bl, bl
/*FIXUP push offset public_67dbf8 @0x4ee297*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        mov dword ptr ds : [public_674b74], 0
        mov byte ptr ss : [esp+0x17], bl
        call public_422950
        add esp, 4
        mov byte ptr ss : [esp+0x12], bl
        mov byte ptr ss : [esp+0x11], bl
        call public_54baf0
        mov ecx, dword ptr ds : [esi+0x368]
        test ecx, ecx
        je public_4eedd9
        test eax, eax
        je public_4eedd9
        add eax, 0xC
        xor ebp, ebp
        cmp eax, ebp
        je public_4eedef
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x30], eax
        je public_4eedef
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_4eedef
        mov ecx, eax
        call dword ptr ds : [public_5c6348]
        mov edi, eax
        cmp edi, ebp
        mov dword ptr ss : [esp+0x4C], ebp
        je public_4ee4e4
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        cmp dword ptr ds : [esi+0x930], eax
        mov dword ptr ss : [esp+0x4C], eax
        je public_4ee33b
        mov dword ptr ds : [esi+0x934], ebp
        mov dword ptr ds : [esi+0x930], eax
        public_4ee33b : nop
        mov al, byte ptr ds : [esi+0x3AF]
        test al, al
        je public_4ee386
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax]
        mov ecx, eax
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [esi+0x390]
        fnstsw ax
        test ah, 0x44
        jp public_4ee386
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [esi+0x394]
        fnstsw ax
        test ah, 0x44
        jp public_4ee386
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [esi+0x398]
        fnstsw ax
        test ah, 0x44
        jp public_4ee386
        mov bl, 1
        mov byte ptr ss : [esp+0x12], bl
        mov byte ptr ss : [esp+0x11], bl
        public_4ee386 : nop
        mov al, byte ptr ds : [esi+0x3E3]
        test al, al
        je public_4ee3d6
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        mov ecx, eax
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [esi+0x3C4]
        fnstsw ax
        test ah, 0x44
        jp public_4ee3d6
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [esi+0x3C8]
        fnstsw ax
        test ah, 0x44
        jp public_4ee3d6
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [esi+0x3CC]
        fnstsw ax
        test ah, 0x44
        jp public_4ee3d6
        mov byte ptr ss : [esp+0x13], 1
        mov byte ptr ss : [esp+0x12], 1
        mov byte ptr ss : [esp+0x11], 1
        public_4ee3d6 : nop
        test bl, bl
        jne public_4ee4f5
        public_4ee3de : nop
        mov al, byte ptr ds : [esi+0x3AF]
        test al, al
        je public_4ee4f5
        mov al, byte ptr ds : [esi+0x3AD]
        test al, al
        mov ecx, esi
        lea eax, ds:[esi+0x380]
        je public_4ee4ef
        push 0
/*FIXUP push offset public_679b80 @0x4ee404*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679b80
        push eax
        call public_4ebde0
        fld dword ptr ds : [esi+0x388]
        fld dword ptr ds : [esi+0x3A0]
        mov edi, dword ptr ds : [esi+0x40C]
        fmul qword ptr ds : [public_5d9618]
        fsubp 
        fld dword ptr ds : [esi+0x384]
        fsub dword ptr ds : [public_67dc60]
        fld dword ptr ds : [public_67dc9c]
        fdiv dword ptr ds : [public_67dc70]
        fmulp 
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x20], ecx
        fsub dword ptr ds : [public_67dc64]
        mov ecx, edi
        fld dword ptr ds : [public_67dc9c]
        fdiv dword ptr ds : [public_67dc74]
        fmulp 
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [public_67dc9c]
        mov dword ptr ss : [esp+0x24], edx
        fchs 
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x28], eax
        fdivr qword ptr ds : [public_5d5060]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x28]
        call public_58a5d0
        lea ecx, ds:[esi+0x7DC]
        push ecx
        mov ecx, edi
        mov ebp, eax
        call public_58a5e0
        mov edx, dword ptr ds : [edi]
        push 0
        lea eax, ss:[esp+0x24]
        push eax
        push 5
        mov ecx, edi
        call dword ptr ds : [edx+0xA8]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x34]
        push ebp
        mov ecx, edi
        call public_58a5e0
        jmp public_4ee4f5
        public_4ee4e4 : nop
        mov dword ptr ds : [esi+0x930], ebp
        jmp public_4ee3de
        public_4ee4ef : nop
        push eax
        call public_4f0620
        public_4ee4f5 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_4ee615
        mov al, byte ptr ds : [esi+0x3E3]
        test al, al
        je public_4ee615
        mov al, byte ptr ds : [esi+0x3E1]
        test al, al
        je public_4ee607
        push 1
/*FIXUP push offset public_679b80 @0x4ee51f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679b80
        lea ecx, ds:[esi+0x3B4]
        push ecx
        mov ecx, esi
        call public_4ebde0
        fld dword ptr ds : [esi+0x3BC]
        fld dword ptr ds : [esi+0x3D4]
        mov edi, dword ptr ds : [esi+0x40C]
        fmul qword ptr ds : [public_5d9618]
        fsubp 
        fld dword ptr ds : [esi+0x3B8]
        fsub dword ptr ds : [public_67dc60]
        fld dword ptr ds : [public_67dc9c]
        fdiv dword ptr ds : [public_67dc70]
        fmulp 
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x20], edx
        fsub dword ptr ds : [public_67dc64]
        fld dword ptr ds : [public_67dc9c]
        fdiv dword ptr ds : [public_67dc74]
        fmulp 
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [public_67dc9c]
        mov dword ptr ss : [esp+0x24], eax
        fchs 
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x28], ecx
        fdivr qword ptr ds : [public_5d5060]
        mov ecx, edi
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x28]
        call public_58a5d0
        lea edx, ds:[esi+0x810]
        push edx
        mov ecx, edi
        mov ebp, eax
        call public_58a5e0
        mov eax, dword ptr ds : [edi]
        push 0
        lea ecx, ss:[esp+0x24]
        push ecx
        push 5
        mov ecx, edi
        call dword ptr ds : [eax+0xA8]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x34]
        push ebp
        mov ecx, edi
        call public_58a5e0
        jmp public_4ee615
        public_4ee607 : nop
        lea eax, ds:[esi+0x3B4]
        push eax
        mov ecx, esi
        call public_4f0620
        public_4ee615 : nop
        mov eax, dword ptr ds : [esi+0x36C]
        mov edx, dword ptr ds : [eax+0x800]
        xor ecx, ecx
        test edx, edx
        mov dword ptr ss : [esp+0x2C], ecx
        jle public_4eeace
        mov dword ptr ss : [esp+0x44], ecx
        public_4ee633 : nop
        mov eax, dword ptr ds : [eax+ecx*8]
        test eax, eax
        mov ebx, dword ptr ss : [esp+0x4C]
        je public_4ee643
        lea edi, ds:[eax-8]
        jmp public_4ee645
        public_4ee643 : nop
        xor edi, edi
        public_4ee645 : nop
        mov ebp, dword ptr ds : [esi+0x374]
        mov ecx, dword ptr ss : [esp+0x44]
        add ebp, ecx
        test edi, edi
        je public_4eeaa6
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        cmp eax, ebx
        sete al
        test al, al
        je public_4ee66e
        mov byte ptr ss : [esp+0x12], 1
        public_4ee66e : nop
        mov cl, byte ptr ss : [ebp+0x2D]
        test cl, cl
        je public_4eea90
        test al, al
        je public_4ee697
        mov al, byte ptr ss : [esp+0x11]
        test al, al
        jne public_4eeaa6
        push ebp
        push edi
        mov ecx, esi
        call public_4ef030
        jmp public_4eeaa6
        public_4ee697 : nop
        mov al, byte ptr ss : [ebp+0x2E]
        test al, al
        je public_4eeaa6
        fld dword ptr ss : [ebp+0x28]
        fcomp dword ptr ds : [public_5d95a8]
        fnstsw ax
        test ah, 5
        jp public_4eeaa6
        fld dword ptr ss : [ebp+8]
        fsub dword ptr ss : [ebp+0x20]
        fsub dword ptr ds : [public_5d55b4]
        fld dword ptr ss : [ebp+4]
        fsub dword ptr ds : [public_67dc60]
        fld dword ptr ds : [public_67dc9c]
        fdiv dword ptr ds : [public_67dc70]
        fmulp 
        fstp dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x14], eax
        fsub dword ptr ds : [public_67dc64]
        mov eax, dword ptr ds : [edi]
        fld dword ptr ds : [public_67dc9c]
        fdiv dword ptr ds : [public_67dc74]
        fmulp 
        fstp dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [public_67dc9c]
        mov dword ptr ss : [esp+0x18], ecx
        fchs 
        mov ecx, edi
        fstp dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x1C], edx
        fdivr qword ptr ds : [public_5d5060]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        call dword ptr ds : [eax+0x150]
        mov ebx, eax
        test ebx, ebx
        je public_4eeaa6
        mov ecx, dword ptr ds : [ebx+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_4eeaa6
        mov edx, dword ptr ds : [ebx+0xB0]
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x4C]
        lea edi, ds:[esi+0x8FC]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x3C], edx
        call public_432240
        mov eax, dword ptr ds : [esi+0x900]
        cmp dword ptr ss : [esp+0x48], eax
        jne public_4eea4e
        lea ecx, ss:[esp+0xA4]
        call public_4144b0
        mov edx, dword ptr ss : [esp+0x34]
        xor ebp, ebp
        push eax
        lea ecx, ss:[esp+0xEC]
        mov dword ptr ss : [esp+0x434], ebp
        mov dword ptr ss : [esp+0xE8], edx
        call public_4f2910
        lea eax, ss:[esp+0xE4]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x438], 1
        call public_4f2a80
        lea edx, ss:[esp+0xE8]
        mov dword ptr ss : [esp+0x88], edx
        lea ecx, ss:[esp+0xE8]
        mov byte ptr ss : [esp+0x430], 3
        call public_4144f0
        lea ecx, ss:[esp+0xF4]
        mov byte ptr ss : [esp+0x430], 2
        call public_445d70
        lea ecx, ss:[esp+0xE8]
        call public_444e20
        lea ecx, ss:[esp+0xA4]
        mov dword ptr ss : [esp+0x430], 5
        call public_4144f0
        mov eax, dword ptr ss : [esp+0xB8]
        mov ecx, dword ptr ss : [esp+0xB4]
        push eax
        push ecx
        lea ecx, ss:[esp+0xB8]
        mov byte ptr ss : [esp+0x438], 4
        call public_445dc0
        mov edx, dword ptr ss : [esp+0xB4]
        push edx
        call public_5b7e1d
        add esp, 4
        lea ecx, ss:[esp+0xA4]
        mov dword ptr ss : [esp+0xB4], ebp
        mov dword ptr ss : [esp+0xB8], ebp
        mov dword ptr ss : [esp+0xBC], ebp
        mov dword ptr ss : [esp+0x430], 0xFFFFFFFF
        call public_444e20
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x88]
        push ecx
        mov ecx, edi
        call public_41bd10
        mov edi, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x84]
        cmp eax, edi
        je public_4ee8cf
        mov edx, dword ptr ss : [esp+0x34]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_4ee8cf
        lea eax, ss:[esp+0x84]
        jmp public_4ee8dd
        public_4ee8cf : nop
        mov dword ptr ss : [esp+0x94], edi
        lea eax, ss:[esp+0x94]
        public_4ee8dd : nop
        mov eax, dword ptr ds : [eax]
        xor ebp, ebp
        push ebp
        lea ecx, ss:[esp+0x94]
        mov dword ptr ss : [esp+0x4C], eax
        lea edi, ds:[eax+0x10]
        mov eax, dword ptr ds : [ebx+0x104]
        push ecx
        lea edx, ss:[esp+0x90]
        push edx
        mov dword ptr ss : [esp+0x94], eax
        call dword ptr ds : [public_5c6320]
        add esp, 0xC
        test eax, eax
        jne public_4ee926
        mov eax, dword ptr ss : [esp+0x90]
        push eax
        call dword ptr ds : [public_5c64e8]
        add esp, 4
        mov ebp, eax
        public_4ee926 : nop
        test ebp, ebp
        mov word ptr ss : [esp+0x228], 0
        je public_4ee9c5
        cmp ebp, 0xFFFFFFFF
        je public_4ee9c5
        cmp ebp, 0x30386
        je public_4ee9c5
        cmp ebp, 0x303B8
        je public_4ee9c5
        mov edx, dword ptr ds : [public_67eca8]
        push 0x80
        lea ecx, ss:[esp+0x12C]
        push ecx
        push ebp
        push edx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_4ee97a
        mov word ptr ss : [esp+0x128], ax
        public_4ee97a : nop
        lea eax, ss:[esp+0x128]
        push eax
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        cmp eax, 1
        ja public_4ee99b
        cmp word ptr ss : [esp+0x128], 0x20
        je public_4ee9c5
        public_4ee99b : nop
        mov ebp, dword ptr ds : [public_5c70ac]
        lea ecx, ss:[esp+0x128]
        push ecx
        lea edx, ss:[esp+0x22C]
        push edx
        call ebp
        lea eax, ss:[esp+0x230]
/*FIXUP push offset public_5d01f4 @0x4ee9ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01f4
        push eax
        call ebp
        add esp, 0x10
        public_4ee9c5 : nop
        mov ecx, ebx
        call dword ptr ds : [public_5c644c]
        push eax
        lea ecx, ss:[esp+0x22C]
        push ecx
        call dword ptr ds : [public_5c70ac]
        mov eax, dword ptr ds : [esi+0x8F8]
        mov ecx, dword ptr ds : [edi+0x1C]
        mov edx, dword ptr ds : [public_5d8f0c]
        add esp, 8
        cmp ecx, eax
        mov dword ptr ss : [esp+0x8C], edx
        je public_4eea2b
        mov dword ptr ds : [edi+0x1C], eax
        xor ebp, ebp
        mov edi, edi
        public_4eea00 : nop
        mov ecx, dword ptr ds : [edi+0x10]
        test ecx, ecx
        je public_4eea24
        mov eax, dword ptr ds : [edi+0x14]
        sub eax, ecx
        sar eax, 3
        cmp ebp, eax
        jae public_4eea24
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+ebp*8]
        mov eax, dword ptr ds : [edi+0x1C]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        inc ebp
        jmp public_4eea00
        public_4eea24 : nop
        mov dword ptr ds : [edi+0x28], 0
        public_4eea2b : nop
        mov ecx, dword ptr ss : [esp+0x8C]
        push 0xBF800000
        push ecx
        mov ecx, edi
        call public_4145d0
        lea edx, ss:[esp+0x228]
        push edx
        mov ecx, edi
        call public_415860
        public_4eea4e : nop
        mov edi, dword ptr ds : [esi+0x40C]
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, edi
        lea ebp, ds:[eax+0x10]
        call public_58a5d0
        push ebp
        mov ecx, edi
        mov ebx, eax
        call public_58a5e0
        mov edx, dword ptr ds : [edi]
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        push 5
        mov ecx, edi
        call dword ptr ds : [edx+0xA8]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x34]
        push ebx
        mov ecx, edi
        call public_58a5e0
        jmp public_4eeaa6
        public_4eea90 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        cmp eax, ebx
        sete cl
        push ecx
        push ebp
        push edi
        mov ecx, esi
        call public_4f0900
        public_4eeaa6 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ds : [esi+0x36C]
        mov edx, dword ptr ds : [eax+0x800]
        inc ecx
        add edi, 0x34
        cmp ecx, edx
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x44], edi
        jl public_4ee633
        public_4eeace : nop
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_4eeae2
        mov al, byte ptr ss : [esp+0x11]
        test al, al
        je public_4eedd9
        public_4eeae2 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        call dword ptr ds : [public_5c6348]
        mov edi, eax
        xor ebx, ebx
        cmp edi, ebx
        je public_4eedd9
        mov eax, ebx
        mov ecx, ebx
        mov edx, ebx
        mov dword ptr ss : [esp+0x54], eax
        mov dword ptr ss : [esp+0x60], eax
        lea eax, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x58], ecx
        mov dword ptr ss : [esp+0x5C], edx
        mov dword ptr ss : [esp+0x64], ecx
        mov dword ptr ss : [esp+0x68], edx
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x70], ebx
        mov dword ptr ss : [esp+0x74], ebx
        mov byte ptr ss : [esp+0x78], bl
        mov dword ptr ss : [esp+0x7C], ebx
        mov byte ptr ss : [esp+0x80], bl
        mov byte ptr ss : [esp+0x81], bl
        mov byte ptr ss : [esp+0x82], bl
        mov byte ptr ss : [esp+0x83], 1
        mov byte ptr ss : [esp+0x84], bl
        mov byte ptr ss : [esp+0x85], bl
        call dword ptr ds : [edx+0x88]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x60], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x64], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x68], eax
        test dword ptr ss : [esp+0x50], 0x107FFDFF
        je public_4eebb3
        mov edx, dword ptr ds : [edi]
        push ebx
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        push eax
        call public_5416c0
        add esp, 8
        cmp eax, ebx
        je public_4eebb3
        mov al, byte ptr ds : [eax+0xA8]
        mov byte ptr ss : [esp+0x7C], al
        public_4eebb3 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x150]
        cmp eax, ebx
        je public_4eebe1
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_4eebe1
        mov cl, byte ptr ds : [eax+0x2BD]
        test cl, cl
        je public_4eebe1
        mov byte ptr ss : [esp+0x7E], 1
        public_4eebe1 : nop
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0xD8]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x150]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x11C]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x64]
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0xA0]
        push ecx
        fstp dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        lea eax, ss:[esp+0xE8]
        push eax
        mov ecx, esi
        call public_4ecfd0
        test al, al
        je public_4eed20
        mov eax, dword ptr ss : [esp+0xA0]
        mov ecx, dword ptr ss : [esp+0x98]
        mov edx, dword ptr ss : [esp+0x9C]
        mov dword ptr ss : [esp+0x5C], eax
        mov al, byte ptr ds : [esi+0x3E3]
        test al, al
        mov dword ptr ss : [esp+0x54], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x58], edx
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x70], ecx
        mov dword ptr ss : [esp+0x78], edx
        je public_4eecb5
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax]
        mov ecx, eax
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [esi+0x3C4]
        fnstsw ax
        test ah, 0x44
        jp public_4eecb5
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [esi+0x3C8]
        fnstsw ax
        test ah, 0x44
        jp public_4eecb5
        fld dword ptr ds : [ecx+8]
        mov byte ptr ss : [esp+0x80], 1
        fcomp dword ptr ds : [esi+0x3CC]
        fnstsw ax
        test ah, 0x44
        jnp public_4eecbd
        public_4eecb5 : nop
        mov byte ptr ss : [esp+0x80], 0
        public_4eecbd : nop
        mov al, byte ptr ds : [esi+0x3AF]
        test al, al
        je public_4eed06
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        mov ecx, eax
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [esi+0x390]
        fnstsw ax
        test ah, 0x44
        jp public_4eed06
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [esi+0x394]
        fnstsw ax
        test ah, 0x44
        jp public_4eed06
        fld dword ptr ds : [ecx+8]
        mov byte ptr ss : [esp+0x81], 1
        fcomp dword ptr ds : [esi+0x398]
        fnstsw ax
        test ah, 0x44
        jnp public_4eed0e
        public_4eed06 : nop
        mov byte ptr ss : [esp+0x81], 0
        public_4eed0e : nop
        lea eax, ss:[esp+0x50]
        push eax
        push edi
        mov ecx, esi
        call public_4ef030
        jmp public_4eedd9
        public_4eed20 : nop
        mov al, byte ptr ds : [esi+0x3E3]
        test al, al
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x78], ecx
        je public_4eed71
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        mov ecx, eax
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [esi+0x3C4]
        fnstsw ax
        test ah, 0x44
        jp public_4eed71
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [esi+0x3C8]
        fnstsw ax
        test ah, 0x44
        jp public_4eed71
        fld dword ptr ds : [ecx+8]
        mov byte ptr ss : [esp+0x80], 1
        fcomp dword ptr ds : [esi+0x3CC]
        fnstsw ax
        test ah, 0x44
        jnp public_4eed79
        public_4eed71 : nop
        mov byte ptr ss : [esp+0x80], 0
        public_4eed79 : nop
        mov al, byte ptr ds : [esi+0x3AF]
        test al, al
        je public_4eedc2
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax]
        mov ecx, eax
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [esi+0x390]
        fnstsw ax
        test ah, 0x44
        jp public_4eedc2
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [esi+0x394]
        fnstsw ax
        test ah, 0x44
        jp public_4eedc2
        fld dword ptr ds : [ecx+8]
        mov byte ptr ss : [esp+0x81], 1
        fcomp dword ptr ds : [esi+0x398]
        fnstsw ax
        test ah, 0x44
        jnp public_4eedca
        public_4eedc2 : nop
        mov byte ptr ss : [esp+0x81], 0
        public_4eedca : nop
        push 1
        lea ecx, ss:[esp+0x54]
        push ecx
        push edi
        mov ecx, esi
        call public_4f0900
        public_4eedd9 : nop
        mov esi, dword ptr ds : [esi+0x40C]
        mov edx, dword ptr ds : [esi]
        push 0
        push 1
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        public_4eedef : nop
        mov ecx, dword ptr ss : [esp+0x428]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x424
        ret 
        UNREACHABLE_TRAP(0x4ee260)
    }
}

#undef public_4ee33b
#undef public_4ee386
#undef public_4ee3d6
#undef public_4ee3de
#undef public_4ee4e4
#undef public_4ee4ef
#undef public_4ee4f5
#undef public_4ee607
#undef public_4ee615
#undef public_4ee633
#undef public_4ee643
#undef public_4ee645
#undef public_4ee66e
#undef public_4ee697
#undef public_4ee8cf
#undef public_4ee8dd
#undef public_4ee926
#undef public_4ee97a
#undef public_4ee99b
#undef public_4ee9c5
#undef public_4eea00
#undef public_4eea24
#undef public_4eea2b
#undef public_4eea4e
#undef public_4eea90
#undef public_4eeaa6
#undef public_4eeace
#undef public_4eeae2
#undef public_4eebb3
#undef public_4eebe1
#undef public_4eecb5
#undef public_4eecbd
#undef public_4eed06
#undef public_4eed0e
#undef public_4eed20
#undef public_4eed71
#undef public_4eed79
#undef public_4eedc2
#undef public_4eedca
#undef public_4eedd9
#undef public_4eedef
