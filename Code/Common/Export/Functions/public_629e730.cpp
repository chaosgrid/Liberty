#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_629e750 _public_629e750

PROC_DECLARE(0x629e730, internal_629e730, public_629e730);
extern "C" NAKED register_t __cdecl internal_629e730()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fc22c]
        sub esp, 0x30
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+4]
        add esi, 8
        test eax, eax
        jne public_629e750
        call public_6391cf0
        mov dword ptr ds : [public_63fc22c], eax
        public_629e750 : nop
        mov ecx, dword ptr ds : [eax]
        add edi, 0x20
        push edi
        push esi
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x34]
        pop edi
        mov dword ptr ds : [ecx+8], edx
        pop esi
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x629e730)
    }
}

#undef public_629e750
