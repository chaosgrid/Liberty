#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345f90);
CLANG_FORWARD_PROC_SYMBOL(public_63484e0);
CLANG_FORWARD_PROC_SYMBOL(public_6350bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6351190);
CLANG_FORWARD_PROC_SYMBOL(public_6351b90);

#define public_634603d _public_634603d
#define public_634604f _public_634604f

PROC_DECLARE(0x6345f90, internal_6345f90, public_6345f90);
extern "C" NAKED register_t __cdecl internal_6345f90()
{
    __asm
    {
        sub esp, 0x74
        push ebx
        mov ebx, dword ptr ss : [esp+0x7C]
        push ebp
        push esi
        mov esi, ecx
        mov ebp, dword ptr ds : [esi+0x98]
        mov eax, ebx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [eax+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x8C]
        mov dword ptr ss : [esp+0x2C], ecx
        mov eax, edi
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [esi+0x78]
        test ah, 0xC
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], edx
        jne public_634603d
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, ebx
        call public_6350bc0
        fld dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x74]
        fld dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x14]
        fstp dword ptr ss : [esp+0x78]
        fld dword ptr ds : [edi+8]
        push ecx
        fstp dword ptr ss : [esp+0x80]
        fld dword ptr ds : [esi+0x30]
        lea edx, ss:[esp+0x38]
        fchs 
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [esi+0x34]
        push edx
        fchs 
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [esi+0x38]
        lea ecx, ss:[esp+0x4C]
        fchs 
        fstp dword ptr ss : [esp+0x44]
        call public_63484e0
        public_634603d : nop
        mov esi, dword ptr ds : [esi+0x2C]
        test esi, esi
        je public_634604f
        push esi
        push ebx
        lea ecx, ss:[esp+0x2C]
        call public_6351190
        public_634604f : nop
        mov eax, dword ptr ss : [esp+0x90]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x1C], ebp
        call public_6351b90
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x74
        ret 0xC
        UNREACHABLE_TRAP(0x6345f90)
    }
}

#undef public_634603d
#undef public_634604f
