#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66f5700, internal_66f5700, public_66f5700);
extern "C" NAKED register_t __cdecl internal_66f5700()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        xor eax, eax
        mov ecx, 0x11
        lea edi, ds:[esi+0x20]
        rep stosd
        mov ecx, 0x3F800000
        mov eax, 0x3F333333
        mov dword ptr ds : [esi+0x2C], ecx
        mov dword ptr ds : [esi+0x54], eax
        mov dword ptr ds : [esi+0x58], eax
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0x5C], ecx
        mov ecx, esi
        mov dword ptr ds : [esi+0x50], 0x3F400000
        call dword ptr ds : [eax+0x60]
        mov ecx, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x110]
        push 0
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x24]
        mov eax, edi
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x66f5700)
    }
}
