#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f86ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0c1c);

#define public_6f86f50 _public_6f86f50
#define public_6f86f65 _public_6f86f65

PROC_DECLARE(0x6f86ef0, internal_6f86ef0, public_6f86ef0);
extern "C" NAKED register_t __cdecl internal_6f86ef0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0c1c @0x6f86ef2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0c1c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp], offset public_6fbc82c
        mov dword ptr ss : [ebp+0x10], offset public_6fbc83c
        mov eax, dword ptr ss : [ebp+0x20]
        lea esi, ss:[ebp+0x20]
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 1
        call dword ptr ds : [eax+4]
        lea edi, ds:[esi+4]
        mov dword ptr ds : [esi], offset public_6fbc7cc
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        mov byte ptr ss : [esp+0x20], 0
        je public_6f86f65
        lea ebx, ds:[ebx]
        public_6f86f50 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_6ecfe80
        cmp esi, ebx
        jne public_6f86f50
        public_6f86f65 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        lea ecx, ss:[ebp+0x10]
        mov dword ptr ss : [esp+0x20], 2
        call dword ptr ds : [public_6fb325c]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3250]
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f86ef0)
    }
}

#undef public_6f86f50
#undef public_6f86f65
