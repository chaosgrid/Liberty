#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a260);

#define public_6616599 _public_6616599
#define public_66165a1 _public_66165a1
#define public_66165b8 _public_66165b8

PROC_DECLARE(0x6616550, internal_6616550, public_6616550);
extern "C" NAKED register_t __cdecl internal_6616550()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp], 0xBF800000
        cmp eax, 0xFFFFFFFF
        je public_66165b8
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+0x20]
        push eax
        mov ecx, esi
        call public_661a260
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6616599
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jb public_6616599
        lea eax, ss:[esp+0x14]
        jmp public_66165a1
        public_6616599 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_66165a1 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+0x24]
        pop edi
        cmp eax, ecx
        pop esi
        je public_66165b8
        mov edx, dword ptr ds : [eax+0xC]
        fld dword ptr ds : [edx+0x1C]
        add esp, 8
        ret 8
        public_66165b8 : nop
        fld dword ptr ss : [esp]
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6616550)
    }
}

#undef public_6616599
#undef public_66165a1
#undef public_66165b8
