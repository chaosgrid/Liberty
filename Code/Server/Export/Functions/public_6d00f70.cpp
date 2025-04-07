#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6710);
CLANG_FORWARD_PROC_SYMBOL(public_6d00180);
CLANG_FORWARD_PROC_SYMBOL(public_6d00f70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60f07);

#define public_6d00fd0 _public_6d00fd0
#define public_6d00ffd _public_6d00ffd

PROC_DECLARE(0x6d00f70, internal_6d00f70, public_6d00f70);
extern "C" NAKED register_t __cdecl internal_6d00f70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60f07 @0x6d00f72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60f07
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi-0xC]
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [edi], offset public_6d6711c
        mov dword ptr ds : [esi-8], offset public_6d6709c
        mov dword ptr ds : [esi], offset public_6d67094
        push edi
        mov dword ptr ss : [esp+0x1C], 1
        call public_6d00180
        mov eax, dword ptr ds : [edi]
        add esp, 4
        mov ecx, edi
        call dword ptr ds : [eax+0x15C]
        mov ebx, dword ptr ds : [esi+0x98]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_6d00ffd
        lea esp, ss:[esp]
        public_6d00fd0 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ds : [esi+0x9C]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0x9C], ecx
        jne public_6d00fd0
        public_6d00ffd : nop
        mov eax, dword ptr ds : [esi+0x98]
        push eax
        call public_6d5ffb0
        xor eax, eax
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0x98], eax
        mov dword ptr ds : [esi+0x9C], eax
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_6ce6710
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d00f70)
    }
}

#undef public_6d00fd0
#undef public_6d00ffd
