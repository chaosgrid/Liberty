#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579c40);
CLANG_FORWARD_PROC_SYMBOL(public_5a0880);

PROC_DECLARE(0x579c40, internal_579c40, public_579c40);
extern "C" NAKED register_t __cdecl internal_579c40()
{
    __asm
    {
        sub esp, 0x18
        lea eax, ds:[ecx+0x47C]
        push esi
        mov edx, eax
        mov esi, dword ptr ds : [edx]
        mov dword ptr ss : [esp+4], esi
        mov esi, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+8], esi
        push edi
        mov edi, dword ptr ds : [edx]
        mov esi, eax
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        fld dword ptr ds : [ecx+0x60]
        fsub dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+0x64]
        fsub dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+0x68]
        fsub dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x1C]
        fxch 
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+8]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [eax+8]
        lea eax, ss:[esp+8]
        push eax
        fstp dword ptr ss : [esp+0x14]
        call public_5a0880
        pop edi
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x579c40)
    }
}
