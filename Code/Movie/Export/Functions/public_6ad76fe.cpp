#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad767b);
CLANG_FORWARD_PROC_SYMBOL(public_6ad76fe);

#define public_6ad771e _public_6ad771e
#define public_6ad7736 _public_6ad7736
#define public_6ad774e _public_6ad774e
#define public_6ad7750 _public_6ad7750
#define public_6ad7763 _public_6ad7763
#define public_6ad7769 _public_6ad7769
#define public_6ad7777 _public_6ad7777
#define public_6ad778d _public_6ad778d
#define public_6ad77b4 _public_6ad77b4

PROC_DECLARE(0x6ad76fe, internal_6ad76fe, public_6ad76fe);
extern "C" NAKED register_t __cdecl internal_6ad76fe()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        fld qword ptr ss : [ebp+8]
        fcomp qword ptr ds : [public_6ada848]
        push esi
        fnstsw ax
        sahf 
        jne public_6ad771e
        fldz 
        xor esi, esi
        fstp qword ptr ss : [ebp-8]
        jmp public_6ad77b4
        public_6ad771e : nop
        xor ecx, ecx
        test word ptr ss : [ebp+0xE], 0x7FF0
        jne public_6ad778d
        test dword ptr ss : [ebp+0xC], 0xFFFFF
        jne public_6ad7736
        cmp dword ptr ss : [ebp+8], ecx
        je public_6ad778d
        public_6ad7736 : nop
        fld qword ptr ss : [ebp+8]
        fcomp qword ptr ds : [public_6ada848]
        mov esi, 0xFFFFFC03
        fnstsw ax
        sahf 
        jae public_6ad774e
        push 1
        pop eax
        jmp public_6ad7750
        public_6ad774e : nop
        xor eax, eax
        public_6ad7750 : nop
        test byte ptr ss : [ebp+0xE], 0x10
        jne public_6ad7769
        shl dword ptr ss : [ebp+0xC], 1
        test byte ptr ss : [ebp+0xB], 0x80
        je public_6ad7763
        or dword ptr ss : [ebp+0xC], 1
        public_6ad7763 : nop
        shl dword ptr ss : [ebp+8], 1
        dec esi
        jmp public_6ad7750
        public_6ad7769 : nop
        and word ptr ss : [ebp+0xE], 0xFFEF
        cmp eax, ecx
        je public_6ad7777
        or byte ptr ss : [ebp+0xF], 0x80
        public_6ad7777 : nop
        fld qword ptr ss : [ebp+8]
        push ecx
        push ecx
        push ecx
        fstp qword ptr ss : [esp]
        call public_6ad767b
        fstp qword ptr ss : [ebp-8]
        add esp, 0xC
        jmp public_6ad77b4
        public_6ad778d : nop
        fld qword ptr ss : [ebp+8]
        push ecx
        push ecx
        push ecx
        fstp qword ptr ss : [esp]
        call public_6ad767b
        mov eax, dword ptr ss : [ebp+0xE]
        add esp, 0xC
        fstp qword ptr ss : [ebp-8]
        shr eax, 4
        and ax, 0x7FF
        movsx esi, ax
        sub esi, 0x3FE
        public_6ad77b4 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        fld qword ptr ss : [ebp-8]
        mov dword ptr ds : [eax], esi
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad76fe)
    }
}

#undef public_6ad771e
#undef public_6ad7736
#undef public_6ad774e
#undef public_6ad7750
#undef public_6ad7763
#undef public_6ad7769
#undef public_6ad7777
#undef public_6ad778d
#undef public_6ad77b4
