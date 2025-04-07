#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad76fe);
CLANG_FORWARD_PROC_SYMBOL(public_6ad8f7f);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9201);

#define public_6ad8faa _public_6ad8faa
#define public_6ad8fc4 _public_6ad8fc4
#define public_6ad901e _public_6ad901e
#define public_6ad9026 _public_6ad9026
#define public_6ad903e _public_6ad903e
#define public_6ad9046 _public_6ad9046
#define public_6ad904e _public_6ad904e
#define public_6ad9066 _public_6ad9066
#define public_6ad906e _public_6ad906e
#define public_6ad9076 _public_6ad9076
#define public_6ad908e _public_6ad908e
#define public_6ad9094 _public_6ad9094
#define public_6ad9096 _public_6ad9096
#define public_6ad909e _public_6ad909e
#define public_6ad90b9 _public_6ad90b9
#define public_6ad9104 _public_6ad9104
#define public_6ad9116 _public_6ad9116
#define public_6ad9118 _public_6ad9118
#define public_6ad912f _public_6ad912f
#define public_6ad913a _public_6ad913a
#define public_6ad9146 _public_6ad9146
#define public_6ad914c _public_6ad914c
#define public_6ad9158 _public_6ad9158
#define public_6ad9162 _public_6ad9162
#define public_6ad9164 _public_6ad9164
#define public_6ad9171 _public_6ad9171
#define public_6ad9174 _public_6ad9174
#define public_6ad918b _public_6ad918b

