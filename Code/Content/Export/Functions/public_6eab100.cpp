#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eab100);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9bd8);

#define public_6eab133 _public_6eab133
#define public_6eab142 _public_6eab142
#define public_6eab150 _public_6eab150
#define public_6eab165 _public_6eab165
#define public_6eab176 _public_6eab176
#define public_6eab18b _public_6eab18b

PROC_DECLARE(0x6eab100, internal_6eab100, public_6eab100);
extern "C" NAKED register_t __cdecl internal_6eab100()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9bd8 @0x6eab102*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9bd8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        lea esi, ds:[ecx+8]
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x1C], 0
        je public_6eab142
        public_6eab133 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+4]
        jne public_6eab133
        public_6eab142 : nop
        mov ebx, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_6eab165
        nop 
        lea esp, ss:[esp]
        public_6eab150 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_6ecfe80
        cmp edi, ebx
        jne public_6eab150
        public_6eab165 : nop
        mov ebx, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        je public_6eab18b
        public_6eab176 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_6ecfe80
        cmp edi, ebx
        jne public_6eab176
        public_6eab18b : nop
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
        UNREACHABLE_TRAP(0x6eab100)
    }
}

#undef public_6eab133
#undef public_6eab142
#undef public_6eab150
#undef public_6eab165
#undef public_6eab176
#undef public_6eab18b
