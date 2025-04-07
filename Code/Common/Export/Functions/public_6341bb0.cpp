#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341af0);
CLANG_FORWARD_PROC_SYMBOL(public_6341bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6342170);
CLANG_FORWARD_PROC_SYMBOL(public_6342550);
CLANG_FORWARD_PROC_SYMBOL(public_6342a40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6341be1 _public_6341be1
#define public_6341c13 _public_6341c13
#define public_6341c35 _public_6341c35
#define public_6341c40 _public_6341c40
#define public_6341c63 _public_6341c63

PROC_DECLARE(0x6341bb0, internal_6341bb0, public_6341bb0);
extern "C" NAKED register_t __cdecl internal_6341bb0()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ds : [public_658a9c4]
        mov edx, dword ptr ds : [public_658a9d0]
        test edx, edx
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6341c35
        mov edx, eax
        cmp eax, edx
        jne public_6341c35
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_658a9c8]
        cmp edi, eax
        mov esi, edi
        je public_6341c13
        public_6341be1 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_658a9c0
        call public_6342550
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6341af0
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [public_658a9c8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6341be1
        mov ecx, dword ptr ds : [public_658a9c4]
        public_6341c13 : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_658a9c4]
        mov dword ptr ds : [public_658a9d0], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_658a9c4]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        add esp, 8
        ret 
        public_6341c35 : nop
        cmp eax, ecx
        je public_6341c63
        lea esp, ss:[esp]
        public_6341c40 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_6342a40
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_658a9c0
        call public_6342170
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_6341c40
        public_6341c63 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6341bb0)
    }
}

#undef public_6341be1
#undef public_6341c13
#undef public_6341c35
#undef public_6341c40
#undef public_6341c63
