#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead070);
CLANG_FORWARD_PROC_SYMBOL(public_6ead0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9bd8);

#define public_6ead0e8 _public_6ead0e8
#define public_6ead0fd _public_6ead0fd
#define public_6ead120 _public_6ead120
#define public_6ead135 _public_6ead135
#define public_6ead152 _public_6ead152
#define public_6ead167 _public_6ead167

PROC_DECLARE(0x6ead0b0, internal_6ead0b0, public_6ead0b0);
extern "C" NAKED register_t __cdecl internal_6ead0b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9bd8 @0x6ead0b2*/
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
        push ebp
        push esi
        lea ebx, ds:[ecx+4]
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov ebp, dword ptr ds : [ebx+0x1C]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[ebx+0x18]
        mov dword ptr ss : [esp+0x20], 0
        je public_6ead0fd
        public_6ead0e8 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6ecfe80
        cmp esi, ebp
        jne public_6ead0e8
        public_6ead0fd : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6fa8fe0
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov ebp, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ss : [ebp]
        lea edi, ds:[ebx+0xC]
        add esp, 4
        cmp esi, ebp
        je public_6ead135
        mov edi, edi
        public_6ead120 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        call public_6ead070
        cmp esi, ebp
        jne public_6ead120
        public_6ead135 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        xor ebp, ebp
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [edi]
        add esp, 4
        cmp esi, edi
        je public_6ead167
        public_6ead152 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebx
        call public_6ecfe80
        cmp esi, edi
        jne public_6ead152
        public_6ead167 : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        pop edi
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], ebp
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6ead0b0)
    }
}

#undef public_6ead0e8
#undef public_6ead0fd
#undef public_6ead120
#undef public_6ead135
#undef public_6ead152
#undef public_6ead167
