#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5cf56);

#define public_6d3e9af _public_6d3e9af
#define public_6d3e9d0 _public_6d3e9d0
#define public_6d3e9d4 _public_6d3e9d4
#define public_6d3ea00 _public_6d3ea00

PROC_DECLARE(0x6d3e964, internal_6d3e964, public_6d3e964);
extern "C" NAKED register_t __cdecl internal_6d3e964()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ss : [ebp+0x10]
        fmul dword ptr ds : [esi]
        push edi
        fld dword ptr ds : [ecx+4]
        mov edi, dword ptr ss : [ebp+0x14]
        fmul dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [edi]
        fld dword ptr ds : [edi+8]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [edi+4]
        faddp 
        fsubr st, st(1)
        fcom dword ptr ds : [public_6d5e48c]
        fnstsw ax
        test ah, 0x44
        jp public_6d3e9af
        fstp st(0)
        fstp st(0)
        jmp public_6d3e9d0
        public_6d3e9af : nop
        fld st(1)
        push ecx
        fadd dword ptr ds : [ecx+0xC]
        push ecx
        fdiv st, st(1)
        fstp dword ptr ss : [ebp+0xC]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [ebp+0xC]
        fstp qword ptr ss : [esp]
        call public_6d5cf56
        test eax, eax
        pop ecx
        pop ecx
        jne public_6d3e9d4
        public_6d3e9d0 : nop
        xor eax, eax
        jmp public_6d3ea00
        public_6d3e9d4 : nop
        fld dword ptr ds : [edi]
        mov eax, dword ptr ss : [ebp+8]
        fsub dword ptr ds : [esi]
        fmul dword ptr ss : [ebp+0xC]
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [eax]
        fld dword ptr ds : [edi+4]
        fsub dword ptr ds : [esi+4]
        fmul dword ptr ss : [ebp+0xC]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ds : [edi+8]
        fsub dword ptr ds : [esi+8]
        fmul dword ptr ss : [ebp+0xC]
        fadd dword ptr ds : [esi+8]
        fstp dword ptr ds : [eax+8]
        public_6d3ea00 : nop
        pop edi
        pop esi
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6d3e964)
    }
}

#undef public_6d3e9af
#undef public_6d3e9d0
#undef public_6d3e9d4
#undef public_6d3ea00
