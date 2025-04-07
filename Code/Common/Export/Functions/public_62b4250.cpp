#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b4250);
CLANG_FORWARD_PROC_SYMBOL(public_62bb610);

PROC_DECLARE(0x62b4250, internal_62b4250, public_62b4250);
extern "C" NAKED register_t __cdecl internal_62b4250()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov esi, ecx
        push eax
        lea edi, ds:[esi+0x230]
        push 0
        mov ecx, edi
        call public_62bb610
        fld dword ptr ds : [esi+0x2C0]
        mov ecx, dword ptr ds : [esi+0x88]
        fmul dword ptr ds : [ecx+0x108]
        fdivr st, st(1)
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push 1
        mov ecx, edi
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        call public_62bb610
        fld dword ptr ds : [esi+0x2C0]
        mov eax, dword ptr ds : [esi+0x88]
        fmul dword ptr ds : [eax+0x10C]
        fdivp 
        pop edi
        pop esi
        fld st(0)
        fmulp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        faddp 
        fsqrt 
        ret 8
        UNREACHABLE_TRAP(0x62b4250)
    }
}
