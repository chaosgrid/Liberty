#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f4a10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf2df);

#define public_4f4a50 _public_4f4a50
#define public_4f4a66 _public_4f4a66

PROC_DECLARE(0x4f4a10, internal_4f4a10, public_4f4a10);
extern "C" NAKED register_t __cdecl internal_4f4a10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf2df @0x4f4a12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf2df
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov ebx, dword ptr ss : [ebp+0xB0]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0xAC]
        mov dword ptr ss : [esp+0x20], 0
        je public_4f4a66
        lea esp, ss:[esp]
        public_4f4a50 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c63ac]
        cmp esi, ebx
        jne public_4f4a50
        public_4f4a66 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_5b7e1d
        xor esi, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov edx, dword ptr ss : [ebp+0xA0]
        push edx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        pop edi
        mov dword ptr ss : [ebp+0xA0], esi
        mov dword ptr ss : [ebp+0xA4], esi
        mov dword ptr ss : [ebp+0xA8], esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x4f4a10)
    }
}

#undef public_4f4a50
#undef public_4f4a66
