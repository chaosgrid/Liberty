#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62887d0);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_6299880);
CLANG_FORWARD_PROC_SYMBOL(public_62d3af0);
CLANG_FORWARD_PROC_SYMBOL(public_62e04a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e04c0);
CLANG_FORWARD_PROC_SYMBOL(public_62e0a60);

PROC_DECLARE(0x62e0a60, internal_62e0a60, public_62e0a60);
extern "C" NAKED register_t __cdecl internal_62e0a60()
{
    __asm
    {
        sub esp, 0xA8
        push esi
        mov esi, dword ptr ss : [esp+0xB0]
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x10]
        call public_628b030
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x70], eax
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+0x74], ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push eax
        mov dword ptr ss : [esp+0x7C], edx
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        lea ecx, ss:[esp+0x10]
        call public_628b030
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x7C], eax
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ss : [esp+0x80], ecx
        mov ecx, dword ptr ds : [esi+0x14]
        push eax
        mov dword ptr ss : [esp+0x88], edx
        mov edx, dword ptr ds : [esi+8]
        push ecx
        push edx
        lea ecx, ss:[esp+0x10]
        call public_628b030
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0x88], eax
        mov eax, dword ptr ss : [esp+0xB4]
        fld dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+8]
        fsub dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x8C], ecx
        mov dword ptr ss : [esp+0x90], edx
        fabs 
        lea ecx, ss:[esp+0x10]
        fmul qword ptr ds : [public_639df88]
        fstp dword ptr ss : [esp+0x94]
        fld dword ptr ds : [eax+0xC]
        fsub dword ptr ds : [eax+8]
        fabs 
        fmul qword ptr ds : [public_639df88]
        fstp dword ptr ss : [esp+0x98]
        fld dword ptr ds : [eax+0x14]
        fsub dword ptr ds : [eax+0x10]
        fabs 
        fmul qword ptr ds : [public_639df88]
        fstp dword ptr ss : [esp+0x9C]
        fld dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+0x10]
        lea eax, ss:[esp+4]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x94]
        push eax
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x9C]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0xA0]
        fstp dword ptr ss : [esp+0x10]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        call public_62887d0
        add esp, 0xC
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_6299880
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov esi, dword ptr ss : [esp+0xB8]
        mov dword ptr ss : [esp+0x64], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x68], ecx
        mov ecx, dword ptr ds : [esi+0xC]
        push eax
        mov dword ptr ss : [esp+0x70], edx
        mov edx, dword ptr ds : [esi]
        push ecx
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_628b030
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x34], eax
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x38], ecx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x40], edx
        call public_62e04a0
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x40], ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x48], edx
        mov dword ptr ss : [esp+0x4C], eax
        call public_62d3af0
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x4C], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0xBC]
        fld dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x50], ecx
        fsub dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+0x10]
        push ecx
        mov dword ptr ss : [esp+0x58], edx
        fabs 
        mov edx, dword ptr ds : [eax+8]
        fmul qword ptr ds : [public_639df88]
        push edx
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ds : [eax+0xC]
        fsub dword ptr ds : [eax+8]
        fabs 
        fmul qword ptr ds : [public_639df88]
        fstp dword ptr ss : [esp+0x64]
        fld dword ptr ds : [eax+0x14]
        fsub dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax]
        push eax
        fabs 
        fmul qword ptr ds : [public_639df88]
        fstp dword ptr ss : [esp+0x6C]
        call public_628b030
        mov ecx, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ss : [esp+0x58]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x10]
        call public_628b030
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        call public_62887d0
        add esp, 0xC
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0xA4]
        push ecx
        mov ecx, esi
        call public_6299880
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [eax+8]
        lea eax, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x2C], ecx
        push eax
        lea ecx, ss:[esp+0x68]
        push ecx
        mov dword ptr ss : [esp+0x38], edx
        call public_62e04c0
        add esp, 8
        pop esi
        add esp, 0xA8
        ret 
        UNREACHABLE_TRAP(0x62e0a60)
    }
}
