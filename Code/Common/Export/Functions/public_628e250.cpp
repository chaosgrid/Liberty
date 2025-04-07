#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628e250);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_628e286 _public_628e286
#define public_628e288 _public_628e288
#define public_628e290 _public_628e290
#define public_628e295 _public_628e295
#define public_628e2a1 _public_628e2a1
#define public_628e2c2 _public_628e2c2
#define public_628e2ca _public_628e2ca
#define public_628e2d4 _public_628e2d4
#define public_628e2e0 _public_628e2e0
#define public_628e2ec _public_628e2ec
#define public_628e2f2 _public_628e2f2
#define public_628e310 _public_628e310
#define public_628e318 _public_628e318
#define public_628e322 _public_628e322
#define public_628e35e _public_628e35e
#define public_628e37b _public_628e37b
#define public_628e3a0 _public_628e3a0
#define public_628e3ac _public_628e3ac
#define public_628e3b6 _public_628e3b6
#define public_628e3c8 _public_628e3c8
#define public_628e3d0 _public_628e3d0
#define public_628e3d6 _public_628e3d6
#define public_628e3e0 _public_628e3e0
#define public_628e3eb _public_628e3eb
#define public_628e3f8 _public_628e3f8
#define public_628e410 _public_628e410
#define public_628e418 _public_628e418
#define public_628e422 _public_628e422
#define public_628e430 _public_628e430
#define public_628e43f _public_628e43f
#define public_628e450 _public_628e450
#define public_628e45b _public_628e45b
#define public_628e45e _public_628e45e

PROC_DECLARE(0x628e250, internal_628e250, public_628e250);
extern "C" NAKED register_t __cdecl internal_628e250()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], edi
        jae public_628e37b
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_628e286
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ebp, ecx
        jb public_628e288
        public_628e286 : nop
        mov ecx, ebp
        public_628e288 : nop
        test edx, edx
        jne public_628e290
        xor eax, eax
        jmp public_628e295
        public_628e290 : nop
        sub eax, edx
        sar eax, 2
        public_628e295 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_628e2a1
        xor eax, eax
        public_628e2a1 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_628e2d4
        public_628e2c2 : nop
        test ecx, ecx
        je public_628e2ca
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        public_628e2ca : nop
        add eax, 4
        add ecx, 4
        cmp eax, ebx
        jne public_628e2c2
        public_628e2d4 : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_628e2f2
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_628e2e0 : nop
        test eax, eax
        je public_628e2ec
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_628e2ec : nop
        add eax, 4
        dec edx
        jne public_628e2e0
        public_628e2f2 : nop
        mov edi, dword ptr ds : [edi+8]
        cmp ebx, edi
        lea esi, ds:[ebp*4]
        lea edx, ds:[esi+ecx]
        je public_628e322
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        nop 
        lea esp, ss:[esp]
        public_628e310 : nop
        test edx, edx
        je public_628e318
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        public_628e318 : nop
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_628e310
        public_628e322 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_628e35e
        xor eax, eax
        mov eax, ebp
        pop edi
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_628e35e : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        add eax, ebp
        pop edi
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_628e37b : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, ebp
        jae public_628e3f8
        cmp edx, eax
        lea ebx, ds:[ebp*4]
        lea esi, ds:[ebx+edx]
        je public_628e3b6
        mov ecx, esi
        sub ecx, ebx
        lea esp, ss:[esp]
        public_628e3a0 : nop
        test esi, esi
        je public_628e3ac
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_628e3ac : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_628e3a0
        public_628e3b6 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        sub ebp, ecx
        je public_628e3d6
        public_628e3c8 : nop
        test eax, eax
        je public_628e3d0
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        public_628e3d0 : nop
        add eax, 4
        dec ebp
        jne public_628e3c8
        public_628e3d6 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp edx, ecx
        mov eax, edx
        je public_628e3eb
        nop 
        public_628e3e0 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_628e3e0
        public_628e3eb : nop
        add dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_628e3f8 : nop
        test ebp, ebp
        jbe public_628e45e
        shl ebp, 2
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov esi, eax
        je public_628e422
        lea esp, ss:[esp]
        public_628e410 : nop
        test esi, esi
        je public_628e418
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], ebx
        public_628e418 : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_628e410
        public_628e422 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp edx, eax
        je public_628e43f
        lea ecx, ds:[ecx]
        public_628e430 : nop
        mov esi, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edx
        mov dword ptr ds : [ecx], esi
        jne public_628e430
        public_628e43f : nop
        lea ecx, ds:[edx+ebp]
        cmp edx, ecx
        mov eax, edx
        je public_628e45b
        mov edx, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_628e450 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        cmp eax, ecx
        jne public_628e450
        public_628e45b : nop
        add dword ptr ds : [edi+8], ebp
        public_628e45e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x628e250)
    }
}

#undef public_628e286
#undef public_628e288
#undef public_628e290
#undef public_628e295
#undef public_628e2a1
#undef public_628e2c2
#undef public_628e2ca
#undef public_628e2d4
#undef public_628e2e0
#undef public_628e2ec
#undef public_628e2f2
#undef public_628e310
#undef public_628e318
#undef public_628e322
#undef public_628e35e
#undef public_628e37b
#undef public_628e3a0
#undef public_628e3ac
#undef public_628e3b6
#undef public_628e3c8
#undef public_628e3d0
#undef public_628e3d6
#undef public_628e3e0
#undef public_628e3eb
#undef public_628e3f8
#undef public_628e410
#undef public_628e418
#undef public_628e422
#undef public_628e430
#undef public_628e43f
#undef public_628e450
#undef public_628e45b
#undef public_628e45e
