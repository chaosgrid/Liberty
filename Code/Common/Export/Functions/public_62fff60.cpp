#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b6920);
CLANG_FORWARD_PROC_SYMBOL(public_62b8e90);
CLANG_FORWARD_PROC_SYMBOL(public_62b8ef0);
CLANG_FORWARD_PROC_SYMBOL(public_62b95d0);
CLANG_FORWARD_PROC_SYMBOL(public_62b9cf0);
CLANG_FORWARD_PROC_SYMBOL(public_62bed70);
CLANG_FORWARD_PROC_SYMBOL(public_62feba0);
CLANG_FORWARD_PROC_SYMBOL(public_62ff1f0);
CLANG_FORWARD_PROC_SYMBOL(public_62fff60);
CLANG_FORWARD_PROC_SYMBOL(public_6301250);
CLANG_FORWARD_PROC_SYMBOL(public_6301340);
CLANG_FORWARD_PROC_SYMBOL(public_63016b0);
CLANG_FORWARD_PROC_SYMBOL(public_63026d0);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6395e6d);

#define public_6300030 _public_6300030
#define public_6300066 _public_6300066
#define public_630009a _public_630009a
#define public_63000ce _public_63000ce
#define public_63000ff _public_63000ff
#define public_6300172 _public_6300172
#define public_6300183 _public_6300183
#define public_6300201 _public_6300201
#define public_630020b _public_630020b
#define public_6300215 _public_6300215
#define public_630021f _public_630021f
#define public_630043d _public_630043d
#define public_6300446 _public_6300446

PROC_DECLARE(0x62fff60, internal_62fff60, public_62fff60);
extern "C" NAKED register_t __cdecl internal_62fff60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395e6d @0x62fff62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395e6d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x138
        mov al, byte ptr ss : [esp+3]
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x34], ecx
        xor edi, edi
        push edi
        lea ecx, ss:[esp+0x54]
        mov byte ptr ss : [esp+0x54], al
        call dword ptr ds : [public_63991b8]
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x60], cl
        push edi
        lea ecx, ss:[esp+0x64]
        mov dword ptr ss : [esp+0x154], edi
        call dword ptr ds : [public_63991b8]
        mov dl, byte ptr ss : [esp+0x13]
        push edi
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0x154], 1
        mov byte ptr ss : [esp+0x74], dl
        call dword ptr ds : [public_63991b8]
        mov al, byte ptr ss : [esp+0x13]
        push edi
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x154], 2
        mov byte ptr ss : [esp+0x44], al
        call dword ptr ds : [public_63991b8]
        mov cl, byte ptr ss : [esp+0x13]
        push edi
        mov byte ptr ss : [esp+0x18], cl
        push edi
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x158], 3
        call public_6301340
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], edi
        mov esi, dword ptr ss : [esp+0x158]
        mov ecx, esi
        mov byte ptr ss : [esp+0x150], 4
        call public_6310170
        test al, al
        je public_6300183
        mov bl, byte ptr ss : [esp+0x13]
        lea ecx, ds:[ecx]
/*FIXUP public_6300030 : nop
        push offset public_63994e8 @0x6300030*/
  FIXUP public_6300030 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994e8
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6300066
        call public_6310b70
        mov edx, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        lea ecx, ss:[esp+0x58]
        call dword ptr ds : [public_63991a4]
        jmp public_6300172
/*FIXUP public_6300066 : nop
        push offset public_639a7ec @0x6300066*/
  FIXUP public_6300066 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a7ec
        call public_6310410
        test al, al
        mov ecx, esi
        je public_630009a
        call public_6310b70
        mov edx, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        lea ecx, ss:[esp+0x68]
        call dword ptr ds : [public_63991a4]
        jmp public_6300172
/*FIXUP public_630009a : nop
        push offset public_639a288 @0x630009a*/
  FIXUP public_630009a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a288
        call public_6310410
        test al, al
        mov ecx, esi
        je public_63000ce
        call public_6310b70
        mov edx, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        lea ecx, ss:[esp+0x78]
        call dword ptr ds : [public_63991a4]
        jmp public_6300172
/*FIXUP public_63000ce : nop
        push offset public_63a23fc @0x63000ce*/
  FIXUP public_63000ce : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a23fc
        call public_6310410
        test al, al
        mov ecx, esi
        je public_63000ff
        call public_6310b70
        mov edx, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_63991a4]
        jmp public_6300172
