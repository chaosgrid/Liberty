#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb15e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb22b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ebf110);
CLANG_FORWARD_PROC_SYMBOL(public_6ebfd20);
CLANG_FORWARD_PROC_SYMBOL(public_6ec02b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec0310);
CLANG_FORWARD_PROC_SYMBOL(public_6ec0d50);
CLANG_FORWARD_PROC_SYMBOL(public_6ec1110);
CLANG_FORWARD_PROC_SYMBOL(public_6ec3860);
CLANG_FORWARD_PROC_SYMBOL(public_6ec3880);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0b60);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c70);

#define public_6ebfdd6 _public_6ebfdd6
#define public_6ebfdfa _public_6ebfdfa
#define public_6ebfe5e _public_6ebfe5e
#define public_6ebfee2 _public_6ebfee2
#define public_6ebff07 _public_6ebff07
#define public_6ebff0c _public_6ebff0c
#define public_6ebff27 _public_6ebff27
#define public_6ebff36 _public_6ebff36
#define public_6ebff40 _public_6ebff40
#define public_6ebff58 _public_6ebff58
#define public_6ebff62 _public_6ebff62
#define public_6ebff87 _public_6ebff87
#define public_6ebffb4 _public_6ebffb4
#define public_6ec005f _public_6ec005f
#define public_6ec0081 _public_6ec0081
#define public_6ec00b0 _public_6ec00b0
#define public_6ec00c8 _public_6ec00c8
#define public_6ec00ce _public_6ec00ce
#define public_6ec00fb _public_6ec00fb
#define public_6ec0112 _public_6ec0112
#define public_6ec0121 _public_6ec0121
#define public_6ec0130 _public_6ec0130
#define public_6ec0142 _public_6ec0142
#define public_6ec014c _public_6ec014c
#define public_6ec0195 _public_6ec0195
#define public_6ec01c4 _public_6ec01c4
#define public_6ec021a _public_6ec021a
#define public_6ec0231 _public_6ec0231
#define public_6ec0241 _public_6ec0241
#define public_6ec0261 _public_6ec0261
#define public_6ec0279 _public_6ec0279

