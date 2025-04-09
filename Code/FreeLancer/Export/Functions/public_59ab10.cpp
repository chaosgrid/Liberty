#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420fd0);
CLANG_FORWARD_PROC_SYMBOL(public_421070);

PROC_DECLARE(0x59ab10, internal_59ab10, public_59ab10);
extern "C" NAKED register_t __cdecl internal_59ab10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        lea edx, ds:[ecx+0x60]
        mov esi, eax
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], edi
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+8], esi
        lea esi, ds:[ecx+0x7C]
        push eax
        mov ecx, esi
        call public_420fd0
        mov ecx, esi
        call public_421070
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x59ab10)
    }
}
