#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f00610);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f214c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb217b);

#define public_6fa6790 _public_6fa6790
#define public_6fa67c0 _public_6fa67c0
#define public_6fa6801 _public_6fa6801
#define public_6fa6811 _public_6fa6811
#define public_6fa6890 _public_6fa6890
#define public_6fa68a8 _public_6fa68a8
#define public_6fa68b5 _public_6fa68b5
#define public_6fa68e6 _public_6fa68e6
#define public_6fa6903 _public_6fa6903
#define public_6fa6927 _public_6fa6927
#define public_6fa6930 _public_6fa6930
#define public_6fa695f _public_6fa695f
#define public_6fa697c _public_6fa697c
#define public_6fa699b _public_6fa699b
#define public_6fa69b8 _public_6fa69b8
#define public_6fa69d5 _public_6fa69d5
#define public_6fa69f2 _public_6fa69f2
#define public_6fa6a0f _public_6fa6a0f
#define public_6fa6a2e _public_6fa6a2e
#define public_6fa6a4d _public_6fa6a4d
#define public_6fa6a69 _public_6fa6a69
#define public_6fa6a85 _public_6fa6a85
#define public_6fa6aa1 _public_6fa6aa1
#define public_6fa6abd _public_6fa6abd
#define public_6fa6ad7 _public_6fa6ad7
#define public_6fa6ada _public_6fa6ada
#define public_6fa6af4 _public_6fa6af4
#define public_6fa6b43 _public_6fa6b43
#define public_6fa6b55 _public_6fa6b55
#define public_6fa6b58 _public_6fa6b58
#define public_6fa6b60 _public_6fa6b60
#define public_6fa6b8a _public_6fa6b8a
#define public_6fa6bca _public_6fa6bca
#define public_6fa6bd7 _public_6fa6bd7
#define public_6fa6c04 _public_6fa6c04
#define public_6fa6c0e _public_6fa6c0e
#define public_6fa6c1b _public_6fa6c1b
#define public_6fa6c37 _public_6fa6c37
#define public_6fa6c9f _public_6fa6c9f
#define public_6fa6ca3 _public_6fa6ca3
#define public_6fa6cc7 _public_6fa6cc7
#define public_6fa6ccb _public_6fa6ccb
#define public_6fa6cf1 _public_6fa6cf1
#define public_6fa6d04 _public_6fa6d04

PROC_DECLARE(0x6fa6760, internal_6fa6760, public_6fa6760);
extern "C" NAKED register_t __cdecl internal_6fa6760()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb217b @0x6fa6768*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb217b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x3C
        push ebx
        mov ebx, dword ptr ss : [esp+0x50]
        mov ecx, ebx
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6fa6d04
        push ebp
        push esi
        push edi
/*FIXUP public_6fa6790 : nop
        push offset public_6fbd64c @0x6fa6790*/
  FIXUP public_6fa6790 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd64c
        mov ecx, ebx
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6fa6cf1
        mov ecx, ebx
        xor ebp, ebp
        mov byte ptr ss : [esp+0x12], 0
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6fa6c37
        lea esp, ss:[esp]
        public_6fa67c0 : nop
        mov esi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb8018 @0x6fa67c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8018
        mov ecx, ebx
        call esi
        test al, al
        mov ecx, ebx
        je public_6fa68b5
        call dword ptr ds : [public_6fb3054]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [public_6fb33b4]
        mov ebp, dword ptr ds : [public_6fd3d94]
        mov eax, dword ptr ds : [public_6fd3d98]
        add esp, 8
        cmp ebp, eax
        je public_6fa6811
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6fa6801 : nop
        cmp dword ptr ss : [ebp], ecx
        je public_6fa68a8
        add ebp, 0x1C
        cmp ebp, eax
        jne public_6fa6801
        public_6fa6811 : nop
        push 0x1C
        call public_6fa912a
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], edi
        xor ebp, ebp
        cmp edi, ebp
        mov dword ptr ss : [esp+0x54], ebp
        je public_6fa6890
        mov cl, byte ptr ss : [esp+0x5C]
        mov dl, byte ptr ss : [esp+0x5C]
        lea esi, ds:[edi+8]
        mov dword ptr ds : [edi], ebp
        mov dword ptr ds : [edi+4], ebp
        push 1
        mov byte ptr ds : [esi], cl
        push ebp
        mov ecx, esi
        mov byte ptr ds : [esi+1], dl
        mov byte ptr ds : [esi+0xC], 0
        call public_6f214c0
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x15], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebp
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ebp
        mov ecx, dword ptr ds : [esi+8]
        push ebp
        push ecx
        mov ecx, esi
        call public_6f214c0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x10], ebp
        mov ecx, dword ptr ss : [esp+0x1C]
        mov ebp, edi
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        mov dword ptr ss : [ebp], ecx
        jmp public_6fa6c1b
        public_6fa6890 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        xor edi, edi
        mov ebp, edi
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        mov dword ptr ss : [ebp], ecx
        jmp public_6fa6c1b
        public_6fa68a8 : nop
        mov byte ptr ss : [esp+0x12], 1
        mov dword ptr ss : [ebp], ecx
        jmp public_6fa6c1b
