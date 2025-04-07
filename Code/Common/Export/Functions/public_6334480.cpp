#include "Common-PCH.h"


#define public_6334494 _public_6334494
#define public_63344a0 _public_63344a0
#define public_63344a1 _public_63344a1
#define public_63344c5 _public_63344c5
#define public_63344d3 _public_63344d3

PROC_DECLARE(0x6334480, internal_6334480, public_6334480);
extern "C" NAKED register_t __cdecl internal_6334480()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        jne public_6334494
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        sete al
        pop esi
        ret 
        public_6334494 : nop
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        jne public_63344a0
        xor al, al
        pop esi
        ret 
        public_63344a0 : nop
        push ebx
        public_63344a1 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_63344d3
        test cl, cl
        je public_63344c5
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_63344d3
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_63344a1
        public_63344c5 : nop
        xor eax, eax
        xor ecx, ecx
        test eax, eax
        sete cl
        pop ebx
        mov al, cl
        pop esi
        ret 
        public_63344d3 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        xor ecx, ecx
        test eax, eax
        sete cl
        pop ebx
        mov al, cl
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6334480)
    }
}

#undef public_6334494
#undef public_63344a0
#undef public_63344a1
#undef public_63344c5
#undef public_63344d3
