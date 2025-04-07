#include "RP8-PCH.h"


#define public_6d3b82f _public_6d3b82f
#define public_6d3b835 _public_6d3b835

PROC_DECLARE(0x6d3b80d, internal_6d3b80d, public_6d3b80d);
extern "C" NAKED register_t __cdecl internal_6d3b80d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ds : [ecx+4]
        cmp eax, 0x32545844
        je public_6d3b82f
        cmp eax, 0x33545844
        je public_6d3b82f
        fld dword ptr ds : [public_6d5f5e0]
        jmp public_6d3b835
        public_6d3b82f : nop
        fld dword ptr ds : [public_6d5f5ec]
        public_6d3b835 : nop
        fstp dword ptr ds : [ecx+0x106C]
        mov eax, dword ptr ss : [ebp-4]
        fld1 
        fdiv dword ptr ds : [eax+0x106C]
        fstp dword ptr ds : [eax+0x1070]
        mov eax, dword ptr ss : [ebp-4]
        fld dword ptr ds : [eax+0x1C]
        fmul dword ptr ds : [public_6d5f5e8]
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp-8]
        fld dword ptr ss : [ebp-8]
        fistp dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0xC], eax
        fild dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp-4]
        fmul dword ptr ds : [public_6d5f61c]
        fstp dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ss : [ebp-4]
        fld dword ptr ds : [eax+0x20]
        fmul dword ptr ds : [public_6d5f5e4]
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0xC], eax
        fild dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp-4]
        fmul dword ptr ds : [public_6d5f618]
        fstp dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [ebp-4]
        fld dword ptr ds : [eax+0x24]
        fmul dword ptr ds : [public_6d5f5e8]
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0xC], eax
        fild dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp-4]
        fmul dword ptr ds : [public_6d5f61c]
        fstp dword ptr ds : [eax+0x24]
        mov eax, dword ptr ss : [ebp-4]
        fld dword ptr ds : [eax+0x106C]
        fmul dword ptr ds : [eax+0x28]
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0xC], eax
        fild dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp-4]
        fmul dword ptr ds : [eax+0x1070]
        fstp dword ptr ds : [eax+0x28]
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d3b80d)
    }
}

#undef public_6d3b82f
#undef public_6d3b835
