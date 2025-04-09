#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_43a460);
CLANG_FORWARD_PROC_SYMBOL(public_43e600);
CLANG_FORWARD_PROC_SYMBOL(public_440ac0);
CLANG_FORWARD_PROC_SYMBOL(public_441700);
CLANG_FORWARD_PROC_SYMBOL(public_441a40);
CLANG_FORWARD_PROC_SYMBOL(public_441b90);
CLANG_FORWARD_PROC_SYMBOL(public_441c40);
CLANG_FORWARD_PROC_SYMBOL(public_44ba60);
CLANG_FORWARD_PROC_SYMBOL(public_44bfd0);
CLANG_FORWARD_PROC_SYMBOL(public_44c490);
CLANG_FORWARD_PROC_SYMBOL(public_45a460);
CLANG_FORWARD_PROC_SYMBOL(public_4be390);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_441745 _public_441745
#define public_441762 _public_441762
#define public_441794 _public_441794
#define public_4417c1 _public_4417c1
#define public_441812 _public_441812
#define public_441825 _public_441825
#define public_44182f _public_44182f
#define public_44184c _public_44184c
#define public_4418a4 _public_4418a4
#define public_4418c3 _public_4418c3
#define public_4418e0 _public_4418e0
#define public_4418ef _public_4418ef
#define public_441906 _public_441906
#define public_441915 _public_441915
#define public_44192a _public_44192a
#define public_441974 _public_441974
#define public_4419a0 _public_4419a0
#define public_4419e6 _public_4419e6
#define public_441a04 _public_441a04
#define public_441a12 _public_441a12

PROC_DECLARE(0x441700, internal_441700, public_441700);
extern "C" NAKED register_t __cdecl internal_441700()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call public_4be390
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x3B8], eax
        mov eax, dword ptr ds : [eax+0x1C]
        test eax, eax
        je public_441a04
        mov eax, dword ptr ds : [eax+0x18]
        push eax
        lea ecx, ss:[esp+0x14]
/*FIXUP push offset public_5cb8a4 @0x44172b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb8a4
        push ecx
        call dword ptr ds : [public_5c71ec]
        mov ebx, dword ptr ss : [esp+0x28]
        add esp, 0xC
        xor ebp, ebp
        mov edi, 0x1C
        public_441745 : nop
        mov edx, dword ptr ds : [ebx+0x1C]
        mov eax, dword ptr ds : [edi+edx]
        test eax, eax
        je public_441762
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        call dword ptr ds : [public_5c70dc]
        add esp, 8
        test eax, eax
        jne public_441794
        public_441762 : nop
        add edi, 4
        inc ebp
        cmp edi, 0x2C
        jl public_441745
        mov ecx, offset public_668708
        call public_43a460
        mov ebx, dword ptr ss : [esp+0x20]
        mov edi, eax
        mov eax, dword ptr ds : [ebx+0x1C]
        mov eax, dword ptr ds : [eax+0x10]
        lea ecx, ds:[eax-5]
        cmp ecx, 5
        ja public_441a04
/*FIXUP jmp dword ptr ds : [ecx*4+public_441a1c] @0x44178d*/
  JMPTB cmp ecx, 0
  JMPTB je public_441825
  JMPTB cmp ecx, 1
  JMPTB je public_4418a4
  JMPTB cmp ecx, 2
  JMPTB je public_441825
  JMPTB cmp ecx, 3
  JMPTB je public_4417c1
  JMPTB cmp ecx, 4
  JMPTB je public_4419e6
  JMPTB cmp ecx, 5
  JMPTB je public_4419e6
  JMPTB int 3
        public_441794 : nop
        mov edx, dword ptr ds : [ebx+0x1C]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x10]
        repne scasb
        mov edi, dword ptr ds : [edx+ebp*4+0x1C]
        not ecx
        push 0
        dec ecx
        add ecx, edi
        push 0
        push ecx
        mov ecx, esi
        call public_441b90
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_4417c1 : nop
        call public_45a460
        mov ecx, esi
        call public_43e600
        push 0
        push esi
