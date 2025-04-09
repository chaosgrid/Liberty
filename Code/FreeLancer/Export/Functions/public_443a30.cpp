#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44af60);
CLANG_FORWARD_PROC_SYMBOL(public_44b370);

#define public_443a51 _public_443a51

PROC_DECLARE(0x443a30, internal_443a30, public_443a30);
extern "C" NAKED register_t __cdecl internal_443a30()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x34]
        test al, al
        je public_443a51
        mov eax, dword ptr ds : [esi]
        push 0
        call dword ptr ds : [eax+0x10]
        push ecx
        mov ecx, dword ptr ds : [esi+0x30]
        fstp dword ptr ss : [esp]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        call public_44b370
        public_443a51 : nop
        mov ecx, dword ptr ds : [esi+8]
        push esi
        call public_44af60
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x443a30)
    }
}

#undef public_443a51
