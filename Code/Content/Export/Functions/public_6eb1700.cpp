#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1700);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9eec);

#define public_6eb175b _public_6eb175b
#define public_6eb1763 _public_6eb1763
#define public_6eb1769 _public_6eb1769
#define public_6eb1787 _public_6eb1787
#define public_6eb178f _public_6eb178f
#define public_6eb179a _public_6eb179a
#define public_6eb17b6 _public_6eb17b6
#define public_6eb17be _public_6eb17be
#define public_6eb17c4 _public_6eb17c4
#define public_6eb17e1 _public_6eb17e1
#define public_6eb17e9 _public_6eb17e9
#define public_6eb17f3 _public_6eb17f3
#define public_6eb17fa _public_6eb17fa

PROC_DECLARE(0x6eb1700, internal_6eb1700, public_6eb1700);
extern "C" NAKED register_t __cdecl internal_6eb1700()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9eec @0x6eb1702*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9eec
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], edi
        test edi, edi
        mov dword ptr ss : [esp+0x10], 0
        je public_6eb17fa
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], eax
        mov cl, byte ptr ds : [esi+0x10]
        mov byte ptr ds : [edi+0x10], cl
        mov ecx, dword ptr ds : [esi+0x14]
        test ecx, ecx
        jne public_6eb175b
        xor eax, eax
        jmp public_6eb1763
        public_6eb175b : nop
        mov eax, dword ptr ds : [esi+0x18]
        sub eax, ecx
        sar eax, 2
        public_6eb1763 : nop
        test eax, eax
        jge public_6eb1769
        xor eax, eax
        public_6eb1769 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov dword ptr ds : [edi+0x14], eax
        mov edx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x14]
        add esp, 4
        cmp ecx, edx
        je public_6eb179a
        push ebx
        public_6eb1787 : nop
        test eax, eax
        je public_6eb178f
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ebx
        public_6eb178f : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6eb1787
        pop ebx
        public_6eb179a : nop
        mov dword ptr ds : [edi+0x18], eax
        mov dword ptr ds : [edi+0x1C], eax
        mov al, byte ptr ds : [esi+0x20]
        mov byte ptr ds : [edi+0x20], al
        mov ecx, dword ptr ds : [esi+0x24]
        test ecx, ecx
        mov byte ptr ss : [esp+0x14], 1
        jne public_6eb17b6
        xor eax, eax
        jmp public_6eb17be
        public_6eb17b6 : nop
        mov eax, dword ptr ds : [esi+0x28]
        sub eax, ecx
        sar eax, 2
        public_6eb17be : nop
        test eax, eax
        jge public_6eb17c4
        xor eax, eax
        public_6eb17c4 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov dword ptr ds : [edi+0x24], eax
        mov ecx, dword ptr ds : [esi+0x28]
        mov esi, dword ptr ds : [esi+0x24]
        add esp, 4
        cmp esi, ecx
        je public_6eb17f3
        public_6eb17e1 : nop
        test eax, eax
        je public_6eb17e9
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        public_6eb17e9 : nop
        add esi, 4
        add eax, 4
        cmp esi, ecx
        jne public_6eb17e1
        public_6eb17f3 : nop
        mov dword ptr ds : [edi+0x28], eax
        mov dword ptr ds : [edi+0x2C], eax
        pop esi
        public_6eb17fa : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6eb1700)
    }
}

#undef public_6eb175b
#undef public_6eb1763
#undef public_6eb1769
#undef public_6eb1787
#undef public_6eb178f
#undef public_6eb179a
#undef public_6eb17b6
#undef public_6eb17be
#undef public_6eb17c4
#undef public_6eb17e1
#undef public_6eb17e9
#undef public_6eb17f3
#undef public_6eb17fa
