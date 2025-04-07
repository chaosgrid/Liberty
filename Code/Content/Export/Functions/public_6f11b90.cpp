#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6efb830);
CLANG_FORWARD_PROC_SYMBOL(public_6efb980);
CLANG_FORWARD_PROC_SYMBOL(public_6f11b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f1dcd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e640);
CLANG_FORWARD_PROC_SYMBOL(public_6f228c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad72c);

#define public_6f11bd0 _public_6f11bd0
#define public_6f11c02 _public_6f11c02
#define public_6f11c40 _public_6f11c40
#define public_6f11c6b _public_6f11c6b
#define public_6f11c86 _public_6f11c86
#define public_6f11c99 _public_6f11c99
#define public_6f11d68 _public_6f11d68
#define public_6f11d94 _public_6f11d94
#define public_6f11da3 _public_6f11da3
#define public_6f11dcc _public_6f11dcc
#define public_6f11df8 _public_6f11df8
#define public_6f11e05 _public_6f11e05
#define public_6f11e29 _public_6f11e29
#define public_6f11e62 _public_6f11e62
#define public_6f11e8e _public_6f11e8e
#define public_6f11eb6 _public_6f11eb6
#define public_6f11ed5 _public_6f11ed5
#define public_6f11ef0 _public_6f11ef0
#define public_6f11f1d _public_6f11f1d
#define public_6f11f38 _public_6f11f38
#define public_6f11f4b _public_6f11f4b

PROC_DECLARE(0x6f11b90, internal_6f11b90, public_6f11b90);
extern "C" NAKED register_t __cdecl internal_6f11b90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad72c @0x6f11b92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad72c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x80
        push edi
        mov edi, dword ptr ss : [esp+0x94]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, edi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f11f4b
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        lea esp, ss:[esp]
        public_6f11bd0 : nop
        mov esi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb445c @0x6f11bd6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, edi
        call esi
        test al, al
        mov ecx, edi
        je public_6f11c02
        push 0x20
        push ebx
        call dword ptr ds : [public_6fb3048]
        push eax
        lea eax, ss:[esp+0x30]
        push eax
        call dword ptr ds : [public_6fb3378]
        add esp, 0xC
        jmp public_6f11f38
/*FIXUP public_6f11c02 : nop
        push offset public_6fb8a8c @0x6f11c02*/
  FIXUP public_6f11c02 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8a8c
        call esi
        test al, al
        je public_6f11c99
        lea ecx, ss:[esp+0x28]
/*FIXUP push offset public_6fb780c @0x6f11c15*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb780c
        push ecx
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6f11f38
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x9C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f11f38
        public_6f11c40 : nop
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f11c86
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_6fb3040]
        cmp al, bl
        mov byte ptr ds : [esi+0x2C], al
        je public_6f11c6b
        mov dword ptr ds : [esi+0x4C], ebx
        jmp public_6f11c86
        public_6f11c6b : nop
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f11c86
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [esi+0x4C], eax
        public_6f11c86 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edx+0x9C]
        jne public_6f11c40
        jmp public_6f11f38
/*FIXUP public_6f11c99 : nop
        push offset public_6fb8a7c @0x6f11c99*/
  FIXUP public_6f11c99 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8a7c
        mov ecx, edi
        call esi
        test al, al
        je public_6f11f38
        lea eax, ss:[esp+0x28]