PROC_DECLARE(0x6ebfd20, internal_6ebfd20, public_6ebfd20);
extern "C" NAKED register_t __cdecl internal_6ebfd20()
{
    __asm
    {
        mov eax, 0x20AC
        call public_6ed0c70
        mov eax, dword ptr ss : [esp+0x20B0]
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        push eax
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x68], ebx
        call public_6ec3860
/*FIXUP push offset public_6ed4094 @0x6ebfd45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4094
        xor esi, esi
        or edi, 0xFFFFFFFF
/*FIXUP push offset public_6ed4b64 @0x6ebfd4f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4b64
        lea ecx, ss:[esp+0x90]
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x28], esi
        call public_6eb15e0
        mov eax, dword ptr ss : [esp+0x24]
        lea edx, ss:[esp+0x88]
        push edx
        mov dword ptr ss : [esp+0xBC], edi
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x7C]
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], eax
        je public_6ebfdd6
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        push ecx
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x14]
        push esi
        push esi
        push esi
        push 2
        push esi
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        cmp eax, edi
        mov dword ptr ss : [esp+0x1C], eax
        je public_6ebfdd6
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ecx]
        push esi
        push esi
        push esi
        mov ebp, 4
        push ebp
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        cmp eax, esi
        mov dword ptr ss : [esp+0x20], eax
        jne public_6ebfdfa
        public_6ebfdd6 : nop
        lea ecx, ss:[esp+0x14]
        call public_6ec02b0
        lea ecx, ss:[esp+0x24]
        call public_6ec3880
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFF8
        pop ebx
        add esp, 0x20AC
        ret 0xC
        public_6ebfdfa : nop
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x4C], esi
        mov dword ptr ss : [esp+0x10], esi
        call public_6ec3880
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
/*FIXUP push offset public_6ed4b54 @0x6ebfe15*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4b54
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        je public_6ebfe5e
        mov eax, dword ptr ss : [esp+0x20C4]
        push eax
        lea ecx, ss:[esp+0xC0]
/*FIXUP push offset public_6ed4b24 @0x6ebfe30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4b24
        push ecx
        call public_6eb22b0
        mov edx, dword ptr ds : [public_6ed1004]
        push eax
        push 0x20D
/*FIXUP push offset public_6ed49f0 @0x6ebfe47*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49f0
        mov ecx, 0x100002
/*FIXUP push offset public_6ed49d0 @0x6ebfe51*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49d0
        push ecx
        call dword ptr ds : [edx]
        jmp public_6ec0279
        public_6ebfe5e : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        lea edx, ss:[esp+0x74]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        test eax, eax
        jl public_6ec0241
        cmp dword ptr ss : [esp+0x84], ebp
        jne public_6ec0241
        mov edx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ss : [esp+0x70]
        push edx
        mov dword ptr ss : [esp+0x54], eax
        mov dword ptr ss : [esp+0x58], ecx
        call public_6ed0b60
        mov dword ptr ss : [esp+0x5C], eax
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x40], esi
        mov byte ptr ss : [esp+0x4C], 1
        mov dword ptr ss : [esp+0x30], eax
        mov ecx, dword ptr ds : [eax+8]
        shr ecx, 3
        add esp, 4
        test cl, 1
        je public_6ebfee2
        mov dword ptr ss : [esp+0x30], 1
        mov edx, dword ptr ds : [eax+0x14]
        imul edx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x34], edx
        jmp public_6ebff0c
        public_6ebfee2 : nop
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [esp+0x34], ecx
        mov eax, dword ptr ds : [eax+0x54]
        cmp eax, 0x33545844
        ja public_6ebff40
        je public_6ebff36
        cmp eax, 0x31545844
        je public_6ebff27
        cmp eax, 0x32545844
        jne public_6ebff62
        mov dword ptr ss : [esp+0x30], ebp
        public_6ebff07 : nop
        mov byte ptr ss : [esp+0x48], 0x10
        public_6ebff0c : nop
        mov eax, dword ptr ds : [ebx+0x10]
        mov ebp, dword ptr ss : [esp+0x78]
        xor edi, edi
        cmp eax, esi
        mov dword ptr ss : [esp+0x28], edi
        jne public_6ebff87
        mov ebp, 1
        jmp public_6ebffb4
        public_6ebff27 : nop
        mov dword ptr ss : [esp+0x30], 3
        mov byte ptr ss : [esp+0x48], 8
        jmp public_6ebff0c
        public_6ebff36 : nop
        mov dword ptr ss : [esp+0x30], 5
        jmp public_6ebff07
        public_6ebff40 : nop
        cmp eax, 0x34545844
        je public_6ebff58
        cmp eax, 0x35545844
        jne public_6ebff62
        mov dword ptr ss : [esp+0x30], 7
        jmp public_6ebff07
        public_6ebff58 : nop
        mov dword ptr ss : [esp+0x30], 6
        jmp public_6ebff07
        public_6ebff62 : nop
        mov edx, dword ptr ss : [esp+0x20C4]
        push edx
        lea eax, ss:[esp+0xC0]
/*FIXUP push offset public_6ed4afc @0x6ebff71*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4afc
        push eax
        call public_6eb22b0
        push eax
        push 0x220
        jmp public_6ec0261
        public_6ebff87 : nop
        lea edx, ss:[esp+0x54]
        push edx
        lea eax, ss:[esp+0x54]
        push eax
        push 0xFFFFFFFF
        mov ecx, ebx
        call public_6ec1110
        mov edi, eax
        sub ebp, edi
        cmp ebp, esi
        mov dword ptr ss : [esp+0x28], edi
        jg public_6ebffb4
        lea ecx, ss:[esp+0x10]
        call public_6ec3880
        jmp public_6ec005f
        public_6ebffb4 : nop
        mov eax, dword ptr ss : [esp+0x54]
        lea ecx, ss:[esp+0x60]
        push ecx
        mov ecx, dword ptr ss : [esp+0x54]
        lea edx, ss:[esp+0x6C]
        push edx
        push eax
        push ecx
        mov ecx, ebx
        call public_6ec0d50
        push esi
        call public_6ed0b60
        push esi
        lea edx, ss:[esp+0x64]
        mov dword ptr ss : [esp+0x64], eax
        push edx
        lea eax, ss:[esp+0x64]
        push eax
        call public_6ebf110
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x10
        lea edx, ss:[esp+0x4C]
        push edx
        push esi
        push ebp
        lea edx, ss:[esp+0x68]
        push edx
        mov edx, dword ptr ss : [esp+0x70]
        push edx
        mov edx, dword ptr ss : [esp+0x7C]
        push edx
        push eax
        call dword ptr ds : [ecx+0xB4]
        test eax, eax
        jge public_6ec0081
        mov eax, dword ptr ss : [esp+0x20C4]
        push eax
        lea ecx, ss:[esp+0xC0]
/*FIXUP push offset public_6ed4acc @0x6ec0021*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4acc
        push ecx
        call public_6eb22b0
        mov edx, dword ptr ds : [public_6ed1004]
        push eax
        push 0x24D
/*FIXUP push offset public_6ed49f0 @0x6ec0038*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49f0
        mov ecx, 0x100002
/*FIXUP push offset public_6ed49d0 @0x6ec0042*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49d0
        push ecx
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0x20
        cmp eax, esi
        je public_6ec005f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], esi
        public_6ec005f : nop
        lea ecx, ss:[esp+0x14]
        call public_6ec02b0
        lea ecx, ss:[esp+0x24]
        call public_6ec3880
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x20AC
        ret 0xC
        public_6ec0081 : nop
        test edi, edi
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x34]
        lea edx, ds:[ecx+0x80]
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], edx
        mov esi, dword ptr ds : [ecx+0x10]
        mov dword ptr ss : [esp+0x40], esi
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+0x44], edx
        jle public_6ec00c8
        lea esp, ss:[esp]
        public_6ec00b0 : nop
        lea ecx, ss:[esp+0x2C]
        call public_6ec0310
        dec edi
        jne public_6ec00b0
        mov esi, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x2C]
        public_6ec00c8 : nop
        xor edi, edi
        test ebp, ebp
        jg public_6ec0130
        public_6ec00ce : nop
        mov eax, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x20C8]
        xor ecx, ecx
        test eax, eax
        setne cl
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x10]
        dec ecx
        test eax, eax
        mov esi, ecx
        je public_6ec00fb
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x10], 0
        public_6ec00fb : nop
        lea ecx, ss:[esp+0x14]
        call public_6ec02b0
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        je public_6ec0112
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6ec0112 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20AC
        ret 0xC
        public_6ec0121 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov ebx, dword ptr ss : [esp+0x64]
        lea esp, ss:[esp]
        public_6ec0130 : nop
        cmp dword ptr ss : [esp+0x30], 1
        jne public_6ec0142
        mov eax, dword ptr ds : [ecx+0x58]
        shr eax, 3
        imul eax, esi
        jmp public_6ec014c
        public_6ec0142 : nop
        lea ecx, ds:[esi+3]
        shr ecx, 2
        xor edx, edx
        div ecx
        public_6ec014c : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov ebx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push ebx
        lea ebx, ss:[esp+0x64]
        push ebx
        push eax
        mov eax, dword ptr ss : [esp+0x58]
        push eax
        mov eax, dword ptr ss : [esp+0x64]
        push esi
        push edi
        push eax
        push ecx
        call dword ptr ds : [edx+0xD4]
        test eax, eax
        jl public_6ec01c4
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x38]
        movzx edx, byte ptr ss : [esp+0x48]
        inc edi
        inc eax
        mov dword ptr ss : [esp+0x28], eax
        mov eax, ecx
        shr eax, 2
        cmp eax, edx
        jae public_6ec0195
        mov eax, edx
        public_6ec0195 : nop
        mov esi, dword ptr ss : [esp+0x40]
        mov ebx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x3C]
        shr esi, 1
        shr ebx, 1
        add edx, ecx
        cmp edi, ebp
        mov dword ptr ss : [esp+0x40], esi
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x3C], edx
        mov dword ptr ss : [esp+0x38], eax
        jl public_6ec0121
        jmp public_6ec00ce
        public_6ec01c4 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x20C4]
        push ecx
        push edx
        lea eax, ss:[esp+0xC4]
/*FIXUP push offset public_6ed4aa0 @0x6ec01d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4aa0
        push eax
        call public_6eb22b0
        push eax
        push 0x25F
/*FIXUP push offset public_6ed49f0 @0x6ec01e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49f0
        mov ecx, 0x100002
/*FIXUP push offset public_6ed49d0 @0x6ec01f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49d0
        push ecx
        mov ecx, dword ptr ds : [public_6ed1004]
        call dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 0x24
        test eax, eax
        je public_6ec021a
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x10], 0
        public_6ec021a : nop
        lea ecx, ss:[esp+0x14]
        call public_6ec02b0
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        je public_6ec0231
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6ec0231 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x20AC
        ret 0xC
        public_6ec0241 : nop
        mov edx, dword ptr ss : [esp+0x20C4]
        push edx
        lea eax, ss:[esp+0xC0]
/*FIXUP push offset public_6ed4a74 @0x6ec0250*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4a74
        push eax
        call public_6eb22b0
        push eax
        push 0x215
/*FIXUP public_6ec0261 : nop
        push offset public_6ed49f0 @0x6ec0261*/
  FIXUP public_6ec0261 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49f0
        mov ecx, 0x100002
/*FIXUP push offset public_6ed49d0 @0x6ec026b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49d0
        push ecx
        mov ecx, dword ptr ds : [public_6ed1004]
        call dword ptr ds : [ecx]
        public_6ec0279 : nop
        lea ecx, ss:[esp+0x30]
        add esp, 0x20
        call public_6ec3880
        lea ecx, ss:[esp+0x14]
        call public_6ec02b0
        lea ecx, ss:[esp+0x24]
        call public_6ec3880
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20AC
        ret 0xC
        UNREACHABLE_TRAP(0x6ebfd20)
    }
}

#undef public_6ebfdd6
#undef public_6ebfdfa
#undef public_6ebfe5e
#undef public_6ebfee2
#undef public_6ebff07
#undef public_6ebff0c
#undef public_6ebff27
#undef public_6ebff36
#undef public_6ebff40
#undef public_6ebff58
#undef public_6ebff62
#undef public_6ebff87
#undef public_6ebffb4
#undef public_6ec005f
#undef public_6ec0081
#undef public_6ec00b0
#undef public_6ec00c8
#undef public_6ec00ce
#undef public_6ec00fb
#undef public_6ec0112
#undef public_6ec0121
#undef public_6ec0130
#undef public_6ec0142
#undef public_6ec014c
#undef public_6ec0195
#undef public_6ec01c4
#undef public_6ec021a
#undef public_6ec0231
#undef public_6ec0241
#undef public_6ec0261
#undef public_6ec0279
