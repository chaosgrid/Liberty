#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6327c90);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_639714b);

#define public_6327cd0 _public_6327cd0
#define public_6327ce5 _public_6327ce5
#define public_6327d02 _public_6327d02
#define public_6327d29 _public_6327d29

PROC_DECLARE(0x6327c90, internal_6327c90, public_6327c90);
extern "C" NAKED register_t __cdecl internal_6327c90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639714b @0x6327c92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639714b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ds : [edi], offset public_63a3de8
        mov ebp, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea ebx, ds:[edi+0x10]
        mov dword ptr ss : [esp+0x20], 0
        je public_6327ce5
        lea ecx, ds:[ecx]
        public_6327cd0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_6271cc0
        cmp esi, ebp
        jne public_6327cd0
        public_6327ce5 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6391d5a
        xor ebp, ebp
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], ebp
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [ebx]
        add esp, 4
        cmp esi, ebx
        je public_6327d29
        public_6327d02 : nop
        mov eax, esi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+0xC]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0xC], ecx
        jne public_6327d02
        public_6327d29 : nop
        mov edx, dword ptr ds : [edi+8]
        push edx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov dword ptr ds : [edi+8], ebp
        mov dword ptr ds : [edi+0xC], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6327c90)
    }
}

#undef public_6327cd0
#undef public_6327ce5
#undef public_6327d02
#undef public_6327d29
