#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262630);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_630f660);
CLANG_FORWARD_PROC_SYMBOL(public_630f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310560);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_63159e0);
CLANG_FORWARD_PROC_SYMBOL(public_6315a50);
CLANG_FORWARD_PROC_SYMBOL(public_6315b10);
CLANG_FORWARD_PROC_SYMBOL(public_6315b30);
CLANG_FORWARD_PROC_SYMBOL(public_63167e0);
CLANG_FORWARD_PROC_SYMBOL(public_6316ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6316c60);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_63966b5);

#define public_6314a40 _public_6314a40
#define public_6314af4 _public_6314af4
#define public_6314b2a _public_6314b2a
#define public_6314b96 _public_6314b96
#define public_6314c31 _public_6314c31
#define public_6314c79 _public_6314c79
#define public_6314cca _public_6314cca
#define public_6314d19 _public_6314d19
#define public_6314d1e _public_6314d1e
#define public_6314d36 _public_6314d36
#define public_6314d8d _public_6314d8d
#define public_6314e08 _public_6314e08
#define public_6314e3e _public_6314e3e
#define public_6314e6a _public_6314e6a
#define public_6314e96 _public_6314e96
#define public_6314f02 _public_6314f02
#define public_6314f67 _public_6314f67
#define public_6314f8e _public_6314f8e
#define public_6314fa6 _public_6314fa6
#define public_6314fd8 _public_6314fd8
#define public_63150a0 _public_63150a0
#define public_63150d3 _public_63150d3
#define public_6315136 _public_6315136
#define public_6315172 _public_6315172
#define public_6315207 _public_6315207
#define public_631526e _public_631526e
#define public_63152b0 _public_63152b0
#define public_6315345 _public_6315345
#define public_63153b5 _public_63153b5
#define public_6315418 _public_6315418
#define public_631541b _public_631541b
#define public_6315433 _public_6315433
#define public_63154a7 _public_63154a7
#define public_63154b6 _public_63154b6
#define public_63154cb _public_63154cb
#define public_6315544 _public_6315544
#define public_63155d9 _public_63155d9

PROC_DECLARE(0x63149d0, internal_63149d0, public_63149d0);
extern "C" NAKED register_t __cdecl internal_63149d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_63966b5 @0x63149d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63966b5
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x16B4
        mov dword ptr fs : [0], esp
        call public_6391dc0
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x158]
        mov dword ptr ss : [esp+0x14], edi
        call public_630f660
        mov esi, dword ptr ss : [esp+0x16D0]
        xor ebx, ebx
        push ebx
        push esi
        lea ecx, ss:[esp+0x160]
        mov dword ptr ss : [esp+0x16D0], ebx
        call public_630f9b0
        test al, al
        je public_6315544
        lea ecx, ss:[esp+0x158]
        call public_6310070
        test al, al
        je public_63154cb
        push ebp
        nop 
/*FIXUP public_6314a40 : nop
        push offset public_63a3928 @0x6314a40*/
  FIXUP public_6314a40 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3928
        lea ecx, ss:[esp+0x160]
        call public_63103c0
        test al, al
        je public_6314d8d
        lea ecx, ss:[esp+0xF4]
        call public_6333e40
        mov al, byte ptr ss : [esp+0x13]
        push ebx
        lea ecx, ss:[esp+0xFC]
        mov byte ptr ss : [esp+0xFC], al
        call dword ptr ds : [public_63991b8]
        lea ecx, ss:[esp+0x13]
        push ecx
        lea edx, ss:[esp+0x27]
        push edx
        lea ecx, ss:[esp+0x110]
        mov byte ptr ss : [esp+0x16D4], 1
        call public_63159e0
        lea eax, ss:[esp+0x21]
        push eax
        lea ecx, ss:[esp+0x29]
        push ecx
        lea ecx, ss:[esp+0x124]
        mov byte ptr ss : [esp+0x16D4], 2
        call public_63159e0
        lea edx, ss:[esp+0x27]
        push edx
        lea eax, ss:[esp+0x15]
        push eax
        lea ecx, ss:[esp+0x138]
        mov byte ptr ss : [esp+0x16D4], 3
        call public_63159e0
        lea ecx, ss:[esp+0x15C]
        mov byte ptr ss : [esp+0x16CC], 4
        call public_6310170
        test al, al
        je public_6314d36
/*FIXUP public_6314af4 : nop
        push offset public_63994e8 @0x6314af4*/
  FIXUP public_6314af4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994e8
        lea ecx, ss:[esp+0x160]
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x15C]
        je public_6314b2a
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ss : [esp+0xF4], eax
        jmp public_6314d1e
