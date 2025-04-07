#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d4d60);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_639520c);

#define public_62d4dc8 _public_62d4dc8
#define public_62d4dfc _public_62d4dfc
#define public_62d4e09 _public_62d4e09

PROC_DECLARE(0x62d4d60, internal_62d4d60, public_62d4d60);
extern "C" NAKED register_t __cdecl internal_62d4d60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639520c @0x62d4d62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639520c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_62d4e09
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi]
        lea ecx, ds:[esi+4]
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ds : [ecx], 0
        mov dword ptr ds : [ecx+4], 0
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        mov byte ptr ss : [esp+0x14], 1
        je public_62d4dc8
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62d4dc8
        add eax, 8
        test eax, eax
        je public_62d4dc8
        push eax
        call public_6341610
        public_62d4dc8 : nop
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ds : [ecx], 0
        mov dword ptr ds : [ecx+4], 0
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        mov byte ptr ss : [esp+0x14], 3
        je public_62d4dfc
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62d4dfc
        add eax, 8
        test eax, eax
        je public_62d4dfc
        push eax
        call public_6341610
        public_62d4dfc : nop
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], ecx
        mov edx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], edx
        pop edi
        public_62d4e09 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62d4d60)
    }
}

#undef public_62d4dc8
#undef public_62d4dfc
#undef public_62d4e09
