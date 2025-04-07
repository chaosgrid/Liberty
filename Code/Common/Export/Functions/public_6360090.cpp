#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635fd10);
CLANG_FORWARD_PROC_SYMBOL(public_635fe30);
CLANG_FORWARD_PROC_SYMBOL(public_635fef0);
CLANG_FORWARD_PROC_SYMBOL(public_6360080);
CLANG_FORWARD_PROC_SYMBOL(public_6360090);

PROC_DECLARE(0x6360090, internal_6360090, public_6360090);
extern "C" NAKED register_t __cdecl internal_6360090()
{
    __asm
    {
        mov eax, offset _public_6360080
        push edi
        mov ecx, 0x10
        mov edi, offset public_658af9c
        rep stosd
        mov ecx, offset _public_635fef0
        mov dword ptr ds : [public_658afa8], eax
        mov dword ptr ds : [public_658afac], eax
        mov dword ptr ds : [public_658afb4], eax
        mov dword ptr ds : [public_658afb8], eax
        mov dword ptr ds : [public_658afbc], eax
        mov dword ptr ds : [public_658afc0], eax
        mov dword ptr ds : [public_658afc4], eax
        mov dword ptr ds : [public_658afc8], eax
        mov eax, offset _public_635fd10
        mov dword ptr ds : [public_658af9c], ecx
        mov dword ptr ds : [public_658afa0], ecx
        mov dword ptr ds : [public_658afa4], ecx
        mov dword ptr ds : [public_658afb0], ecx
        mov dword ptr ds : [public_658afcc], eax
        mov dword ptr ds : [public_658afd0], eax
        mov dword ptr ds : [public_658afd4], eax
        mov dword ptr ds : [public_658afd8], offset _public_635fe30
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6360090)
    }
}
