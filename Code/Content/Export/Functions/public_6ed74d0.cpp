#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6ed6800);
CLANG_FORWARD_PROC_SYMBOL(public_6ed74d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb590);
CLANG_FORWARD_PROC_SYMBOL(public_6eec0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab290);

#define public_6ed75f1 _public_6ed75f1
#define public_6ed7782 _public_6ed7782
#define public_6ed77ee _public_6ed77ee
#define public_6ed7899 _public_6ed7899
#define public_6ed78aa _public_6ed78aa
#define public_6ed78bb _public_6ed78bb
#define public_6ed78ca _public_6ed78ca
#define public_6ed78d2 _public_6ed78d2
#define public_6ed79ea _public_6ed79ea
#define public_6ed79fb _public_6ed79fb
#define public_6ed7a0c _public_6ed7a0c
#define public_6ed7a1b _public_6ed7a1b
#define public_6ed7a23 _public_6ed7a23
#define public_6ed7ab4 _public_6ed7ab4
#define public_6ed7b12 _public_6ed7b12
#define public_6ed7bb9 _public_6ed7bb9
#define public_6ed7bca _public_6ed7bca
#define public_6ed7bdb _public_6ed7bdb
#define public_6ed7bea _public_6ed7bea
#define public_6ed7bf2 _public_6ed7bf2
#define public_6ed7d4d _public_6ed7d4d
#define public_6ed7d4f _public_6ed7d4f
#define public_6ed7d52 _public_6ed7d52

PROC_DECLARE(0x6ed74d0, internal_6ed74d0, public_6ed74d0);
extern "C" NAKED register_t __cdecl internal_6ed74d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6fab290 @0x6ed74d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab290
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xEC
        mov eax, dword ptr ss : [esp+0x100]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x108]
        push ebp
        push esi
        push edi
        lea edx, ss:[esp+0x1A]
        mov dword ptr ds : [ebx+8], ecx
        xor edi, edi
        lea ebp, ds:[ebx+0x14]
        lea esi, ds:[ebx+0xC]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0xB8], ebx
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [ebx+0x10], edi
        call public_6ead6a0
        mov eax, dword ptr ss : [esp+0x10C]
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea ecx, ss:[esp+0x110]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x10C], edi
        mov dword ptr ds : [ebx], offset public_6fb6454
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6ed7d4f
        push 0x40
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6ed7d4d
        mov edx, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10C]
        push edx
        call public_6f73930
        cmp dword ptr ss : [esp+0x118], 6
        mov ecx, ebp
        jne public_6ed7782
        mov dword ptr ds : [ebx+0x28], 0x4A3E
        call public_6eb6b30
        cmp eax, 6
        jae public_6ed75f1
        push 0x18
        call public_6fa912a
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ss : [ebp+8]
        push edi
        push eax
        push ecx
        mov ecx, ebp
        call public_6eed270
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+4]
        push edx
        push eax
        mov ecx, ebp
        call public_6ea1490
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_6fa8fe0
        lea edx, ds:[edi+0x18]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], edx
        call public_6fa3db0
        lea eax, ds:[edi+eax*4]
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], edi
/*FIXUP public_6ed75f1 : nop
        push offset public_6fb6444 @0x6ed75f1*/
  FIXUP public_6ed75f1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6444
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], 0
        mov byte ptr ss : [esp+0x24], 0
        call public_6ead640
        mov ecx, dword ptr ds : [esi]
        push ecx
