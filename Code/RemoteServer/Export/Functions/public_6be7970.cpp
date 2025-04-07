#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be7970);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be7989 _public_6be7989

PROC_DECLARE(0x6be7970, internal_6be7970, public_6be7970);
extern "C" NAKED register_t __cdecl internal_6be7970()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x64]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6c0cc68
        je public_6be7989
        push eax
        call public_6c09aaa
        add esp, 4
        public_6be7989 : nop
        mov dword ptr ds : [esi+0x64], 0
        mov ecx, esi
        pop esi
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6be7970)
    }
}

#undef public_6be7989
