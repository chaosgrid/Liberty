#include "Common-PCH.h"


#define public_62ceecd _public_62ceecd
#define public_62ceeee _public_62ceeee
#define public_62cef03 _public_62cef03

PROC_DECLARE(0x62ceeb0, internal_62ceeb0, public_62ceeb0);
extern "C" NAKED register_t __cdecl internal_62ceeb0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        push edi
        mov edi, 2
        je public_62ceeee
        mov al, byte ptr ds : [esi+0x54]
        test al, al
        je public_62ceecd
        mov edi, 1
        public_62ceecd : nop
        mov ecx, dword ptr ds : [esi+0x34]
        test ecx, ecx
        je public_62ceeee
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [eax+0x88]
        mov al, byte ptr ss : [esp+8]
        test al, al
        jns public_62ceeee
        mov edi, 1
        public_62ceeee : nop
        mov al, byte ptr ds : [esi+0x29]
        test al, al
        je public_62cef03
        mov eax, 3
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop ecx
        ret 4
        public_62cef03 : nop
        mov dword ptr ds : [esi+0xC], edi
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62ceeb0)
    }
}

#undef public_62ceecd
#undef public_62ceeee
#undef public_62cef03
