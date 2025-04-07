#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2cda0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2cf60);

PROC_DECLARE(0x6f2cf60, internal_6f2cf60, public_6f2cf60);
extern "C" NAKED register_t __cdecl internal_6f2cf60()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x254
        mov eax, dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [eax+0x20]
        push esi
        fld dword ptr ds : [eax+0x14]
        sub esp, 0x48
        fld dword ptr ds : [eax+8]
        mov esi, ecx
        fstp dword ptr ss : [esp+0x7C]
        fld dword ptr ds : [eax+0x1C]
        lea ecx, ss:[esp+0xA0]
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ds : [eax+0x10]
        fstp dword ptr ss : [esp+0x98]
        fld dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [eax+0x18]
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ds : [eax+0xC]
        fstp dword ptr ss : [esp+0x74]
        fld dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp+8]
        fstp dword ptr ss : [esp+0x88]
        fxch 
        fstp qword ptr ss : [esp+0x40]
        fstp qword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x7C]
        fstp qword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x6C]
        fstp qword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x98]
        fstp qword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x4C]
        fstp qword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x60]
        fstp qword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x74]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x88]
        fstp qword ptr ss : [esp]
        push eax
        push ecx
        call dword ptr ds : [public_6f5a06c]
        add esp, 0x50
        lea edx, ss:[esp+0x58]
        push edx
        mov ecx, esi
        call public_6f2cda0
        pop esi
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6f2cf60)
    }
}
