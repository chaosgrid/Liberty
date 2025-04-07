#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262630);
CLANG_FORWARD_PROC_SYMBOL(public_62ff7d0);
CLANG_FORWARD_PROC_SYMBOL(public_62ff8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6300bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6301980);
CLANG_FORWARD_PROC_SYMBOL(public_63027d0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_630f660);
CLANG_FORWARD_PROC_SYMBOL(public_630f770);
CLANG_FORWARD_PROC_SYMBOL(public_630f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63104c0);
CLANG_FORWARD_PROC_SYMBOL(public_63104e0);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_6395f74);

#define public_6300c60 _public_6300c60
#define public_6300cb0 _public_6300cb0
#define public_6300cf6 _public_6300cf6
#define public_6300d17 _public_6300d17
#define public_6300d20 _public_6300d20
#define public_6300d53 _public_6300d53
#define public_6300d72 _public_6300d72
#define public_6300d99 _public_6300d99
#define public_6300da7 _public_6300da7
#define public_6300dd0 _public_6300dd0
#define public_6300df6 _public_6300df6
#define public_6300df9 _public_6300df9
#define public_6300e0d _public_6300e0d
#define public_6300e68 _public_6300e68
#define public_6300ea2 _public_6300ea2
#define public_6300ed3 _public_6300ed3
#define public_6300f02 _public_6300f02
#define public_6300f28 _public_6300f28
#define public_6300f3e _public_6300f3e
#define public_6300f50 _public_6300f50
#define public_6300f70 _public_6300f70
#define public_6300fb8 _public_6300fb8
#define public_6300fc1 _public_6300fc1
#define public_630100b _public_630100b
#define public_6301014 _public_6301014

PROC_DECLARE(0x6300bf0, internal_6300bf0, public_6300bf0);
extern "C" NAKED register_t __cdecl internal_6300bf0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6395f74 @0x6300bf8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395f74
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1A30
        mov dword ptr fs : [0], esp
        call public_6391dc0
        push ebx
        mov dword ptr ss : [esp+4], ecx
        push esi
        lea ecx, ss:[esp+0x4D0]
        call public_630f660
        mov esi, dword ptr ss : [esp+0x1A48]
        xor ebx, ebx
        push ebx
        push esi
        lea ecx, ss:[esp+0x4D8]
        mov dword ptr ss : [esp+0x1A48], ebx
        call public_630f9b0
        test al, al
        je public_6300f50
        lea ecx, ss:[esp+0x4D0]
        call public_6310070
        test al, al
        je public_6300f3e
        push ebp
        push edi
        lea ecx, ds:[ecx]
/*FIXUP public_6300c60 : nop
        push offset public_63a2648 @0x6300c60*/
  FIXUP public_6300c60 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2648
        lea ecx, ss:[esp+0x4DC]
        call public_63103c0
        test al, al
        lea ecx, ss:[esp+0x4D8]
        je public_6300f02
        xor eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x4C], ebx
        call public_6310170
        test al, al
        je public_6300e0d
        nop 
        lea esp, ss:[esp]
        public_6300cb0 : nop
        mov byte ptr ss : [esp+0xD8], bl
        xor eax, eax
        mov ecx, 0xFF
        lea edi, ss:[esp+0xD9]
        rep stosd
        stosw 
/*FIXUP push offset public_63994e8 @0x6300cc9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994e8
        lea ecx, ss:[esp+0x4DC]
        stosb 
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x4D8]
        je public_6300d20
        call public_6310b70
        mov esi, eax
        lea edx, ss:[esp+0xD8]
        sub edx, esi
        public_6300cf6 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        cmp cl, bl
        jne public_6300cf6
        push esi
        call dword ptr ds : [public_63992ec]
        add esp, 4
        cmp eax, ebx
        jne public_6300d17
        push esi
        call public_630d3f0
        add esp, 4
        public_6300d17 : nop
        mov dword ptr ss : [esp+0x14], eax
        jmp public_6300df9
/*FIXUP public_6300d20 : nop
        push offset public_63a263c @0x6300d20*/
  FIXUP public_6300d20 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a263c
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x4D8]
        je public_6300d99
        call public_6310b70
        mov esi, eax
        push esi
        call dword ptr ds : [public_63992ec]
        add esp, 4
        cmp eax, ebx
        jne public_6300d53
        push esi
        call public_630d3f0
        add esp, 4
        public_6300d53 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        call public_62ff8b0
        cmp eax, ebx
        je public_6300d72
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+ecx*4+0x2C], eax
        inc dword ptr ss : [esp+0x4C]
        jmp public_6300df9
        public_6300d72 : nop
        lea edx, ss:[esp+0xD8]
        push edx
        push esi
        push 0x3E4
