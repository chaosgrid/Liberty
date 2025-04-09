#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54bb00);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);

#define public_5468fe _public_5468fe
#define public_546900 _public_546900
#define public_54692c _public_54692c
#define public_54692e _public_54692e
#define public_546949 _public_546949
#define public_546960 _public_546960
#define public_546964 _public_546964
#define public_54697a _public_54697a
#define public_546993 _public_546993
#define public_5469d8 _public_5469d8
#define public_5469e0 _public_5469e0
#define public_5469fc _public_5469fc

PROC_DECLARE(0x5468e0, internal_5468e0, public_5468e0);
extern "C" NAKED register_t __cdecl internal_5468e0()
{
    __asm
    {
        sub esp, 0x14
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        cmp edi, 0xFFFFFFFF
        mov esi, ecx
        je public_5468fe
        call public_54bb00
        cmp edi, eax
        je public_5468fe
        xor cl, cl
        jmp public_546900
        public_5468fe : nop
        mov cl, 1
        public_546900 : nop
        lea eax, ds:[esi-4]
        test eax, eax
        mov byte ptr ss : [esp+0x2C], cl
        mov dword ptr ss : [esp+0xC], eax
        je public_54692c
        add eax, 0xC
        test eax, eax
        je public_54692c
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_54692c
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        je public_54692e
        public_54692c : nop
        xor esi, esi
        public_54692e : nop
        test cl, cl
        mov edi, dword ptr ss : [esp+0x24]
        je public_546960
        test edi, edi
        je public_546949
        push 0
        push 0xCC
        call public_5763b0
        add esp, 8
        public_546949 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6348]
        cmp eax, edi
        je public_546960
        mov ecx, dword ptr ds : [public_5c6368]
        mov bp, word ptr ds : [ecx]
        jmp public_546964
        public_546960 : nop
        mov ebp, dword ptr ss : [esp+0x28]
        public_546964 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_54697a
        mov al, byte ptr ss : [esp+0x2C]
        test al, al
        je public_5469fc
        public_54697a : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6348]
        cmp eax, edi
        jne public_546993
        mov ecx, esi
        call dword ptr ds : [public_5c6540]
        cmp ax, bp
        je public_5469fc
        public_546993 : nop
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c62d0]
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_5c6b14]
        mov al, byte ptr ss : [esp+0x2C]
        test al, al
        je public_5469fc
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        test edi, edi
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [public_5c6368]
        mov cx, word ptr ds : [eax]
        mov word ptr ss : [esp+0x14], cx
        je public_5469d8
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x18], eax
        jmp public_5469e0
        public_5469d8 : nop
        mov dword ptr ss : [esp+0x18], 0
        public_5469e0 : nop
        mov ecx, dword ptr ds : [public_67ecd0]
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ds : [public_673344]
        mov word ptr ss : [esp+0x20], bp
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x10]
        public_5469fc : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x5468e0)
    }
}

#undef public_5468fe
#undef public_546900
#undef public_54692c
#undef public_54692e
#undef public_546949
#undef public_546960
#undef public_546964
#undef public_54697a
#undef public_546993
#undef public_5469d8
#undef public_5469e0
#undef public_5469fc
