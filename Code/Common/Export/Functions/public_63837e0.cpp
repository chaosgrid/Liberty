#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63837e0);

#define public_6383808 _public_6383808
#define public_638381b _public_638381b
#define public_638382e _public_638382e
#define public_6383830 _public_6383830
#define public_6383836 _public_6383836

PROC_DECLARE(0x63837e0, internal_63837e0, public_63837e0);
extern "C" NAKED register_t __cdecl internal_63837e0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+8]
        xor edx, edx
        test eax, eax
        push esi
        mov dword ptr ss : [esp+8], 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC], 0xFFEFFFFF
        je public_6383836
        lea esi, ds:[eax]
        public_6383808 : nop
        fld qword ptr ds : [ecx]
        fcomp qword ptr ds : [public_63a58b0]
        fld qword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        je public_638381b
        fchs 
        public_638381b : nop
        fcom qword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x41
        jne public_638382e
        fstp qword ptr ss : [esp+8]
        mov edx, ecx
        jmp public_6383830
        public_638382e : nop
        fstp st(0)
        public_6383830 : nop
        add ecx, 8
        dec esi
        jne public_6383808
        public_6383836 : nop
        mov eax, edx
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x63837e0)
    }
}

#undef public_6383808
#undef public_638381b
#undef public_638382e
#undef public_6383830
#undef public_6383836
