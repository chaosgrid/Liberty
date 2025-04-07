#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284e50);
CLANG_FORWARD_PROC_SYMBOL(public_6284f70);
CLANG_FORWARD_PROC_SYMBOL(public_6284fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6285190);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6284ea3 _public_6284ea3

PROC_DECLARE(0x6284e50, internal_6284e50, public_6284e50);
extern "C" NAKED register_t __cdecl internal_6284e50()
{
    __asm
    {
        sub esp, 0x9C
        mov eax, dword ptr ss : [esp+0xA4]
        push ebx
        mov ebx, dword ptr ss : [esp+0xA4]
        push esi
        mov esi, dword ptr ss : [esp+0xB0]
        push edi
        mov ecx, 9
        lea edi, ss:[esp+0x24]
        rep movsd
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ds : [public_63fc084]
        test eax, eax
        mov dword ptr ss : [esp+0x48], ecx
        mov dword ptr ss : [esp+0x4C], edx
        lea esi, ds:[ebx+8]
        jne public_6284ea3
        call public_6391cf0
        mov dword ptr ds : [public_63fc084], eax
        public_6284ea3 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x24]
        push edx
        push esi
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0x20]
        fchs 
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+8]
        push eax
        mov eax, dword ptr ds : [esi+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push eax
        mov eax, dword ptr ds : [esi+0x18]
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x30]
        push edx
        mov edx, dword ptr ds : [esi]
        fchs 
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x38]
        push eax
        push ecx
        fchs 
        fstp dword ptr ss : [esp+0x34]
        push edx
        lea ecx, ss:[esp+0xA8]
        call public_6284f70
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, 9
        lea esi, ss:[esp+0x84]
        lea edi, ss:[esp+0x54]
        rep movsd
        mov esi, dword ptr ss : [esp+0xB8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x78], eax
        push esi
        lea eax, ss:[esp+0x28]
        push eax
        push ebx
        mov dword ptr ss : [esp+0x88], ecx
        mov dword ptr ss : [esp+0x8C], edx
        call public_6284fc0
        mov eax, dword ptr ds : [ebx+4]
        push esi
        lea ecx, ss:[esp+0x64]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        push eax
        push ebx
        call public_6285190
        add esp, 0x20
        pop edi
        pop esi
        pop ebx
        add esp, 0x9C
        ret 
        UNREACHABLE_TRAP(0x6284e50)
    }
}

#undef public_6284ea3
