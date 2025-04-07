#include "Common-PCH.h"


#define public_62ecf8e _public_62ecf8e
#define public_62ecfaa _public_62ecfaa

PROC_DECLARE(0x62ecf60, internal_62ecf60, public_62ecf60);
extern "C" NAKED register_t __cdecl internal_62ecf60()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 0x1A
        jne public_62ecf8e
        mov ecx, dword ptr ss : [esp+8]
        mov dx, word ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        add ecx, eax
        mov word ptr ds : [esi+0x14], dx
        mov dword ptr ds : [esi+0x18], ecx
        mov al, 1
        pop esi
        ret 0xC
        public_62ecf8e : nop
        cmp eax, 0x1B
        jne public_62ecfaa
        mov ecx, dword ptr ss : [esp+8]
        mov dx, word ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ss : [esp+0x10]
        add ecx, eax
        mov word ptr ds : [esi+0x38], dx
        mov dword ptr ds : [esi+0x3C], ecx
        public_62ecfaa : nop
        mov al, 1
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x62ecf60)
    }
}

#undef public_62ecf8e
#undef public_62ecfaa
