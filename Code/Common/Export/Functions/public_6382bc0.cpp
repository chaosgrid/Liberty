#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6381f00);
CLANG_FORWARD_PROC_SYMBOL(public_6382bc0);

#define public_6382c0d _public_6382c0d
#define public_6382c40 _public_6382c40
#define public_6382c55 _public_6382c55
#define public_6382c63 _public_6382c63
#define public_6382c74 _public_6382c74
#define public_6382c9b _public_6382c9b
#define public_6382cb5 _public_6382cb5
#define public_6382cb7 _public_6382cb7
#define public_6382cd2 _public_6382cd2
#define public_6382cf5 _public_6382cf5
#define public_6382d0f _public_6382d0f
#define public_6382d1f _public_6382d1f
#define public_6382d34 _public_6382d34
#define public_6382d4a _public_6382d4a
#define public_6382d64 _public_6382d64
#define public_6382d6d _public_6382d6d
#define public_6382d80 _public_6382d80
#define public_6382da9 _public_6382da9
#define public_6382df3 _public_6382df3

PROC_DECLARE(0x6382bc0, internal_6382bc0, public_6382bc0);
extern "C" NAKED register_t __cdecl internal_6382bc0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x1C
        mov eax, dword ptr ds : [public_658b908]
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ss : [ebp+0x10]
        xor edx, edx
        xor esi, esi
        cmp eax, edx
        push edi
        mov edi, dword ptr ds : [public_658b904]
        mov dword ptr ss : [esp+0x10], esi
        je public_6382cd2
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        cmp eax, edx
        mov dword ptr ss : [esp+0x18], ecx
        je public_6382cd2
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x14], ecx
        public_6382c0d : nop
        mov esi, dword ptr ss : [ebp+0x14]
        cmp eax, esi
        je public_6382cb7
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        inc edx
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        test esi, esi
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, edx
        je public_6382c55
        test ebx, ebx
        je public_6382cb7
        lea edx, ds:[ebx]
        public_6382c40 : nop
        fld qword ptr ds : [eax]
        add edi, 8
        fsub qword ptr ds : [ecx]
        add ecx, 8
        add eax, 8
        dec edx
        fstp qword ptr ds : [edi-8]
        jne public_6382c40
        jmp public_6382cb7
        public_6382c55 : nop
        test ebx, ebx
        mov esi, dword ptr ss : [ebp+0x20]
        fld qword ptr ds : [esi]
        je public_6382c74
        mov esi, dword ptr ss : [ebp+0x1C]
        sub esi, edx
        public_6382c63 : nop
        fld qword ptr ds : [esi+eax]
        add eax, 8
        dec ebx
        fmul qword ptr ds : [eax-8]
        faddp 
        jne public_6382c63
        mov ebx, dword ptr ss : [ebp+8]
        public_6382c74 : nop
        fld qword ptr ds : [public_658b710]
        fchs 
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_6382d4a
        test ebx, ebx
        mov eax, edx
        je public_6382cb5
        mov esi, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+0x1C]
        sub edx, esi
        lea esi, ds:[ebx]
        public_6382c9b : nop
        fld st(0)
        add edi, 8
        fmul qword ptr ds : [edx+ecx]
        add ecx, 8
        add eax, 8
        dec esi
        fsubr qword ptr ds : [eax-8]
        fsub qword ptr ds : [ecx-8]
        fstp qword ptr ds : [edi-8]
        jne public_6382c9b
        public_6382cb5 : nop
        fstp st(0)
        public_6382cb7 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        mov dword ptr ss : [esp+0x18], ecx
        jne public_6382c0d
        mov esi, dword ptr ss : [esp+0x10]
        xor edx, edx
        public_6382cd2 : nop
        lea eax, ds:[ebx-1]
        cmp esi, eax
        je public_6382cf5
        push ebx
        push esi
/*FIXUP push offset public_63f6d9c @0x6382cdb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6d9c
        call public_6356960
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x18
        xor edx, edx
        public_6382cf5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+esi*4], edi
        cmp dword ptr ds : [public_658b050], edx
        je public_6382d64
        lea ecx, ds:[ebx-1]
        cmp ecx, edx
        jle public_6382d1f
        mov eax, dword ptr ss : [esp+0xC]
        public_6382d0f : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [esi+ebx*8-8], edx
        add eax, 4
        dec ecx
        mov dword ptr ds : [esi+ebx*8-4], edx
        jne public_6382d0f
        public_6382d1f : nop
        cmp ebx, edx
        je public_6382d34
        lea eax, ds:[ebx-1]
        lea ecx, ds:[eax+eax+2]
        and ecx, 0x3FFFFFFE
        xor eax, eax
        rep stosd
        public_6382d34 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx+ebx*4-4]
        mov dword ptr ds : [eax+ebx*8-8], edx
        mov dword ptr ds : [eax+ebx*8-4], 0xBFF00000
        jmp public_6382d80
        public_6382d4a : nop
        mov eax, dword ptr ds : [public_658bdd8]
        fstp st(0)
        fld qword ptr ds : [public_63a58b0]
        inc eax
        mov dword ptr ds : [public_658bdd8], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6382d64 : nop
        cmp ebx, edx
        mov eax, dword ptr ss : [ebp+0x1C]
        je public_6382d80
        lea ecx, ds:[ebx]
        public_6382d6d : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], edx
        add edi, 8
        add eax, 8
        dec ecx
        jne public_6382d6d
        public_6382d80 : nop
        mov edx, dword ptr ds : [public_658bb50]
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ss:[esp+0x24]
        push eax
        inc edx
        push ebx
        push ecx
        mov dword ptr ds : [public_658bb50], edx
        call public_6381f00
        mov eax, dword ptr ss : [ebp+0x18]
        add esp, 0xC
        test eax, eax
        je public_6382da9
        fchs 
        public_6382da9 : nop
        fld qword ptr ds : [public_658b230]
        mov ecx, dword ptr ds : [public_658b078]
        cmp ecx, 4
        fmul st, st(1)
        fstp qword ptr ss : [esp+0x18]
        fstp st(0)
        jl public_6382df3
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        push eax
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_6370570
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x24]
        add esp, 4
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
        push ecx
        push edx
/*FIXUP push offset public_63f6d50 @0x6382de4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6d50
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x1C
        public_6382df3 : nop
        fld qword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6382bc0)
    }
}

#undef public_6382c0d
#undef public_6382c40
#undef public_6382c55
#undef public_6382c63
#undef public_6382c74
#undef public_6382c9b
#undef public_6382cb5
#undef public_6382cb7
#undef public_6382cd2
#undef public_6382cf5
#undef public_6382d0f
#undef public_6382d1f
#undef public_6382d34
#undef public_6382d4a
#undef public_6382d64
#undef public_6382d6d
#undef public_6382d80
#undef public_6382da9
#undef public_6382df3
