#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55ee80);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5a1080);

#define public_5a10cb _public_5a10cb

PROC_DECLARE(0x5a1080, internal_5a1080, public_5a1080);
extern "C" NAKED register_t __cdecl internal_5a1080()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0
        push ecx
/*FIXUP push offset public_5d6034 @0x5a1088*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6034
        push eax
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_5a10cb
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_55ee80
        public_5a10cb : nop
        mov eax, esi
        pop esi
        ret 0x24
        UNREACHABLE_TRAP(0x5a1080)
    }
}

#undef public_5a10cb
