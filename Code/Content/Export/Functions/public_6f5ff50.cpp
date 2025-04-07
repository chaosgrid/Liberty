#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f5ff50);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a840);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafa88);

#define public_6f5ff87 _public_6f5ff87
#define public_6f5ff9c _public_6f5ff9c
#define public_6f5ffc2 _public_6f5ffc2
#define public_6f5fff3 _public_6f5fff3

PROC_DECLARE(0x6f5ff50, internal_6f5ff50, public_6f5ff50);
extern "C" NAKED register_t __cdecl internal_6f5ff50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafa88 @0x6f5ff52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafa88
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov ebp, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[ebx+0xC]
        mov dword ptr ss : [esp+0x20], 0
        je public_6f5ff9c
        public_6f5ff87 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6ecfe80
        cmp esi, ebp
        jne public_6f5ff87
        public_6f5ff9c : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov ebp, dword ptr ds : [ebx+4]
        mov edi, dword ptr ss : [ebp]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_6f5fff3
        public_6f5ffc2 : nop
        mov esi, edi
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        push 0
        lea ecx, ds:[esi+8]
        call public_6f6a840
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6f5ffc2
        public_6f5fff3 : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        pop edi
        pop esi
        xor eax, eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f5ff50)
    }
}

#undef public_6f5ff87
#undef public_6f5ff9c
#undef public_6f5ffc2
#undef public_6f5fff3
