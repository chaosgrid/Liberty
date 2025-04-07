#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);
CLANG_FORWARD_PROC_SYMBOL(public_635c020);

PROC_DECLARE(0x635c020, internal_635c020, public_635c020);
extern "C" NAKED register_t __cdecl internal_635c020()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ds : [esi], offset public_63a5694
        xor edi, edi
        push 0x40
        mov word ptr ds : [esi+0x28], 0x10
        mov word ptr ds : [esi+0x2A], di
        call public_6343f70
        mov dword ptr ds : [esi+0x2C], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi], offset public_63a5680
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        add esp, 4
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+0x24], eax
        pop edi
        mov dword ptr ds : [esi+0x20], 0xBF800000
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x635c020)
    }
}