/*FIXUP push offset public_6fb6064 @0x6ed760f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0xC4]
        push eax
        call public_6eeaf10
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x70]
        rep movsd
        mov esi, dword ptr ds : [public_6fb3684]
        lea ecx, ss:[esp+0x74]
        push ecx
        call esi
        add esp, 0x14
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb6424 @0x6ed7657*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6424
        call esi
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6eb5770
/*FIXUP push offset public_6fb640c @0x6ed7675*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb640c
        call esi
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb63f4 @0x6ed7693*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb63f4
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], 0
        mov byte ptr ss : [esp+0x24], 0
        call public_6ead640
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
/*FIXUP push offset public_6fb6064 @0x6ed76b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0xC4]
        push ecx
        call public_6eeaf10
        lea edx, ss:[esp+0x74]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x70]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        mov dword ptr ss : [esp+0x1C], 0
        mov byte ptr ss : [esp+0x20], 0
/*FIXUP push offset public_6fb63dc @0x6ed7705*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb63dc
        lea ecx, ss:[esp+0x20]
        call public_6ead640
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
/*FIXUP push offset public_6fb62ec @0x6ed7717*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62ec
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0xC4]
        push ecx
        call public_6eeaf10
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x70]
        lea edx, ss:[esp+0x74]
        rep movsd
        mov esi, dword ptr ds : [public_6fb3684]
        push edx
        call esi
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb63c4 @0x6ed775f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb63c4
        call esi
        add esp, 4
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        call public_6eb5770
        jmp public_6ed7d52
        public_6ed7782 : nop
        cmp dword ptr ss : [esp+0x11C], 0x14
        jg public_6ed7ab4
        mov dword ptr ds : [ebx+0x28], 0x4A3F
        call public_6eb6b30
        cmp eax, 7
        jae public_6ed77ee
        push 0x1C
        call public_6fa912a
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+4]
        add esp, 4
        mov edi, eax
        push edi
        push ecx
        push edx
        mov ecx, ebp
        call public_6eed270
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+4]
        push eax
        push ecx
        mov ecx, ebp
        call public_6ea1490
        mov edx, dword ptr ss : [ebp+4]
        push edx
        call public_6fa8fe0
        lea eax, ds:[edi+0x1C]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], eax
        call public_6fa3db0
        lea ecx, ds:[edi+eax*4]
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+4], edi
/*FIXUP public_6ed77ee : nop
        push offset public_6fb6444 @0x6ed77ee*/
  FIXUP public_6ed77ee : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6444
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], 0
        mov byte ptr ss : [esp+0x24], 0
        call public_6ead640
        mov edx, dword ptr ds : [esi]
        push edx
/*FIXUP push offset public_6fb6064 @0x6ed780c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0xC4]
        push ecx
        call public_6eeaf10
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x70]
        lea edx, ss:[esp+0x74]
        rep movsd
        mov esi, dword ptr ds : [public_6fb3684]
        push edx
        call esi
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb6424 @0x6ed7854*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6424
        call esi
        add esp, 4
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        call public_6eb5770
        mov ecx, dword ptr ss : [esp+0x118]
        lea eax, ds:[ecx-1]
        cmp eax, 5
        mov dword ptr ss : [esp+0x1C], 0
        mov byte ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x14], eax
        ja public_6ed78d2
/*FIXUP jmp dword ptr ds : [eax*4+public_6ed7d70] @0x6ed7892*/
  JMPTB cmp eax, 0
  JMPTB je public_6ed7899
  JMPTB cmp eax, 1
  JMPTB je public_6ed78d2
  JMPTB cmp eax, 2
  JMPTB je public_6ed78aa
  JMPTB cmp eax, 3
  JMPTB je public_6ed78aa
  JMPTB cmp eax, 4
  JMPTB je public_6ed78aa
  JMPTB cmp eax, 5
  JMPTB je public_6ed78bb
  JMPTB int 3
/*FIXUP public_6ed7899 : nop
        push offset public_6fb572c @0x6ed7899*/
  FIXUP public_6ed7899 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
/*FIXUP push offset public_6fb62d0 @0x6ed789e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62d0
        lea edx, ss:[esp+0x24]
        push edx
        jmp public_6ed78ca
/*FIXUP public_6ed78aa : nop
        push offset public_6fb572c @0x6ed78aa*/
  FIXUP public_6ed78aa : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
/*FIXUP push offset public_6fb62b4 @0x6ed78af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62b4
        lea eax, ss:[esp+0x24]
        push eax
        jmp public_6ed78ca
/*FIXUP public_6ed78bb : nop
        push offset public_6fb572c @0x6ed78bb*/
  FIXUP public_6ed78bb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
