#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6bf7640);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bf7659 _public_6bf7659

PROC_DECLARE(0x6bf7640, internal_6bf7640, public_6bf7640);
extern "C" NAKED register_t __cdecl internal_6bf7640()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6c0cb98
        je public_6bf7659
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bf7659 : nop
        mov ecx, esi
        pop esi
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6bf7640)
    }
}

#undef public_6bf7659
