#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3c5ce);

#define public_6d3e906 _public_6d3e906
#define public_6d3e93f _public_6d3e93f
#define public_6d3e94f _public_6d3e94f
#define public_6d3e952 _public_6d3e952

PROC_DECLARE(0x6d3e8b3, internal_6d3e8b3, public_6d3e8b3);
extern "C" NAKED register_t __cdecl internal_6d3e8b3()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [esi+8]
        push ecx
        fld dword ptr ds : [esi+4]
        push ecx
        fld dword ptr ds : [esi]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [ebp+0xC]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld1 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp+0xC]
        fstp dword ptr ss : [esp]
        call public_6d3c5ce
        add esp, 8
        test eax, eax
        je public_6d3e906
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, esi
        je public_6d3e952
        push edi
        mov edi, eax
        movsd 
        movsd 
        movsd 
        movsd 
        pop edi
        jmp public_6d3e952
        public_6d3e906 : nop
        fld dword ptr ss : [ebp+0xC]
        fcomp dword ptr ds : [public_6d5f8ec]
        fnstsw ax
        test ah, 0x41
        mov eax, dword ptr ss : [ebp+8]
        jne public_6d3e93f
        fld dword ptr ss : [ebp+0xC]
        fsqrt 
        fdivr dword ptr ds : [public_6d5e488]
        fld st(0)
        fmul dword ptr ds : [esi]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ds : [eax+4]
        fld st(0)
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ds : [eax+8]
        fmul dword ptr ds : [esi+0xC]
        jmp public_6d3e94f
        public_6d3e93f : nop
        fldz 
        fstp dword ptr ds : [eax]
        fldz 
        fstp dword ptr ds : [eax+4]
        fldz 
        fstp dword ptr ds : [eax+8]
        fldz 
        public_6d3e94f : nop
        fstp dword ptr ds : [eax+0xC]
        public_6d3e952 : nop
        pop esi
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d3e8b3)
    }
}

#undef public_6d3e906
#undef public_6d3e93f
#undef public_6d3e94f
#undef public_6d3e952
