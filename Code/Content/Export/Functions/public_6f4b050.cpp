#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b050);

#define public_6f4b070 _public_6f4b070
#define public_6f4b081 _public_6f4b081
#define public_6f4b084 _public_6f4b084
#define public_6f4b0a1 _public_6f4b0a1
#define public_6f4b0a6 _public_6f4b0a6
#define public_6f4b0c3 _public_6f4b0c3

PROC_DECLARE(0x6f4b050, internal_6f4b050, public_6f4b050);
extern "C" NAKED register_t __cdecl internal_6f4b050()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+0xDC]
        mov eax, dword ptr ds : [public_6fd0c3c]
        push esi
        push edi
        mov edi, dword ptr ds : [public_6fd0c40]
        cmp eax, edi
        mov esi, eax
        je public_6f4b081
        lea ecx, ds:[ecx]
        public_6f4b070 : nop
        mov ecx, dword ptr ds : [eax]
        cmp ecx, edx
        je public_6f4b0a1
        jge public_6f4b081
        mov esi, eax
        add eax, 8
        cmp eax, edi
        jne public_6f4b070
        public_6f4b081 : nop
        fld dword ptr ds : [esi+4]
        public_6f4b084 : nop
        fld dword ptr ds : [public_6fd0c34]
        pop edi
        fdivr st, st(1)
        pop esi
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x41
        jne public_6f4b0a6
        fstp st(0)
        mov eax, 0xFFFFFFFF
        ret 
        public_6f4b0a1 : nop
        fld dword ptr ds : [eax+4]
        jmp public_6f4b084
        public_6f4b0a6 : nop
        fld dword ptr ds : [public_6fd0c34]
        fmul st, st(1)
        fld dword ptr ss : [esp+8]
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_6f4b0c3
        mov eax, 1
        ret 
        public_6f4b0c3 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4b050)
    }
}

#undef public_6f4b070
#undef public_6f4b081
#undef public_6f4b084
#undef public_6f4b0a1
#undef public_6f4b0a6
#undef public_6f4b0c3
