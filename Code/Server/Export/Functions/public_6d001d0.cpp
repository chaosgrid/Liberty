#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cffdc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d001d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d10320);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d001f2 _public_6d001f2
#define public_6d00234 _public_6d00234
#define public_6d00240 _public_6d00240
#define public_6d0026d _public_6d0026d

PROC_DECLARE(0x6d001d0, internal_6d001d0, public_6d001d0);
extern "C" NAKED register_t __cdecl internal_6d001d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0xC
        push esi
        push edi
        push eax
        call public_6d10320
        add esp, 4
        call public_6cffdc0
        mov eax, dword ptr ds : [public_6d8d8e4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d00234
        public_6d001f2 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [ecx+0x28]
        call public_6d06cd0
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x10], eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+0x90]
        lea edx, ss:[esp+8]
        push edx
        push 0x25
        mov dword ptr ss : [esp+0x14], ecx
        call public_6d43650
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [public_6d8d8e4]
        add esp, 8
        cmp esi, eax
        jne public_6d001f2
        public_6d00234 : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_6d0026d
        lea esp, ss:[esp]
        public_6d00240 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ds : [public_6d8d8e8]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_6d8d8e8], ecx
        jne public_6d00240
        public_6d0026d : nop
        pop edi
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d001d0)
    }
}

#undef public_6d001f2
#undef public_6d00234
#undef public_6d00240
#undef public_6d0026d
