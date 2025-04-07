#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f08390);
CLANG_FORWARD_PROC_SYMBOL(public_6f60da0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad062);

#define public_6f083f3 _public_6f083f3
#define public_6f08408 _public_6f08408
#define public_6f08437 _public_6f08437
#define public_6f0845b _public_6f0845b
#define public_6f08487 _public_6f08487

PROC_DECLARE(0x6f08390, internal_6f08390, public_6f08390);
extern "C" NAKED register_t __cdecl internal_6f08390()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad062 @0x6f08392*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad062
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [ebp], offset public_6fb8404
        mov eax, dword ptr ss : [ebp+0x168]
        push 0
        push eax
        mov dword ptr ss : [esp+0x30], 3
        call dword ptr ds : [public_6fb36b4]
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call public_6f60da0
        mov ebx, dword ptr ss : [ebp+0x1A4]
        mov esi, dword ptr ds : [ebx]
        lea edi, ss:[ebp+0x1A0]
        add esp, 0xC
        cmp esi, ebx
        mov byte ptr ss : [esp+0x28], 2
        je public_6f08408
        public_6f083f3 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        call public_6ecfe80
        cmp esi, ebx
        jne public_6f083f3
        public_6f08408 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        xor ebx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov edi, dword ptr ss : [ebp+0x184]
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+0x180]
        add esp, 4
        cmp eax, edi
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x10], eax
        je public_6f0845b
        public_6f08437 : nop
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6f08437
        public_6f0845b : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov ecx, dword ptr ss : [ebp+0x170]
        add esp, 4
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x28], 0
        je public_6f08487
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp+0x170], ebx
        public_6f08487 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        mov dword ptr ss : [ebp], offset public_6fb43f8
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f08390)
    }
}

#undef public_6f083f3
#undef public_6f08408
#undef public_6f08437
#undef public_6f0845b
#undef public_6f08487
