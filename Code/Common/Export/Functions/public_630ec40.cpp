#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284f70);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_630ecae _public_630ecae
#define public_630ed54 _public_630ed54

PROC_DECLARE(0x630ec40, internal_630ec40, public_630ec40);
extern "C" NAKED register_t __cdecl internal_630ec40()
{
    __asm
    {
        sub esp, 0xCC
        mov eax, dword ptr ss : [esp+0xD4]
        push ebx
        push ebp
        push esi
        lea ebp, ds:[eax+0x10]
        lea ebx, ds:[eax+4]
        push edi
        mov ecx, 9
        mov esi, ebp
        lea edi, ss:[esp+0x58]
        rep movsd
        mov eax, ebx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x7C], ecx
        mov ecx, dword ptr ds : [public_6399040]
        mov dword ptr ss : [esp+0x80], edx
        mov dword ptr ss : [esp+0x84], eax
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0xE0]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fcf94]
        test eax, eax
        jne public_630ecae
        call public_6391cf0
        mov dword ptr ds : [public_63fcf94], eax
        public_630ecae : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x24]
        push ecx
        push esi
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        fld dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [esi+0x20]
        fchs 
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+8]
        push edx
        mov edx, dword ptr ds : [esi+0x1C]
        push eax
        mov eax, dword ptr ds : [esi+0x10]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        push edx
        mov edx, dword ptr ds : [esi+0x18]
        push eax
        mov eax, dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x34]
        push ecx
        mov ecx, dword ptr ds : [esi]
        fchs 
        push edx
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x40]
        push eax
        fchs 
        push ecx
        fstp dword ptr ss : [esp+0x3C]
        lea ecx, ss:[esp+0xDC]
        call public_6284f70
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, 9
        lea esi, ss:[esp+0xB8]
        lea edi, ss:[esp+0x88]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xB0], eax
        mov eax, dword ptr ds : [public_63fcf94]
        test eax, eax
        mov dword ptr ss : [esp+0xAC], edx
        mov dword ptr ss : [esp+0xB4], ecx
        jne public_630ed54
        call public_6391cf0
        mov dword ptr ds : [public_63fcf94], eax
        public_630ed54 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x58]
        push ecx
        lea ecx, ss:[esp+0x8C]
        push ecx
        lea ecx, ss:[esp+0x30]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [ebx], edx
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], ecx
        mov edi, ebp
        mov ecx, 9
        lea esi, ss:[esp+0x28]
        rep movsd
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xCC
        ret 
        UNREACHABLE_TRAP(0x630ec40)
    }
}

#undef public_630ecae
#undef public_630ed54
