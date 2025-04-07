#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627b200);

PROC_DECLARE(0x62612d0, internal_62612d0, public_62612d0);
extern "C" NAKED register_t __cdecl internal_62612d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        mov dword ptr ds : [ebx], ecx
        lea esi, ds:[eax+4]
        lea edi, ds:[ebx+4]
        mov ecx, 0xC
        add eax, 0x34
        rep movsd
        push eax
        lea ecx, ds:[ebx+0x34]
        call public_627b200
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62612d0)
    }
}
