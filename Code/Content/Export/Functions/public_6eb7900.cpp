#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7900);
CLANG_FORWARD_PROC_SYMBOL(public_6f1cb40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa3f7);

#define public_6eb7940 _public_6eb7940
#define public_6eb7967 _public_6eb7967

PROC_DECLARE(0x6eb7900, internal_6eb7900, public_6eb7900);
extern "C" NAKED register_t __cdecl internal_6eb7900()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faa3f7 @0x6eb7902*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa3f7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ds : [edi], offset public_6fb479c
        mov dword ptr ss : [esp+0x18], 0
        call public_6f1cb40
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6eb7967
        nop 
        lea esp, ss:[esp]
        public_6eb7940 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+0xC]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0xC], ecx
        jne public_6eb7940
        public_6eb7967 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [edi+8], 0
        mov dword ptr ds : [edi+0xC], 0
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6eb7900)
    }
}

#undef public_6eb7940
#undef public_6eb7967
