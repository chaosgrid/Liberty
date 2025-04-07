#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6d46d20);
CLANG_FORWARD_PROC_SYMBOL(public_6d4a200);
CLANG_FORWARD_PROC_SYMBOL(public_6d575f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d57da0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63242);

#define public_6d4a24f _public_6d4a24f
#define public_6d4a310 _public_6d4a310
#define public_6d4a33c _public_6d4a33c
#define public_6d4a35e _public_6d4a35e
#define public_6d4a384 _public_6d4a384
#define public_6d4a3a3 _public_6d4a3a3
#define public_6d4a3ad _public_6d4a3ad
#define public_6d4a3c0 _public_6d4a3c0
#define public_6d4a3f0 _public_6d4a3f0
#define public_6d4a408 _public_6d4a408
#define public_6d4a412 _public_6d4a412

PROC_DECLARE(0x6d4a200, internal_6d4a200, public_6d4a200);
extern "C" NAKED register_t __cdecl internal_6d4a200()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d63242 @0x6d4a208*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63242
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x95C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        call dword ptr ds : [public_6d647e8]
        test al, al
        jne public_6d4a24f
/*FIXUP push offset public_6d6b484 @0x6d4a22b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b484
        push 0x70E
/*FIXUP push offset public_6d6b280 @0x6d4a235*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b280
        mov eax, 0x100001
/*FIXUP push offset public_6d655d8 @0x6d4a23f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d655d8
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d4a24f : nop
        mov ecx, dword ptr ds : [edi+0x3F0]
        mov dword ptr ds : [edi+0x3EC], ecx
        lea ecx, ss:[esp+0x3C]
        call public_6d46ab0
        push eax
        lea edx, ds:[edi+0x64]
        push edx
        lea ecx, ss:[esp+0x3DC]
        mov dword ptr ss : [esp+0x97C], 0
        call public_6d57da0
        push eax
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ds:[edi+0x50]
        mov byte ptr ss : [esp+0x97C], 1
        call public_6d575f0
        mov ebx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x5D4]
        mov dword ptr ss : [esp+0x2C], ebx
        mov byte ptr ss : [esp+0x974], 0
        call public_6d46d20
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x974], 0xFFFFFFFF
        call public_6d46d20
        mov ecx, dword ptr ds : [ebx+0x468]
        lea ebp, ds:[ebx+0x478]
        lea esi, ds:[edi+0x26C]
        cmp esi, ebp
        mov dword ptr ds : [edi+0x268], ecx
        je public_6d4a35e
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d646b4]
        mov ebx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_6d646b8]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        mov ebp, dword ptr ss : [ebp+4]
        je public_6d4a33c
        mov ecx, dword ptr ss : [esp+0x10]
        lea esp, ss:[esp]
        public_6d4a310 : nop
        cmp ecx, ebp
        je public_6d4a33c
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0xC], eax
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx]
        cmp eax, ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], eax
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6d4a310
        public_6d4a33c : nop
        push ebx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d643a8]
        mov eax, dword ptr ss : [esp+0x10]
        push ebp
        push eax
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6d643a4]
        mov ebx, dword ptr ss : [esp+0x2C]
        public_6d4a35e : nop
        lea ecx, ss:[esp+0x1F]
        push ecx
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_6d648e4]
        mov eax, dword ptr ds : [ebx+0x470]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x974], 2
        je public_6d4a3ad
        public_6d4a384 : nop
        mov al, byte ptr ds : [esi+0x14]
        test al, al
        je public_6d4a3a3
        mov edx, dword ptr ss : [esp+0x24]
        lea eax, ds:[esi+8]
        push eax
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6d648a8]
        public_6d4a3a3 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0x470]
        jne public_6d4a384
        public_6d4a3ad : nop
        mov eax, dword ptr ds : [edi+0x27C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d4a412
        mov ebp, dword ptr ds : [public_6d642fc]
        nop 
        public_6d4a3c0 : nop
        mov al, byte ptr ds : [esi+0x14]
        test al, al
        jne public_6d4a408
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call ebp
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        cmp eax, 0x1B
        je public_6d4a3f0
        cmp eax, 0x1A
        je public_6d4a3f0
        cmp eax, 0x1F
        je public_6d4a3f0
        cmp eax, 0x20
        je public_6d4a3f0
        cmp eax, 0x21
        jne public_6d4a408
        public_6d4a3f0 : nop
        lea eax, ds:[esi+8]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6d648a8]
        public_6d4a408 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x27C]
        jne public_6d4a3c0
        public_6d4a412 : nop
        mov eax, dword ptr ds : [edi+0x27C]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x278]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d64884]
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d648e8]
        lea ecx, ds:[ebx+0x46C]
        push esi
        call dword ptr ds : [public_6d648e8]
        lea ecx, ds:[ebx+0x450]
        push esi
        call dword ptr ds : [public_6d648e8]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x980], 0xFFFFFFFF
        call dword ptr ds : [public_6d64884]
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x970]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x968
        ret 
        UNREACHABLE_TRAP(0x6d4a200)
    }
}

#undef public_6d4a24f
#undef public_6d4a310
#undef public_6d4a33c
#undef public_6d4a35e
#undef public_6d4a384
#undef public_6d4a3a3
#undef public_6d4a3ad
#undef public_6d4a3c0
#undef public_6d4a3f0
#undef public_6d4a408
#undef public_6d4a412
