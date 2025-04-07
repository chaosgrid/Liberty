#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42160);
CLANG_FORWARD_PROC_SYMBOL(public_6d42a60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60160);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62d2b);

#define public_6d42b20 _public_6d42b20
#define public_6d42b3a _public_6d42b3a

PROC_DECLARE(0x6d42a60, internal_6d42a60, public_6d42a60);
extern "C" NAKED register_t __cdecl internal_6d42a60()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d62d2b @0x6d42a68*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62d2b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1010
        mov dword ptr fs : [0], esp
        call public_6d60160
        lea eax, ss:[esp]
        mov dword ptr ss : [esp+0x1000], eax
        lea ecx, ss:[esp]
        lea edx, ss:[esp+0x10]
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp], ecx
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+0x1008], eax
        lea ecx, ss:[esp+0x10]
        lea edx, ss:[esp+0x1000]
        lea eax, ss:[esp+0x1000]
        push ebx
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0x1008], ecx
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x1010], eax
        mov edx, dword ptr ss : [esp+0x1030]
        mov eax, dword ptr ss : [esp+0x102C]
        mov ebx, dword ptr ss : [esp+0x1024]
        push edx
        lea ecx, ss:[esp+8]
        push eax
        mov dword ptr ds : [eax+0x14], ecx
        mov eax, dword ptr ss : [esp+0x1030]
        push eax
        push ebx
        mov dword ptr ss : [esp+0x102C], 0
        call public_6d42160
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 0x10
        test eax, eax
        mov dword ptr ss : [esp+0x1004], eax
        je public_6d42b3a
        push esi
        lea esp, ss:[esp]
        public_6d42b20 : nop
        mov esi, dword ptr ds : [eax+4]
        push eax
        call public_6d5ffb0
        add esp, 4
        test esi, esi
        mov eax, esi
        mov dword ptr ss : [esp+0x1008], eax
        jne public_6d42b20
        pop esi
        public_6d42b3a : nop
        mov ecx, dword ptr ss : [esp+0x1014]
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x101C
        ret 
        UNREACHABLE_TRAP(0x6d42a60)
    }
}

#undef public_6d42b20
#undef public_6d42b3a
