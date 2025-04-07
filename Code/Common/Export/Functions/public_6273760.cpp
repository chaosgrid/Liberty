#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627b1b0);

PROC_DECLARE(0x6273760, internal_6273760, public_6273760);
extern "C" NAKED register_t __cdecl internal_6273760()
{
    __asm
    {
        sub esp, 0xC
        xor edx, edx
        lea eax, ds:[ecx+4]
        mov dword ptr ds : [ecx], edx
        push esi
        push edi
        mov edi, edx
        mov esi, eax
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov esi, 0x3F800000
        pop edi
        mov dword ptr ds : [eax+0x2C], esi
        mov dword ptr ds : [eax+0x1C], esi
        mov dword ptr ds : [eax+0xC], esi
        pop esi
        add ecx, 0x34
        mov dword ptr ss : [esp], edx
        mov dword ptr ss : [esp+4], edx
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ds : [eax+0x28], edx
        mov dword ptr ds : [eax+0x24], edx
        mov dword ptr ds : [eax+0x20], edx
        mov dword ptr ds : [eax+0x18], edx
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+0x10], edx
        add esp, 0xC
        jmp public_627b1b0
        UNREACHABLE_TRAP(0x6273760)
    }
}
