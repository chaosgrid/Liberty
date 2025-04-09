#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46b6c0);
CLANG_FORWARD_PROC_SYMBOL(public_46b890);
CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_4ca480);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_560a80);
CLANG_FORWARD_PROC_SYMBOL(public_560ab0);
CLANG_FORWARD_PROC_SYMBOL(public_560c00);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_PROC_SYMBOL(public_57bff0);
CLANG_FORWARD_PROC_SYMBOL(public_57c0e0);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_59b020);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1d13);

#define public_560fd4 _public_560fd4
#define public_561198 _public_561198
#define public_561251 _public_561251
#define public_56127a _public_56127a
#define public_561340 _public_561340
#define public_561380 _public_561380
#define public_5613a2 _public_5613a2
#define public_5613ae _public_5613ae
#define public_5613cb _public_5613cb
#define public_5613d3 _public_5613d3
#define public_5613ee _public_5613ee
#define public_5613f6 _public_5613f6
#define public_561470 _public_561470
#define public_561487 _public_561487
#define public_56148b _public_56148b
#define public_5614d0 _public_5614d0
#define public_5614e0 _public_5614e0
#define public_5614eb _public_5614eb
#define public_5614f3 _public_5614f3
#define public_5614ff _public_5614ff
#define public_56151e _public_56151e
#define public_561542 _public_561542

