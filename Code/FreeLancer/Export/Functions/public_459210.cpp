#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_459210);
CLANG_FORWARD_PROC_SYMBOL(public_4c4da0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4e00);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_45923a _public_45923a
#define public_459242 _public_459242
#define public_459250 _public_459250
#define public_45928e _public_45928e
#define public_459299 _public_459299
#define public_4592a1 _public_4592a1
#define public_4592a8 _public_4592a8

PROC_DECLARE(0x459210, internal_459210, public_459210);
extern "C" NAKED register_t __cdecl internal_459210()
{
    __asm
    {
        sub esp, 8
        push esi
        lea eax, ss:[esp+0x10]
        push eax
        mov esi, ecx
        call public_52c7a0
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+4], eax
        je public_45923a
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_45923a
        lea eax, ss:[esp+4]
        jmp public_459242
        public_45923a : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_459242 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_4592a8
        lea esi, ds:[eax+0x10]
        test esi, esi
        je public_4592a8
        nop 
        public_459250 : nop
        push 0
        push 0
        lea eax, ss:[esp+0xC]
        mov byte ptr ss : [esp+0xC], 0
        mov ecx, dword ptr ds : [esi]
        push eax
        push ecx
        call public_4c4da0
        add esp, 0x10
        test al, al
        je public_45928e
        mov al, byte ptr ds : [esi+4]
        mov cl, byte ptr ss : [esp+4]
        mov dl, al
        and dl, cl
        cmp dl, al
        je public_4592a1
        or cl, al
        mov byte ptr ss : [esp+4], cl
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [esi]
        push 1
        push eax
        push ecx
        jmp public_459299
        public_45928e : nop
        mov eax, dword ptr ds : [esi]
        xor edx, edx
        mov dl, byte ptr ds : [esi+4]
        push 1
        push edx
        push eax
        public_459299 : nop
        call public_4c4e00
        add esp, 0xC
        public_4592a1 : nop
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_459250
        public_4592a8 : nop
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x459210)
    }
}

#undef public_45923a
#undef public_459242
#undef public_459250
#undef public_45928e
#undef public_459299
#undef public_4592a1
#undef public_4592a8
