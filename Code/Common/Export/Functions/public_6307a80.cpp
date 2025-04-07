#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6307a96 _public_6307a96
#define public_6307afc _public_6307afc

PROC_DECLARE(0x6307a80, internal_6307a80, public_6307a80);
extern "C" NAKED register_t __cdecl internal_6307a80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fceb8]
        sub esp, 0x6C
        test eax, eax
        jne public_6307a96
        call public_6391cf0
        mov dword ptr ds : [public_63fceb8], eax
        public_6307a96 : nop
        mov ecx, dword ptr ds : [eax]
        push ebx
        mov ebx, dword ptr ss : [esp+0x7C]
        push esi
        mov esi, dword ptr ss : [esp+0x7C]
        push edi
        push ebx
        lea edi, ds:[esi+0xC]
        push edi
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ds : [public_63fceb8]
        test eax, eax
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x4C], ecx
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x50], edx
        jne public_6307afc
        call public_6391cf0
        mov dword ptr ds : [public_63fceb8], eax
        public_6307afc : nop
        mov ecx, dword ptr ds : [eax]
        add ebx, 0xC
        push ebx
        push edi
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+0x7C]
        mov ecx, 9
        lea esi, ss:[esp+0x24]
        lea edi, ss:[esp+0x54]
        rep movsd
        mov ecx, 0xC
        lea esi, ss:[esp+0x48]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        pop ebx
        add esp, 0x6C
        ret 
        UNREACHABLE_TRAP(0x6307a80)
    }
}

#undef public_6307a96
#undef public_6307afc
