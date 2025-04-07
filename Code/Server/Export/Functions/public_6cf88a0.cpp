#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00630);

#define public_6cf891e _public_6cf891e
#define public_6cf8920 _public_6cf8920

PROC_DECLARE(0x6cf88a0, internal_6cf88a0, public_6cf88a0);
extern "C" NAKED register_t __cdecl internal_6cf88a0()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        push esi
        mov eax, 0xFFFFFFFC
        je public_6cf8920
        lea eax, ss:[esp+4]
        push eax
        lea edx, ss:[esp+0x10]
        push edx
        push ecx
        mov esi, 0xFFFFFFFE
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x10], 0
        call public_6d00630
        add esp, 0xC
        test al, al
        je public_6cf891e
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6cf891e
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x198]
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [ecx], al
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x19C]
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [ecx], al
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1A0]
        mov eax, dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [eax]
        xor eax, eax
        pop esi
        pop ecx
        ret 
        public_6cf891e : nop
        mov eax, esi
        public_6cf8920 : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6cf88a0)
    }
}

#undef public_6cf891e
#undef public_6cf8920