/*FIXUP push offset public_6fb6298 @0x6ed78c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6298
        lea ecx, ss:[esp+0x24]
        push ecx
        public_6ed78ca : nop
        call public_6eec2b0
        add esp, 0xC
        public_6ed78d2 : nop
        lea edx, ss:[esp+0x64]
        mov ecx, 0x11
        lea esi, ss:[esp+0x1C]
        lea edi, ss:[esp+0x60]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb63f4 @0x6ed7903*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb63f4
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], 0
        mov byte ptr ss : [esp+0x24], 0
        call public_6ead640
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
/*FIXUP push offset public_6fb6064 @0x6ed7922*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0xC4]
        push ecx
        call public_6eeaf10
        lea edx, ss:[esp+0x74]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x70]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb63dc @0x6ed7968*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb63dc
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], 0
        mov byte ptr ss : [esp+0x24], 0
        call public_6ead640
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
/*FIXUP push offset public_6fb62ec @0x6ed7987*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62ec
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0xC4]
        push ecx
        call public_6eeaf10
        lea edx, ss:[esp+0x74]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x70]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, 5
        mov dword ptr ss : [esp+0x1C], 0
        mov byte ptr ss : [esp+0x20], 0
        ja public_6ed7a23
/*FIXUP jmp dword ptr ds : [eax*4+public_6ed7d88] @0x6ed79e3*/
  JMPTB cmp eax, 0
  JMPTB je public_6ed79ea
  JMPTB cmp eax, 1
  JMPTB je public_6ed7a23
  JMPTB cmp eax, 2
  JMPTB je public_6ed79fb
  JMPTB cmp eax, 3
  JMPTB je public_6ed79fb
  JMPTB cmp eax, 4
  JMPTB je public_6ed79fb
  JMPTB cmp eax, 5
  JMPTB je public_6ed7a0c
  JMPTB int 3
/*FIXUP public_6ed79ea : nop
        push offset public_6fb63bc @0x6ed79ea*/
  FIXUP public_6ed79ea : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb63bc
/*FIXUP push offset public_6fb62d0 @0x6ed79ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62d0
        lea edx, ss:[esp+0x24]
        push edx
        jmp public_6ed7a1b
/*FIXUP public_6ed79fb : nop
        push offset public_6fb63bc @0x6ed79fb*/
  FIXUP public_6ed79fb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb63bc
/*FIXUP push offset public_6fb62b4 @0x6ed7a00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62b4
        lea eax, ss:[esp+0x24]
        push eax
        jmp public_6ed7a1b
/*FIXUP public_6ed7a0c : nop
        push offset public_6fb63bc @0x6ed7a0c*/
  FIXUP public_6ed7a0c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb63bc
/*FIXUP push offset public_6fb6298 @0x6ed7a11*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6298
        lea ecx, ss:[esp+0x24]
        push ecx
        public_6ed7a1b : nop
        call public_6eec2b0
        add esp, 0xC
        public_6ed7a23 : nop
        lea edx, ss:[esp+0x64]
        mov ecx, 0x11
        lea esi, ss:[esp+0x1C]
        lea edi, ss:[esp+0x60]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        mov edx, dword ptr ss : [esp+0x11C]
/*FIXUP push offset public_6fb6064 @0x6ed7a5b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        inc edx
        push edx
        lea eax, ss:[esp+0x24]
/*FIXUP push offset public_6fb63a4 @0x6ed7a66*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb63a4
        push eax
        mov dword ptr ss : [esp+0x2C], 0
        mov byte ptr ss : [esp+0x30], 0
        call public_6eec2b0
        mov ecx, 0x11
        lea esi, ss:[esp+0x2C]
        lea edi, ss:[esp+0x70]
        rep movsd
        lea ecx, ss:[esp+0x74]
        push ecx
        call dword ptr ds : [public_6fb3684]
        add esp, 0x14
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        call public_6eb5770
        jmp public_6ed7d52
        public_6ed7ab4 : nop
        mov dword ptr ds : [ebx+0x28], 0x4A40
        call public_6eb6b30
        cmp eax, 8
        jae public_6ed7b12
        push 0x20
        call public_6fa912a
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+4]
        add esp, 4
        mov edi, eax
        push edi
        push ecx
        push edx
        mov ecx, ebp
        call public_6eed270
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+4]
        push eax
        push ecx
        mov ecx, ebp
        call public_6ea1490
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        lea edx, ds:[edi+0x20]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], edx
        call public_6fa3db0
        lea eax, ds:[edi+eax*4]
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], edi
/*FIXUP public_6ed7b12 : nop
        push offset public_6fb6444 @0x6ed7b12*/
  FIXUP public_6ed7b12 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6444
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], 0
        mov byte ptr ss : [esp+0x24], 0
        call public_6ead640
        mov ecx, dword ptr ds : [esi]
        push ecx
