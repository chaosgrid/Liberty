#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f9ed0);

#define public_65f9eee _public_65f9eee
#define public_65f9ef0 _public_65f9ef0

PROC_DECLARE(0x65f9ed0, internal_65f9ed0, public_65f9ed0);
extern "C" NAKED register_t __cdecl internal_65f9ed0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        fld dword ptr ss : [ebp+8]
        fadd dword ptr ss : [ebp+0xC]
        fstp dword ptr ss : [ebp-4]
        fld dword ptr ss : [ebp-4]
        fcomp dword ptr ss : [ebp+0xC]
        fnstsw ax
        test ah, 0x44
        jp public_65f9eee
        mov al, 1
        jmp public_65f9ef0
        public_65f9eee : nop
        xor al, al
        public_65f9ef0 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65f9ed0)
    }
}

#undef public_65f9eee
#undef public_65f9ef0
