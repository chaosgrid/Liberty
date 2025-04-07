#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_63829d0);
CLANG_FORWARD_PROC_SYMBOL(public_63849d0);

#define public_6384a0a _public_6384a0a
#define public_6384a12 _public_6384a12
#define public_6384a4f _public_6384a4f
#define public_6384a81 _public_6384a81
#define public_6384a9b _public_6384a9b
#define public_6384ab5 _public_6384ab5
#define public_6384abd _public_6384abd
#define public_6384ade _public_6384ade
#define public_6384aff _public_6384aff
#define public_6384b4a _public_6384b4a
#define public_6384bce _public_6384bce
#define public_6384bf9 _public_6384bf9
#define public_6384c0a _public_6384c0a
#define public_6384c27 _public_6384c27
#define public_6384c2f _public_6384c2f
#define public_6384c46 _public_6384c46
#define public_6384c51 _public_6384c51
#define public_6384c60 _public_6384c60
#define public_6384c6a _public_6384c6a
#define public_6384cc2 _public_6384cc2
#define public_6384cd9 _public_6384cd9

PROC_DECLARE(0x63849d0, internal_63849d0, public_63849d0);
extern "C" NAKED register_t __cdecl internal_63849d0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x4C
        mov edx, dword ptr ss : [ebp+0x10]
        push ebx
        push esi
        xor esi, esi
        cmp edx, esi
        push edi
        mov dword ptr ss : [esp+0x14], esi
        jle public_6384cd9
        mov ecx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ss : [ebp+0x18]
        sub ebx, ecx
        mov edi, eax
        sub ecx, eax
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6384a12
        public_6384a0a : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ss : [esp+0x24]
        public_6384a12 : nop
        lea eax, ds:[ecx+edi]
        fld qword ptr ds : [eax+ebx]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        fstp qword ptr ss : [esp+0x28]
        fld qword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x34], eax
        fcomp qword ptr ds : [public_63a5920]
        mov dword ptr ss : [esp+0x30], ecx
        fnstsw ax
        test ah, 0x41
        jne public_6384a4f
        fld qword ptr ss : [esp+0x30]
        fcomp qword ptr ds : [public_63a5930]
        fnstsw ax
        test ah, 1
        jne public_6384cc2
        public_6384a4f : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x44], 0x7FEFFFFF
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x3C], 0xFFEFFFFF
        mov ecx, edi
        je public_6384abd
        lea ebx, ds:[edx*8]
        lea edi, ds:[eax]
        public_6384a81 : nop
        fld qword ptr ss : [esp+0x40]
        fcomp qword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x41
        jne public_6384a9b
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x40], edx
        mov dword ptr ss : [esp+0x44], eax
        public_6384a9b : nop
        fld qword ptr ss : [esp+0x38]
        fcomp qword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        je public_6384ab5
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x3C], eax
        public_6384ab5 : nop
        add ecx, ebx
        dec edi
        jne public_6384a81
        mov edx, dword ptr ss : [ebp+0x10]
        public_6384abd : nop
        fld qword ptr ss : [esp+0x28]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 0x41
        jne public_6384ade
        mov ecx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], eax
        public_6384ade : nop
        fld qword ptr ss : [esp+0x30]
        fcomp qword ptr ds : [public_63a5930]
        fnstsw ax
        test ah, 1
        je public_6384aff
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x34], eax
        public_6384aff : nop
        mov eax, dword ptr ds : [public_658b050]
        test eax, eax
        mov edi, dword ptr ss : [esp+0x2C]
        mov ebx, dword ptr ss : [esp+0x28]
        je public_6384b4a
        dec edx
        cmp esi, edx
        jne public_6384b4a
        fld qword ptr ss : [esp+0x28]
        fcomp qword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 1
        je public_6384b4a
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x30]
        push ecx
        push edx
        push edi
        push ebx
        push esi
        push esi
