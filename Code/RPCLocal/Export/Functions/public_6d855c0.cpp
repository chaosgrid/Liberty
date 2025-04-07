#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d855c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d85710);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_JUMP_SYMBOL(public_6db244d);

#define public_6d85600 _public_6d85600
#define public_6d85616 _public_6d85616
#define public_6d85645 _public_6d85645
#define public_6d8566a _public_6d8566a
#define public_6d85699 _public_6d85699
#define public_6d856a5 _public_6d856a5
#define public_6d856d4 _public_6d856d4
#define public_6d856e0 _public_6d856e0

PROC_DECLARE(0x6d855c0, internal_6d855c0, public_6d855c0);
extern "C" NAKED register_t __cdecl internal_6d855c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db244d @0x6d855c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db244d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        mov ebx, dword ptr ss : [ebp+0x258]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0x254]
        mov dword ptr ss : [esp+0x28], 2
        je public_6d85616
        lea esp, ss:[esp]
        public_6d85600 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6db309c]
        cmp esi, ebx
        jne public_6d85600
        public_6d85616 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6db1dc2
        xor ebx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov edi, dword ptr ss : [ebp+0x24C]
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+0x248]
        add esp, 4
        cmp eax, edi
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x10], eax
        je public_6d8566a
        public_6d85645 : nop
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6d85710
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6db30d4]
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6d85645
        public_6d8566a : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6db1dc2
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ss : [ebp+0x218]
        add esp, 4
        cmp eax, ebx
        je public_6d856a5
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6d85699
        cmp cl, 0xFF
        je public_6d85699
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d856a5
        public_6d85699 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d856a5 : nop
        mov dword ptr ss : [ebp+0x218], ebx
        mov dword ptr ss : [ebp+0x21C], ebx
        mov dword ptr ss : [ebp+0x220], ebx
        mov eax, dword ptr ss : [ebp+0x208]
        cmp eax, ebx
        je public_6d856e0
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6d856d4
        cmp cl, 0xFF
        je public_6d856d4
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d856e0
        public_6d856d4 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d856e0 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        mov dword ptr ss : [ebp+0x208], ebx
        mov dword ptr ss : [ebp+0x20C], ebx
        mov dword ptr ss : [ebp+0x210], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d855c0)
    }
}

#undef public_6d85600
#undef public_6d85616
#undef public_6d85645
#undef public_6d8566a
#undef public_6d85699
#undef public_6d856a5
#undef public_6d856d4
#undef public_6d856e0
