#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261260);
CLANG_FORWARD_PROC_SYMBOL(public_6273bc0);
CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_62c4780);
CLANG_FORWARD_PROC_SYMBOL(public_632f3f0);
CLANG_FORWARD_PROC_SYMBOL(public_632f440);
CLANG_FORWARD_PROC_SYMBOL(public_632f480);
CLANG_FORWARD_PROC_SYMBOL(public_632f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_632fa30);
CLANG_FORWARD_PROC_SYMBOL(public_632fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_6332050);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

#define public_632f207 _public_632f207
#define public_632f22b _public_632f22b
#define public_632f244 _public_632f244
#define public_632f26a _public_632f26a
#define public_632f275 _public_632f275
#define public_632f2b7 _public_632f2b7
#define public_632f397 _public_632f397
#define public_632f3ba _public_632f3ba
#define public_632f3c9 _public_632f3c9
#define public_632f3ce _public_632f3ce
#define public_632f3cf _public_632f3cf
#define public_632f3d6 _public_632f3d6

PROC_DECLARE(0x632f1b0, internal_632f1b0, public_632f1b0);
extern "C" NAKED register_t __cdecl internal_632f1b0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        je public_632f275
        mov ecx, edi
        call public_62c4780
        fsubr qword ptr ds : [public_6399410]
        fabs 
        fcomp qword ptr ds : [public_63a4950]
        fnstsw ax
        test ah, 5
        jnp public_632f26a
        mov eax, dword ptr ds : [edi+0xA8]
        test eax, eax
        mov ecx, edi
        je public_632f3ba
        push 8
        lea ebx, ds:[edi+0x1C]
        push ebx
        call public_632f480
        mov dword ptr ss : [esp+0x10], 8
        public_632f207 : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        lea eax, ds:[ebx+4]
        push ecx
        push eax
        mov ecx, edi
        call public_632f3f0
        mov ebp, eax
        mov eax, dword ptr ds : [edi+ebp*4+0x10]
        test eax, eax
        je public_632f22b
        push ebx
        push eax
        mov ecx, esi
        call public_632fbe0
        jmp public_632f244
        public_632f22b : nop
        mov ecx, offset public_640a728
        call public_632f9b0
        push ebx
        mov ecx, eax
        mov dword ptr ds : [edi+ebp*4+0x10], eax
        call public_632f440
        inc dword ptr ds : [esi+8]
        public_632f244 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx], 0
        mov edx, dword ptr ds : [esi+8]
        dec edx
        add ebx, 0x14
        dec eax
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ss : [esp+0x10], eax
        jne public_632f207
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        push edi
        jmp public_632f3cf
        public_632f26a : nop
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        push edi
        jmp public_632f3cf
        public_632f275 : nop
        mov cl, byte ptr ds : [public_658e738]
        mov al, 1
        test al, cl
        jne public_632f2b7
/*FIXUP push offset _public_6261260 @0x632f281*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 8
        push 0x14
        or cl, al
/*FIXUP push offset public_658e75c @0x632f28c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658e75c
        mov byte ptr ds : [public_658e738], cl
        call public_6273bc0
        xor eax, eax
        mov ecx, 0x2F
        mov edi, offset public_658e740
/*FIXUP push offset _public_62a8920 @0x632f2a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a8920
        rep stosd
        call public_6391f9e
        add esp, 4
        public_632f2b7 : nop
        mov edx, dword ptr ds : [public_640a73c]
/*FIXUP push offset public_658e740 @0x632f2bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658e740
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, offset public_640a728
        call public_6332050
        mov ecx, dword ptr ds : [public_640a73c]
        mov eax, dword ptr ds : [ecx+4]
        add eax, 8
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, eax
        mov dword ptr ds : [edx], ecx
        mov dword ptr ss : [esp+0x18], 0
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ss : [esp+0x1C], 0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+8], ecx
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_639a1d0]
        fld st(0)
        fmul dword ptr ds : [eax]
        fst dword ptr ds : [eax]
        fld st(1)
        fmul dword ptr ds : [eax+4]
        fst dword ptr ds : [eax+4]
        fxch st(2)
        fmul dword ptr ds : [eax+8]
        fst dword ptr ds : [eax+8]
        fadd st, st(2)
        fadd st, st(1)
        fmul dword ptr ds : [public_6399408]
        fstp dword ptr ds : [eax+0xC]
        mov ebx, dword ptr ds : [esi+4]
        mov ecx, ebx
        fstp st(1)
        fstp st(0)
        call public_62c4780
        fsubr qword ptr ds : [public_6399410]
        fabs 
        fcomp qword ptr ds : [public_63a4950]
        fnstsw ax
        test ah, 5
        jnp public_632f3c9
        mov eax, dword ptr ds : [ebx+0xA8]
        test eax, eax
        mov ecx, ebx
        je public_632f3ba
        push 8
        lea edi, ds:[ebx+0x1C]
        push edi
        call public_632f480
        mov ebp, 8
        public_632f397 : nop
        push edi
        push ebx
        mov ecx, esi
        call public_632fa30
        mov dword ptr ds : [edi], 0
        mov edx, dword ptr ds : [esi+8]
        dec edx
        add edi, 0x14
        dec ebp
        mov dword ptr ds : [esi+8], edx
        jne public_632f397
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        jmp public_632f3ce
        public_632f3ba : nop
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call public_632f440
        inc dword ptr ds : [esi+8]
        jmp public_632f3d6
        public_632f3c9 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        public_632f3ce : nop
        push ebx
        public_632f3cf : nop
        mov ecx, esi
        call public_632fa30
        public_632f3d6 : nop
        mov eax, dword ptr ds : [public_640a750]
        pop edi
        pop esi
        inc eax
        pop ebp
        mov dword ptr ds : [public_640a750], eax
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x632f1b0)
    }
}

#undef public_632f207
#undef public_632f22b
#undef public_632f244
#undef public_632f26a
#undef public_632f275
#undef public_632f2b7
#undef public_632f397
#undef public_632f3ba
#undef public_632f3c9
#undef public_632f3ce
#undef public_632f3cf
#undef public_632f3d6
