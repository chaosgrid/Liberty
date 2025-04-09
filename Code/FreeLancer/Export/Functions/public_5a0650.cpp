#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59da70);
CLANG_FORWARD_PROC_SYMBOL(public_5a0650);

#define public_5a0672 _public_5a0672

PROC_DECLARE(0x5a0650, internal_5a0650, public_5a0650);
extern "C" NAKED register_t __cdecl internal_5a0650()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x2D0]
        test al, al
        je public_5a0672
        mov eax, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        jne public_5a0672
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
        public_5a0672 : nop
        push edi
        mov edi, dword ptr ds : [esi]
        lea ecx, ss:[esp+8]
        push ecx
        call public_59da70
        add esp, 4
        push eax
        mov ecx, esi
        call dword ptr ds : [edi+0x10]
        test al, al
        pop edi
        setne al
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x5a0650)
    }
}

#undef public_5a0672
