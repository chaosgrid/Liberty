#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad4736);

#define public_6ad4779 _public_6ad4779
#define public_6ad47c9 _public_6ad47c9
#define public_6ad47cd _public_6ad47cd
#define public_6ad47e4 _public_6ad47e4

PROC_DECLARE(0x6ad4736, internal_6ad4736, public_6ad4736);
extern "C" NAKED register_t __cdecl internal_6ad4736()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ae2454]
        mov ecx, dword ptr ds : [public_6ae2444]
        push esi
        push edi
        xor edi, edi
        cmp eax, ecx
        jne public_6ad4779
        lea eax, ds:[ecx+ecx*4+0x50]
        shl eax, 2
        push eax
        push dword ptr ds : [public_6ae2458]
        push edi
        push dword ptr ds : [public_6ae2460]
        call dword ptr ds : [public_6ada100]
        cmp eax, edi
        je public_6ad47c9
        add dword ptr ds : [public_6ae2444], 0x10
        mov dword ptr ds : [public_6ae2458], eax
        mov eax, dword ptr ds : [public_6ae2454]
        public_6ad4779 : nop
        mov ecx, dword ptr ds : [public_6ae2458]
        push 0x41C4
        push 8
        lea eax, ds:[eax+eax*4]
        push dword ptr ds : [public_6ae2460]
        lea esi, ds:[ecx+eax*4]
        call dword ptr ds : [public_6ada130]
        cmp eax, edi
        mov dword ptr ds : [esi+0x10], eax
        je public_6ad47c9
        push 4
        push 0x2000
        push 0x100000
        push edi
        call dword ptr ds : [public_6ada0bc]
        cmp eax, edi
        mov dword ptr ds : [esi+0xC], eax
        jne public_6ad47cd
        push dword ptr ds : [esi+0x10]
        push edi
        push dword ptr ds : [public_6ae2460]
        call dword ptr ds : [public_6ada134]
        public_6ad47c9 : nop
        xor eax, eax
        jmp public_6ad47e4
        public_6ad47cd : nop
        or dword ptr ds : [esi+8], 0xFFFFFFFF
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], edi
        inc dword ptr ds : [public_6ae2454]
        mov eax, dword ptr ds : [esi+0x10]
        or dword ptr ds : [eax], 0xFFFFFFFF
        mov eax, esi
        public_6ad47e4 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad4736)
    }
}

#undef public_6ad4779
#undef public_6ad47c9
#undef public_6ad47cd
#undef public_6ad47e4
