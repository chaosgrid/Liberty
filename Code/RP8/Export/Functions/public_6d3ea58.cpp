#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3c83f);

PROC_DECLARE(0x6d3ea58, internal_6d3ea58, public_6d3ea58);
extern "C" NAKED register_t __cdecl internal_6d3ea58()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov eax, dword ptr ss : [ebp+0x10]
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [ebx]
        push esi
        fsub dword ptr ds : [eax]
        push edi
        fld dword ptr ds : [ebx+4]
        mov edi, dword ptr ss : [ebp+8]
        fsub dword ptr ds : [eax+4]
        push dword ptr ss : [ebp+8]
        fld dword ptr ds : [ebx+8]
        lea esi, ss:[ebp-0x18]
        fsub dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+0x14]
        fld dword ptr ds : [ebx]
        push dword ptr ss : [ebp+8]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ds : [ebx+4]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [ebp-8]
        fld dword ptr ds : [ebx+8]
        fsub dword ptr ds : [eax+8]
        fld st(0)
        fmul st, st(3)
        fld dword ptr ss : [ebp-8]
        fmul st, st(3)
        fsubp 
        fstp dword ptr ss : [ebp-0x18]
        fld st(1)
        fmul dword ptr ss : [ebp-0xC]
        fld st(1)
        fmul st, st(5)
        fsubp 
        fstp dword ptr ss : [ebp-0x14]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [ebp-8]
        fmul st, st(2)
        fld dword ptr ss : [ebp-0xC]
        fmul st, st(2)
        fsubp 
        fstp dword ptr ss : [ebp-0x10]
        movsd 
        movsd 
        fstp st(0)
        fstp st(0)
        movsd 
        call public_6d3c83f
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        fld dword ptr ds : [eax+8]
        pop esi
        fmul dword ptr ds : [ebx+8]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ebx+4]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ebx]
        pop ebx
        faddp 
        fchs 
        fstp dword ptr ds : [eax+0xC]
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x6d3ea58)
    }
}
