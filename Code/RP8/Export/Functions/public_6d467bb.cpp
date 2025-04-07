#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46501);
CLANG_FORWARD_PROC_SYMBOL(public_6d467bb);

#define public_6d467e3 _public_6d467e3

PROC_DECLARE(0x6d467bb, internal_6d467bb, public_6d467bb);
extern "C" NAKED register_t __cdecl internal_6d467bb()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        cmp ebx, 1
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [edi+4]
        je public_6d467e3
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [eax+0x14], 0xC
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [eax+0x18], ebx
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax]
        pop ecx
        public_6d467e3 : nop
        push 0x78
        push ebx
        push edi
        call public_6d46501
        mov ecx, dword ptr ss : [ebp+0x18]
        and dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [eax+0xC], ecx
        mov cl, byte ptr ss : [ebp+0x10]
        add esp, 0xC
        and byte ptr ds : [eax+0x22], 0
        mov byte ptr ds : [eax+0x20], cl
        mov ecx, dword ptr ds : [esi+0x40]
        pop edi
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [esi+0x40], eax
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d467bb)
    }
}

#undef public_6d467e3
