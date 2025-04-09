#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_443a90);

PROC_DECLARE(0x443a90, internal_443a90, public_443a90);
extern "C" NAKED register_t __cdecl internal_443a90()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        call dword ptr ds : [public_5c610c]
        xor eax, eax
        mov dword ptr ds : [esi+0x64], eax
        mov byte ptr ds : [esi+0x6C], al
        mov edx, eax
        mov dword ptr ds : [esi+0x68], 0xFFFFFFFF
        lea ecx, ds:[esi+0x70]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], edx
        mov ecx, 0x3F800000
        mov dword ptr ds : [esi+0x98], eax
        mov dword ptr ds : [esi+0x94], eax
        mov dword ptr ds : [esi+0x90], eax
        mov dword ptr ds : [esi+0x88], eax
        mov dword ptr ds : [esi+0x84], eax
        mov dword ptr ds : [esi+0x80], eax
        mov dword ptr ss : [esp+4], eax
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ds : [esi+0x9C], ecx
        mov dword ptr ds : [esi+0x8C], ecx
        mov dword ptr ds : [esi+0x7C], ecx
        mov eax, esi
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x443a90)
    }
}
