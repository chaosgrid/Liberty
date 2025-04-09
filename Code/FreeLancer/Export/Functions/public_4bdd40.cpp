#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bdd40);

PROC_DECLARE(0x4bdd40, internal_4bdd40, public_4bdd40);
extern "C" NAKED register_t __cdecl internal_4bdd40()
{
    __asm
    {
        sub esp, 0xC
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [ecx+0x68]
        fld dword ptr ds : [ecx+0xA4]
        fdiv dword ptr ds : [ecx+0x78]
        fmulp 
        fstp dword ptr ss : [esp]
        mov edx, dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [ecx+0x6C]
        fld dword ptr ds : [ecx+0xA4]
        fdiv dword ptr ds : [ecx+0x7C]
        fmulp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0xA4]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        fchs 
        mov edx, dword ptr ss : [esp+4]
        fstp dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x4bdd40)
    }
}
