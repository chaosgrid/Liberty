#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3c5ce);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cf50);

#define public_6d3e589 _public_6d3e589
#define public_6d3e58c _public_6d3e58c
#define public_6d3e59c _public_6d3e59c

PROC_DECLARE(0x6d3e528, internal_6d3e528, public_6d3e528);
extern "C" NAKED register_t __cdecl internal_6d3e528()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [esi+0xC]
        fcomp dword ptr ds : [public_6d5e488]
        fnstsw ax
        test ah, 5
        jp public_6d3e589
        fld dword ptr ds : [esi+0xC]
        call public_6d5cf50
        fst dword ptr ss : [ebp+0xC]
        fsin 
        push ecx
        push ecx
        fstp dword ptr ss : [ebp-4]
        fldz 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp-4]
        fstp dword ptr ss : [esp]
        call public_6d3c5ce
        add esp, 8
        test eax, eax
        mov eax, dword ptr ss : [ebp+8]
        jne public_6d3e58c
        fld dword ptr ss : [ebp+0xC]
        fdiv dword ptr ss : [ebp-4]
        fld st(0)
        fmul dword ptr ds : [esi]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ds : [eax+8]
        jmp public_6d3e59c
        public_6d3e589 : nop
        mov eax, dword ptr ss : [ebp+8]
        public_6d3e58c : nop
        fld dword ptr ds : [esi]
        fstp dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ecx
        public_6d3e59c : nop
        fldz 
        pop esi
        fstp dword ptr ds : [eax+0xC]
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6d3e528)
    }
}

#undef public_6d3e589
#undef public_6d3e58c
#undef public_6d3e59c
