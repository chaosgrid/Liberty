#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222e00);
CLANG_FORWARD_PROC_SYMBOL(public_6222ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6222f30);
CLANG_FORWARD_PROC_SYMBOL(public_6223070);
CLANG_FORWARD_PROC_SYMBOL(public_6228b90);
CLANG_FORWARD_PROC_SYMBOL(public_62291a0);
CLANG_FORWARD_PROC_SYMBOL(public_6229d50);
CLANG_FORWARD_PROC_SYMBOL(public_622a1a0);
CLANG_FORWARD_JUMP_SYMBOL(public_6249204);

#define public_6228c06 _public_6228c06
#define public_6228c1a _public_6228c1a
#define public_6228c24 _public_6228c24
#define public_6228c3d _public_6228c3d
#define public_6228c76 _public_6228c76
#define public_6228c88 _public_6228c88
#define public_6228ce6 _public_6228ce6
#define public_6228d5c _public_6228d5c
#define public_6228d83 _public_6228d83
#define public_6228d95 _public_6228d95
#define public_6228da0 _public_6228da0
#define public_6228dbd _public_6228dbd
#define public_6228dce _public_6228dce
#define public_6228dd5 _public_6228dd5
#define public_6228e03 _public_6228e03
#define public_6228e28 _public_6228e28
#define public_6228e7a _public_6228e7a
#define public_6228e89 _public_6228e89
#define public_6228ebc _public_6228ebc
#define public_6228ece _public_6228ece
#define public_6228eda _public_6228eda
#define public_6228edf _public_6228edf
#define public_6228f2e _public_6228f2e
#define public_6228f5c _public_6228f5c
#define public_6228f85 _public_6228f85
#define public_6228f9f _public_6228f9f
#define public_6228fb9 _public_6228fb9
#define public_6228fd3 _public_6228fd3
#define public_622905e _public_622905e
#define public_6229069 _public_6229069
#define public_62290f4 _public_62290f4
#define public_62290fa _public_62290fa
#define public_6229143 _public_6229143
#define public_622915d _public_622915d
#define public_6229187 _public_6229187

