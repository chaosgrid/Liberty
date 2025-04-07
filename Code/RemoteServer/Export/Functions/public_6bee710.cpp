#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6bee710);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bee729 _public_6bee729

PROC_DECLARE(0x6bee710, internal_6bee710, public_6bee710);
extern "C" NAKED register_t __cdecl internal_6bee710()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x3C]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6c0c898
        je public_6bee729
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bee729 : nop
        mov ecx, esi
        pop esi
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6bee710)
    }
}

#undef public_6bee729
