#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347c80);
CLANG_FORWARD_PROC_SYMBOL(public_63525f0);
CLANG_FORWARD_PROC_SYMBOL(public_63526d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6397bab);

#define public_6347cd1 _public_6347cd1
#define public_6347cd3 _public_6347cd3
#define public_6347cdf _public_6347cdf
#define public_6347d02 _public_6347d02

PROC_DECLARE(0x6347c80, internal_6347c80, public_6347c80);
extern "C" NAKED register_t __cdecl internal_6347c80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397bab @0x6347c82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397bab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi]
        and eax, 0xC
        cmp al, 4
        jne public_6347d02
        mov eax, dword ptr ds : [edi+0x5C]
        test eax, eax
        jne public_6347cdf
        push esi
        push 0x14
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_6347cd1
        push 2
        mov ecx, esi
        call public_63525f0
        jmp public_6347cd3
        public_6347cd1 : nop
        xor esi, esi
        public_6347cd3 : nop
        mov dword ptr ds : [edi+0x5C], esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        pop esi
        public_6347cdf : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        push eax
        push ecx
        mov ecx, dword ptr ds : [edi+0x5C]
        call public_63526d0
        pop edi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        public_6347d02 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edi+0x5C], edx
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6347c80)
    }
}

#undef public_6347cd1
#undef public_6347cd3
#undef public_6347cdf
#undef public_6347d02
