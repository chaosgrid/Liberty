#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244b20);

PROC_DECLARE(0x6244b20, internal_6244b20, public_6244b20);
extern "C" NAKED register_t __cdecl internal_6244b20()
{
    __asm
    {
        mov eax, ecx
        push esi
        xor ecx, ecx
        xor edx, edx
        lea esi, ds:[eax+8]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0xC], edx
        mov dword ptr ds : [esi+0x10], edx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6244b20)
    }
}
