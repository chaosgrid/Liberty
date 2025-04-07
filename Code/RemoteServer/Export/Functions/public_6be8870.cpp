#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be8870);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be8889 _public_6be8889
#define public_6be8899 _public_6be8899

PROC_DECLARE(0x6be8870, internal_6be8870, public_6be8870);
extern "C" NAKED register_t __cdecl internal_6be8870()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6c0d048
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_6be8889
        push eax
        call public_6c09aaa
        add esp, 4
        public_6be8889 : nop
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6be8899
        push eax
        call public_6c09aaa
        add esp, 4
        public_6be8899 : nop
        mov ecx, esi
        pop esi
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6be8870)
    }
}

#undef public_6be8889
#undef public_6be8899
