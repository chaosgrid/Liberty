#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4f50);
CLANG_FORWARD_PROC_SYMBOL(public_5397f0);
CLANG_FORWARD_PROC_SYMBOL(public_541040);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_548eb0);
CLANG_FORWARD_PROC_SYMBOL(public_54b900);
CLANG_FORWARD_PROC_SYMBOL(public_54bb00);

#define public_53bcbc _public_53bcbc
#define public_53bcc3 _public_53bcc3
#define public_53bce9 _public_53bce9
#define public_53bceb _public_53bceb
#define public_53bcfc _public_53bcfc
#define public_53bd2e _public_53bd2e

PROC_DECLARE(0x53bc80, internal_53bc80, public_53bc80);
extern "C" NAKED register_t __cdecl internal_53bc80()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi]
        push 0
        push eax
        call public_5416c0
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_53bd2e
        mov ecx, dword ptr ds : [edi]
        push ecx
        call public_548eb0
        add esp, 4
        test al, al
        je public_53bcc3
        cmp dword ptr ds : [edi+4], 1
        jne public_53bcbc
        push 0
        call public_4c4f50
        add esp, 4
        public_53bcbc : nop
        call public_54b900
        jmp public_53bcfc
        public_53bcc3 : nop
        call public_54bb00
        push eax
        mov ecx, esi
        call public_5397f0
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_53bce9
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_53bce9
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_53bceb
        public_53bce9 : nop
        xor eax, eax
        public_53bceb : nop
        mov ecx, dword ptr ds : [public_613ed0]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x90]
        public_53bcfc : nop
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x19C]
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_53bd2e
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_53bd2e
        push esi
        call public_541040
        mov edx, dword ptr ds : [esi+0xC]
        add esp, 4
        lea ecx, ds:[esi+0xC]
        push 1
        call dword ptr ds : [edx]
        public_53bd2e : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x53bc80)
    }
}

#undef public_53bcbc
#undef public_53bcc3
#undef public_53bce9
#undef public_53bceb
#undef public_53bcfc
#undef public_53bd2e
