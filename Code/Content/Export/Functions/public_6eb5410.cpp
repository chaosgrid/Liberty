#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5410);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa258);

#define public_6eb5447 _public_6eb5447
#define public_6eb545c _public_6eb545c

PROC_DECLARE(0x6eb5410, internal_6eb5410, public_6eb5410);
extern "C" NAKED register_t __cdecl internal_6eb5410()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faa258 @0x6eb5412*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa258
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        lea ebp, ds:[ecx+4]
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov ebx, dword ptr ss : [ebp+0x14]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0x10]
        mov dword ptr ss : [esp+0x20], 0
        je public_6eb545c
        public_6eb5447 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6ecfe80
        cmp esi, ebx
        jne public_6eb5447
        public_6eb545c : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6fa8fe0
        xor esi, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov edx, dword ptr ss : [ebp+4]
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        pop edi
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6eb5410)
    }
}

#undef public_6eb5447
#undef public_6eb545c
