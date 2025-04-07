#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b73d60);
CLANG_FORWARD_PROC_SYMBOL(public_6b782ac);

#define public_6b73df2 _public_6b73df2

PROC_DECLARE(0x6b73d60, internal_6b73d60, public_6b73d60);
extern "C" NAKED register_t __cdecl internal_6b73d60()
{
    __asm
    {
        push ecx
        push esi
        push edi
        push 1
        push 0x250
        call dword ptr ds : [public_6b7906c]
        mov esi, eax
        xor edi, edi
        add esp, 8
        cmp esi, edi
        je public_6b73df2
        mov al, byte ptr ss : [esp+0xB]
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x230], edi
        mov dword ptr ds : [esi+0x234], edi
        push 0xC
        mov byte ptr ds : [esi+0x240], al
        call public_6b782ac
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x244], eax
        add esp, 4
        mov al, 0x5C
        mov dword ptr ds : [esi+0x248], edi
        mov byte ptr ds : [esi+0x20], al
        mov byte ptr ds : [esi+0x128], al
        mov dword ptr ds : [esi+0x238], edi
        mov dword ptr ds : [esi+0x23C], edi
        mov dword ptr ds : [esi+0x22C], edi
        mov dword ptr ds : [esi], offset public_6b79138
        mov dword ptr ds : [esi+0x24C], 1
        mov eax, esi
        pop edi
        pop esi
        pop ecx
        ret 
        public_6b73df2 : nop
        pop edi
        xor eax, eax
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6b73d60)
    }
}

#undef public_6b73df2
