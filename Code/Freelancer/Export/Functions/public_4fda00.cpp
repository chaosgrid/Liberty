#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4110c0);
CLANG_FORWARD_PROC_SYMBOL(public_411300);
CLANG_FORWARD_PROC_SYMBOL(public_4115b0);
CLANG_FORWARD_PROC_SYMBOL(public_411670);
CLANG_FORWARD_PROC_SYMBOL(public_4205c0);
CLANG_FORWARD_PROC_SYMBOL(public_420690);
CLANG_FORWARD_PROC_SYMBOL(public_4206c0);
CLANG_FORWARD_PROC_SYMBOL(public_4fda00);
CLANG_FORWARD_PROC_SYMBOL(public_5374e0);
CLANG_FORWARD_PROC_SYMBOL(public_537a90);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4fda7c _public_4fda7c
#define public_4fda82 _public_4fda82
#define public_4fda8b _public_4fda8b
#define public_4fdacf _public_4fdacf
#define public_4fdaea _public_4fdaea
#define public_4fdaf9 _public_4fdaf9
#define public_4fdb1e _public_4fdb1e
#define public_4fdb87 _public_4fdb87
#define public_4fdbbd _public_4fdbbd
#define public_4fdbbf _public_4fdbbf
#define public_4fdc7a _public_4fdc7a
#define public_4fdc81 _public_4fdc81
#define public_4fdca2 _public_4fdca2

PROC_DECLARE(0x4fda00, internal_4fda00, public_4fda00);
extern "C" NAKED register_t __cdecl internal_4fda00()
{
    __asm
    {
        sub esp, 0x1C
        mov eax, dword ptr ss : [esp+0x20]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [public_5c71dc]
        mov dword ptr ds : [esi+0x6C], eax
        mov dword ptr ds : [esi+0x74], 0
        mov dword ptr ds : [esi+0x70], 0x3F800000
        call edi
        mov ecx, dword ptr ds : [esi+0x6C]
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_5caeec]
        fmul qword ptr ds : [public_5da4c0]
        fadd qword ptr ds : [public_5da4b8]
        fmul dword ptr ds : [ecx+0x80]
        fst dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4fda8b
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ss : [esp+0x28]
        fst dword ptr ds : [esi+0x74]
        fld dword ptr ds : [ecx+0x84]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 0x41
        jne public_4fda7c
        fld dword ptr ss : [esp+0x28]
        jmp public_4fda82
        public_4fda7c : nop
        fld dword ptr ds : [ecx+0x84]
        public_4fda82 : nop
        fxch 
        fmul st, st(1)
        fstp dword ptr ds : [esi+0x70]
        fstp st(0)
        public_4fda8b : nop
        call edi
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
/*FIXUP push offset public_5da4b0 @0x4fda95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da4b0
        lea ecx, ss:[esp+0xC]
        fmul dword ptr ds : [public_5caeec]
        mov dword ptr ds : [esi+0x7C], 0x3F800000
        xor edi, edi
        fstp dword ptr ds : [esi+0x78]
        call public_4205c0
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, offset public_674f24
        call public_420690
        test al, al
        je public_4fdacf
        mov eax, dword ptr ds : [public_674f38]
        jmp public_4fdaea
        public_4fdacf : nop
        lea edx, ss:[esp+8]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        mov ecx, offset public_674f24
        call public_4206c0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [public_674f38], eax
        public_4fdaea : nop
        cmp eax, dword ptr ds : [public_674f28]
        je public_4fdaf9
        lea edi, ds:[eax+0x28]
        test edi, edi
        jne public_4fdb1e
        public_4fdaf9 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5da4b0 @0x4fdaff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da4b0
        push 0xF2
/*FIXUP push offset public_5da4a0 @0x4fdb09*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da4a0
        mov eax, 0x100002
/*FIXUP push offset public_5c958c @0x4fdb13*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_4fdb1e : nop
        mov edx, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x84]
        push edx
        mov edx, dword ptr ds : [edi]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ds : [esi+0x6C]
        fld dword ptr ds : [eax+0x88]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4fdca2
        fld dword ptr ds : [esi+0x74]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_4fdb87
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5da468 @0x4fdb68*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da468
        push 0x8D
/*FIXUP push offset public_5da434 @0x4fdb72*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da434
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x4fdb7c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_4fdb87 : nop
        mov al, byte ptr ds : [esi+0x80]
        test al, al
        je public_4fdca2
        push 0x130
        call public_537a90
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_4fdbbd
        mov ecx, edi
        call public_5374e0
        mov dword ptr ds : [edi+0x12C], esi
        mov dword ptr ds : [edi], offset public_5da424
        jmp public_4fdbbf
        public_4fdbbd : nop
        xor edi, edi
        public_4fdbbf : nop
        push ebp
        mov ebp, dword ptr ds : [esi+0x6C]
        mov dword ptr ds : [esi+0x98], edi
        fld dword ptr ss : [ebp+0x54]
        fmul qword ptr ds : [public_5c89c0]
        sub esp, 8
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        call public_5b7ec0
        fld dword ptr ss : [ebp+0x58]
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ss : [esp+0x34], al
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        call public_5b7ec0
        fld dword ptr ss : [ebp+0x5C]
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ss : [esp+0x35], al
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x32], al
        call public_4115b0
        mov eax, dword ptr ss : [ebp+0x88]
        push eax
        mov ecx, edi
        call public_411300
        fld dword ptr ss : [ebp+0x94]
        fcomp dword ptr ds : [public_5da41c]
        mov ecx, edi
        push 1
        fnstsw ax
        test ah, 5
        jp public_4fdc7a
        push 2
        call public_4110c0
        mov ecx, dword ptr ss : [ebp+0x94]
        push ecx
        mov ecx, edi
        call public_411670
        jmp public_4fdc81
        public_4fdc7a : nop
        push 1
        call public_4110c0
        public_4fdc81 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+4]
        test al, al
        pop ebp
        jne public_4fdca2
        mov ecx, dword ptr ds : [esi+0x98]
        call public_537ad0
        mov dword ptr ds : [esi+0x98], 0
        public_4fdca2 : nop
        pop edi
        mov al, 1
        pop esi
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x4fda00)
    }
}

#undef public_4fda7c
#undef public_4fda82
#undef public_4fda8b
#undef public_4fdacf
#undef public_4fdaea
#undef public_4fdaf9
#undef public_4fdb1e
#undef public_4fdb87
#undef public_4fdbbd
#undef public_4fdbbf
#undef public_4fdc7a
#undef public_4fdc81
#undef public_4fdca2
