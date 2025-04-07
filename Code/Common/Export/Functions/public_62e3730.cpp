#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e1f40);
CLANG_FORWARD_PROC_SYMBOL(public_62e3460);
CLANG_FORWARD_PROC_SYMBOL(public_62e3730);

#define public_62e37a0 _public_62e37a0
#define public_62e37b0 _public_62e37b0

PROC_DECLARE(0x62e3730, internal_62e3730, public_62e3730);
extern "C" NAKED register_t __cdecl internal_62e3730()
{
    __asm
    {
        sub esp, 0x78
        mov eax, dword ptr ss : [esp+0x88]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        push esi
        mov esi, dword ptr ss : [esp+0x88]
        push edi
        mov dword ptr ss : [esp+8], ecx
        lea ecx, ss:[esp+8]
        push ecx
        mov dword ptr ss : [esp+0x10], edx
        push 0x3F7FBE77
        lea edx, ss:[esp+0x1C]
        push edx
        push esi
        mov dword ptr ss : [esp+0x20], eax
        call public_62e3460
        add esp, 0x10
        test al, al
        je public_62e37a0
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x88]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+8]
        push eax
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x34]
        push esi
        push ecx
        lea edx, ss:[esp+0x68]
        fstp dword ptr ss : [esp+0x1C]
        push edx
        jmp public_62e37b0
        public_62e37a0 : nop
        mov eax, dword ptr ss : [esp+0x88]
        push 0
        push esi
        push eax
        lea ecx, ss:[esp+0x68]
        push ecx
        public_62e37b0 : nop
        call public_62e1f40
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x94]
        lea edi, ss:[esp+0x48]
        mov ecx, 9
        rep movsd
        add esp, 0x10
        mov ecx, 9
        lea esi, ss:[esp+0x38]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x78
        ret 
        UNREACHABLE_TRAP(0x62e3730)
    }
}

#undef public_62e37a0
#undef public_62e37b0
