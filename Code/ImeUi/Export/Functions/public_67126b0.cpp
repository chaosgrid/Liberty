#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67125e0);
CLANG_FORWARD_PROC_SYMBOL(public_67126b0);
CLANG_FORWARD_PROC_SYMBOL(public_6712740);
CLANG_FORWARD_PROC_SYMBOL(public_6712760);

PROC_DECLARE(0x67126b0, internal_67126b0, public_67126b0);
extern "C" NAKED register_t __cdecl internal_67126b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        xor edx, edx
        push edx
        lea ecx, ds:[esi+4]
        call public_67125e0
        push 1
        push 1
        mov ecx, esi
        mov dword ptr ds : [esi+0x74], edx
        mov dword ptr ds : [esi+0x78], edx
        mov byte ptr ds : [esi+0x7C], dl
        mov dword ptr ds : [esi+0x80], edx
        mov dword ptr ds : [esi+0x84], edx
        mov dword ptr ds : [esi+0x88], edx
        mov byte ptr ds : [esi+0x8C], 1
        mov dword ptr ds : [esi], offset public_6717188
        mov dword ptr ds : [esi+0x28], edx
        mov dword ptr ds : [esi+0x24], edx
        mov dword ptr ds : [esi+0x20], edx
        mov dword ptr ds : [esi+0x1C], edx
        mov dword ptr ds : [esi+0x30], edx
        mov dword ptr ds : [esi+0x2C], edx
        mov word ptr ds : [esi+0x34], dx
        call public_6712740
        push 0x20
        mov ecx, esi
        call public_6712760
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x67126b0)
    }
}