/*FIXUP push offset _public_441c40 @0x4417d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_441c40
        mov ebx, 1
/*FIXUP push offset public_5cb894 @0x4417da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb894
        mov ecx, edi
        mov byte ptr ds : [edi+0x1340], bl
        call public_44ba60
        test al, al
        je public_441812
        push 0
        call public_41dda0
        add esp, 4
        push ebx
        mov ecx, esi
        call public_441a40
        pop edi
        mov byte ptr ds : [esi+0x3D5], bl
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_441812 : nop
        push ebx
        mov ecx, esi
        call public_441a40
        mov byte ptr ds : [esi+0x3D5], bl
        jmp public_441a04
        public_441825 : nop
        cmp eax, 7
        je public_44182f
        call public_45a460
        public_44182f : nop
        mov ecx, dword ptr ds : [esi+0x374]
        test ecx, ecx
        mov eax, dword ptr ds : [public_610d18]
        je public_44184c
        mov ecx, dword ptr ds : [ebx+0x1C]
        cmp dword ptr ds : [ecx+0x10], 5
        jne public_44184c
        mov eax, dword ptr ds : [public_610d1c]
        public_44184c : nop
        push 0
        push esi
/*FIXUP push offset _public_441c40 @0x44184f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_441c40
        mov ebx, 1
        push eax
        mov ecx, edi
        mov byte ptr ds : [edi+0x1340], bl
        call public_44ba60
        test al, al
        je public_441a04
        push 0
        call public_41dda0
        mov edx, dword ptr ss : [esp+0x24]
        mov byte ptr ds : [esi+0x3D5], bl
        mov eax, dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ds : [eax+0x10]
        add esp, 4
        cmp ecx, 7
        je public_441a12
        push ebx
        mov ecx, esi
        call public_441a40
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_4418a4 : nop
        mov eax, dword ptr ds : [esi+0x374]
        test eax, eax
        mov ebp, dword ptr ds : [public_610d20]
        je public_44192a
        mov eax, dword ptr ds : [esi+0x370]
        test eax, eax
        jne public_4418c3
        mov eax, dword ptr ds : [public_5c7078]
        public_4418c3 : nop
        mov ebx, dword ptr ds : [public_5c6d24]
/*FIXUP push offset public_5cb7bc @0x4418c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7bc
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_4418e0
        mov ebp, dword ptr ds : [public_610d24]
        jmp public_44192a
        public_4418e0 : nop
        mov eax, dword ptr ds : [esi+0x370]
        test eax, eax
        jne public_4418ef
        mov eax, dword ptr ds : [public_5c7078]
/*FIXUP public_4418ef : nop
        push offset public_5cb7a0 @0x4418ef*/
  FIXUP public_4418ef : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7a0
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_441906
        mov ebp, dword ptr ds : [public_610d28]
        jmp public_44192a
        public_441906 : nop
        mov eax, dword ptr ds : [esi+0x370]
        test eax, eax
        jne public_441915
        mov eax, dword ptr ds : [public_5c7078]
/*FIXUP public_441915 : nop
        push offset public_5cb784 @0x441915*/
  FIXUP public_441915 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb784
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_44192a
        mov ebp, dword ptr ds : [public_610d2c]
/*FIXUP public_44192a : nop
        push offset public_5cb7c4 @0x44192a*/
  FIXUP public_44192a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7c4
        call public_59da10
        add esp, 4
        test eax, eax
        je public_441974
        mov cl, byte ptr ds : [eax+0x6C]
        mov bl, 2
        test bl, cl
        je public_441974
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_441974
/*FIXUP push offset public_5caf68 @0x44194b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf68
        call public_59da10
        add esp, 4
        test eax, eax
        je public_441974
        test byte ptr ds : [eax+0x6C], bl
        je public_441974
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_441974
        push 0
        push 0x6B
        call public_5763b0
        add esp, 8
/*FIXUP public_441974 : nop
        push offset public_5cb6bc @0x441974*/
  FIXUP public_441974 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6bc
        call public_59da10
        add esp, 4
        test eax, eax
        je public_4419a0
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        test eax, eax
        je public_4419a0
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push 0x4E
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        public_4419a0 : nop
        mov ecx, edi
        mov byte ptr ds : [edi+0x1340], 1
        call public_44c490
        push 0
        push esi
/*FIXUP push offset _public_441c40 @0x4419b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_441c40
        push ebp
        mov ecx, edi
        call public_44ba60
        test al, al
        je public_441a04
        push 0
        call public_41dda0
        add esp, 4
        push 0
        mov ecx, esi
        call public_441a40
        pop edi
        mov byte ptr ds : [esi+0x3D5], 0
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_4419e6 : nop
        push 1
        push 0
        push esi
/*FIXUP push offset _public_441c40 @0x4419eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_441c40
        push 0
        mov ecx, edi
        mov byte ptr ds : [edi+0x1340], 0
        call public_44bfd0
        test al, al
        jne public_441a12
        public_441a04 : nop
        mov eax, dword ptr ds : [esi+0x3B8]
        push eax
        mov ecx, esi
        call public_440ac0
        public_441a12 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x441700)
        ASM_EXPORT_ENTRY_SINGLE(0x4419e6, public_4419e6)
    }
}

#undef public_441745
#undef public_441762
#undef public_441794
#undef public_4417c1
#undef public_441812
#undef public_441825
#undef public_44182f
#undef public_44184c
#undef public_4418a4
#undef public_4418c3
#undef public_4418e0
#undef public_4418ef
#undef public_441906
#undef public_441915
#undef public_44192a
#undef public_441974
#undef public_4419a0
#undef public_4419e6
#undef public_441a04
#undef public_441a12

#pragma init_seg(compiler)
extern "C" void const* const public_4419e6 = __AsmFindLabelExport(&internal_441700, 0x4419e6);
