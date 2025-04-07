#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bdcf74 _public_6bdcf74

PROC_DECLARE(0x6bdcf60, internal_6bdcf60, public_6bdcf60);
extern "C" NAKED register_t __cdecl internal_6bdcf60()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        push edi
        je public_6bdcf74
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bdcf74 : nop
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        call public_6c09d26
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        push ecx
        push eax
        mov dword ptr ds : [esi+0x20], eax
        call dword ptr ds : [public_6c0b228]
        add esp, 0x10
        mov dword ptr ds : [esi+0x24], edi
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6bdcf60)
    }
}

#undef public_6bdcf74
