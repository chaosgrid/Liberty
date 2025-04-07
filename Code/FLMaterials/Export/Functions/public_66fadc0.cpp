#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66fadc0, internal_66fadc0, public_66fadc0);
extern "C" NAKED register_t __cdecl internal_66fadc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67045b4]
        mov ecx, dword ptr ds : [public_67045b8]
        inc eax
        mov dword ptr ds : [public_67045b4], eax
        mov eax, dword ptr ss : [esp+0x1C]
        add ecx, eax
        mov eax, dword ptr ds : [public_67045bc]
        mov dword ptr ds : [public_67045b8], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, ecx
        mov dword ptr ds : [public_67045bc], eax
        xor eax, eax
        ret 0x20
        UNREACHABLE_TRAP(0x66fadc0)
    }
}