/*FIXUP push offset public_6fb6064 @0x6ed7b30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0xC4]
        push eax
        call public_6eeaf10
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x70]
        rep movsd
        mov esi, dword ptr ds : [public_6fb3684]
        lea ecx, ss:[esp+0x74]
        push ecx
        call esi
        add esp, 0x14
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb6424 @0x6ed7b78*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6424
        call esi
        add esp, 4
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+8]
        push ecx
        push eax
        mov ecx, ebp
        call public_6eb5770
        mov edx, dword ptr ss : [esp+0x118]
        lea eax, ds:[edx-1]
        cmp eax, 5
        mov dword ptr ss : [esp+0x1C], 0
        mov byte ptr ss : [esp+0x20], 0
        ja public_6ed7bf2
/*FIXUP jmp dword ptr ds : [eax*4+public_6ed7da0] @0x6ed7bb2*/
  JMPTB cmp eax, 0
  JMPTB je public_6ed7bb9
  JMPTB cmp eax, 1
  JMPTB je public_6ed7bf2
  JMPTB cmp eax, 2
  JMPTB je public_6ed7bca
  JMPTB cmp eax, 3
  JMPTB je public_6ed7bca
  JMPTB cmp eax, 4
  JMPTB je public_6ed7bca
  JMPTB cmp eax, 5
  JMPTB je public_6ed7bdb
  JMPTB int 3
/*FIXUP public_6ed7bb9 : nop
        push offset public_6fb572c @0x6ed7bb9*/
  FIXUP public_6ed7bb9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
/*FIXUP push offset public_6fb62d0 @0x6ed7bbe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62d0
        lea eax, ss:[esp+0x24]
        push eax
        jmp public_6ed7bea
/*FIXUP public_6ed7bca : nop
        push offset public_6fb572c @0x6ed7bca*/
  FIXUP public_6ed7bca : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
/*FIXUP push offset public_6fb62b4 @0x6ed7bcf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62b4
        lea ecx, ss:[esp+0x24]
        push ecx
        jmp public_6ed7bea
/*FIXUP public_6ed7bdb : nop
        push offset public_6fb572c @0x6ed7bdb*/
  FIXUP public_6ed7bdb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
