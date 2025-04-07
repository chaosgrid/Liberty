#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6bf6830);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bf6849 _public_6bf6849

PROC_DECLARE(0x6bf6830, internal_6bf6830, public_6bf6830);
extern "C" NAKED register_t __cdecl internal_6bf6830()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6c0cb68
        je public_6bf6849
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bf6849 : nop
        mov ecx, esi
        pop esi
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6bf6830)
    }
}

#undef public_6bf6849
