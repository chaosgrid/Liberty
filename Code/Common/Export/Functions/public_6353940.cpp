#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6353370);
CLANG_FORWARD_PROC_SYMBOL(public_6353560);
CLANG_FORWARD_PROC_SYMBOL(public_6353680);
CLANG_FORWARD_PROC_SYMBOL(public_63536b0);
CLANG_FORWARD_PROC_SYMBOL(public_63536d0);
CLANG_FORWARD_PROC_SYMBOL(public_6353930);
CLANG_FORWARD_PROC_SYMBOL(public_6353940);

PROC_DECLARE(0x6353940, internal_6353940, public_6353940);
extern "C" NAKED register_t __cdecl internal_6353940()
{
    __asm
    {
        push edi
        mov eax, offset _public_6353930
        mov ecx, 0x10
        mov edi, offset public_658ab4c
        rep stosd
        mov ecx, offset _public_6353370
        mov edx, offset _public_63536b0
        mov dword ptr ds : [public_658ab64], eax
        mov dword ptr ds : [public_658ab70], eax
        mov eax, offset _public_6353560
        mov dword ptr ds : [public_658ab4c], ecx
        mov dword ptr ds : [public_658ab50], ecx
        mov dword ptr ds : [public_658ab54], ecx
        mov dword ptr ds : [public_658ab58], offset _public_6353680
        mov dword ptr ds : [public_658ab5c], edx
        mov dword ptr ds : [public_658ab60], ecx
        mov dword ptr ds : [public_658ab68], offset _public_6353680
        mov dword ptr ds : [public_658ab6c], edx
        mov dword ptr ds : [public_658ab74], ecx
        mov dword ptr ds : [public_658ab78], offset _public_6353680
        mov dword ptr ds : [public_658ab7c], eax
        mov dword ptr ds : [public_658ab80], eax
        mov dword ptr ds : [public_658ab84], eax
        mov dword ptr ds : [public_658ab88], offset _public_63536d0
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6353940)
    }
}