PROC_DECLARE(0x560c00, internal_560c00, public_560c00);
extern "C" NAKED register_t __cdecl internal_560c00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c1d13 @0x560c02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1d13
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC4
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov dword ptr ss : [esp+0xC], ebx
        mov ebp, dword ptr ds : [esi+0xB8]
        push edi
        mov edi, dword ptr ds : [esi+0x110]
        mov ecx, edi
        call public_57bff0
        push ebx
        push ebp
        mov ecx, edi
        call public_57c0e0
        mov ecx, dword ptr ds : [esi+0x114]
        call public_57b370
        mov ebp, dword ptr ds : [public_5c62b8]
        push 0x4433
        lea ecx, ss:[esp+0x18]
        call ebp
        mov ecx, dword ptr ds : [esi+0x114]
        push eax
        mov dword ptr ss : [esp+0xE0], ebx
        call public_57b470
        mov ebx, dword ptr ds : [public_5c62b4]
        or edi, 0xFFFFFFFF
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0xDC], edi
        call ebx
        mov ecx, dword ptr ds : [public_5c62cc]
        lea eax, ds:[esi+0x138]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [esi+0x114]
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0xE0], 1
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0xDC], edi
        call dword ptr ds : [public_5c62c8]
        mov eax, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [esi+0x114]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0xE0], 2
        call public_57b470
        push 0x9CA4
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0xE0], edi
        call ebp
        mov ecx, dword ptr ds : [esi+0x114]
        push eax
        mov dword ptr ss : [esp+0xE0], 3
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0xDC], edi
        call ebx
        push 1
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c62c0]
        mov ecx, dword ptr ds : [esi+0x114]
        push eax
        mov dword ptr ss : [esp+0xE0], 4
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0xDC], edi
        call dword ptr ds : [public_5c62bc]
        mov eax, dword ptr ds : [esi+0xB8]
        mov ecx, dword ptr ds : [eax+0x34]
        push ecx
        call public_46b890
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        mov edx, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x14], edx
        mov ecx, dword ptr ds : [esi+0x114]
        lea eax, ss:[esp+0x14]
        push eax
        mov dword ptr ss : [esp+0xE0], 5
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0xDC], edi
        call dword ptr ds : [public_5c62c8]
        mov ecx, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+0x114]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0xE0], 6
        call public_57b470
        mov eax, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [esi+0x114]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0xE0], 7
        call public_57b470
        mov eax, dword ptr ds : [public_5c6bc8]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0xB8]
        mov eax, dword ptr ds : [eax+0x38]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov dword ptr ss : [esp+0xE0], edi
        call dword ptr ds : [edx+4]
        test eax, eax
        mov dword ptr ss : [esp+0x24], eax
        je public_561340
        push 0x4433
        lea ecx, ss:[esp+0x18]
        call ebp
        mov ecx, dword ptr ds : [esi+0x114]
        push eax
        mov dword ptr ss : [esp+0xE0], 8
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0xDC], edi
        call ebx
        mov edx, dword ptr ds : [public_5c62cc]
        lea ecx, ds:[esi+0x15C]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov ecx, dword ptr ds : [esi+0x114]
        lea eax, ss:[esp+0x14]
        push eax
        mov dword ptr ss : [esp+0xE0], 9
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0xDC], edi
        call dword ptr ds : [public_5c62c8]
        mov ecx, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+0x114]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0xE0], 0xA
        call public_57b470
        push 0x9CA4
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0xE0], edi
        call ebp
        mov ecx, dword ptr ds : [esi+0x114]
        push eax
        mov dword ptr ss : [esp+0xE0], 0xB
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0xDC], edi
        call ebx
        push 1
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c62c0]
        mov ecx, dword ptr ds : [esi+0x114]
        push eax
        mov dword ptr ss : [esp+0xE0], 0xC
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0xDC], edi
        call dword ptr ds : [public_5c62bc]
        mov ecx, dword ptr ds : [public_5c7024]
        mov eax, dword ptr ds : [public_5c7020]
        mov dword ptr ss : [esp+0x50], ecx
        lea ecx, ss:[esp+0xA0]
        mov dword ptr ss : [esp+0x48], eax
        call dword ptr ds : [public_5c701c]
        mov edx, dword ptr ds : [public_5c7018]
        mov dword ptr ss : [esp+0xA0], edx
        mov dword ptr ss : [esp+0x10], 1
        push 0
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0xE4], 0xD
        call dword ptr ds : [public_5c7014]
        push 3
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0xE0], 0xE
        call dword ptr ds : [public_5c7010]
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_5c7094]
        mov dword ptr ss : [esp+edx+0x48], eax
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ecx+0x2C]
        push edx
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0xE0], 0xF
        call dword ptr ds : [public_5c7008]
        push eax
        call dword ptr ds : [public_5c7004]
        add esp, 4
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x4C]
        call dword ptr ds : [public_5c7000]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov byte ptr ss : [esp+0xDC], 0x10
        jne public_560fd4
        mov eax, dword ptr ds : [public_5c700c]
        public_560fd4 : nop
        push edi
        push eax
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c62b0]
        mov ecx, dword ptr ds : [esi+0x114]
        push eax
        mov byte ptr ss : [esp+0xE0], 0x11
        call public_57b470
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0xDC], 0x10
        call dword ptr ds : [public_5c62ac]
        push 1
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0xE0], 0xF
        call dword ptr ds : [public_5c6fb8]
        mov ecx, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+0x114]
        lea edx, ss:[esp+0x10]
        push edx
        mov byte ptr ss : [esp+0xE0], 0x12
        call public_57b470
        mov eax, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [esi+0x114]
        lea edx, ss:[esp+0x10]
        push edx
        mov byte ptr ss : [esp+0xE0], 0x13
        call public_57b470
        lea ecx, ss:[esp+0xA0]
        mov dword ptr ss : [esp+0xDC], edi
        call dword ptr ds : [public_5c6ffc]
        mov eax, dword ptr ds : [public_5c7018]
        lea ecx, ss:[esp+0xA0]
        mov dword ptr ss : [esp+0xA0], eax
        call dword ptr ds : [public_5c6ff8]
        push 0x4433
        lea ecx, ss:[esp+0x18]
        call ebp
        mov ecx, dword ptr ds : [esi+0x114]
        push eax
        mov dword ptr ss : [esp+0xE0], 0x14
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0xDC], edi
        call ebx
        mov edx, dword ptr ds : [public_5c62cc]
        lea ecx, ds:[esi+0x144]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov ecx, dword ptr ds : [esi+0x114]
        lea eax, ss:[esp+0x14]
        push eax
        mov dword ptr ss : [esp+0xE0], 0x15
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0xDC], edi
        call dword ptr ds : [public_5c62c8]
        mov ecx, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+0x114]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0xE0], 0x16
        call public_57b470
        push 0x9CA4
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0xE0], edi
        call ebp
        mov ecx, dword ptr ds : [esi+0x114]
        push eax
        mov dword ptr ss : [esp+0xE0], 0x17
        call public_57b470
        mov dword ptr ss : [esp+0xDC], edi
        lea ecx, ss:[esp+0x14]
        call ebx
        push 1
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c62c0]
        mov ecx, dword ptr ds : [esi+0x114]
        push eax
        mov dword ptr ss : [esp+0xE0], 0x18
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0xDC], edi
        call dword ptr ds : [public_5c62bc]
        mov eax, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        jne public_561198
        mov eax, dword ptr ds : [public_5c7078]
        public_561198 : nop
        push eax
        call dword ptr ds : [public_5c6020]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_5c6bc4]
        push eax
        call public_46b6c0
        mov edx, dword ptr ds : [public_5c62cc]
        add esp, 0xC
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], edx
        mov ecx, dword ptr ds : [esi+0x114]
        lea eax, ss:[esp+0x14]
        push eax
        mov dword ptr ss : [esp+0xE0], 0x19
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0xDC], edi
        call dword ptr ds : [public_5c62c8]
        mov ecx, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+0x114]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0xE0], 0x1A
        call public_57b470
        mov eax, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [esi+0x114]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0xE0], 0x1B
        call public_57b470
        mov ebx, dword ptr ds : [esi+0x16C]
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebx
        mov dword ptr ss : [esp+0xDC], edi
        mov dword ptr ss : [esp+0x28], eax
        je public_56127a
        public_561251 : nop
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x30]
        call public_53ab20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[esi+0x168]
        call public_46d680
        cmp dword ptr ss : [esp+0x28], ebx
        jne public_561251
        public_56127a : nop
        lea eax, ds:[esi+0x168]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax+8]
        push ecx
        call public_57da40
        add esp, 8
        test al, al
        je public_561340
        push 0x9CA4
        lea ecx, ss:[esp+0x18]
        call ebp
        mov ecx, dword ptr ds : [esi+0x114]
        push eax
        mov dword ptr ss : [esp+0xE0], 0x1C
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0xDC], edi
        call dword ptr ds : [public_5c62b4]
        push 0
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c62c0]
        mov ecx, dword ptr ds : [esi+0x114]
        push eax
        mov dword ptr ss : [esp+0xE0], 0x1D
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0xDC], edi
        call dword ptr ds : [public_5c62bc]
        mov edx, dword ptr ds : [public_5c62cc]
        lea eax, ds:[esi+0x168]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x2C], edx
        mov ecx, dword ptr ds : [esi+0x114]
        lea eax, ss:[esp+0x2C]
        push eax
        mov dword ptr ss : [esp+0xE0], 0x1E
        call public_57b470
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0xDC], edi
        call dword ptr ds : [public_5c62c8]
        public_561340 : nop
        mov al, byte ptr ss : [esp+0xE4]
        test al, al
        je public_561542
        mov ecx, dword ptr ds : [public_5c6bc8]
        mov eax, dword ptr ds : [esi+0xB8]
        mov ecx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax+0x3C]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        mov ebp, eax
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], ebp
        je public_56151e
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        jne public_561380
        mov eax, dword ptr ds : [public_5c7078]
        public_561380 : nop
        mov ecx, dword ptr ds : [esi+0x104]
        push eax
        call public_59b020
        mov esi, dword ptr ds : [esi+0x104]
        mov ebx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ss : [ebp+0x1C]
        add esi, 0x8C
        cmp ebx, eax
        je public_5613cb
        public_5613a2 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_5613ae
        mov eax, dword ptr ds : [public_5c7078]
        public_5613ae : nop
        push 2
        push 0x3F800000
        push 0
        push 0
        push eax
        mov ecx, esi
        call public_560ab0
        mov eax, dword ptr ss : [ebp+0x1C]
        add ebx, 0x10
        cmp ebx, eax
        jne public_5613a2
        public_5613cb : nop
        mov dword ptr ss : [esp+0x24], 0x3DCCCCCD
        public_5613d3 : nop
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_5d043c]
        fnstsw ax
        test ah, 5
        jp public_5613ee
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x28], ecx
        jmp public_5613f6
        public_5613ee : nop
        mov dword ptr ss : [esp+0x28], 0x3E4CCCCD
        public_5613f6 : nop
        cmp dword ptr ds : [esi], 0
        je public_56148b
        fld dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [edx]
        mov ebp, dword ptr ds : [eax]
        fmul dword ptr ds : [esi+0x264]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x14]
        push ebx
        call public_4ca480
        mov ecx, dword ptr ds : [public_5c6d40]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edx
        call dword ptr ss : [ebp+0x6C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [eax]
        mov ebp, dword ptr ds : [ecx]
        push ebx
        push 0
        mov ecx, esi
        call public_4ca480
        mov edx, dword ptr ds : [public_5c6d90]
        push eax
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ss : [ebp+0x6C]
        mov ecx, esi
        call public_560a80
        test al, al
        je public_561487
        lea ecx, ds:[esi+0x254]
        lea eax, ds:[esi+0x44]
        mov edx, 4
        lea esp, ss:[esp]
        public_561470 : nop
        mov dword ptr ds : [eax], 0
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        add eax, 0x84
        dec edx
        jne public_561470
        public_561487 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_56148b : nop
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x28]
        fst dword ptr ss : [esp+0x24]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        je public_5613d3
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_5614eb
        mov edx, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x24]
        lea ecx, ds:[esi+0x254]
        lea eax, ds:[esi+0x44]
        mov edx, 4
        nop 
        lea esp, ss:[esp]
        public_5614d0 : nop
        cmp dword ptr ds : [ecx], edi
        je public_5614e0
        mov dword ptr ds : [eax], 0
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [ecx], edi
        public_5614e0 : nop
        add ecx, 4
        add eax, 0x84
        dec edx
        jne public_5614d0
        public_5614eb : nop
        mov edi, dword ptr ss : [ebp+0x18]
        cmp edi, dword ptr ss : [ebp+0x1C]
        je public_561542
        public_5614f3 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_5614ff
        mov eax, dword ptr ds : [public_5c7078]
        public_5614ff : nop
        push 2
        push 0x3F800000
        push 0
        push 0
        push eax
        mov ecx, esi
        call public_560ab0
        mov eax, dword ptr ss : [ebp+0x1C]
        add edi, 0x10
        cmp edi, eax
        jne public_5614f3
        jmp public_561542
/*FIXUP public_56151e : nop
        push offset public_5e1b54 @0x56151e*/
  FIXUP public_56151e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1b54
        push 0x19D
/*FIXUP push offset public_5e1b1c @0x561528*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1b1c
        mov eax, 0x100002
/*FIXUP push offset public_5c7418 @0x561532*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7418
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_561542 : nop
        mov ecx, dword ptr ss : [esp+0xD4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xD0
        ret 4
        UNREACHABLE_TRAP(0x560c00)
    }
}

#undef public_560fd4
#undef public_561198
#undef public_561251
#undef public_56127a
#undef public_561340
#undef public_561380
#undef public_5613a2
#undef public_5613ae
#undef public_5613cb
#undef public_5613d3
#undef public_5613ee
#undef public_5613f6
#undef public_561470
#undef public_561487
#undef public_56148b
#undef public_5614d0
#undef public_5614e0
#undef public_5614eb
#undef public_5614f3
#undef public_5614ff
#undef public_56151e
#undef public_561542