/*FIXUP push offset public_63a234c @0x6300d80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a234c
        mov eax, 0x100002
/*FIXUP push offset public_63a25fc @0x6300d8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a25fc
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        jmp public_6300df6
        public_6300d99 : nop
        call public_63104e0
        mov ebp, eax
        xor edi, edi
        mov esi, offset public_63ecd6c
        public_6300da7 : nop
        push ebp
        push esi
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        je public_6300e68
        add esi, 0x104
        inc edi
        cmp esi, offset public_63ed17c
        jl public_6300da7
        lea esp, ss:[esp]
        public_6300dd0 : nop
        mov edx, dword ptr ds : [public_6399028]
        lea ecx, ss:[esp+0xD8]
        push ecx
        push ebp
        push 0x404
/*FIXUP push offset public_63a234c @0x6300de4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a234c
        mov eax, 0x100002
/*FIXUP push offset public_63a25c0 @0x6300dee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a25c0
        push eax
        call dword ptr ds : [edx]
        public_6300df6 : nop
        add esp, 0x18
        public_6300df9 : nop
        lea ecx, ss:[esp+0x4D8]
        call public_6310170
        test al, al
        jne public_6300cb0
        public_6300e0d : nop
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0xA0]
        push edx
        call public_63027d0
        add esp, 0xC
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x58], ecx
        lea esi, ds:[eax+4]
        mov ecx, 0xF
        lea edi, ss:[esp+0x5C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x58]
        push edx
        lea eax, ss:[esp+0x54]
        push eax
        add ecx, 0x94
        mov byte ptr ss : [esp+0x1A50], 2
        call public_6301980
        mov byte ptr ss : [esp+0x1A48], bl
        jmp public_6300f28
        public_6300e68 : nop
        imul edi, 0x104
        mov edi, dword ptr ds : [edi+public_63ecd68]
        cmp edi, 0xFFFFFFFF
        je public_6300dd0
        lea ecx, ss:[esp+0x4D8]
        call public_6310b70
        mov esi, eax
        push esi
        call dword ptr ds : [public_63992ec]
        add esp, 4
        cmp eax, ebx
        jne public_6300ea2
        push esi
        call public_630d3f0
        add esp, 4
        public_6300ea2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push edi
        call public_62ff7d0
        cmp eax, ebx
        je public_6300ed3
        mov dword ptr ss : [esp+edi*4+0x1C], eax
        mov eax, dword ptr ds : [eax+0x14]
        cmp eax, ebx
        je public_6300df9
        cmp dword ptr ss : [esp+0x18], ebx
        jne public_6300df9
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6300df9
        public_6300ed3 : nop
        mov edx, dword ptr ds : [public_6399028]
        lea ecx, ss:[esp+0xD8]
        push ecx
        push ebp
        push esi
        push 0x3FC
/*FIXUP push offset public_63a234c @0x6300ee8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a234c
        mov eax, 0x100002
/*FIXUP push offset public_63a2578 @0x6300ef2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2578
        push eax
        call dword ptr ds : [edx]
        add esp, 0x1C
        jmp public_6300df9
        public_6300f02 : nop
        mov esi, 0x100002
        call public_63104c0
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x40E
/*FIXUP push offset public_63a234c @0x6300f18*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a234c
/*FIXUP push offset public_63a253c @0x6300f1d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a253c
        push esi
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6300f28 : nop
        lea ecx, ss:[esp+0x4D8]
        call public_6310070
        test al, al
        jne public_6300c60
        pop edi
        pop ebp
        public_6300f3e : nop
        lea ecx, ss:[esp+0x4D0]
        call public_630f770
        jmp public_6300f70
        lea esp, ss:[esp]
        public_6300f50 : nop
        push esi
        push 0x415
/*FIXUP push offset public_63a234c @0x6300f56*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a234c
        mov eax, 0x100001
/*FIXUP push offset public_63a2504 @0x6300f60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2504
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6300f70 : nop
        lea ecx, ss:[esp+0x18F8]
        mov dword ptr ss : [esp+0x1A40], 3
        mov dword ptr ss : [esp+8], ecx
        lea ecx, ss:[esp+0x18F8]
        mov byte ptr ss : [esp+0x1A40], 4
        call public_6262630
        mov eax, dword ptr ss : [esp+0x18FC]
        cmp eax, ebx
        je public_6300fc1
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6300fb8
        cmp cl, 0xFF
        je public_6300fb8
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6300fc1
        public_6300fb8 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6300fc1 : nop
        mov dword ptr ss : [esp+0x18FC], ebx
        mov dword ptr ss : [esp+0x1900], ebx
        mov dword ptr ss : [esp+0x1904], ebx
        lea ecx, ss:[esp+0x4D0]
        mov dword ptr ss : [esp+0x1A40], 5
        call public_6262630
        mov eax, dword ptr ss : [esp+0x4D4]
        cmp eax, ebx
        je public_6301014
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_630100b
        cmp cl, 0xFF
        je public_630100b
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6301014
        public_630100b : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6301014 : nop
        mov ecx, dword ptr ss : [esp+0x1A38]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1A3C
        ret 4
        UNREACHABLE_TRAP(0x6300bf0)
    }
}

#undef public_6300c60
#undef public_6300cb0
#undef public_6300cf6
#undef public_6300d17
#undef public_6300d20
#undef public_6300d53
#undef public_6300d72
#undef public_6300d99
#undef public_6300da7
#undef public_6300dd0
#undef public_6300df6
#undef public_6300df9
#undef public_6300e0d
#undef public_6300e68
#undef public_6300ea2
#undef public_6300ed3
#undef public_6300f02
#undef public_6300f28
#undef public_6300f3e
#undef public_6300f50
#undef public_6300f70
#undef public_6300fb8
#undef public_6300fc1
#undef public_630100b
#undef public_6301014