/*FIXUP public_6fa68b5 : nop
        push offset public_6fbd644 @0x6fa68b5*/
  FIXUP public_6fa68b5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd644
        call esi
        test al, al
        mov ecx, ebx
        je public_6fa6903
        call dword ptr ds : [public_6fb3054]
        mov esi, eax
/*FIXUP push offset public_6fb7ff0 @0x6fa68ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7ff0
        push esi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6fa68e6
        or dword ptr ss : [ebp+4], 1
        jmp public_6fa6c1b
        public_6fa68e6 : nop
        mov edi, offset public_6fbd63c
        mov ecx, 7
        xor edx, edx
        repe cmpsb
        jne public_6fa6c1b
        or dword ptr ss : [ebp+4], 2
        jmp public_6fa6c1b
/*FIXUP public_6fa6903 : nop
        push offset public_6fbd62c @0x6fa6903*/
  FIXUP public_6fa6903 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd62c
        call esi
        test al, al
        mov ecx, ebx
        je public_6fa6af4
        xor esi, esi
        push esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6fa6c1b
        jmp public_6fa6930
        public_6fa6927 : nop
        mov esi, dword ptr ss : [esp+0x14]
        nop 
        lea esp, ss:[esp]
        public_6fa6930 : nop
        mov eax, esi
        inc esi
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], esi
        call dword ptr ds : [public_6fb3048]
        mov edi, offset public_6fbd61c
        mov esi, eax
        mov ecx, 0xD
        xor edx, edx
        repe cmpsb
        jne public_6fa695f
        mov eax, dword ptr ss : [ebp+4]
        or eax, 0x4000
        jmp public_6fa6ad7
        public_6fa695f : nop
        mov edi, offset public_6fbd60c
        mov esi, eax
        mov ecx, 0xD
        xor edx, edx
        repe cmpsb
        jne public_6fa697c
        mov eax, dword ptr ss : [ebp+4]
        or eax, 4
        jmp public_6fa6ad7
        public_6fa697c : nop
        mov edi, offset public_6fbd5fc
        mov esi, eax
        mov ecx, 0xD
        xor edx, edx
        repe cmpsb
        jne public_6fa699b
        mov eax, dword ptr ss : [ebp+4]
        or eax, 0xC004
        jmp public_6fa6ad7
        public_6fa699b : nop
        mov edi, offset public_6fbd5f4
        mov esi, eax
        mov ecx, 5
        xor edx, edx
        repe cmpsb
        jne public_6fa69b8
        mov eax, dword ptr ss : [ebp+4]
        or eax, 8
        jmp public_6fa6ad7
        public_6fa69b8 : nop
        mov edi, offset public_6fbd5e8
        mov esi, eax
        mov ecx, 0xC
        xor edx, edx
        repe cmpsb
        jne public_6fa69d5
        mov eax, dword ptr ss : [ebp+4]
        or eax, 0x10
        jmp public_6fa6ad7
        public_6fa69d5 : nop
        mov edi, offset public_6fbd5dc
        mov esi, eax
        mov ecx, 0xA
        xor edx, edx
        repe cmpsb
        jne public_6fa69f2
        mov eax, dword ptr ss : [ebp+4]
        or eax, 0x20
        jmp public_6fa6ad7
        public_6fa69f2 : nop
        mov edi, offset public_6fbd5c8
        mov esi, eax
        mov ecx, 0x11
        xor edx, edx
        repe cmpsb
        jne public_6fa6a0f
        mov eax, dword ptr ss : [ebp+4]
        or eax, 0x40
        jmp public_6fa6ad7
        public_6fa6a0f : nop
        mov edi, offset public_6fbd5b4
        mov esi, eax
        mov ecx, 0x13
        xor edx, edx
        repe cmpsb
        jne public_6fa6a2e
        mov eax, dword ptr ss : [ebp+4]
        or eax, 0x80
        jmp public_6fa6ad7
        public_6fa6a2e : nop
        mov edi, offset public_6fb6180
        mov esi, eax
        mov ecx, 9
        xor edx, edx
        repe cmpsb
        jne public_6fa6a4d
        mov eax, dword ptr ss : [ebp+4]
        or eax, 0x100
        jmp public_6fa6ad7
        public_6fa6a4d : nop
        mov edi, offset public_6fbd5a4
        mov esi, eax
        mov ecx, 0xD
        xor edx, edx
        repe cmpsb
        jne public_6fa6a69
        mov eax, dword ptr ss : [ebp+4]
        or eax, 0x200
        jmp public_6fa6ad7
        public_6fa6a69 : nop
        mov edi, offset public_6fb60b0
        mov esi, eax
        mov ecx, 7
        xor edx, edx
        repe cmpsb
        jne public_6fa6a85
        mov eax, dword ptr ss : [ebp+4]
        or eax, 0x400
        jmp public_6fa6ad7
        public_6fa6a85 : nop
        mov edi, offset public_6fbd598
        mov esi, eax
        mov ecx, 0xC
        xor edx, edx
        repe cmpsb
        jne public_6fa6aa1
        mov eax, dword ptr ss : [ebp+4]
        or eax, 0x800
        jmp public_6fa6ad7
        public_6fa6aa1 : nop
        mov edi, offset public_6fbd584
        mov esi, eax
        mov ecx, 0x14
        xor edx, edx
        repe cmpsb
        jne public_6fa6abd
        mov eax, dword ptr ss : [ebp+4]
        or eax, 0x1000
        jmp public_6fa6ad7
        public_6fa6abd : nop
        mov esi, eax
        mov edi, offset public_6fbd570
        mov ecx, 0x13
        xor eax, eax
        repe cmpsb
        jne public_6fa6ada
        mov eax, dword ptr ss : [ebp+4]
        or eax, 0x2000
        public_6fa6ad7 : nop
        mov dword ptr ss : [ebp+4], eax
        public_6fa6ada : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6fa6927
        jmp public_6fa6c1b
