#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334430);

PROC_DECLARE(0x6275f30, internal_6275f30, public_6275f30);
extern "C" NAKED register_t __cdecl internal_6275f30()
{
    __asm
    {
        sub esp, 0xC
        push esi
        lea esi, ds:[ecx+0x1C8]
        push edi
        push esi
        call public_6334430
        lea eax, ds:[esi+4]
        add esp, 4
        xor ecx, ecx
        mov dword ptr ds : [esi], ecx
        mov edi, ecx
        mov edx, eax
        mov dword ptr ds : [edx], edi
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], edi
        mov edx, 0x3F800000
        mov dword ptr ds : [eax+0x2C], edx
        mov dword ptr ds : [eax+0x1C], edx
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x10], ecx
        pop edi
        mov dword ptr ds : [esi+0x34], 0x420C0000
        mov dword ptr ds : [esi+0x38], 0x3E800000
        mov dword ptr ds : [esi+0x3C], 0x49742400
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6275f30)
    }
}
