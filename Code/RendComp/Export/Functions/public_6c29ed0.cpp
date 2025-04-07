#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a270);
CLANG_FORWARD_PROC_SYMBOL(public_6c2b490);

#define public_6c29ef4 _public_6c29ef4
#define public_6c29f16 _public_6c29f16
#define public_6c29f21 _public_6c29f21

PROC_DECLARE(0x6c29ed0, internal_6c29ed0, public_6c29ed0);
extern "C" NAKED register_t __cdecl internal_6c29ed0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+4]
        mov al, byte ptr ds : [esi+0x28]
        inc ecx
        test al, al
        mov dword ptr ds : [esi+4], ecx
        je public_6c29ef4
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, dword ptr ss : [esp+0x14]
        jne public_6c29ef4
        inc dword ptr ds : [esi+8]
        jmp public_6c29f16
        public_6c29ef4 : nop
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ds:[esi+0xC]
        call public_6c2a270
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [esi+0x10]
        je public_6c29f16
        mov dword ptr ds : [esi+0x24], eax
        mov byte ptr ds : [esi+0x28], 1
        public_6c29f16 : nop
        cmp eax, dword ptr ds : [esi+0x10]
        pop esi
        jne public_6c29f21
        xor al, al
        ret 0x1C
        public_6c29f21 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push edx
        push ecx
        mov ecx, dword ptr ds : [eax+0x10]
        call public_6c2b490
        ret 0x1C
        UNREACHABLE_TRAP(0x6c29ed0)
    }
}

#undef public_6c29ef4
#undef public_6c29f16
#undef public_6c29f21