/*FIXUP public_6fa6af4 : nop
        push offset public_6fbd55c @0x6fa6af4*/
  FIXUP public_6fa6af4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd55c
        call esi
        test al, al
        je public_6fa6c1b
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [esp+0x60]
        add esp, 4
        mov ebx, eax
        push 1
        mov dword ptr ss : [esp+0x40], ebx
        call dword ptr ds : [public_6fb3020]
        mov edx, dword ptr ss : [ebp+0x10]
        lea edi, ss:[ebp+8]
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+4]
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], eax
        mov cl, 1
        je public_6fa6b60
        public_6fa6b43 : nop
        cmp ebx, dword ptr ds : [esi+0xC]
        setb cl
        test cl, cl
        mov dword ptr ss : [esp+0x14], esi
        je public_6fa6b55
        mov esi, dword ptr ds : [esi]
        jmp public_6fa6b58
        public_6fa6b55 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6fa6b58 : nop
        cmp esi, edx
        jne public_6fa6b43
        mov eax, dword ptr ss : [esp+0x14]
        public_6fa6b60 : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6fa6b8a
        lea edx, ss:[esp+0x13]
        push edx
        lea ecx, ss:[esp+0x40]
        push ecx
        push eax
        push esi
        lea edx, ss:[esp+0x38]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x27], 1
        call public_6f7c9e0
        push eax
        jmp public_6fa6c0e
        public_6fa6b8a : nop
        test cl, cl
        mov dword ptr ss : [esp+0x18], eax
        je public_6fa6bd7
        lea eax, ss:[esp+0x2C]
        push eax
        mov ecx, edi
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax]
        jne public_6fa6bca
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x13]
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        push ecx
        push esi
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x27], 1
        call public_6f7c9e0
        push eax
        jmp public_6fa6c0e
        public_6fa6bca : nop
        lea ecx, ss:[esp+0x18]
        call public_6f00610
        mov eax, dword ptr ss : [esp+0x14]
        public_6fa6bd7 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [esp+0x3C]
        lea ecx, ss:[esp+0x13]
        push ecx
        jae public_6fa6c04
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        push esi
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x27], 1
        call public_6f7c9e0
        push eax
        jmp public_6fa6c0e
        public_6fa6c04 : nop
        lea edx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x17], 0
        push edx
        public_6fa6c0e : nop
        lea ecx, ss:[esp+0x4C]
        call public_6fa6e80
        mov ebx, dword ptr ss : [esp+0x5C]
        public_6fa6c1b : nop
        mov ecx, ebx
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6fa67c0
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        jne public_6fa6cf1
        public_6fa6c37 : nop
        mov eax, dword ptr ds : [public_6fd3d98]
        push ebp
        push 1
        push eax
        mov ecx, offset public_6fd3d90
        call public_6fa6ee0
        test ebp, ebp
        je public_6fa6cf1
        mov edi, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+0x18]
        test ecx, ecx
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+8]
        mov dword ptr ss : [esp+0x20], eax
        je public_6fa6c9f
        mov ecx, eax
        cmp eax, ecx
        jne public_6fa6c9f
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        mov ecx, esi
        call public_6fa6ea0
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_6f1df30
        jmp public_6fa6ccb
        public_6fa6c9f : nop
        cmp eax, edi
        je public_6fa6cc7
        public_6fa6ca3 : nop
        lea ecx, ss:[esp+0x20]
        mov ebx, eax
        call public_6f1fa00
        push ebx
        lea edx, ss:[esp+0x3C]
        push edx
        mov ecx, esi
        call public_6f20e00
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, edi
        jne public_6fa6ca3
        mov ebx, dword ptr ss : [esp+0x5C]
        public_6fa6cc7 : nop
        mov dword ptr ss : [esp+0x24], eax
        public_6fa6ccb : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ds : [esi+8]
        xor edi, edi
        push ecx
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+0x10], edi
        call public_6fa8fe0
        push ebp
        mov dword ptr ds : [esi+8], edi
        call public_6fa8fe0
        add esp, 0xC
        public_6fa6cf1 : nop
        mov ecx, ebx
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6fa6790
        pop edi
        pop esi
        pop ebp
        public_6fa6d04 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 
        UNREACHABLE_TRAP(0x6fa6760)
    }
}

