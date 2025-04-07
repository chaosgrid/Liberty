#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e560);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f8a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f990);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);

PROC_DECLARE(0x6f4e560, internal_6f4e560, public_6f4e560);
extern "C" NAKED register_t __cdecl internal_6f4e560()
{
    __asm
    {
        push esi
        push edi
        push 0x18
        push 0
        call public_6f4fe10
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x14]
        lea eax, ds:[eax+eax*2]
        cdq 
        sub eax, edx
        sar eax, 1
        push eax
        call public_6f4f8a0
        mov edi, eax
        push edi
        call public_6f4e5d0
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [esi+0x14], 0xFFFFFFFD
        mov eax, dword ptr ds : [public_6f61e28]
        add eax, 0x50
        push esi
        push eax
        call public_6f4f990
        mov ecx, dword ptr ds : [public_6f61e28]
        mov eax, edi
        cdq 
        and edx, 0xF
        add eax, edx
        mov edx, dword ptr ds : [ecx+0x78]
        add esp, 0x18
        sar eax, 4
        inc eax
        add edx, eax
        pop edi
        mov eax, esi
        mov dword ptr ds : [ecx+0x78], edx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4e560)
    }
}
