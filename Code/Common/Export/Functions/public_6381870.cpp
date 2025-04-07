#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6380f60);
CLANG_FORWARD_PROC_SYMBOL(public_6381870);

#define public_63818dd _public_63818dd
#define public_63819a2 _public_63819a2
#define public_63819d6 _public_63819d6
#define public_63819e9 _public_63819e9
#define public_63819eb _public_63819eb
#define public_63819f4 _public_63819f4
#define public_6381c37 _public_6381c37
#define public_6381c73 _public_6381c73
#define public_6381c87 _public_6381c87
#define public_6381c89 _public_6381c89
#define public_6381c91 _public_6381c91
#define public_6381c98 _public_6381c98
#define public_6381cd4 _public_6381cd4
#define public_6381cda _public_6381cda

PROC_DECLARE(0x6381870, internal_6381870, public_6381870);
extern "C" NAKED register_t __cdecl internal_6381870()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        cmp eax, 2
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        push esi
        push edi
        jne public_63818dd
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        fld qword ptr ds : [ecx+8]
        fsub qword ptr ds : [edx+8]
        mov esi, dword ptr ss : [esp+0x2C]
        push 0
        push 0
        fstp qword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        fld qword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x30]
        fsub qword ptr ds : [edx]
        push eax
        push 2
        fstp qword ptr ds : [esi+8]
        push esi
        call public_6380f60
        mov eax, dword ptr ss : [esp+0x38]
        fld qword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x44]
        fmul qword ptr ds : [esi+8]
        add esp, 0x14
        fld qword ptr ds : [eax]
        fmul qword ptr ds : [esi]
        faddp 
        fchs 
        fstp qword ptr ds : [ecx]
        mov dword ptr ss : [ebp], 0
        jmp public_6381c98
        public_63818dd : nop
        cmp eax, 3
        jne public_63819f4
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [eax+8]
        fld qword ptr ds : [esi+8]
        mov edx, dword ptr ds : [eax+4]
        fsub qword ptr ds : [ecx+8]
        lea edi, ds:[eax+8]
        push 0
        push 0
        fld qword ptr ds : [edx+0x10]
        fsub qword ptr ds : [ecx+0x10]
        fmulp 
        fld qword ptr ds : [esi+0x10]
        mov esi, dword ptr ss : [esp+0x34]
        fsub qword ptr ds : [ecx+0x10]
        fld qword ptr ds : [edx+8]
        fsub qword ptr ds : [ecx+8]
        fmulp 
        fsubp 
        fstp qword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edi]
        fld qword ptr ds : [edx+0x10]
        mov ebx, dword ptr ds : [eax+4]
        fsub qword ptr ds : [ecx+0x10]
        fld qword ptr ds : [ebx]
        fsub qword ptr ds : [ecx]
        fmulp 
        fld qword ptr ds : [ebx+0x10]
        fsub qword ptr ds : [ecx+0x10]
        fld qword ptr ds : [edx]
        fsub qword ptr ds : [ecx]
        fmulp 
        fsubp 
        fstp qword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        fld qword ptr ds : [ecx+8]
        fsub qword ptr ds : [eax+8]
        mov edx, dword ptr ds : [edi]
        fld qword ptr ds : [edx]
        fsub qword ptr ds : [eax]
        fmulp 
        fld qword ptr ds : [edx+8]
        mov edx, dword ptr ss : [esp+0x30]
        fsub qword ptr ds : [eax+8]
        push edx
        push 3
        push esi
        fld qword ptr ds : [ecx]
        fsub qword ptr ds : [eax]
        fmulp 
        fsubp 
        fstp qword ptr ds : [esi+0x10]
        call public_6380f60
        mov ecx, dword ptr ss : [esp+0x38]
        fld qword ptr ds : [ecx+0x10]
        mov eax, dword ptr ss : [esp+0x44]
        fmul qword ptr ds : [esi+0x10]
        add esp, 0x14
        fld qword ptr ds : [ecx+8]
        mov edx, 2
        fmul qword ptr ds : [esi+8]
        faddp 
        fld qword ptr ds : [ecx]
        fmul qword ptr ds : [esi]
        faddp 
        fchs 
        fld st(0)
        fstp qword ptr ds : [eax]
        fld qword ptr ds : [public_658b6a0]
        public_63819a2 : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, ecx
        je public_63819d6
        fld qword ptr ds : [eax+0x10]
        fmul qword ptr ds : [esi+0x10]
        fld qword ptr ds : [eax+8]
        fmul qword ptr ds : [esi+8]
        faddp 
        fld qword ptr ds : [esi]
        fmul qword ptr ds : [eax]
        faddp 
        fadd st, st(2)
        fcom 
        fnstsw ax
        test ah, 0x41
        je public_63819e9
        fld st(1)
        fchs 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_63819eb
        public_63819d6 : nop
        mov eax, edx
        dec edx
        sub edi, 4
        test eax, eax
        jne public_63819a2
        fstp st(0)
        fstp st(0)
        jmp public_6381c98
        public_63819e9 : nop
        fstp st(0)
        public_63819eb : nop
        fstp st(0)
        fstp st(0)
        jmp public_6381c91
        public_63819f4 : nop
        cmp eax, 4
        jne public_6381c98
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+0xC]
        mov esi, dword ptr ds : [eax+4]
        fld qword ptr ds : [edx+0x18]
        fsub qword ptr ds : [ecx+0x18]
        mov ebx, dword ptr ds : [eax+8]
        fld qword ptr ds : [esi+0x10]
        lea edi, ds:[eax+0xC]
        fsub qword ptr ds : [ecx+0x10]
        fld qword ptr ds : [esi+0x18]
        fsub qword ptr ds : [ecx+0x18]
        fld qword ptr ds : [edx+0x10]
        fsub qword ptr ds : [ecx+0x10]
        fld qword ptr ds : [ebx+0x10]
        fsub qword ptr ds : [ecx+0x10]
        fld qword ptr ds : [ebx+0x18]
        fsub qword ptr ds : [ecx+0x18]
        fstp qword ptr ss : [esp+0x10]
        fld st(4)
        fmul st, st(4)
        fld st(2)
        fmul st, st(4)
        fsubp 
        fld qword ptr ds : [ebx+8]
        fsub qword ptr ds : [ecx+8]
        fmulp 
        fxch st(5)
        fmul st, st(1)
        fld qword ptr ss : [esp+0x10]
        fmul st, st(3)
        fsubp 
        fld qword ptr ds : [esi+8]
        mov esi, dword ptr ss : [esp+0x2C]
        fsub qword ptr ds : [ecx+8]
        fmulp 
        fsubp st(5), st
        fxch st(2)
        fmul st, st(2)
        fld qword ptr ss : [esp+0x10]
        fmul st, st(4)
        fsubp 
        fld qword ptr ds : [edx+8]
        fsub qword ptr ds : [ecx+8]
        fmulp 
        faddp st(4), st
        fxch st(3)
        fchs 
        fstp qword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edi]
        mov ebx, dword ptr ds : [eax+4]
        fstp st(0)
        mov ebp, dword ptr ds : [eax+8]
        fxch 
        fstp st(0)
        fstp st(0)
        fld qword ptr ds : [edx+0x18]
        fsub qword ptr ds : [ecx+0x18]
        fld qword ptr ds : [ebx+0x10]
        fsub qword ptr ds : [ecx+0x10]
        fld qword ptr ds : [ebx+0x18]
        fsub qword ptr ds : [ecx+0x18]
        fld qword ptr ds : [edx+0x10]
        fsub qword ptr ds : [ecx+0x10]
        fld qword ptr ss : [ebp+0x10]
        fsub qword ptr ds : [ecx+0x10]
        fld qword ptr ss : [ebp+0x18]
        fsub qword ptr ds : [ecx+0x18]
        fstp qword ptr ss : [esp+0x10]
        fld st(4)
        fmul st, st(4)
        fld st(2)
        fmul st, st(4)
        fsubp 
        fld qword ptr ss : [ebp]
        fsub qword ptr ds : [ecx]
        fmulp 
        fxch st(5)
        fmul st, st(1)
        fld qword ptr ss : [esp+0x10]
        fmul st, st(3)
        fsubp 
        fld qword ptr ds : [ebx]
        fsub qword ptr ds : [ecx]
        fmulp 
        fsubp st(5), st
        fxch st(2)
        fmul st, st(2)
        fld qword ptr ss : [esp+0x10]
        fmul st, st(4)
        fsubp 
        fld qword ptr ds : [edx]
        fsub qword ptr ds : [ecx]
        fmulp 
        faddp st(4), st
        fxch st(3)
        fstp qword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        fstp st(0)
        mov edx, dword ptr ds : [edi]
        mov ebx, dword ptr ds : [eax+4]
        fxch 
        fstp st(0)
        mov ebp, dword ptr ds : [eax+8]
        fstp st(0)
        fld qword ptr ds : [edx+0x18]
        fsub qword ptr ds : [ecx+0x18]
        fld qword ptr ds : [ebx+8]
        fsub qword ptr ds : [ecx+8]
        fld qword ptr ds : [ebx+0x18]
        fsub qword ptr ds : [ecx+0x18]
        fld qword ptr ds : [edx+8]
        fsub qword ptr ds : [ecx+8]
        fld qword ptr ss : [ebp+8]
        fsub qword ptr ds : [ecx+8]
        fld qword ptr ss : [ebp+0x18]
        fsub qword ptr ds : [ecx+0x18]
        fstp qword ptr ss : [esp+0x10]
        fld st(4)
        fmul st, st(4)
        fld st(2)
        fmul st, st(4)
        fsubp 
        fld qword ptr ss : [ebp]
        fsub qword ptr ds : [ecx]
        fmulp 
        fxch st(5)
        fmul st, st(1)
        fxch st(2)
        fmul qword ptr ss : [esp+0x10]
        fsubp st(2), st
        fld qword ptr ds : [ebx]
        fsub qword ptr ds : [ecx]
        fmulp st(2), st
        fxch 
        fsubp st(4), st
        push 0
        fxch 
        push 0
        fmul st, st(1)
        fld qword ptr ss : [esp+0x18]
        fmul st, st(3)
        fsubp 
        fld qword ptr ds : [edx]
        fsub qword ptr ds : [ecx]
        fmulp 
        faddp st(3), st
        fxch st(2)
        fchs 
        fstp qword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edi]
        fxch 
        fstp st(0)
        mov ebx, dword ptr ds : [eax+4]
        fstp st(0)
        mov eax, dword ptr ds : [eax+8]
        fld qword ptr ds : [edx+0x10]
        fsub qword ptr ds : [ecx+0x10]
        fld qword ptr ds : [ebx+8]
        fsub qword ptr ds : [ecx+8]
        fld qword ptr ds : [ebx+0x10]
        fsub qword ptr ds : [ecx+0x10]
        fld qword ptr ds : [edx+8]
        fsub qword ptr ds : [ecx+8]
        fld qword ptr ds : [eax+8]
        fsub qword ptr ds : [ecx+8]
        fld qword ptr ds : [eax+0x10]
        fsub qword ptr ds : [ecx+0x10]
        fstp qword ptr ss : [esp+0x18]
        fld st(4)
        fmul st, st(4)
        fld st(2)
        fmul st, st(4)
        fsubp 
        fld qword ptr ds : [eax]
        fsub qword ptr ds : [ecx]
        fmulp 
        fxch st(5)
        fmul st, st(1)
        fxch st(2)
        fmul qword ptr ss : [esp+0x18]
        fsubp st(2), st
        fld qword ptr ds : [ebx]
        fsub qword ptr ds : [ecx]
        fmulp st(2), st
        fxch 
        fsubp st(4), st
        fmul st, st(1)
        fld qword ptr ss : [esp+0x18]
        fmul st, st(3)
        fsubp 
        fld qword ptr ds : [edx]
        fsub qword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x30]
        fmulp 
        faddp st(3), st
        fxch st(2)
        fstp qword ptr ds : [esi+0x18]
        fxch 
        fstp st(0)
        fstp st(0)
        push ecx
        push 4
        push esi
        call public_6380f60
        mov ecx, dword ptr ss : [esp+0x38]
        fld qword ptr ds : [ecx+0x18]
        mov edx, dword ptr ss : [esp+0x44]
        fmul qword ptr ds : [esi+0x18]
        add esp, 0x14
        fld qword ptr ds : [ecx+0x10]
        fmul qword ptr ds : [esi+0x10]
        faddp 
        fld qword ptr ds : [ecx+8]
        fmul qword ptr ds : [esi+8]
        faddp 
        fld qword ptr ds : [ecx]
        fmul qword ptr ds : [esi]
        faddp 
        fchs 
        fld st(0)
        fstp qword ptr ds : [edx]
        mov edx, 3
        fld qword ptr ds : [public_658b6a0]
        public_6381c37 : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, ecx
        je public_6381c73
        fld qword ptr ds : [eax+0x18]
        fmul qword ptr ds : [esi+0x18]
        fld qword ptr ds : [eax+0x10]
        fmul qword ptr ds : [esi+0x10]
        faddp 
        fld qword ptr ds : [eax+8]
        fmul qword ptr ds : [esi+8]
        faddp 
        fld qword ptr ds : [esi]
        fmul qword ptr ds : [eax]
        faddp 
        fadd st, st(2)
        fcom 
        fnstsw ax
        test ah, 0x41
        je public_6381c87
        fld st(1)
        fchs 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_6381c89
        public_6381c73 : nop
        mov eax, edx
        dec edx
        sub edi, 4
        test eax, eax
        jne public_6381c37
        mov ebp, dword ptr ss : [esp+0x34]
        fstp st(0)
        fstp st(0)
        jmp public_6381c98
        public_6381c87 : nop
        fstp st(0)
        public_6381c89 : nop
        mov ebp, dword ptr ss : [esp+0x34]
        fstp st(0)
        fstp st(0)
        public_6381c91 : nop
        mov dword ptr ss : [ebp], 1
        public_6381c98 : nop
        cmp dword ptr ss : [ebp], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        je public_6381cda
        mov ecx, dword ptr ds : [public_658bd80]
        mov eax, dword ptr ds : [public_658b078]
        inc ecx
        test eax, eax
        mov dword ptr ds : [public_658bd80], ecx
        je public_6381cd4
        mov ecx, dword ptr ds : [public_658b870]
        mov edx, dword ptr ds : [public_658b7fc]
        push ecx
/*FIXUP push offset public_63f6910 @0x6381cc5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6910
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_6381cd4 : nop
        inc dword ptr ds : [public_658bd90]
        public_6381cda : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6381870)
    }
}

#undef public_63818dd
#undef public_63819a2
#undef public_63819d6
#undef public_63819e9
#undef public_63819eb
#undef public_63819f4
#undef public_6381c37
#undef public_6381c73
#undef public_6381c87
#undef public_6381c89
#undef public_6381c91
#undef public_6381c98
#undef public_6381cd4
#undef public_6381cda