/*FIXUP public_6314b2a : nop
        push offset public_63a391c @0x6314b2a*/
  FIXUP public_6314b2a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a391c
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x15C]
        je public_6314b96
        call public_6310b70
        mov esi, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x100]
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6314d1e
        mov edi, dword ptr ss : [esp+0xFC]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push ebp
        lea ecx, ss:[esp+0xFC]
        call dword ptr ds : [public_63991d8]
        jmp public_6314d1e
/*FIXUP public_6314b96 : nop
        push offset public_6399770 @0x6314b96*/
  FIXUP public_6314b96 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399770
        call public_6310410
        test al, al
        je public_6314c79
        lea ecx, ss:[esp+0x2C]
        call public_6333e40
        mov al, byte ptr ss : [esp+0x11]
        push ebx
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x34], al
        call dword ptr ds : [public_63991b8]
        lea ecx, ss:[esp+0x15C]
        mov byte ptr ss : [esp+0x16CC], 5
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        lea ecx, ss:[esp+0x15C]
        mov dword ptr ss : [esp+0x2C], eax
        call public_6310b70
        mov esi, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6314c31
        mov edi, dword ptr ss : [esp+0x34]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push ebp
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_63991d8]
        public_6314c31 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x2C]
        push edx
        call dword ptr ds : [eax+0x24]
        mov eax, dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x148]
        push edx
        lea ecx, ss:[esp+0x110]
        mov dword ptr ss : [esp+0x1C], eax
        call public_63167e0
        push 1
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x16D0], 4
        call dword ptr ds : [public_63991b8]
        jmp public_6314d1e
/*FIXUP public_6314c79 : nop
        push offset public_63a3914 @0x6314c79*/
  FIXUP public_6314c79 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3914
        lea ecx, ss:[esp+0x160]
        call public_6310410
        test al, al
        je public_6314cca
        lea ecx, ss:[esp+0x28]
        call public_6333e40
        lea ecx, ss:[esp+0x15C]
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        lea ecx, ss:[esp+0x154]
        push eax
        push ecx
        lea ecx, ss:[esp+0x124]
        jmp public_6314d19
/*FIXUP public_6314cca : nop
        push offset public_63a390c @0x6314cca*/
  FIXUP public_6314cca : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a390c
        lea ecx, ss:[esp+0x160]
        call public_6310410
        test al, al
        je public_6314d1e
        lea ecx, ss:[esp+0x1C]
        call public_6333e40
        lea ecx, ss:[esp+0x15C]
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x14], eax
        push edx
        lea eax, ss:[esp+0x150]
        push eax
        lea ecx, ss:[esp+0x138]
        public_6314d19 : nop
        call public_63167e0
        public_6314d1e : nop
        lea ecx, ss:[esp+0x15C]
        call public_6310170
        test al, al
        jne public_6314af4
        mov edi, dword ptr ss : [esp+0x18]
        public_6314d36 : nop
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0xF4]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x18]
        lea ecx, ss:[esp+0x130]
        mov byte ptr ss : [esp+0x16CC], 8
        call public_6315a50
        lea ecx, ss:[esp+0x11C]
        mov byte ptr ss : [esp+0x16CC], 7
        call public_6315a50
        lea ecx, ss:[esp+0x108]
        mov byte ptr ss : [esp+0x16CC], 6
        call public_6315a50
        lea ecx, ss:[esp+0xF8]
        jmp public_63154a7
/*FIXUP public_6314d8d : nop
        push offset public_63a3904 @0x6314d8d*/
  FIXUP public_6314d8d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3904
        lea ecx, ss:[esp+0x160]
        call public_63103c0
        test al, al
        je public_6314fd8
        lea ecx, ss:[esp+0xA4]
        call public_6333e40
        mov cl, byte ptr ss : [esp+0x11]
        mov byte ptr ss : [esp+0xB0], cl
        push ebx
        lea ecx, ss:[esp+0xB4]
        call dword ptr ds : [public_63991b8]
        mov dl, byte ptr ss : [esp+0x11]
        push ebx
        lea ecx, ss:[esp+0xC4]
        mov byte ptr ss : [esp+0x16D0], 9
        mov byte ptr ss : [esp+0xC4], dl
        call dword ptr ds : [public_63991b8]
        lea ecx, ss:[esp+0x15C]
        mov byte ptr ss : [esp+0x16CC], 0xA
        call public_6310170
        test al, al
        je public_6314fa6
/*FIXUP public_6314e08 : nop
        push offset public_63994e8 @0x6314e08*/
  FIXUP public_6314e08 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994e8
        lea ecx, ss:[esp+0x160]
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x15C]
        je public_6314e3e
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ss : [esp+0xA4], eax
        jmp public_6314f8e
