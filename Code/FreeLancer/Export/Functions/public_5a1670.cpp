#include "FreeLancer-PCH.h"


#define public_5a16e1 _public_5a16e1
#define public_5a172d _public_5a172d

PROC_DECLARE(0x5a1670, internal_5a1670, public_5a1670);
extern "C" NAKED register_t __cdecl internal_5a1670()
{
    __asm
    {
        sub esp, 0x30
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        push edi
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+8], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0xC], 0
        je public_5a16e1
        mov al, byte ptr ds : [esi+0x328]
        test al, al
        je public_5a16e1
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        test eax, eax
        je public_5a16e1
        add esi, 0x2F8
        jmp public_5a172d
        public_5a16e1 : nop
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+8], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0xC], 0
        lea esi, ss:[esp+8]
        public_5a172d : nop
        mov eax, dword ptr ss : [esp+0x3C]
        mov edi, eax
        mov ecx, 9
        rep movsd
        pop edi
        pop esi
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x5a1670)
    }
}

#undef public_5a16e1
#undef public_5a172d
