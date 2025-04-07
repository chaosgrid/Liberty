#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6bf9f40);

#define public_6bf9f68 _public_6bf9f68

PROC_DECLARE(0x6bf9f40, internal_6bf9f40, public_6bf9f40);
extern "C" NAKED register_t __cdecl internal_6bf9f40()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6c0cc98
        mov dword ptr ds : [esi+0x28], 0
        je public_6bf9f68
        push eax
        call dword ptr ds : [public_6c0b20c]
        add esp, 4
        mov dword ptr ds : [esi+0x24], 0
        public_6bf9f68 : nop
        mov ecx, esi
        pop esi
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6bf9f40)
    }
}

#undef public_6bf9f68
