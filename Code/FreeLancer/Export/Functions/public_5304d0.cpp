#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539c60);

#define public_530557 _public_530557
#define public_53057e _public_53057e
#define public_53058e _public_53058e

PROC_DECLARE(0x5304d0, internal_5304d0, public_5304d0);
extern "C" NAKED register_t __cdecl internal_5304d0()
{
    __asm
    {
        mov edx, dword ptr ds : [public_5c6918]
        mov edx, dword ptr ds : [edx]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [ecx]
        push edx
        push edi
        call dword ptr ds : [eax+0x50]
        push edi
        mov ecx, esi
        call public_539c60
        fld dword ptr ds : [esi+0xB8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_53058e
        fld dword ptr ds : [esi+0xB8]
        mov ecx, dword ptr ds : [esi+0xA8]
        cmp ecx, 1
        fsub dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0xB8], eax
        jne public_530557
        mov al, byte ptr ds : [esi+0xBC]
        test al, al
        jne public_530557
        fld dword ptr ds : [esi+0xB0]
        fsub dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [esi+0xAC]
        fnstsw ax
        test ah, 0x41
        jne public_530557
        mov dword ptr ds : [esi+0xB8], 0
        public_530557 : nop
        fld dword ptr ds : [esi+0xB8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_53058e
        test ecx, ecx
        jne public_53057e
        mov edx, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x1B0]
        pop edi
        pop esi
        ret 4
        public_53057e : nop
        cmp ecx, 1
        jne public_53058e
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x15C]
        public_53058e : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5304d0)
    }
}

#undef public_530557
#undef public_53057e
#undef public_53058e
