#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f487d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faefa8);

#define public_6f48830 _public_6f48830
#define public_6f4885b _public_6f4885b
#define public_6f4886a _public_6f4886a
#define public_6f48875 _public_6f48875
#define public_6f48886 _public_6f48886

PROC_DECLARE(0x6f487d0, internal_6f487d0, public_6f487d0);
extern "C" NAKED register_t __cdecl internal_6f487d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faefa8 @0x6f487d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faefa8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        mov eax, dword ptr ds : [ecx+0xD8]
        sub esp, 0x18
        push esi
        push edi
        xor edi, edi
        cmp eax, edi
        jne public_6f48875
        mov al, byte ptr ss : [esp+0xB]
        mov byte ptr ss : [esp+0x10], al
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], edi
        mov eax, dword ptr ds : [ecx+0xC]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [public_6fb3530]
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 8
        cmp esi, eax
        je public_6f4886a
        lea esp, ss:[esp]
        public_6f48830 : nop
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_6fd0bbc
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [public_6fd0bc0]
        je public_6f4885b
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, edi
        je public_6f4885b
        cmp dword ptr ds : [eax+0xD8], edi
        jne public_6f48886
        public_6f4885b : nop
        mov eax, dword ptr ss : [esp+0x18]
        add esi, 4
        cmp esi, eax
        jne public_6f48830
        mov esi, dword ptr ss : [esp+0x14]
        public_6f4886a : nop
        push esi
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        public_6f48875 : nop
        pop edi
        pop esi
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        public_6f48886 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax+0xD8]
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6f487d0)
    }
}

#undef public_6f48830
#undef public_6f4885b
#undef public_6f4886a
#undef public_6f48875
#undef public_6f48886
