#include "Content-PCH.h"

PROC_DECLARE(0x6ec2f70, internal_6ec2f70, public_6ec2f70);
extern "C" NAKED register_t __cdecl internal_6ec2f70()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ds : [public_6fb3048]
        push esi
        push edi
        mov esi, ecx
        push 1
        mov ecx, ebx
        lea edi, ds:[esi+0x10]
        call ebp
        push eax
        push edi
        call dword ptr ds : [public_6fb36a8]
        add esp, 8
        push 0
        mov ecx, ebx
        call ebp
        push eax
        mov eax, dword ptr ds : [edi]
        push eax
        call dword ptr ds : [public_6fb35f0]
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec2f70)
    }
}