/*FIXUP public_6314e3e : nop
        push offset public_63a38f8 @0x6314e3e*/
  FIXUP public_6314e3e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a38f8
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x15C]
        je public_6314e6a
        push ebx
        call public_63108f0
        call public_6391dae
        mov dword ptr ss : [esp+0xA8], eax
        jmp public_6314f8e
/*FIXUP public_6314e6a : nop
        push offset public_63a38ec @0x6314e6a*/
  FIXUP public_6314e6a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a38ec
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x15C]
        je public_6314e96
        push ebx
        call public_63108f0
        call public_6391dae
        mov dword ptr ss : [esp+0xAC], eax
        jmp public_6314f8e
/*FIXUP public_6314e96 : nop
        push offset public_6399e84 @0x6314e96*/
  FIXUP public_6314e96 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399e84
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x15C]
        je public_6314f02
        call public_6310b70
        mov esi, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0xB8]
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6314f8e
        mov edi, dword ptr ss : [esp+0xB4]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        push ebp
        lea ecx, ss:[esp+0xB4]
        call dword ptr ds : [public_63991d8]
        jmp public_6314f8e
/*FIXUP public_6314f02 : nop
        push offset public_639a200 @0x6314f02*/
  FIXUP public_6314f02 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a200
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x15C]
        je public_6314f67
        call public_6310b70
        mov esi, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0xC8]
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6314f8e
        mov edi, dword ptr ss : [esp+0xC4]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push ebp
        lea ecx, ss:[esp+0xC4]
        call dword ptr ds : [public_63991d8]
        jmp public_6314f8e
/*FIXUP public_6314f67 : nop
        push offset public_63a38e4 @0x6314f67*/
  FIXUP public_6314f67 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a38e4
        call public_6310410
        test al, al
        je public_6314f8e
        push ebx
        lea ecx, ss:[esp+0x160]
        call public_63108f0
        call public_6391dae
        mov dword ptr ss : [esp+0xD0], eax
        public_6314f8e : nop
        lea ecx, ss:[esp+0x15C]
        call public_6310170
        test al, al
        jne public_6314e08
        mov edi, dword ptr ss : [esp+0x18]
        public_6314fa6 : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0xA4]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x1C]
        push 1
        lea ecx, ss:[esp+0xC4]
        mov byte ptr ss : [esp+0x16D0], 0xB
        call dword ptr ds : [public_63991b8]
        lea ecx, ss:[esp+0xB0]
        jmp public_63154a7
/*FIXUP public_6314fd8 : nop
        push offset public_63a38dc @0x6314fd8*/
  FIXUP public_6314fd8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a38dc
        lea ecx, ss:[esp+0x160]
        call public_63103c0
        test al, al
        je public_63154b6
        lea ecx, ss:[esp+0x40]
        call public_6333e40
        mov dl, byte ptr ss : [esp+0x11]
        push ebx
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x48], dl
        call dword ptr ds : [public_63991b8]
        mov al, byte ptr ss : [esp+0x11]
        mov byte ptr ss : [esp+0x54], al
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x60], ebx
        lea ecx, ss:[esp+0x22]
        push ecx
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0x16D0], 0xD
        call dword ptr ds : [public_6399180]
        lea edx, ss:[esp+0x26]
        push edx
        lea ecx, ss:[esp+0x78]
        mov byte ptr ss : [esp+0x16D0], 0xE
        call public_6315b10
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x88]
        mov byte ptr ss : [esp+0x16D0], 0xF
        call dword ptr ds : [public_6399180]
        lea ecx, ss:[esp+0x12]
        push ecx
        lea ecx, ss:[esp+0x98]
        mov byte ptr ss : [esp+0x16D0], 0x10
        call dword ptr ds : [public_6399180]
        lea ecx, ss:[esp+0x15C]
        mov byte ptr ss : [esp+0x16CC], 0x11
        call public_6310170
        test al, al
        je public_6315433
        mov edi, edi
/*FIXUP public_63150a0 : nop
        push offset public_63994e8 @0x63150a0*/
  FIXUP public_63150a0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994e8
        lea ecx, ss:[esp+0x160]
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x15C]
        je public_63150d3
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ss : [esp+0x40], eax
        jmp public_631541b
/*FIXUP public_63150d3 : nop
        push offset public_63a38d4 @0x63150d3*/
  FIXUP public_63150d3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a38d4
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x15C]
        je public_6315136
        call public_6310b70
        mov esi, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x4C]
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_631541b
        mov edi, dword ptr ss : [esp+0x48]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x4C], ebp
        mov byte ptr ds : [eax+ebp], bl
        jmp public_631541b
