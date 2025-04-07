#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eca710);
CLANG_FORWARD_PROC_SYMBOL(public_6ecad20);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb180);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb560);

#define public_6ec9496 _public_6ec9496
#define public_6ec94d1 _public_6ec94d1
#define public_6ec94ed _public_6ec94ed
#define public_6ec950a _public_6ec950a
#define public_6ec9510 _public_6ec9510
#define public_6ec9530 _public_6ec9530

PROC_DECLARE(0x6ec9480, internal_6ec9480, public_6ec9480);
extern "C" NAKED register_t __cdecl internal_6ec9480()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        push edi
        lea ebp, ds:[eax+0x68]
        mov dword ptr ss : [esp+0x14], 2
        public_6ec9496 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        je public_6ec9530
        mov dword ptr ds : [eax+0x1C], 0
        mov esi, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [edi]
        add esi, 8
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6ec950a
        mov ecx, eax
        cmp eax, ecx
        jne public_6ec950a
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ec94ed
        public_6ec94d1 : nop
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        mov ecx, esi
        call public_6ecb180
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0x10]
        call public_6eca710
        cmp edi, dword ptr ds : [esi+8]
        mov ebx, edi
        jne public_6ec94d1
        public_6ec94ed : nop
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        jmp public_6ec9530
        public_6ec950a : nop
        cmp eax, edi
        je public_6ec9530
        mov edi, edi
        public_6ec9510 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6ecb560
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6ecad20
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6ec9510
        public_6ec9530 : nop
        mov eax, dword ptr ss : [esp+0x14]
        add ebp, 4
        dec eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_6ec9496
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [eax+0x8C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax+0x88], edx
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6ec9480)
    }
}

#undef public_6ec9496
#undef public_6ec94d1
#undef public_6ec94ed
#undef public_6ec950a
#undef public_6ec9510
#undef public_6ec9530
