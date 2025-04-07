#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63522a0);
CLANG_FORWARD_PROC_SYMBOL(public_636da30);
CLANG_FORWARD_PROC_SYMBOL(public_636ded0);
CLANG_FORWARD_PROC_SYMBOL(public_6379a10);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63988e6);

#define public_636da77 _public_636da77
#define public_636da79 _public_636da79
#define public_636daac _public_636daac
#define public_636daae _public_636daae

PROC_DECLARE(0x636da30, internal_636da30, public_636da30);
extern "C" NAKED register_t __cdecl internal_636da30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63988e6 @0x636da32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63988e6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x10
        mov esi, ecx
        call public_6391d9c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], edi
        test edi, edi
        mov dword ptr ss : [esp+0x14], 0
        je public_636da77
        push 8
        mov ecx, edi
        call public_63522a0
        mov dword ptr ds : [edi], offset public_63a5918
        jmp public_636da79
        public_636da77 : nop
        xor edi, edi
        public_636da79 : nop
        push 0x50
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ds : [esi+8], edi
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        test eax, eax
        mov edi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x14], 1
        je public_636daac
        push edi
        mov ecx, eax
        call public_6379a10
        jmp public_636daae
        public_636daac : nop
        xor eax, eax
        public_636daae : nop
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [eax], edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], 0
        call public_636ded0
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x636da30)
    }
}

#undef public_636da77
#undef public_636da79
#undef public_636daac
#undef public_636daae