/*FIXUP push offset public_63f75d0 @0x6384b32*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f75d0
        call public_6356960
        push 0
        push 0
        push 1
        call public_6378600
        add esp, 0x28
        public_6384b4a : nop
        fld qword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [public_658b6cc]
        fsub qword ptr ss : [esp+0x40]
        mov edx, dword ptr ds : [public_658b6c8]
        lea eax, ss:[esp+0x14]
        push eax
        fstp qword ptr ss : [esp+0x1C]
        push ecx
        mov eax, dword ptr ss : [esp+0x24]
        fld qword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x20]
        fsub qword ptr ss : [esp+0x38]
        push edx
        push eax
        push ecx
        sub esp, 8
        fstp qword ptr ss : [esp]
        call public_63829d0
        mov eax, dword ptr ss : [esp+0x30]
        fstp qword ptr ss : [esp+0x6C]
        add esp, 0x1C
        test eax, eax
        je public_6384bce
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x44]
        push edx
        mov edx, dword ptr ss : [esp+0x44]
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push edx
        push edi
        push ebx
        push eax
        push ecx
        push esi
/*FIXUP push offset public_63f7564 @0x6384bb6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7564
        call public_6356960
        push 0
        push 0
        push 1
        call public_6378600
        add esp, 0x34
        public_6384bce : nop
        fld qword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [ebp+0xC]
        test ecx, ecx
        fmul qword ptr ss : [esp+0x30]
        fld qword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x10]
        fmul qword ptr ss : [esp+0x28]
        fsubp 
        fdiv qword ptr ss : [esp+0x18]
        fstp qword ptr ss : [esp+0x48]
        je public_6384c0a
        mov edx, dword ptr ss : [ebp+0x10]
        shl edx, 3
        public_6384bf9 : nop
        fld qword ptr ss : [esp+0x50]
        fmul qword ptr ds : [eax]
        fadd qword ptr ss : [esp+0x48]
        fstp qword ptr ds : [eax]
        add eax, edx
        dec ecx
        jne public_6384bf9
        public_6384c0a : nop
        fld qword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x10]
        fcomp qword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 1
        je public_6384c27
        fld qword ptr ss : [esp+0x30]
        fld qword ptr ss : [esp+0x28]
        jmp public_6384c2f
        public_6384c27 : nop
        fld qword ptr ss : [esp+0x28]
        fld qword ptr ss : [esp+0x30]
        public_6384c2f : nop
        mov edx, dword ptr ss : [ebp+0xC]
        test edx, edx
        je public_6384c6a
        mov eax, dword ptr ss : [ebp+0x10]
        shl eax, 3
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ds:[edx]
        mov dword ptr ss : [esp+0x18], eax
        public_6384c46 : nop
        fcom qword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        je public_6384c51
        fst qword ptr ds : [ecx]
        public_6384c51 : nop
        fld qword ptr ds : [ecx]
        fcomp st(2)
        fnstsw ax
        test ah, 1
        je public_6384c60
        fld st(1)
        fstp qword ptr ds : [ecx]
        public_6384c60 : nop
        add ecx, dword ptr ss : [esp+0x28]
        dec dword ptr ss : [esp+0x18]
        jne public_6384c46
        public_6384c6a : nop
        mov eax, dword ptr ds : [public_658b078]
        fstp st(0)
        test eax, eax
        fstp st(0)
        je public_6384cc2
        mov ecx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x48]
        push ecx
        mov ecx, dword ptr ss : [esp+0x58]
        push eax
        mov eax, dword ptr ss : [esp+0x58]
        push ecx
        mov ecx, dword ptr ss : [esp+0x40]
        push eax
        mov eax, dword ptr ss : [esp+0x4C]
        push edx
        mov edx, dword ptr ss : [esp+0x44]
        push edi
        push ebx
        push ecx
        mov ecx, dword ptr ss : [esp+0x58]
        push edx
        mov edx, dword ptr ss : [esp+0x68]
        push eax
        mov eax, dword ptr ss : [esp+0x68]
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
        push edx
        push eax
        push esi
/*FIXUP push offset public_63f74f0 @0x6384cb3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f74f0
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x40
        public_6384cc2 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [ebp+0x10]
        inc esi
        add edi, 8
        cmp esi, edx
        mov dword ptr ss : [esp+0x10], edi
        jl public_6384a0a
        public_6384cd9 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x63849d0)
    }
}

#undef public_6384a0a
#undef public_6384a12
#undef public_6384a4f
#undef public_6384a81
#undef public_6384a9b
#undef public_6384ab5
#undef public_6384abd
#undef public_6384ade
#undef public_6384aff
#undef public_6384b4a
#undef public_6384bce
#undef public_6384bf9
#undef public_6384c0a
#undef public_6384c27
#undef public_6384c2f
#undef public_6384c46
#undef public_6384c51
#undef public_6384c60
#undef public_6384c6a
#undef public_6384cc2
#undef public_6384cd9