PROC_DECLARE(0x6228b90, internal_6228b90, public_6228b90);
extern "C" NAKED register_t __cdecl internal_6228b90()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6249204 @0x6228b98*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249204
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x27C
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x298]
/*FIXUP push offset public_6256468 @0x6228bb4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256468
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x60]
        test eax, eax
        je public_6228c1a
        xor ebp, ebp
        lea ecx, ss:[esp+0x18]
        push ebp
/*FIXUP push offset public_6256468 @0x6228bca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256468
        push esi
        call public_6222e00
        lea ecx, ss:[esp+0x48]
        push 4
        push ecx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x294], ebp
        call public_6222f30
        cmp eax, ebp
        jl public_6228c06
        lea edx, ss:[esp+0x40]
        push 4
        push edx
        lea ecx, ss:[esp+0x20]
        call public_6222f30
        mov esi, eax
        cmp esi, ebp
        jge public_6228c24
        public_6228c06 : nop
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x28C], 0xFFFFFFFF
        call public_6222ec0
        public_6228c1a : nop
        mov eax, 0xFFFFFFFA
        jmp public_6229187
        public_6228c24 : nop
        mov eax, dword ptr ss : [esp+0x40]
        push ebx
        cmp eax, ebp
        push edi
        mov dword ptr ss : [esp+0x4C], ebp
        jle public_622915d
        mov ebx, dword ptr ss : [esp+0x29C]
        public_6228c3d : nop
        lea eax, ss:[esp+0x8C]
        push 0x100
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6223070
        mov esi, eax
        cmp esi, ebp
        jl public_622915d
        mov edi, offset public_6256570
        lea esi, ss:[esp+0x8C]
        mov ecx, 0xE
        xor edx, edx
        repe cmpsb
        jne public_6228c88
        xor eax, eax
        public_6228c76 : nop
        mov cl, byte ptr ds : [eax+public_6255e0c]
        mov byte ptr ss : [esp+eax+0x8C], cl
        inc eax
        test cl, cl
        jne public_6228c76
        public_6228c88 : nop
        lea eax, ss:[esp+0x8C]
        mov dword ptr ss : [esp+0x64], 8
        mov dword ptr ss : [esp+0x68], eax
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x10], ebp
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x294], 2
        call public_622a1a0
        call dword ptr ds : [public_624b008]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        lea edx, ss:[esp+0x68]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        mov esi, eax
        cmp esi, ebp
        jl public_6228fd3
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        je public_6228ce6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ebp
        public_6228ce6 : nop
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x10]
        push ecx
/*FIXUP push offset public_6255388 @0x6228cef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255388
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx]
        mov esi, eax
        cmp esi, ebp
        jl public_6229069
        mov dword ptr ss : [esp+0x18], ebp
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        mov edx, dword ptr ds : [eax]
        mov byte ptr ss : [esp+0x29C], 5
        call dword ptr ds : [edx+0x80]
        fld dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x28]
        push 2
        lea edx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x64], edx
        mov dword ptr ss : [esp+0x68], eax
        call public_6222f30
        cmp eax, ebp
        jl public_6228e03
        cmp word ptr ss : [esp+0x28], bp
        je public_6228e03
        public_6228d5c : nop
        lea edx, ss:[esp+0x34]
        push 4
        push edx
        lea ecx, ss:[esp+0x28]
        call public_6222f30
        cmp eax, ebp
        jl public_6228e03
        mov eax, dword ptr ds : [public_62563a8]
        mov edx, dword ptr ss : [esp+0x34]
        xor ecx, ecx
        cmp eax, ebp
        je public_6228da0
        public_6228d83 : nop
        cmp edx, eax
        je public_6228d95
        mov eax, dword ptr ds : [ecx*8+public_62563b0]
        inc ecx
        cmp eax, ebp
        jne public_6228d83
        jmp public_6228da0
        public_6228d95 : nop
        mov edx, dword ptr ds : [ecx*8+public_62563ac]
        mov dword ptr ss : [esp+0x34], edx
        public_6228da0 : nop
        fld dword ptr ss : [esp+0x58]
        fcomp dword ptr ds : [public_624bac4]
        mov ecx, dword ptr ss : [esp+0x28]
        and ecx, 0xFFFF
        fnstsw ax
        test ah, 0x44
        jp public_6228dd5
        xor eax, eax
        public_6228dbd : nop
        cmp ecx, dword ptr ds : [eax*8+public_6256390]
        je public_6228dce
        inc eax
        cmp eax, 3
        jl public_6228dbd
        jmp public_6228dd5
        public_6228dce : nop
        mov ecx, dword ptr ds : [eax*8+public_6256394]
        public_6228dd5 : nop
        lea eax, ss:[esp+0x58]
        push eax
        push ecx
        push edx
        call public_62291a0
        add esp, 0xC
        lea ecx, ss:[esp+0x28]
        push 2
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6222f30
        cmp eax, ebp
        jl public_6228e03
        cmp word ptr ss : [esp+0x28], bp
        jne public_6228d5c
        public_6228e03 : nop
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push 0xEFA8CE01
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x48]
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebp
        je public_6228e28
        cmp byte ptr ds : [eax], 0
        jne public_6228f5c
        public_6228e28 : nop
        mov edx, dword ptr ds : [public_624b004]
/*FIXUP push offset public_6256530 @0x6228e2e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256530
        push 0x3D8
        mov eax, 0x100002
/*FIXUP push offset public_62563d0 @0x6228e3d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62563d0
/*FIXUP push offset public_625528c @0x6228e42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625528c
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [ebx]
        add esp, 0x14
        mov esi, offset public_6256528
        push esi
        push ebx
        call dword ptr ds : [eax+0xC]
        mov edi, dword ptr ds : [ebx+0xC]
        lea edx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x30], eax
        lea eax, ss:[esp+0x54]
        push edx
        lea ecx, ds:[ebx+8]
        push eax
        call public_6229d50
        cmp dword ptr ds : [eax], edi
        je public_6228f2e
        public_6228e7a : nop
        test ebp, ebp
        jne public_6228edf
        lea edx, ss:[esp+0x18C]
        mov eax, esi
        sub edx, esi
        public_6228e89 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [eax+edx], cl
        inc eax
        test cl, cl
        jne public_6228e89
        mov edi, dword ptr ds : [public_624b068]
        lea ecx, ss:[esp+0x18C]
        push 0x23
        push ecx
        call edi
        add esp, 8
        test eax, eax
        je public_6228ebc
        mov byte ptr ds : [eax], 0
        inc eax
        push eax
        call dword ptr ds : [public_624b050]
        add esp, 4
        mov ebp, eax
        public_6228ebc : nop
        push 0x2E
        push esi
        call edi
        add esp, 8
        test eax, eax
        je public_6228eda
        lea edx, ss:[esp+0x6C]
        sub edx, eax
        public_6228ece : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [eax+edx], cl
        inc eax
        test cl, cl
        jne public_6228ece
        jmp public_6228edf
        public_6228eda : nop
        mov byte ptr ss : [esp+0x6C], 0
        public_6228edf : nop
        lea edx, ss:[esp+0x6C]
        inc ebp
        push edx
        lea eax, ss:[esp+0x190]
        push ebp
        push eax
/*FIXUP push offset public_6256188 @0x6228eee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256188
/*FIXUP push offset public_6257c80 @0x6228ef3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257c80
        call dword ptr ds : [public_624b064]
        mov ecx, dword ptr ds : [ebx]
        add esp, 0x14
        mov esi, offset public_6257c80
        push esi
        push ebx
        call dword ptr ds : [ecx+0xC]
        mov edi, dword ptr ds : [ebx+0xC]
        lea edx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x30], eax
        lea eax, ss:[esp+0x54]
        push edx
        push eax
        lea ecx, ds:[ebx+8]
        call public_6229d50
        cmp dword ptr ds : [eax], edi
        jne public_6228e7a
        public_6228f2e : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x2C], esi
        push esi
        push 0xEFA8CE01
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x4C]
        lea ecx, ss:[esp+0x2C]
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
        push 0xEFA8CE01
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x48]
        xor ebp, ebp
        mov eax, dword ptr ss : [esp+0x2C]
        public_6228f5c : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ebx]
        push ebp
        push ecx
        push eax
        push ebx
        call dword ptr ds : [edx+0x10]
        mov esi, eax
        mov byte ptr ss : [esp+0x294], 2
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebp
        je public_6228f85
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x18], ebp
        public_6228f85 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov byte ptr ss : [esp+0x294], 1
        cmp eax, ebp
        je public_6228f9f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ebp
        public_6228f9f : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov byte ptr ss : [esp+0x294], 0
        cmp eax, ebp
        je public_6228fb9
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x14], ebp
        public_6228fb9 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x48]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x4C], eax
        jl public_6228c3d
        jmp public_622915d
        public_6228fd3 : nop
        mov al, byte ptr ss : [esp+0x1F]
        push ebp
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x3C], al
        call dword ptr ds : [public_624b01c]
        mov edi, offset public_6256504
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_6256504 @0x6228ff6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256504
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_624b038]
        lea edi, ss:[esp+0x8C]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov byte ptr ss : [esp+0x294], 3
        repne scasb
        not ecx
        dec ecx
        push ecx
        lea ecx, ss:[esp+0x90]
        push ecx
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_624b034]
        mov edi, offset public_62564e4
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_62564e4 @0x6229041*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62564e4
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_624b034]
        mov ecx, dword ptr ss : [esp+0x3C]
        cmp ecx, ebp
        jne public_622905e
        mov ecx, dword ptr ds : [public_624b028]
        public_622905e : nop
        push ecx
        push 0x3BB
        jmp public_62290fa
        public_6229069 : nop
        mov al, byte ptr ss : [esp+0x1F]
        push ebp
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x3C], al
        call dword ptr ds : [public_624b01c]
        mov edi, offset public_62564d4
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_62564d4 @0x622908c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62564d4
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_624b038]
        lea edi, ss:[esp+0x8C]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov byte ptr ss : [esp+0x294], 4
        repne scasb
        not ecx
        dec ecx
        push ecx
        lea ecx, ss:[esp+0x90]
        push ecx
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_624b034]
        mov edi, offset public_6256498
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_6256498 @0x62290d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256498
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_624b034]
        mov ecx, dword ptr ss : [esp+0x3C]
        cmp ecx, ebp
        jne public_62290f4
        mov ecx, dword ptr ds : [public_624b028]
        public_62290f4 : nop
        push ecx
        push 0x3C8
        public_62290fa : nop
        mov edx, dword ptr ds : [public_624b004]
/*FIXUP push offset public_62563d0 @0x6229100*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62563d0
        mov eax, 0x100001
/*FIXUP push offset public_625506c @0x622910a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625506c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x294], 2
        push 1
        call dword ptr ds : [public_624b01c]
        mov byte ptr ss : [esp+0x294], 1
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        je public_6229143
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ebp
        public_6229143 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov byte ptr ss : [esp+0x294], 0
        cmp eax, ebp
        je public_622915d
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x14], ebp
        public_622915d : nop
        mov eax, dword ptr ss : [esp+0x2A0]
/*FIXUP push offset public_6256178 @0x6229164*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256178
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x60]
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x294], 0xFFFFFFFF
        call public_6222ec0
        pop edi
        mov eax, esi
        pop ebx
        public_6229187 : nop
        mov ecx, dword ptr ss : [esp+0x284]
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x288
        ret 8
        UNREACHABLE_TRAP(0x6228b90)
    }
}

#undef public_6228c06
#undef public_6228c1a
#undef public_6228c24
#undef public_6228c3d
#undef public_6228c76
#undef public_6228c88
#undef public_6228ce6
#undef public_6228d5c
#undef public_6228d83
#undef public_6228d95
#undef public_6228da0
#undef public_6228dbd
#undef public_6228dce
#undef public_6228dd5
#undef public_6228e03
#undef public_6228e28
#undef public_6228e7a
#undef public_6228e89
#undef public_6228ebc
#undef public_6228ece
#undef public_6228eda
#undef public_6228edf
#undef public_6228f2e
#undef public_6228f5c
#undef public_6228f85
#undef public_6228f9f
#undef public_6228fb9
#undef public_6228fd3
#undef public_622905e
#undef public_6229069
#undef public_62290f4
#undef public_62290fa
#undef public_6229143
#undef public_622915d
#undef public_6229187
