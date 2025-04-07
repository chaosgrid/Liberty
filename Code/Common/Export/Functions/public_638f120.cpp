#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6372a10);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_638ef50);
CLANG_FORWARD_PROC_SYMBOL(public_638f120);
CLANG_FORWARD_PROC_SYMBOL(public_638fae0);

#define public_638f14d _public_638f14d
#define public_638f15b _public_638f15b
#define public_638f196 _public_638f196
#define public_638f1c3 _public_638f1c3
#define public_638f1cb _public_638f1cb
#define public_638f1d4 _public_638f1d4
#define public_638f1ea _public_638f1ea
#define public_638f1f2 _public_638f1f2
#define public_638f20f _public_638f20f
#define public_638f231 _public_638f231
#define public_638f234 _public_638f234
#define public_638f246 _public_638f246
#define public_638f25e _public_638f25e
#define public_638f291 _public_638f291
#define public_638f2a0 _public_638f2a0
#define public_638f2d4 _public_638f2d4
#define public_638f2d8 _public_638f2d8
#define public_638f2de _public_638f2de
#define public_638f2e8 _public_638f2e8
#define public_638f2fa _public_638f2fa
#define public_638f31e _public_638f31e

PROC_DECLARE(0x638f120, internal_638f120, public_638f120);
extern "C" NAKED register_t __cdecl internal_638f120()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ds : [public_658b078]
        push ebp
        xor ebp, ebp
        cmp eax, 2
        push edi
        mov dword ptr ss : [esp+8], ebp
        mov dword ptr ss : [esp+0x10], ebp
        jl public_638f14d
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63facac @0x638f13e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63facac
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_638f14d : nop
        mov edi, dword ptr ss : [esp+0x1C]
        cmp edi, ebp
        je public_638f2fa
        push ebx
        push esi
        public_638f15b : nop
        mov ebx, dword ptr ds : [edi+0x30]
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x24], ebx
        je public_638f2e8
        cmp dword ptr ds : [edi+0x18], ebp
        jne public_638f2de
        test dword ptr ds : [edi+0x50], 0x1000000
        jne public_638f196
        mov ecx, dword ptr ds : [edi+0x4C]
        push ecx
/*FIXUP push offset public_63fac84 @0x638f180*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fac84
        call public_6356960
        push ebp
        push edi
        push 5
        call public_6378600
        add esp, 0x14
        public_638f196 : nop
        mov edx, dword ptr ds : [edi+0x3C]
        mov esi, dword ptr ds : [edi+0x20]
        cmp esi, edi
        mov edx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x14], edx
        jne public_638f1ea
        inc dword ptr ds : [public_658be38]
        mov eax, dword ptr ds : [edi+0x34]
        cmp eax, ebp
        mov esi, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        je public_638f1d4
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        cmp eax, ebp
        je public_638f1d4
        public_638f1c3 : nop
        cmp eax, esi
        je public_638f1cb
        or byte ptr ds : [eax+0x17], 4
        public_638f1cb : nop
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        cmp eax, ebp
        jne public_638f1c3
        public_638f1d4 : nop
        push 1
        push ebp
        push ebp
        push edx
        push edi
        mov dword ptr ds : [edx+0x20], ebp
        call public_638fae0
        add esp, 0x14
        jmp public_638f2d8
        public_638f1ea : nop
        xor ebx, ebx
        test esi, esi
        mov ebp, edi
        je public_638f246
        public_638f1f2 : nop
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ss : [esp+0x1C], eax
        test dword ptr ds : [esi+0x50], 0x2000400
        je public_638f20f
        push esi
        call public_6372a10
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 4
        public_638f20f : nop
        mov ecx, dword ptr ds : [esi+0x50]
        mov eax, dword ptr ds : [esi+0x18]
        or ecx, 0x2000000
        test eax, eax
        mov dword ptr ds : [esi+0x50], ecx
        je public_638f231
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ss : [ebp+0x20], ecx
        mov dword ptr ds : [esi+0x20], 0
        jmp public_638f234
        public_638f231 : nop
        mov ebp, esi
        inc ebx
        public_638f234 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        xor eax, eax
        cmp esi, edi
        sete al
        dec eax
        and eax, ecx
        mov esi, eax
        jne public_638f1f2
        public_638f246 : nop
        mov eax, dword ptr ss : [esp+0x24]
        test dword ptr ds : [eax+0x50], 0x2000000
        je public_638f25e
        mov eax, dword ptr ds : [eax+0x30]
        test eax, eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_638f246
        public_638f25e : nop
        push edx
        push edi
        mov dword ptr ds : [edx+0x20], 0
        call public_638ef50
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [edx+0x50]
        mov eax, ecx
        and eax, 0x1FF
        add eax, ebx
        add esp, 8
        cmp eax, 0x1FF
        jle public_638f291
        or ecx, 0x1FF
        mov dword ptr ds : [edx+0x50], ecx
        jmp public_638f2a0
        public_638f291 : nop
        mov esi, ecx
        xor esi, eax
        and esi, 0x1FF
        xor esi, ecx
        mov dword ptr ds : [edx+0x50], esi
        public_638f2a0 : nop
        mov esi, dword ptr ds : [public_658bb00]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_658baf8]
        mov eax, dword ptr ds : [public_658baf0]
        inc esi
        add edx, ebx
        add ecx, ebx
        cmp eax, ebx
        mov dword ptr ds : [public_658bb00], esi
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ds : [public_658baf8], ecx
        jge public_638f2d4
        mov dword ptr ds : [public_658baf0], ebx
        public_638f2d4 : nop
        mov ebx, dword ptr ss : [esp+0x24]
        public_638f2d8 : nop
        inc dword ptr ss : [esp+0x10]
        xor ebp, ebp
        public_638f2de : nop
        cmp ebx, ebp
        mov edi, ebx
        jne public_638f15b
        public_638f2e8 : nop
        cmp dword ptr ss : [esp+0x10], ebp
        pop esi
        pop ebx
        je public_638f2fa
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx], 1
        public_638f2fa : nop
        cmp dword ptr ds : [public_658b078], 1
        pop edi
        pop ebp
        jl public_638f31e
        mov edx, dword ptr ss : [esp]
        mov eax, dword ptr ds : [public_658b7fc]
        push edx
/*FIXUP push offset public_63fac38 @0x638f30f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fac38
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_638f31e : nop
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x638f120)
    }
}

#undef public_638f14d
#undef public_638f15b
#undef public_638f196
#undef public_638f1c3
#undef public_638f1cb
#undef public_638f1d4
#undef public_638f1ea
#undef public_638f1f2
#undef public_638f20f
#undef public_638f231
#undef public_638f234
#undef public_638f246
#undef public_638f25e
#undef public_638f291
#undef public_638f2a0
#undef public_638f2d4
#undef public_638f2d8
#undef public_638f2de
#undef public_638f2e8
#undef public_638f2fa
#undef public_638f31e
