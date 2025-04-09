#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4be370);
CLANG_FORWARD_PROC_SYMBOL(public_59da70);

#define public_57b185 _public_57b185
#define public_57b190 _public_57b190
#define public_57b19d _public_57b19d
#define public_57b1a4 _public_57b1a4

PROC_DECLARE(0x57b140, internal_57b140, public_57b140);
extern "C" NAKED register_t __cdecl internal_57b140()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x470]
        test al, al
        push edi
        je public_57b185
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0xB8]
        mov edi, eax
        test edi, edi
        je public_57b185
        lea ecx, ss:[esp+8]
        push ecx
        call public_59da70
        mov edx, dword ptr ds : [esi]
        add esp, 4
        lea eax, ss:[esp+8]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        test al, al
        je public_57b185
        push edi
        call public_4be370
        add esp, 4
        public_57b185 : nop
        mov esi, dword ptr ds : [esi+0xC]
        test esi, esi
        je public_57b1a4
        lea esp, ss:[esp]
        public_57b190 : nop
        test byte ptr ds : [esi+0x6C], 1
        jne public_57b19d
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x30]
        public_57b19d : nop
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_57b190
        public_57b1a4 : nop
        pop edi
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x57b140)
    }
}

#undef public_57b185
#undef public_57b190
#undef public_57b19d
#undef public_57b1a4
