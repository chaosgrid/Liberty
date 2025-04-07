#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1b260);
CLANG_FORWARD_PROC_SYMBOL(public_6f1b310);
CLANG_FORWARD_PROC_SYMBOL(public_6f1b480);
CLANG_FORWARD_PROC_SYMBOL(public_6f1b610);
CLANG_FORWARD_PROC_SYMBOL(public_6f1c990);

PROC_DECLARE(0x6ec9150, internal_6ec9150, public_6ec9150);
extern "C" NAKED register_t __cdecl internal_6ec9150()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        push edi
        add ecx, 0x21C
        call public_6f1c990
        mov ecx, dword ptr ds : [esi+4]
        call public_6f1b480
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        lea edi, ds:[esi+0xC]
        push edi
        call public_6f1b310
        mov ecx, dword ptr ds : [esi+4]
        push 1
        push edi
        call public_6f1b260
        mov ecx, dword ptr ds : [esi+4]
        call public_6f1b610
        pop edi
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec9150)
    }
}
