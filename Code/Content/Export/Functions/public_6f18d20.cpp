#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f18d20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fada78);

#define public_6f18d53 _public_6f18d53
#define public_6f18d62 _public_6f18d62
#define public_6f18d70 _public_6f18d70
#define public_6f18d85 _public_6f18d85
#define public_6f18d96 _public_6f18d96
#define public_6f18dab _public_6f18dab

PROC_DECLARE(0x6f18d20, internal_6f18d20, public_6f18d20);
extern "C" NAKED register_t __cdecl internal_6f18d20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fada78 @0x6f18d22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fada78
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        lea esi, ds:[ecx+4]
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x1C], 0
        je public_6f18d62
        public_6f18d53 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+4]
        jne public_6f18d53
        public_6f18d62 : nop
        mov ebx, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_6f18d85
        nop 
        lea esp, ss:[esp]
        public_6f18d70 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_6ecfe80
        cmp edi, ebx
        jne public_6f18d70
        public_6f18d85 : nop
        mov ebx, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        je public_6f18dab
        public_6f18d96 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_6ecfe80
        cmp edi, ebx
        jne public_6f18d96
        public_6f18dab : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f18d20)
    }
}

#undef public_6f18d53
#undef public_6f18d62
#undef public_6f18d70
#undef public_6f18d85
#undef public_6f18d96
#undef public_6f18dab
