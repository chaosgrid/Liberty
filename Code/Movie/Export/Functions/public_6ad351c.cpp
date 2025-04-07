#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad351c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad364c);

#define public_6ad3539 _public_6ad3539
#define public_6ad356c _public_6ad356c
#define public_6ad357f _public_6ad357f
#define public_6ad35a7 _public_6ad35a7
#define public_6ad35c3 _public_6ad35c3
#define public_6ad35cb _public_6ad35cb
#define public_6ad35d9 _public_6ad35d9
#define public_6ad35dd _public_6ad35dd
#define public_6ad3613 _public_6ad3613
#define public_6ad361b _public_6ad361b
#define public_6ad3636 _public_6ad3636
#define public_6ad3638 _public_6ad3638
#define public_6ad3640 _public_6ad3640
#define public_6ad3642 _public_6ad3642
#define public_6ad3647 _public_6ad3647

PROC_DECLARE(0x6ad351c, internal_6ad351c, public_6ad351c);
extern "C" NAKED register_t __cdecl internal_6ad351c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        fld qword ptr ss : [ebp+8]
        fcomp qword ptr ds : [public_6ada848]
        fld qword ptr ss : [ebp+8]
        push esi
        xor edx, edx
        xor esi, esi
        fnstsw ax
        sahf 
        jae public_6ad3539
        fchs 
        public_6ad3539 : nop
        fstp qword ptr ss : [ebp-8]
        mov eax, 0x7FF00000
        mov ecx, 0xFFF00000
        cmp dword ptr ss : [ebp+0x14], eax
        jne public_6ad357f
        cmp dword ptr ss : [ebp+0x10], edx
        jne public_6ad35a7
        fld qword ptr ss : [ebp-8]
        fcomp qword ptr ds : [public_6ada990]
        fnstsw ax
        sahf 
        ja public_6ad35c3
        fld qword ptr ss : [ebp-8]
        fcomp qword ptr ds : [public_6ada990]
        fnstsw ax
        sahf 
        jb public_6ad35d9
        public_6ad356c : nop
        fld qword ptr ds : [public_6ae01f8]
        mov eax, dword ptr ss : [ebp+0x18]
        push 1
        pop esi
        fstp qword ptr ds : [eax]
        jmp public_6ad3647
        public_6ad357f : nop
        cmp dword ptr ss : [ebp+0x14], ecx
        jne public_6ad35a7
        cmp dword ptr ss : [ebp+0x10], edx
        jne public_6ad35a7
        fld qword ptr ss : [ebp-8]
        fcomp qword ptr ds : [public_6ada990]
        fnstsw ax
        sahf 
        ja public_6ad35d9
        fld qword ptr ss : [ebp-8]
        fcomp qword ptr ds : [public_6ada990]
        fnstsw ax
        sahf 
        jae public_6ad356c
        jmp public_6ad35c3
        public_6ad35a7 : nop
        cmp dword ptr ss : [ebp+0xC], eax
        jne public_6ad35dd
        cmp dword ptr ss : [ebp+8], edx
        jne public_6ad3647
        fld qword ptr ss : [ebp+0x10]
        fcomp qword ptr ds : [public_6ada848]
        fnstsw ax
        sahf 
        jbe public_6ad35cb
        public_6ad35c3 : nop
        fld qword ptr ds : [public_6ae01f0]
        jmp public_6ad3642
        public_6ad35cb : nop
        fld qword ptr ss : [ebp+0x10]
        fcomp qword ptr ds : [public_6ada848]
        fnstsw ax
        sahf 
        jae public_6ad3640
        public_6ad35d9 : nop
        fldz 
        jmp public_6ad3642
        public_6ad35dd : nop
        cmp dword ptr ss : [ebp+0xC], ecx
        jne public_6ad3647
        cmp dword ptr ss : [ebp+8], edx
        jne public_6ad3647
        fld qword ptr ss : [ebp+0x10]
        push ecx
        push ecx
        fstp qword ptr ss : [esp]
        call public_6ad364c
        fld qword ptr ss : [ebp+0x10]
        fcomp qword ptr ds : [public_6ada848]
        pop ecx
        pop ecx
        mov ecx, eax
        fnstsw ax
        sahf 
        jbe public_6ad361b
        fld qword ptr ds : [public_6ae01f0]
        cmp ecx, 1
        jne public_6ad3613
        fchs 
        public_6ad3613 : nop
        fstp qword ptr ss : [ebp+0x10]
        fld qword ptr ss : [ebp+0x10]
        jmp public_6ad3642
        public_6ad361b : nop
        fld qword ptr ss : [ebp+0x10]
        fcomp qword ptr ds : [public_6ada848]
        fnstsw ax
        sahf 
        jae public_6ad3640
        cmp ecx, 1
        jne public_6ad3636
        fld qword ptr ds : [public_6ae0210]
        jmp public_6ad3638
        public_6ad3636 : nop
        fldz 
        public_6ad3638 : nop
        fstp qword ptr ss : [ebp+0x10]
        fld qword ptr ss : [ebp+0x10]
        jmp public_6ad3642
        public_6ad3640 : nop
        fld1 
        public_6ad3642 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        fstp qword ptr ds : [eax]
        public_6ad3647 : nop
        mov eax, esi
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad351c)
    }
}

#undef public_6ad3539
#undef public_6ad356c
#undef public_6ad357f
#undef public_6ad35a7
#undef public_6ad35c3
#undef public_6ad35cb
#undef public_6ad35d9
#undef public_6ad35dd
#undef public_6ad3613
#undef public_6ad361b
#undef public_6ad3636
#undef public_6ad3638
#undef public_6ad3640
#undef public_6ad3642
#undef public_6ad3647
