#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f80);
CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_6347e00);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_635aa60);
CLANG_FORWARD_PROC_SYMBOL(public_636a350);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_636a393 _public_636a393
#define public_636a3be _public_636a3be
#define public_636a3c0 _public_636a3c0
#define public_636a3dd _public_636a3dd
#define public_636a462 _public_636a462
#define public_636a464 _public_636a464
#define public_636a478 _public_636a478
#define public_636a47a _public_636a47a
#define public_636a48f _public_636a48f
#define public_636a491 _public_636a491
#define public_636a4a6 _public_636a4a6
#define public_636a4a8 _public_636a4a8
#define public_636a4bd _public_636a4bd
#define public_636a4bf _public_636a4bf
#define public_636a4d4 _public_636a4d4
#define public_636a4d6 _public_636a4d6
#define public_636a562 _public_636a562
#define public_636a575 _public_636a575
#define public_636a589 _public_636a589
#define public_636a5b4 _public_636a5b4
#define public_636a609 _public_636a609
#define public_636a614 _public_636a614
#define public_636a62e _public_636a62e
#define public_636a631 _public_636a631

PROC_DECLARE(0x636a350, internal_636a350, public_636a350);
extern "C" NAKED register_t __cdecl internal_636a350()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        xor esi, esi
        xor edi, edi
        mov dword ptr ds : [ebx+0x10], edi
        mov si, word ptr ds : [ebx+0x1A]
        push 8
        lea eax, ds:[esi+1]
        push eax
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ds : [ebx+4], esi
        call public_6343f80
        mov ecx, 1
        add esp, 8
        cmp esi, edi
        mov dword ptr ds : [ebx+0x14], eax
        mov word ptr ds : [eax+2], cx
        mov ebp, ecx
        mov dword ptr ss : [esp+0x10], edi
        jle public_636a5b4
        public_636a393 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+edx*4]
        push 0x28
        mov dword ptr ss : [esp+0x18], eax
        call public_6391d9c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_636a3be
        mov ecx, 0xA
        xor eax, eax
        mov edi, esi
        rep stosd
        jmp public_636a3c0
        public_636a3be : nop
        xor esi, esi
        public_636a3c0 : nop
        mov cx, word ptr ds : [ebx+0x8E]
        cmp cx, word ptr ds : [ebx+0x8C]
        lea edi, ds:[ebx+0x8C]
        jb public_636a3dd
        mov ecx, edi
        call public_63441a0
        public_636a3dd : nop
        mov eax, dword ptr ds : [edi+4]
        xor edx, edx
        mov dx, word ptr ds : [edi+2]
        lea ecx, ss:[esp+0x20]
        push ecx
        mov dword ptr ds : [eax+edx*4], esi
        mov eax, dword ptr ss : [esp+0x18]
        inc word ptr ds : [edi+2]
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call public_635aa60
        add esp, 0xC
        push 0x3F000000
        lea ecx, ss:[esp+0x44]
        push ecx
        lea edx, ss:[esp+0x28]
        lea edi, ds:[esi+4]
        push edx
        mov ecx, edi
        call public_6347e00
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x30]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x38], eax
        fstp dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x34]
        call public_6347e60
        fst dword ptr ds : [esi+0x14]
        fsubr dword ptr ds : [edi]
        fcom dword ptr ds : [ebx+0x30]
        fnstsw ax
        test ah, 1
        je public_636a462
        fstp dword ptr ds : [ebx+0x30]
        jmp public_636a464
        public_636a462 : nop
        fstp st(0)
        public_636a464 : nop
        fld dword ptr ds : [esi+0x14]
        fadd dword ptr ds : [edi]
        fcom dword ptr ds : [ebx+0x40]
        fnstsw ax
        test ah, 0x41
        jne public_636a478
        fstp dword ptr ds : [ebx+0x40]
        jmp public_636a47a
        public_636a478 : nop
        fstp st(0)
        public_636a47a : nop
        fld dword ptr ds : [esi+8]
        fsub dword ptr ds : [esi+0x14]
        fcom dword ptr ds : [ebx+0x34]
        fnstsw ax
        test ah, 1
        je public_636a48f
        fstp dword ptr ds : [ebx+0x34]
        jmp public_636a491
        public_636a48f : nop
        fstp st(0)
        public_636a491 : nop
        fld dword ptr ds : [esi+0x14]
        fadd dword ptr ds : [esi+8]
        fcom dword ptr ds : [ebx+0x44]
        fnstsw ax
        test ah, 0x41
        jne public_636a4a6
        fstp dword ptr ds : [ebx+0x44]
        jmp public_636a4a8
        public_636a4a6 : nop
        fstp st(0)
        public_636a4a8 : nop
        fld dword ptr ds : [esi+0xC]
        fsub dword ptr ds : [esi+0x14]
        fcom dword ptr ds : [ebx+0x38]
        fnstsw ax
        test ah, 1
        je public_636a4bd
        fstp dword ptr ds : [ebx+0x38]
        jmp public_636a4bf
        public_636a4bd : nop
        fstp st(0)
        public_636a4bf : nop
        fld dword ptr ds : [esi+0x14]
        fadd dword ptr ds : [esi+0xC]
        fcom dword ptr ds : [ebx+0x48]
        fnstsw ax
        test ah, 0x41
        jne public_636a4d4
        fstp dword ptr ds : [ebx+0x48]
        jmp public_636a4d6
        public_636a4d4 : nop
        fstp st(0)
        public_636a4d6 : nop
        fld dword ptr ds : [esi+0x14]
        fmul dword ptr ds : [public_63a54b4]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [edi]
        fdiv st, st(1)
        call public_6391dae
        inc al
        mov byte ptr ds : [esi+0x18], al
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [esi+8]
        fdiv st, st(1)
        call public_6391dae
        inc al
        mov byte ptr ds : [esi+0x19], al
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [esi+0xC]
        fdiv st, st(1)
        call public_6391dae
        fstp st(0)
        mov ecx, dword ptr ss : [esp+0x14]
        inc al
        mov byte ptr ds : [esi+0x1A], al
        add dword ptr ds : [ebx+0x10], 0x28
        mov dword ptr ds : [esi+0x1C], ecx
        xor eax, eax
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi], ebp
        mov eax, dword ptr ds : [ebx+0x14]
        lea edx, ss:[ebp-1]
        mov word ptr ds : [eax+ebp*8], dx
        mov edx, dword ptr ds : [ebx+0x14]
        lea ecx, ss:[ebp+1]
        mov word ptr ds : [edx+ebp*8+2], cx
        mov eax, dword ptr ds : [ebx+0x14]
        mov dword ptr ds : [eax+ebp*8+4], esi
        fld dword ptr ds : [ebx+0xC]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x40
        je public_636a562
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [ebx+0xC], ecx
        jmp public_636a575
        public_636a562 : nop
        fld dword ptr ds : [esi+0x14]
        fcomp dword ptr ds : [ebx+0xC]
        fnstsw ax
        test ah, 1
        je public_636a575
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [ebx+0xC], edx
        public_636a575 : nop
        mov ax, word ptr ds : [ebx+0x2A]
        cmp ax, word ptr ds : [ebx+0x28]
        lea edi, ds:[ebx+0x28]
        jb public_636a589
        mov ecx, edi
        call public_63441a0
        public_636a589 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x10]
        xor ecx, ecx
        mov cx, word ptr ds : [edi+2]
        mov dword ptr ds : [edx+ecx*4], esi
        inc word ptr ds : [edi+2]
        mov ecx, dword ptr ss : [esp+0x1C]
        inc ebp
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jl public_636a393
        mov ecx, 1
        public_636a5b4 : nop
        mov eax, dword ptr ds : [ebx+0x14]
        xor edx, edx
        mov word ptr ds : [eax+ebp*8-6], dx
        cmp dword ptr ss : [esp+0x10], ecx
        jle public_636a631
        fld dword ptr ds : [ebx+0x40]
        fsub dword ptr ds : [ebx+0x30]
        fld dword ptr ds : [ebx+0x44]
        fsub dword ptr ds : [ebx+0x34]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ebx+0x48]
        fsub dword ptr ds : [ebx+0x38]
        fstp dword ptr ss : [esp+0x10]
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 1
        je public_636a614
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 1
        je public_636a609
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x50], 2
        pop ebx
        add esp, 0x40
        ret 
        public_636a609 : nop
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x50], ecx
        pop ebx
        add esp, 0x40
        ret 
        public_636a614 : nop
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 1
        je public_636a62e
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x50], 2
        pop ebx
        add esp, 0x40
        ret 
        public_636a62e : nop
        mov dword ptr ds : [ebx+0x50], edx
        public_636a631 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x636a350)
    }
}

#undef public_636a393
#undef public_636a3be
#undef public_636a3c0
#undef public_636a3dd
#undef public_636a462
#undef public_636a464
#undef public_636a478
#undef public_636a47a
#undef public_636a48f
#undef public_636a491
#undef public_636a4a6
#undef public_636a4a8
#undef public_636a4bd
#undef public_636a4bf
#undef public_636a4d4
#undef public_636a4d6
#undef public_636a562
#undef public_636a575
#undef public_636a589
#undef public_636a5b4
#undef public_636a609
#undef public_636a614
#undef public_636a62e
#undef public_636a631
