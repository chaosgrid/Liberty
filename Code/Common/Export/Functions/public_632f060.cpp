#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632f140);

#define public_632f070 _public_632f070
#define public_632f07e _public_632f07e
#define public_632f088 _public_632f088
#define public_632f096 _public_632f096
#define public_632f09b _public_632f09b
#define public_632f0a0 _public_632f0a0
#define public_632f0b0 _public_632f0b0
#define public_632f0bf _public_632f0bf
#define public_632f0c1 _public_632f0c1
#define public_632f0d0 _public_632f0d0
#define public_632f0de _public_632f0de
#define public_632f0e6 _public_632f0e6
#define public_632f0f4 _public_632f0f4
#define public_632f112 _public_632f112
#define public_632f120 _public_632f120
#define public_632f12e _public_632f12e

PROC_DECLARE(0x632f060, internal_632f060, public_632f060);
extern "C" NAKED register_t __cdecl internal_632f060()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+4]
        lea edx, ds:[esi+0x1C]
        push edi
        xor eax, eax
        mov ecx, edx
        lea ecx, ds:[ecx]
        public_632f070 : nop
        cmp dword ptr ds : [ecx], 0
        je public_632f07e
        inc eax
        add ecx, 0x14
        cmp eax, 8
        jb public_632f070
        public_632f07e : nop
        mov ebp, dword ptr ss : [esp+0x10]
        xor ecx, ecx
        test eax, eax
        jbe public_632f09b
        public_632f088 : nop
        cmp dword ptr ds : [edx], ebp
        je public_632f096
        inc ecx
        add edx, 0x14
        cmp ecx, eax
        jb public_632f088
        jmp public_632f09b
        public_632f096 : nop
        cmp ecx, 0xFFFFFFFF
        jne public_632f0c1
        public_632f09b : nop
        xor edi, edi
        add esi, 0x10
        public_632f0a0 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_632f0b0
        push ebp
        call public_632f140
        test eax, eax
        jne public_632f0bf
        public_632f0b0 : nop
        inc edi
        add esi, 4
        cmp edi, 3
        jb public_632f0a0
        pop edi
        pop esi
        pop ebp
        ret 4
        public_632f0bf : nop
        mov esi, eax
        public_632f0c1 : nop
        test esi, esi
        je public_632f12e
        push ebx
        lea ebx, ds:[esi+0x1C]
        xor eax, eax
        mov ecx, ebx
        lea ecx, ds:[ecx]
        public_632f0d0 : nop
        cmp dword ptr ds : [ecx], 0
        je public_632f0de
        inc eax
        add ecx, 0x14
        cmp eax, 8
        jb public_632f0d0
        public_632f0de : nop
        xor ecx, ecx
        test eax, eax
        jbe public_632f112
        mov edx, ebx
        public_632f0e6 : nop
        cmp dword ptr ds : [edx], ebp
        je public_632f0f4
        inc ecx
        add edx, 0x14
        cmp ecx, eax
        jb public_632f0e6
        jmp public_632f112
        public_632f0f4 : nop
        lea ecx, ds:[ecx+ecx*4]
        lea eax, ds:[eax+eax*4-5]
        lea eax, ds:[esi+eax*4+0x1C]
        lea edi, ds:[esi+ecx*4+0x1C]
        mov ecx, 5
        mov esi, eax
        rep movsd
        mov dword ptr ds : [eax], 0
        public_632f112 : nop
        dec dword ptr ds : [public_640a750]
        mov ecx, ebx
        xor eax, eax
        pop ebx
        lea ecx, ds:[ecx]
        public_632f120 : nop
        cmp dword ptr ds : [ecx], 0
        je public_632f12e
        inc eax
        add ecx, 0x14
        cmp eax, 8
        jb public_632f120
        public_632f12e : nop
        pop edi
        pop esi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x632f060)
    }
}

#undef public_632f070
#undef public_632f07e
#undef public_632f088
#undef public_632f096
#undef public_632f09b
#undef public_632f0a0
#undef public_632f0b0
#undef public_632f0bf
#undef public_632f0c1
#undef public_632f0d0
#undef public_632f0de
#undef public_632f0e6
#undef public_632f0f4
#undef public_632f112
#undef public_632f120
#undef public_632f12e
