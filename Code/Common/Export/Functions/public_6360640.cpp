#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6360640);
CLANG_FORWARD_JUMP_SYMBOL(public_639833b);

#define public_636067b _public_636067b
#define public_6360682 _public_6360682
#define public_63606a5 _public_63606a5
#define public_63606ac _public_63606ac

PROC_DECLARE(0x6360640, internal_6360640, public_6360640);
extern "C" NAKED register_t __cdecl internal_6360640()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639833b @0x6360642*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639833b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+0x10]
        xor edi, edi
        lea ecx, ds:[esi+0x14]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], edi
        je public_6360682
        cmp eax, edi
        je public_636067b
        push eax
        call public_6343fb0
        add esp, 4
        public_636067b : nop
        mov dword ptr ds : [esi+0x10], edi
        mov word ptr ds : [esi+0xC], di
        public_6360682 : nop
        mov word ptr ds : [esi+0xE], di
        mov eax, dword ptr ds : [esi+8]
        lea edx, ds:[esi+0xC]
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        je public_63606ac
        cmp eax, edi
        je public_63606a5
        push eax
        call public_6343fb0
        add esp, 4
        public_63606a5 : nop
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [esi+4], di
        public_63606ac : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov word ptr ds : [esi+6], di
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6360640)
    }
}

#undef public_636067b
#undef public_6360682
#undef public_63606a5
#undef public_63606ac
