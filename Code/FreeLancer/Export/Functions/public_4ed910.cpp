#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_4c7c60);
CLANG_FORWARD_PROC_SYMBOL(public_4c7c80);
CLANG_FORWARD_PROC_SYMBOL(public_4ed9f0);
CLANG_FORWARD_PROC_SYMBOL(public_54bcb0);
CLANG_FORWARD_PROC_SYMBOL(public_576240);
CLANG_FORWARD_PROC_SYMBOL(public_59daa0);

#define public_4ed941 _public_4ed941
#define public_4ed960 _public_4ed960
#define public_4ed969 _public_4ed969
#define public_4ed996 _public_4ed996

PROC_DECLARE(0x4ed910, internal_4ed910, public_4ed910);
extern "C" NAKED register_t __cdecl internal_4ed910()
{
    __asm
    {
        sub esp, 0x28
        push esi
        mov esi, ecx
        call public_45a740
        test al, al
        jne public_4ed960
        call public_59daa0
        test eax, eax
        jne public_4ed960
        cmp dword ptr ss : [esp+0x30], 6
        jne public_4ed960
        call public_4c7c60
        test al, al
        je public_4ed941
        call public_4c7c80
        test al, al
        je public_4ed960
        public_4ed941 : nop
        call public_576240
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        je public_4ed969
        push 1
        lea ecx, ds:[esi-0x364]
        call public_4ed9f0
        mov byte ptr ds : [esi+0x5D4], al
        public_4ed960 : nop
        xor al, al
        pop esi
        add esp, 0x28
        ret 4
        public_4ed969 : nop
        call public_576240
        mov cl, byte ptr ds : [eax+0x1A]
        test cl, cl
        jne public_4ed960
        mov eax, dword ptr ds : [esi+0xE4]
        test eax, eax
        jne public_4ed996
        mov al, byte ptr ds : [esi+0x5D4]
        test al, al
        jne public_4ed996
        push 0
        lea ecx, ds:[esi-0x364]
        call public_4ed9f0
        public_4ed996 : nop
        mov edx, dword ptr ds : [esi+0xE4]
        test edx, edx
        mov byte ptr ds : [esi+0x5D4], 0
        je public_4ed960
        push edi
        xor eax, eax
        mov ecx, 0xA
        lea edi, ss:[esp+8]
        rep stosd
        movzx eax, word ptr ds : [esi+0xE2]
        lea ecx, ss:[esp+8]
        push ecx
        mov byte ptr ss : [esp+0x32], 1
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0xC], 0x1C
        call public_54bcb0
        add esp, 4
        pop edi
        mov al, 1
        pop esi
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x4ed910)
    }
}

#undef public_4ed941
#undef public_4ed960
#undef public_4ed969
#undef public_4ed996