#undef public_6fa6790
#undef public_6fa67c0
#undef public_6fa6801
#undef public_6fa6811
#undef public_6fa6890
#undef public_6fa68a8
#undef public_6fa68b5
#undef public_6fa68e6
#undef public_6fa6903
#undef public_6fa6927
#undef public_6fa6930
#undef public_6fa695f
#undef public_6fa697c
#undef public_6fa699b
#undef public_6fa69b8
#undef public_6fa69d5
#undef public_6fa69f2
#undef public_6fa6a0f
#undef public_6fa6a2e
#undef public_6fa6a4d
#undef public_6fa6a69
#undef public_6fa6a85
#undef public_6fa6aa1
#undef public_6fa6abd
#undef public_6fa6ad7
#undef public_6fa6ada
#undef public_6fa6af4
#undef public_6fa6b43
#undef public_6fa6b55
#undef public_6fa6b58
#undef public_6fa6b60
#undef public_6fa6b8a
#undef public_6fa6bca
#undef public_6fa6bd7
#undef public_6fa6c04
#undef public_6fa6c0e
#undef public_6fa6c1b
#undef public_6fa6c37
#undef public_6fa6c9f
#undef public_6fa6ca3
#undef public_6fa6cc7
#undef public_6fa6ccb
#undef public_6fa6cf1
#undef public_6fa6d04
