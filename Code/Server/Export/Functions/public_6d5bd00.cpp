#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d59ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5bd00);

#define public_6d5bd40 _public_6d5bd40

PROC_DECLARE(0x6d5bd00, internal_6d5bd00, public_6d5bd00);
extern "C" NAKED register_t __cdecl internal_6d5bd00()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x10]
        lea esi, ds:[edi+0x1C]
        push eax
        mov ecx, esi
        call public_6d59ea0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_6d5bd40
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6d5bd40
        mov ecx, dword ptr ds : [edi+0x20]
        lea eax, ss:[esp+8]
        mov eax, dword ptr ds : [eax]
        xor edx, edx
        cmp eax, ecx
        setne dl
        pop edi
        mov al, dl
        pop esi
        pop ecx
        ret 4
        public_6d5bd40 : nop
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        mov eax, dword ptr ds : [eax]
        xor edx, edx
        cmp eax, ecx
        setne dl
        pop edi
        mov al, dl
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d5bd00)
    }
}

#undef public_6d5bd40