/*FIXUP push offset public_6fb780c @0x6f11cae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb780c
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f11f38
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        lea ecx, ss:[esp+0x70]
        mov ebp, eax
        mov dword ptr ss : [esp+0x48], ebx
        mov byte ptr ss : [esp+0x4C], bl
        call dword ptr ds : [public_6fb3030]
        mov cl, byte ptr ss : [esp+0x13]
        push ebx
        mov byte ptr ss : [esp+0x7C], cl
        push ebx
        lea ecx, ss:[esp+0x80]
        mov dword ptr ss : [esp+0x7C], ebx
        call public_6f1e640
        mov dword ptr ss : [esp+0x7C], eax
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x84], ebx
        mov dword ptr ss : [esp+0x88], ebx
        mov dword ptr ss : [esp+0x8C], ebx
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x50]
        push 0x20
        push eax
        mov dword ptr ss : [esp+0xA4], ebx
        call public_6ea9f40
        add esp, 0xC
        mov edi, offset public_6fb8a70
        mov esi, ebp
        mov ecx, 0xA
        xor edx, edx
        mov dword ptr ss : [esp+0x48], eax
        mov byte ptr ss : [esp+0x6C], bl
        repe cmpsb
        jne public_6f11da3
        mov ecx, dword ptr ss : [esp+0x84]
        cmp ecx, ebx
        je public_6f11d68
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x84], ebx
        public_6f11d68 : nop
        lea ecx, ss:[esp+0x84]
        push ecx
/*FIXUP push offset public_6fb8a64 @0x6f11d70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8a64
        call public_6efb830
        mov ecx, dword ptr ss : [esp+0x90]
        add esp, 8
        cmp ecx, ebx
        je public_6f11d94
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x88], ebx
        public_6f11d94 : nop
        lea eax, ss:[esp+0x88]
        push eax
/*FIXUP push offset public_6fb8a5c @0x6f11d9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8a5c
        jmp public_6f11e05
        public_6f11da3 : nop
        mov edi, offset public_6fb8a50
        mov esi, ebp
        mov ecx, 0xA
        xor edx, edx
        repe cmpsb
        jne public_6f11e29
        mov ecx, dword ptr ss : [esp+0x84]
        cmp ecx, ebx
        je public_6f11dcc
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x84], ebx
        public_6f11dcc : nop
        lea ecx, ss:[esp+0x84]
        push ecx
/*FIXUP push offset public_6fb8a44 @0x6f11dd4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8a44
        call public_6efb830
        mov ecx, dword ptr ss : [esp+0x90]
        add esp, 8
        cmp ecx, ebx
        je public_6f11df8
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x88], ebx
        public_6f11df8 : nop
        lea eax, ss:[esp+0x88]
        push eax
/*FIXUP push offset public_6fb8a3c @0x6f11e00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8a3c
        public_6f11e05 : nop
        call public_6efb980
        mov eax, dword ptr ss : [esp+0xA8]
        mov ecx, dword ptr ss : [esp+0x90]
        mov edx, dword ptr ds : [ecx]
        add esp, 8
        push eax
        mov eax, dword ptr ss : [esp+0x88]
        push eax
        call dword ptr ds : [edx+0x10]
        public_6f11e29 : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ss : [esp+0x84]
        mov dword ptr ds : [edx+0xC], ecx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x84]
        mov dword ptr ds : [ecx+0x10], eax
        mov esi, dword ptr ds : [edi+0x9C]
        mov ebp, dword ptr ds : [esi+4]
        push 0x50
        call public_6fa912a
        add esp, 4
        cmp ebp, ebx
        mov dword ptr ds : [eax], esi
        jne public_6f11e62
        mov ebp, eax
        public_6f11e62 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], ecx
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x98], 1
        je public_6f11e8e
        lea edx, ss:[esp+0x48]
        push edx
        call public_6f228c0
        public_6f11e8e : nop
        inc dword ptr ds : [edi+0xA0]
        mov ecx, dword ptr ss : [esp+0x88]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x98], 3
        je public_6f11eb6
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x88], ebx
        public_6f11eb6 : nop
        mov ecx, dword ptr ss : [esp+0x84]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x98], 2
        je public_6f11ed5
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x84], ebx
        public_6f11ed5 : nop
        mov eax, dword ptr ss : [esp+0x7C]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x98], 0xFFFFFFFF
        mov esi, eax
        mov dword ptr ss : [esp+0x18], ecx
        je public_6f11f1d
        public_6f11ef0 : nop
        push ebx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6f68e30
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x80]
        call public_6f1dcd0
        cmp dword ptr ss : [esp+0x18], esi
        jne public_6f11ef0
        mov eax, dword ptr ss : [esp+0x7C]
        public_6f11f1d : nop
        push eax
        call public_6fa8fe0
        mov edi, dword ptr ss : [esp+0xA4]
        add esp, 4
        mov dword ptr ss : [esp+0x7C], ebx
        mov dword ptr ss : [esp+0x80], ebx
        public_6f11f38 : nop
        mov ecx, edi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f11bd0
        pop esi
        pop ebp
        pop ebx
        public_6f11f4b : nop
        mov ecx, dword ptr ss : [esp+0x84]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x8C
        ret 4
        UNREACHABLE_TRAP(0x6f11b90)
    }
}

#undef public_6f11bd0
#undef public_6f11c02
#undef public_6f11c40
#undef public_6f11c6b
#undef public_6f11c86
#undef public_6f11c99
#undef public_6f11d68
#undef public_6f11d94
#undef public_6f11da3
#undef public_6f11dcc
#undef public_6f11df8
#undef public_6f11e05
#undef public_6f11e29
#undef public_6f11e62
#undef public_6f11e8e
#undef public_6f11eb6
#undef public_6f11ed5
#undef public_6f11ef0
#undef public_6f11f1d
#undef public_6f11f38
#undef public_6f11f4b
