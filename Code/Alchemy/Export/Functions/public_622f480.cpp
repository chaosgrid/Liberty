#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622f480);
CLANG_FORWARD_PROC_SYMBOL(public_6244120);
CLANG_FORWARD_PROC_SYMBOL(public_6244360);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_62497cb);

#define public_622f509 _public_622f509
#define public_622f50b _public_622f50b

PROC_DECLARE(0x622f480, internal_622f480, public_622f480);
extern "C" NAKED register_t __cdecl internal_622f480()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62497cb @0x622f482*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62497cb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0xD4
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_622f509
        lea edi, ds:[esi+0xC]
        mov dword ptr ds : [esi], offset public_624b8b0
        mov ecx, edi
        call public_6244360
        mov dword ptr ds : [edi+0xB4], ebx
        mov dword ptr ds : [edi+0xB8], ebx
        mov dword ptr ds : [edi+0xBC], ebx
        mov dword ptr ds : [edi], offset public_624e530
        mov dword ptr ds : [edi+0xBC], offset public_6257ac4
        mov dword ptr ds : [esi+0xB8], esi
        mov dword ptr ds : [esi+0x24], esi
        mov dword ptr ds : [esi], offset public_624e650
        mov dword ptr ds : [edi], offset public_624e5c0
        mov dword ptr ds : [esi+0xD0], 1
        jmp public_622f50b
        public_622f509 : nop
        xor esi, esi
        public_622f50b : nop
        mov ebx, dword ptr ss : [esp+0x20]
        lea edi, ds:[esi+0xC]
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_6244120
        mov eax, dword ptr ds : [ebx+0xC0]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edi+0xC0], eax
        pop edi
        xor eax, eax
        mov dword ptr ds : [ecx], esi
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x622f480)
    }
}

#undef public_622f509
#undef public_622f50b
