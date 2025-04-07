#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67111d0);
CLANG_FORWARD_PROC_SYMBOL(public_67114f0);
CLANG_FORWARD_PROC_SYMBOL(public_6711a50);
CLANG_FORWARD_PROC_SYMBOL(public_6712380);
CLANG_FORWARD_PROC_SYMBOL(public_67169d0);
CLANG_FORWARD_JUMP_SYMBOL(public_6716cab);

#define public_671120e _public_671120e
#define public_6711235 _public_6711235
#define public_6711251 _public_6711251
#define public_671128d _public_671128d

PROC_DECLARE(0x67111d0, internal_67111d0, public_67111d0);
extern "C" NAKED register_t __cdecl internal_67111d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6716cab @0x67111d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6716cab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_6717158
        xor ebp, ebp
        push ebp
        push ebp
        mov dword ptr ss : [esp+0x28], ebp
        call public_67114f0
        mov ebx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_6711235
        public_671120e : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        call public_67169d0
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0xC], ecx
        jne public_671120e
        public_6711235 : nop
        mov dword ptr ds : [public_67193e0], ebp
        call public_6712380
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_671128d
        public_6711251 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x14]
        push ebp
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6711a50
        mov eax, dword ptr ds : [eax]
        push eax
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        call public_67169d0
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0xC], ecx
        jne public_6711251
        public_671128d : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_67169d0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x67111d0)
    }
}

#undef public_671120e
#undef public_6711235
#undef public_6711251
#undef public_671128d
