#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1cb40);
CLANG_FORWARD_PROC_SYMBOL(public_6f71920);
CLANG_FORWARD_PROC_SYMBOL(public_6f89cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1095);

#define public_6f89d18 _public_6f89d18
#define public_6f89d56 _public_6f89d56
#define public_6f89d7d _public_6f89d7d

PROC_DECLARE(0x6f89cc0, internal_6f89cc0, public_6f89cc0);
extern "C" NAKED register_t __cdecl internal_6f89cc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1095 @0x6f89cc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1095
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ds : [ebx], offset public_6fbc9b8
        mov dword ptr ds : [ebx+0x10], offset public_6fbc9a0
        mov dword ptr ds : [ebx+0x54], offset public_6fbc99c
        mov eax, dword ptr ds : [ebx+0x8C]
        xor esi, esi
        cmp eax, esi
        mov dword ptr ss : [esp+0x20], 2
        je public_6f89d18
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+0x8C], esi
        public_6f89d18 : nop
        mov eax, dword ptr ds : [ebx+0x7C]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [ebx+0x7C], esi
        mov dword ptr ds : [ebx+0x80], esi
        mov dword ptr ds : [ebx+0x84], esi
        lea esi, ds:[ebx+0x64]
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_6fb479c
        mov ecx, esi
        mov byte ptr ss : [esp+0x20], 3
        call public_6f1cb40
        mov ebp, dword ptr ds : [esi+8]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6f89d7d
        public_6f89d56 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [esi+0xC], ecx
        jne public_6f89d56
        public_6f89d7d : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_6fa8fe0
        xor eax, eax
        mov dword ptr ds : [esi+8], eax
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_6f71920
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f89cc0)
    }
}

#undef public_6f89d18
#undef public_6f89d56
#undef public_6f89d7d