PROC_DECLARE(0x6ad8f7f, internal_6ad8f7f, public_6ad8f7f);
extern "C" NAKED register_t __cdecl internal_6ad8f7f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push edi
        mov edi, eax
        and edi, 0x1F
        push 1
        test al, 8
        pop ebx
        je public_6ad8faa
        test byte ptr ss : [ebp+0x10], bl
        je public_6ad8faa
        push ebx
        call public_6ad9201
        pop ecx
        and edi, 0xFFFFFFF7
        jmp public_6ad9174
        public_6ad8faa : nop
        test al, 4
        je public_6ad8fc4
        test byte ptr ss : [ebp+0x10], 4
        je public_6ad8fc4
        push 4
        call public_6ad9201
        pop ecx
        and edi, 0xFFFFFFFB
        jmp public_6ad9174
        public_6ad8fc4 : nop
        test bl, al
        je public_6ad909e
        test byte ptr ss : [ebp+0x10], 8
        je public_6ad909e
        push 8
        call public_6ad9201
        pop ecx
        mov eax, 0xC00
        mov ecx, dword ptr ss : [ebp+0x10]
        and ecx, eax
        je public_6ad9076
        cmp ecx, 0x400
        je public_6ad904e
        cmp ecx, 0x800
        je public_6ad9026
        cmp ecx, eax
        jne public_6ad9096
        mov ecx, dword ptr ss : [ebp+0xC]
        fld qword ptr ds : [ecx]
        fcomp qword ptr ds : [public_6ada848]
        fld qword ptr ds : [public_6ae0200]
        fnstsw ax
        sahf 
        ja public_6ad901e
        fchs 
        public_6ad901e : nop
        fstp qword ptr ss : [ebp-0xC]
        fld qword ptr ss : [ebp-0xC]
        jmp public_6ad9094
        public_6ad9026 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        fld qword ptr ds : [ecx]
        fcomp qword ptr ds : [public_6ada848]
        fnstsw ax
        sahf 
        jbe public_6ad903e
        fld qword ptr ds : [public_6ae01f0]
        jmp public_6ad9046
        public_6ad903e : nop
        fld qword ptr ds : [public_6ae0200]
        fchs 
        public_6ad9046 : nop
        fstp qword ptr ss : [ebp-0xC]
        fld qword ptr ss : [ebp-0xC]
        jmp public_6ad9094
        public_6ad904e : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        fld qword ptr ds : [ecx]
        fcomp qword ptr ds : [public_6ada848]
        fnstsw ax
        sahf 
        jbe public_6ad9066
        fld qword ptr ds : [public_6ae0200]
        jmp public_6ad906e
        public_6ad9066 : nop
        fld qword ptr ds : [public_6ae01f0]
        fchs 
        public_6ad906e : nop
        fstp qword ptr ss : [ebp-0xC]
        fld qword ptr ss : [ebp-0xC]
        jmp public_6ad9094
        public_6ad9076 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        fld qword ptr ds : [ecx]
        fcomp qword ptr ds : [public_6ada848]
        fld qword ptr ds : [public_6ae01f0]
        fnstsw ax
        sahf 
        ja public_6ad908e
        fchs 
        public_6ad908e : nop
        fstp qword ptr ss : [ebp-0xC]
        fld qword ptr ss : [ebp-0xC]
        public_6ad9094 : nop
        fstp qword ptr ds : [ecx]
        public_6ad9096 : nop
        and edi, 0xFFFFFFFE
        jmp public_6ad9174
        public_6ad909e : nop
        test al, 2
        je public_6ad9174
        test byte ptr ss : [ebp+0x10], 0x10
        je public_6ad9174
        push esi
        xor esi, esi
        test al, 0x10
        je public_6ad90b9
        mov esi, ebx
        public_6ad90b9 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        fld qword ptr ds : [eax]
        fstp qword ptr ss : [ebp-0xC]
        fld qword ptr ss : [ebp-0xC]
        fcomp qword ptr ds : [public_6ada848]
        fnstsw ax
        sahf 
        je public_6ad9162
        fld qword ptr ss : [ebp-0xC]
        lea eax, ss:[ebp-4]
        push eax
        push ecx
        push ecx
        fstp qword ptr ss : [esp]
        call public_6ad76fe
        mov eax, dword ptr ss : [ebp-4]
        add esp, 0xC
        fstp qword ptr ss : [ebp-0xC]
        lea ecx, ds:[eax-0x600]
        cmp ecx, 0xFFFFFBCE
        jge public_6ad9104
        fldz 
        mov esi, ebx
        fstp qword ptr ss : [ebp-0xC]
        jmp public_6ad9158
        public_6ad9104 : nop
        fld qword ptr ss : [ebp-0xC]
        fcomp qword ptr ds : [public_6ada848]
        fnstsw ax
        sahf 
        jae public_6ad9116
        mov edx, ebx
        jmp public_6ad9118
        public_6ad9116 : nop
        xor edx, edx
        public_6ad9118 : nop
        mov al, byte ptr ss : [ebp-6]
        and eax, 0xF
        or al, 0x10
        mov word ptr ss : [ebp-6], ax
        mov eax, 0xFFFFFC03
        cmp ecx, eax
        jge public_6ad914c
        sub eax, ecx
        public_6ad912f : nop
        test byte ptr ss : [ebp-0xC], bl
        je public_6ad913a
        test esi, esi
        jne public_6ad913a
        mov esi, ebx
        public_6ad913a : nop
        shr dword ptr ss : [ebp-0xC], 1
        test byte ptr ss : [ebp-8], bl
        je public_6ad9146
        or byte ptr ss : [ebp-9], 0x80
        public_6ad9146 : nop
        shr dword ptr ss : [ebp-8], 1
        dec eax
        jne public_6ad912f
        public_6ad914c : nop
        test edx, edx
        je public_6ad9158
        fld qword ptr ss : [ebp-0xC]
        fchs 
        fstp qword ptr ss : [ebp-0xC]
        public_6ad9158 : nop
        fld qword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0xC]
        fstp qword ptr ds : [eax]
        jmp public_6ad9164
        public_6ad9162 : nop
        mov esi, ebx
        public_6ad9164 : nop
        test esi, esi
        pop esi
        je public_6ad9171
        push 0x10
        call public_6ad9201
        pop ecx
        public_6ad9171 : nop
        and edi, 0xFFFFFFFD
        public_6ad9174 : nop
        test byte ptr ss : [ebp+8], 0x10
        je public_6ad918b
        test byte ptr ss : [ebp+0x10], 0x20
        je public_6ad918b
        push 0x20
        call public_6ad9201
        pop ecx
        and edi, 0xFFFFFFEF
        public_6ad918b : nop
        xor eax, eax
        test edi, edi
        pop edi
        pop ebx
        sete al
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad8f7f)
    }
}

#undef public_6ad8faa
#undef public_6ad8fc4
#undef public_6ad901e
#undef public_6ad9026
#undef public_6ad903e
#undef public_6ad9046
#undef public_6ad904e
#undef public_6ad9066
#undef public_6ad906e
#undef public_6ad9076
#undef public_6ad908e
#undef public_6ad9094
#undef public_6ad9096
#undef public_6ad909e
#undef public_6ad90b9
#undef public_6ad9104
#undef public_6ad9116
#undef public_6ad9118
#undef public_6ad912f
#undef public_6ad913a
#undef public_6ad9146
#undef public_6ad914c
#undef public_6ad9158
#undef public_6ad9162
#undef public_6ad9164
#undef public_6ad9171
#undef public_6ad9174
#undef public_6ad918b
