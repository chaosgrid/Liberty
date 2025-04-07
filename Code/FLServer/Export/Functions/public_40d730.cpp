#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418f18);

PROC_DECLARE(0x40d730, internal_40d730, public_40d730);
extern "C" NAKED register_t __cdecl internal_40d730()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        call public_418f18
        push 0
        push 0
        push 0
        mov dword ptr ds : [esi], offset public_41d340
        mov dword ptr ds : [esi+0xF8], 0x21
        call dword ptr ds : [public_41b188]
        mov dword ptr ds : [esi+0xF4], eax
        mov eax, 0x21
        lea edi, ds:[esi+0x100]
        mov ecx, 0x40
        rep stosd
        mov dword ptr ds : [esi+0x204], eax
        xor eax, eax
        lea edi, ds:[esi+0x208]
        mov dword ptr ds : [esi+0x200], 0
        mov byte ptr ds : [esi+0xFC], 1
        mov ecx, 0xB
        rep stosd
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x40d730)
    }
}
