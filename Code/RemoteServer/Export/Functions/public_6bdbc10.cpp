#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdbc10);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bdbc30 _public_6bdbc30

PROC_DECLARE(0x6bdbc10, internal_6bdbc10, public_6bdbc10);
extern "C" NAKED register_t __cdecl internal_6bdbc10()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6c0bb3c
        je public_6bdbc30
        push eax
        call public_6c09aaa
        add esp, 4
        mov dword ptr ds : [esi+0x20], 0
        public_6bdbc30 : nop
        mov ecx, esi
        pop esi
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6bdbc10)
    }
}

#undef public_6bdbc30
