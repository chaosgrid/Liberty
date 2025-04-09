#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a80);
CLANG_FORWARD_PROC_SYMBOL(public_529ce0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c02cc);

#define public_529d25 _public_529d25
#define public_529d3a _public_529d3a

PROC_DECLARE(0x529ce0, internal_529ce0, public_529ce0);
extern "C" NAKED register_t __cdecl internal_529ce0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c02cc @0x529ce2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c02cc
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
        je public_529d3a
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov ax, word ptr ds : [edi]
        mov word ptr ds : [esi], ax
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        mov dword ptr ds : [esi+4], ecx
        je public_529d25
        call public_4f7a80
        public_529d25 : nop
        mov ecx, dword ptr ds : [edi+8]
        test ecx, ecx
        mov byte ptr ss : [esp+0x14], 1
        mov dword ptr ds : [esi+8], ecx
        pop edi
        je public_529d3a
        call public_4f7a80
        public_529d3a : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x529ce0)
    }
}

#undef public_529d25
#undef public_529d3a