/*FIXUP public_6315136 : nop
        push offset public_63a38c8 @0x6315136*/
  FIXUP public_6315136 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a38c8
        call public_6310410
        test al, al
        je public_6315207
        mov ecx, dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ss : [esp+0x58]
        push ecx
        push edx
        lea ecx, ss:[esp+0x5C]
        call public_6316c60
        push ebx
        lea ecx, ss:[esp+0x160]
        xor esi, esi
        call public_6310560
        test al, al
        jne public_631541b
        public_6315172 : nop
        mov eax, esi
        push eax
        lea ecx, ss:[esp+0x160]
        inc esi
        call public_6310a30
        mov ebp, eax
        mov al, byte ptr ss : [esp+0x12]
        push ebx
        lea ecx, ss:[esp+0xE8]
        mov byte ptr ss : [esp+0xE8], al
        call dword ptr ds : [public_63991b8]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        dec ecx
        push ecx
        push ebp
        lea ecx, ss:[esp+0xEC]
        call dword ptr ds : [public_63991a4]
        mov edx, dword ptr ss : [esp+0x5C]
        lea ecx, ss:[esp+0xE4]
        push ecx
        push edx
        lea ecx, ss:[esp+0x5C]
        mov byte ptr ss : [esp+0x16D4], 0x12
        call public_6316ae0
        push 1
        lea ecx, ss:[esp+0xE8]
        mov byte ptr ss : [esp+0x16D0], 0x11
        call dword ptr ds : [public_63991b8]
        push esi
        lea ecx, ss:[esp+0x160]
        call public_6310560
        test al, al
        je public_6315172
        jmp public_631541b
/*FIXUP public_6315207 : nop
        push offset public_63a38c0 @0x6315207*/
  FIXUP public_6315207 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a38c0
        lea ecx, ss:[esp+0x160]
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x15C]
        je public_631526e
        call public_6310b70
        mov esi, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x6C]
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_631541b
        mov edi, dword ptr ss : [esp+0x68]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x6C], ebp
        jmp public_6315418
/*FIXUP public_631526e : nop
        push offset public_63a38b4 @0x631526e*/
  FIXUP public_631526e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a38b4
        call public_6310410
        test al, al
        je public_6315345
        mov edx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ss : [esp+0x78]
        push edx
        push eax
        lea ecx, ss:[esp+0x7C]
        call public_6316c60
        push ebx
        lea ecx, ss:[esp+0x160]
        xor esi, esi
        call public_6310560
        test al, al
        jne public_631541b
        lea ebx, ds:[ebx]
        public_63152b0 : nop
        mov eax, esi
        push eax
        lea ecx, ss:[esp+0x160]
        inc esi
        call public_6310a30
        mov cl, byte ptr ss : [esp+0x12]
        mov byte ptr ss : [esp+0xD4], cl
        push ebx
        lea ecx, ss:[esp+0xD8]
        mov ebp, eax
        call dword ptr ds : [public_63991b8]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        dec ecx
        push ecx
        push ebp
        lea ecx, ss:[esp+0xDC]
        call dword ptr ds : [public_63991a4]
        mov eax, dword ptr ss : [esp+0x7C]
        lea edx, ss:[esp+0xD4]
        push edx
        push eax
        lea ecx, ss:[esp+0x7C]
        mov byte ptr ss : [esp+0x16D4], 0x13
        call public_6316ae0
        push 1
        lea ecx, ss:[esp+0xD8]
        mov byte ptr ss : [esp+0x16D0], 0x11
        call dword ptr ds : [public_63991b8]
        push esi
        lea ecx, ss:[esp+0x160]
        call public_6310560
        test al, al
        je public_63152b0
        jmp public_631541b
/*FIXUP public_6315345 : nop
        push offset public_639ea78 @0x6315345*/
  FIXUP public_6315345 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ea78
        lea ecx, ss:[esp+0x160]
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x15C]
        je public_63153b5
        call public_6310b70
        mov esi, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x8C]
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_631541b
        mov edi, dword ptr ss : [esp+0x88]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push ebp
        lea ecx, ss:[esp+0x88]
        call dword ptr ds : [public_63991d8]
        jmp public_631541b
