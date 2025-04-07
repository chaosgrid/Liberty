#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0ca9);

#define public_53df30 _public_53df30
#define public_53df5d _public_53df5d
#define public_53df67 _public_53df67

PROC_DECLARE(0x53deb0, internal_53deb0, public_53deb0);
extern "C" NAKED register_t __cdecl internal_53deb0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c0ca9 @0x53deb8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0ca9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push esi
        push 0
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_53df67
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x150]
        mov esi, eax
        test esi, esi
        je public_53df67
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_53df67
        mov ecx, dword ptr ss : [esp+0x28]
        push edi
        push ecx
        lea ecx, ss:[esp+0xC]
        call dword ptr ds : [public_5c6100]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0
        call dword ptr ds : [public_5c6a6c]
        mov eax, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_53df5d
        lea esp, ss:[esp]
        public_53df30 : nop
        mov eax, esi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x10], ecx
        jne public_53df30
        mov eax, dword ptr ss : [esp+0xC]
        public_53df5d : nop
        push eax
        call public_5b7e1d
        add esp, 4
        pop edi
        public_53df67 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 0x10
        UNREACHABLE_TRAP(0x53deb0)
    }
}

#undef public_53df30
#undef public_53df5d
#undef public_53df67
