#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6333e40);

PROC_DECLARE(0x62bcbc0, internal_62bcbc0, public_62bcbc0);
extern "C" NAKED register_t __cdecl internal_62bcbc0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0xC]
        mov ecx, edi
        call public_6333e40
        mov ecx, edi
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], 0x4B189680
        mov dword ptr ds : [esi+8], 0xBF800000
        call public_6333e40
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62bcbc0)
    }
}