/*FIXUP public_63153b5 : nop
        push offset public_63a38ac @0x63153b5*/
  FIXUP public_63153b5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a38ac
        call public_6310410
        test al, al
        je public_631541b
        lea ecx, ss:[esp+0x15C]
        call public_6310b70
        mov esi, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x9C]
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_631541b
        mov edi, dword ptr ss : [esp+0x98]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x98]
        mov dword ptr ss : [esp+0x9C], ebp
        public_6315418 : nop
        mov byte ptr ds : [ecx+ebp], bl
        public_631541b : nop
        lea ecx, ss:[esp+0x15C]
        call public_6310170
        test al, al
        jne public_63150a0
        mov edi, dword ptr ss : [esp+0x18]
        public_6315433 : nop
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x40]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        push 1
        lea ecx, ss:[esp+0x98]
        mov byte ptr ss : [esp+0x16D0], 0x18
        call dword ptr ds : [public_63991b8]
        push 1
        lea ecx, ss:[esp+0x88]
        mov byte ptr ss : [esp+0x16D0], 0x17
        call dword ptr ds : [public_63991b8]
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0x16CC], 0x16
        call public_6315b30
        push 1
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0x16D0], 0x15
        call dword ptr ds : [public_63991b8]
        lea ecx, ss:[esp+0x54]
        mov byte ptr ss : [esp+0x16CC], 0x14
        call public_6315b30
        lea ecx, ss:[esp+0x44]
        public_63154a7 : nop
        push 1
        mov byte ptr ss : [esp+0x16D0], bl
        call dword ptr ds : [public_63991b8]
        public_63154b6 : nop
        lea ecx, ss:[esp+0x15C]
        call public_6310070
        test al, al
        jne public_6314a40
        pop ebp
        public_63154cb : nop
        mov ebx, 0x1C
        lea ecx, ss:[esp+0x1580]
        mov dword ptr ss : [esp+0x16C8], ebx
        mov dword ptr ss : [esp+0x18], ecx
        lea ecx, ss:[esp+0x1580]
        mov byte ptr ss : [esp+0x16C8], 0x1D
        call public_6262630
        push 1
        lea ecx, ss:[esp+0x1584]
        mov byte ptr ss : [esp+0x16CC], bl
        call dword ptr ds : [public_63991b8]
        lea ecx, ss:[esp+0x158]
        mov dword ptr ss : [esp+0x16C8], 0x1E
        call public_6262630
        push 1
        lea ecx, ss:[esp+0x15C]
        mov dword ptr ss : [esp+0x16CC], 0xFFFFFFFF
        call dword ptr ds : [public_63991b8]
        mov al, 1
        jmp public_63155d9
        public_6315544 : nop
        mov edx, dword ptr ds : [public_6399028]
        push esi
        push 0x1CD
/*FIXUP push offset public_63a3880 @0x6315550*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3880
        mov eax, 0x100001
/*FIXUP push offset public_63a3844 @0x631555a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3844
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        mov ebx, 0x19
        lea eax, ss:[esp+0x1580]
        mov dword ptr ss : [esp+0x16C8], ebx
        mov dword ptr ss : [esp+0x18], eax
        lea ecx, ss:[esp+0x1580]
        mov byte ptr ss : [esp+0x16C8], 0x1A
        call public_6262630
        push 1
        lea ecx, ss:[esp+0x1584]
        mov byte ptr ss : [esp+0x16CC], bl
        call dword ptr ds : [public_63991b8]
        lea ecx, ss:[esp+0x158]
        mov dword ptr ss : [esp+0x16C8], 0x1B
        call public_6262630
        push 1
        lea ecx, ss:[esp+0x15C]
        mov dword ptr ss : [esp+0x16CC], 0xFFFFFFFF
        call dword ptr ds : [public_63991b8]
        xor al, al
        public_63155d9 : nop
        mov ecx, dword ptr ss : [esp+0x16C0]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x16C0
        ret 4
        UNREACHABLE_TRAP(0x63149d0)
    }
}

#undef public_6314a40
#undef public_6314af4
#undef public_6314b2a
#undef public_6314b96
#undef public_6314c31
#undef public_6314c79
#undef public_6314cca
#undef public_6314d19
#undef public_6314d1e
#undef public_6314d36
#undef public_6314d8d
#undef public_6314e08
#undef public_6314e3e
#undef public_6314e6a
#undef public_6314e96
#undef public_6314f02
#undef public_6314f67
#undef public_6314f8e
#undef public_6314fa6
#undef public_6314fd8
#undef public_63150a0
#undef public_63150d3
#undef public_6315136
#undef public_6315172
#undef public_6315207
#undef public_631526e
#undef public_63152b0
#undef public_6315345
#undef public_63153b5
#undef public_6315418
#undef public_631541b
#undef public_6315433
#undef public_63154a7
#undef public_63154b6
#undef public_63154cb
#undef public_6315544
#undef public_63155d9
