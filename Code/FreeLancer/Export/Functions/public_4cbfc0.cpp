#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428680);
CLANG_FORWARD_PROC_SYMBOL(public_4cbfc0);

#define public_4cc04e _public_4cc04e

PROC_DECLARE(0x4cbfc0, internal_4cbfc0, public_4cbfc0);
extern "C" NAKED register_t __cdecl internal_4cbfc0()
{
    __asm
    {
        sub esp, 0x18
        mov al, byte ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [esi+0x15]
        fld dword ptr ds : [esi+0x18]
        fadd dword ptr ds : [esi+0x1C]
        and al, 0xF8
        shl cl, 2
        xor cl, al
        and cl, 4
        fstp dword ptr ss : [esp+0x18]
        xor al, cl
        push edi
        mov byte ptr ss : [esp+0xC], al
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax+4]
        push 0
        lea edi, ds:[eax+0xC]
        push edi
        lea edx, ss:[esp+0x10]
        push edx
        push ecx
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        call public_428680
        add esp, 0x10
        test al, al
        je public_4cc04e
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [eax+4], 2
        fld dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [edi]
        fadd dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [ecx]
        push ecx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edx+0x80]
        pop edi
        mov al, 1
        pop esi
        add esp, 0x18
        ret 4
        public_4cc04e : nop
        pop edi
        mov dword ptr ds : [esi+0x10], 0x40400000
        mov al, 1
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x4cbfc0)
    }
}

#undef public_4cc04e