/*FIXUP public_63000ff : nop
        push offset public_6399e04 @0x63000ff*/
  FIXUP public_63000ff : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399e04
        call public_6310410
        test al, al
        je public_6300172
        mov ecx, esi
        call public_6310b70
        push 0
        lea ecx, ss:[esp+0x28]
        mov ebp, eax
        mov byte ptr ss : [esp+0x28], bl
        call dword ptr ds : [public_63991b8]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        dec ecx
        push ecx
        push ebp
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_63991a4]
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x15C], 5
        call public_62b9cf0
        push 1
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x154], 4
        call dword ptr ds : [public_63991b8]
        public_6300172 : nop
        mov ecx, esi
        call public_6310170
        test al, al
        jne public_6300030
        xor edi, edi
        public_6300183 : nop
        lea edx, ss:[esp+0x13]
        push edx
        lea ecx, ss:[esp+0x88]
        call dword ptr ds : [public_6399180]
        lea eax, ss:[esp+0x23]
        push eax
        lea ecx, ss:[esp+0x98]
        mov byte ptr ss : [esp+0x154], 6
        call dword ptr ds : [public_6399180]
        lea ecx, ss:[esp+0x22]
        push ecx
        lea ecx, ss:[esp+0xA8]
        mov byte ptr ss : [esp+0x154], 7
        call dword ptr ds : [public_6399180]
        lea edx, ss:[esp+0x21]
        push edx
        lea ecx, ss:[esp+0xB8]
        mov byte ptr ss : [esp+0x154], 8
        call public_6301250
        mov dword ptr ss : [esp+0x80], edi
        mov ebx, dword ptr ss : [esp+0x44]
        cmp ebx, edi
        mov ecx, dword ptr ds : [public_63991d0]
        mov byte ptr ss : [esp+0x150], 9
        jne public_6300201
        mov ebx, ecx
        public_6300201 : nop
        mov ebp, dword ptr ss : [esp+0x74]
        cmp ebp, edi
        jne public_630020b
        mov ebp, ecx
        public_630020b : nop
        mov esi, dword ptr ss : [esp+0x64]
        test esi, esi
        jne public_6300215
        mov esi, ecx
        public_6300215 : nop
        mov eax, dword ptr ss : [esp+0x54]
        test eax, eax
        jne public_630021f
        mov eax, ecx
        public_630021f : nop
        push eax
        call public_62feba0
        or ecx, 0xFFFFFFFF
        add esp, 4
        mov dword ptr ss : [esp+0x80], eax
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ecx
        push esi
        lea ecx, ss:[esp+0x8C]
        call dword ptr ds : [public_63991a4]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        dec ecx
        push ecx
        push ebp
        lea ecx, ss:[esp+0x9C]
        call dword ptr ds : [public_63991a4]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push ebx
        lea ecx, ss:[esp+0xAC]
        call dword ptr ds : [public_63991a4]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0xB8]
        call public_62b8ef0
        lea ecx, ss:[esp+0x80]
        push ecx
        lea edx, ss:[esp+0x84]
        push edx
        lea eax, ss:[esp+0x10C]
        push eax
        call public_63026d0
        add esp, 0xC
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [esp+0xC0], ecx
        mov bl, 0xA
        push eax
        lea ecx, ss:[esp+0xC8]
        mov byte ptr ss : [esp+0x154], bl
        call public_62b6920
        mov ecx, dword ptr ss : [esp+0x34]
        lea edx, ss:[esp+0xC0]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        add ecx, 0x80
        mov byte ptr ss : [esp+0x158], 0xB
        call public_63016b0
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x40]
        call public_62bed70
        lea ecx, ss:[esp+0xC4]
        mov byte ptr ss : [esp+0x150], bl
        call public_62ff1f0
        lea ecx, ss:[esp+0x108]
        mov byte ptr ss : [esp+0x150], 9
        call public_62ff1f0
        mov byte ptr ss : [esp+0x150], 0xE
        lea ecx, ss:[esp+0xB4]
        call public_62b8e90
        push 1
        lea ecx, ss:[esp+0xA8]
        mov byte ptr ss : [esp+0x154], 0xD
        call dword ptr ds : [public_63991b8]
        push 1
        lea ecx, ss:[esp+0x98]
        mov byte ptr ss : [esp+0x154], 0xC
        call dword ptr ds : [public_63991b8]
        push 1
        lea ecx, ss:[esp+0x88]
        mov byte ptr ss : [esp+0x154], 4
        call dword ptr ds : [public_63991b8]
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x154], 3
        call public_632c410
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_62b95d0
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_6391d5a
        add esp, 4
        xor esi, esi
        push 1
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], esi
        mov byte ptr ss : [esp+0x154], 2
        call dword ptr ds : [public_63991b8]
        push 1
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0x154], 1
        call dword ptr ds : [public_63991b8]
        push 1
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0x154], 0
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ss : [esp+0x54]
        pop edi
        cmp eax, esi
        pop esi
        pop ebp
        pop ebx
        je public_6300446
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_630043d
        cmp cl, 0xFF
        je public_630043d
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+0x138]
        mov dword ptr fs : [0], ecx
        add esp, 0x144
        ret 4
        public_630043d : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6300446 : nop
        mov ecx, dword ptr ss : [esp+0x138]
        mov dword ptr fs : [0], ecx
        add esp, 0x144
        ret 4
        UNREACHABLE_TRAP(0x62fff60)
    }
}

#undef public_6300030
#undef public_6300066
#undef public_630009a
#undef public_63000ce
#undef public_63000ff
#undef public_6300172
#undef public_6300183
#undef public_6300201
#undef public_630020b
#undef public_6300215
#undef public_630021f
#undef public_630043d
#undef public_6300446
