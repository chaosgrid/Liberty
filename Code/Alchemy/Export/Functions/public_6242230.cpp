#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6242230);

PROC_DECLARE(0x6242230, internal_6242230, public_6242230);
extern "C" NAKED register_t __cdecl internal_6242230()
{
    __asm
    {
        push ecx
        movss xmm0, dword ptr ss : [esp+0x10]
        mulss xmm0, dword ptr ds : [public_624fa68]
        addss xmm0, dword ptr ds : [public_624fa6c]
        movss xmm2, dword ptr ss : [esp+0xC]
        mulss xmm0, dword ptr ss : [esp+0x10]
        mulss xmm0, dword ptr ss : [esp+0x10]
        mulss xmm0, dword ptr ds : [public_624fa70]
        cvtss2si eax, xmm0
        movd mm3, eax
        pinsrw mm3, eax, 1
        movq mm4, qword ptr ds : [public_62575e0]
        pinsrw mm3, eax, 2
        psubw mm4, mm3
        movd mm1, dword ptr ss : [esp+8]
        pxor mm0, mm0
        movd mm2, dword ptr ss : [esp+0xC]
        punpcklbw mm1, mm0
        punpcklbw mm2, mm0
        pmullw mm2, mm3
        pmullw mm1, mm4
        psrlw mm2, 8
        psrlw mm1, 8
        paddsw mm2, mm1
        packuswb mm2, mm2
        movd dword ptr ss : [esp], mm2
        emms 
        mov eax, dword ptr ss : [esp]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6242230)
    }
}