/*FIXUP push offset public_6fb6298 @0x6ed7be0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6298
        lea edx, ss:[esp+0x24]
        push edx
        public_6ed7bea : nop
        call public_6eec2b0
        add esp, 0xC
        public_6ed7bf2 : nop
        lea eax, ss:[esp+0x64]
        mov ecx, 0x11
        lea esi, ss:[esp+0x1C]
        lea edi, ss:[esp+0x60]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+8]
        push ecx
        push eax
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb63f4 @0x6ed7c23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb63f4
        lea ecx, ss:[esp+0xBC]
        call public_6eec1f0
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
        add eax, 4
/*FIXUP push offset public_6fb6064 @0x6ed7c3b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        push eax
        lea eax, ss:[esp+0x6C]
        push eax
        call public_6eeaf10
        sub esp, 0x34
        mov esi, eax
        mov edi, esp
        mov ecx, 0x11
        rep movsd
        mov ecx, ebx
        call public_6ed6800
/*FIXUP push offset public_6fb63dc @0x6ed7c60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb63dc
        lea ecx, ss:[esp+0xBC]
        call public_6eec1f0
        mov ecx, dword ptr ds : [ebx+0xC]
        push ecx
/*FIXUP push offset public_6fb62ec @0x6ed7c75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62ec
        add eax, 4
        push eax
        lea edx, ss:[esp+0x6C]
        push edx
        call public_6eeaf10
        sub esp, 0x34
        mov esi, eax
        mov edi, esp
        mov ecx, 0x11
        rep movsd
        mov ecx, ebx
        call public_6ed6800
        mov eax, dword ptr ss : [esp+0x118]
/*FIXUP push offset public_6fb63bc @0x6ed7ca4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb63bc
        push eax
        lea ecx, ss:[esp+0xC0]
        push ecx
        call public_6eec0c0
        sub esp, 0x38
        mov esi, eax
        mov edi, esp
        mov ecx, 0x11
        rep movsd
        mov ecx, ebx
        call public_6ed6800
        lea edx, ss:[esp+0x1B]
        push edx
        lea ecx, ss:[esp+0xA8]
        call public_6ead6a0
        mov ecx, dword ptr ss : [esp+0x11C]
        lea eax, ss:[esp+0xA4]
        push eax
        inc ecx
/*FIXUP push offset public_6fb6064 @0x6ed7ced*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        push ecx
        mov byte ptr ss : [esp+0x110], 1
        call public_6eeb590
        mov esi, dword ptr ss : [esp+0xB4]
        sub esp, 0x38
        mov ecx, 0x11
        mov edi, esp
        rep movsd
        mov ecx, ebx
        call public_6ed6800
        mov edx, dword ptr ss : [esp+0xA8]
        sub esp, 0x44
        lea esi, ds:[edx+0x44]
        mov edi, esp
        mov ecx, 0x11
        rep movsd
        mov ecx, ebx
        call public_6ed6800
        lea ecx, ss:[esp+0xA4]
        mov byte ptr ss : [esp+0x104], 0
        call public_6eec8d0
        jmp public_6ed7d52
        public_6ed7d4d : nop
        xor edi, edi
        public_6ed7d4f : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6ed7d52 : nop
        mov ecx, dword ptr ss : [esp+0xFC]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xF8
        ret 0x14
        UNREACHABLE_TRAP(0x6ed74d0)
        ASM_EXPORT_ENTRY_FIRST(0x6ed7899, public_6ed7899)
        ASM_EXPORT_ENTRY(0x6ed78aa, public_6ed78aa)
        ASM_EXPORT_ENTRY(0x6ed78bb, public_6ed78bb)
        ASM_EXPORT_ENTRY(0x6ed78d2, public_6ed78d2)
        ASM_EXPORT_ENTRY(0x6ed79ea, public_6ed79ea)
        ASM_EXPORT_ENTRY(0x6ed79fb, public_6ed79fb)
        ASM_EXPORT_ENTRY(0x6ed7a0c, public_6ed7a0c)
        ASM_EXPORT_ENTRY(0x6ed7a23, public_6ed7a23)
        ASM_EXPORT_ENTRY(0x6ed7bb9, public_6ed7bb9)
        ASM_EXPORT_ENTRY(0x6ed7bca, public_6ed7bca)
        ASM_EXPORT_ENTRY(0x6ed7bdb, public_6ed7bdb)
        ASM_EXPORT_ENTRY_LAST(0x6ed7bf2, public_6ed7bf2)
    }
}

#undef public_6ed75f1
#undef public_6ed7782
#undef public_6ed77ee
#undef public_6ed7899
#undef public_6ed78aa
#undef public_6ed78bb
#undef public_6ed78ca
#undef public_6ed78d2
#undef public_6ed79ea
#undef public_6ed79fb
#undef public_6ed7a0c
#undef public_6ed7a1b
#undef public_6ed7a23
#undef public_6ed7ab4
#undef public_6ed7b12
#undef public_6ed7bb9
#undef public_6ed7bca
#undef public_6ed7bdb
#undef public_6ed7bea
#undef public_6ed7bf2
#undef public_6ed7d4d
#undef public_6ed7d4f
#undef public_6ed7d52

#pragma init_seg(compiler)
extern "C" void const* const public_6ed7899 = __AsmFindLabelExport(&internal_6ed74d0, 0x6ed7899);
extern "C" void const* const public_6ed78aa = __AsmFindLabelExport(&internal_6ed74d0, 0x6ed78aa);
extern "C" void const* const public_6ed78bb = __AsmFindLabelExport(&internal_6ed74d0, 0x6ed78bb);
extern "C" void const* const public_6ed78d2 = __AsmFindLabelExport(&internal_6ed74d0, 0x6ed78d2);
extern "C" void const* const public_6ed79ea = __AsmFindLabelExport(&internal_6ed74d0, 0x6ed79ea);
extern "C" void const* const public_6ed79fb = __AsmFindLabelExport(&internal_6ed74d0, 0x6ed79fb);
extern "C" void const* const public_6ed7a0c = __AsmFindLabelExport(&internal_6ed74d0, 0x6ed7a0c);
extern "C" void const* const public_6ed7a23 = __AsmFindLabelExport(&internal_6ed74d0, 0x6ed7a23);
extern "C" void const* const public_6ed7bb9 = __AsmFindLabelExport(&internal_6ed74d0, 0x6ed7bb9);
extern "C" void const* const public_6ed7bca = __AsmFindLabelExport(&internal_6ed74d0, 0x6ed7bca);
extern "C" void const* const public_6ed7bdb = __AsmFindLabelExport(&internal_6ed74d0, 0x6ed7bdb);
extern "C" void const* const public_6ed7bf2 = __AsmFindLabelExport(&internal_6ed74d0, 0x6ed7bf2);
