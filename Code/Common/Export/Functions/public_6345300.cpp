#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63442c0);
CLANG_FORWARD_PROC_SYMBOL(public_6345300);
CLANG_FORWARD_PROC_SYMBOL(public_63455c0);
CLANG_FORWARD_PROC_SYMBOL(public_63456b0);
CLANG_FORWARD_PROC_SYMBOL(public_6346f20);
CLANG_FORWARD_PROC_SYMBOL(public_634ae90);
CLANG_FORWARD_PROC_SYMBOL(public_634b090);
CLANG_FORWARD_PROC_SYMBOL(public_634b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_634ced0);
CLANG_FORWARD_PROC_SYMBOL(public_634d510);
CLANG_FORWARD_PROC_SYMBOL(public_63521b0);
CLANG_FORWARD_PROC_SYMBOL(public_63521f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6397b10);

#define public_6345345 _public_6345345
#define public_6345386 _public_6345386
#define public_63453a8 _public_63453a8
#define public_63453ca _public_63453ca
#define public_63453ea _public_63453ea
#define public_6345406 _public_6345406

PROC_DECLARE(0x6345300, internal_6345300, public_6345300);
extern "C" NAKED register_t __cdecl internal_6345300()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397b10 @0x6345302*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397b10
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi], offset public_63a5440
        mov edi, dword ptr ds : [esi+0x1C]
        test edi, edi
        mov dword ptr ss : [esp+0x1C], 0
        je public_6345345
        mov ecx, edi
        call public_63442c0
        push edi
        call public_6391d5a
        add esp, 4
        public_6345345 : nop
        lea edi, ds:[esi+0x44]
        mov ecx, edi
        mov dword ptr ds : [esi+0x1C], 0
        call public_63521f0
        mov ecx, esi
        call public_63455c0
        mov ecx, dword ptr ds : [esi+0x18]
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x10], ecx
        call public_634ced0
        mov eax, dword ptr ds : [esi+0x78]
        test ah, 0x20
        je public_6345386
        mov ecx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [ecx+0xC]
        push esi
        call public_634b090
        public_6345386 : nop
        mov eax, dword ptr ds : [esi+0x78]
        test ah, 0x10
        je public_63453a8
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [eax+0xC]
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, eax
        call public_634ae90
        public_63453a8 : nop
        mov eax, dword ptr ds : [esi+0x98]
        mov ecx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [ecx+0xC]
        push esi
        call public_634b3e0
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        je public_63453ca
        push esi
        call public_634d510
        add esp, 4
        public_63453ca : nop
        mov ecx, dword ptr ds : [esi+0x98]
        push esi
        call public_6346f20
        mov ecx, dword ptr ds : [esi+0xA0]
        cmp ecx, dword ptr ds : [esi+0x98]
        je public_63453ea
        push esi
        call public_6346f20
        public_63453ea : nop
        mov ecx, dword ptr ds : [esi+0x9C]
        cmp ecx, dword ptr ds : [esi+0xA0]
        je public_6345406
        cmp ecx, dword ptr ds : [esi+0x98]
        je public_6345406
        push esi
        call public_6346f20
        public_6345406 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        push eax
        call public_6391d5a
        add esp, 4
        mov dword ptr ds : [esi+0x2C], 0
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 1
        call public_63521b0
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_63456b0
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6345300)
    }
}

#undef public_6345345
#undef public_6345386
#undef public_63453a8
#undef public_63453ca
#undef public_63453ea
#undef public_6345406
