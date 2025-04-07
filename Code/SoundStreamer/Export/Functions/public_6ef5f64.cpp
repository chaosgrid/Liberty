#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef5f64);

#define public_6ef5fa7 _public_6ef5fa7
#define public_6ef5ff7 _public_6ef5ff7
#define public_6ef5ffb _public_6ef5ffb
#define public_6ef6012 _public_6ef6012

PROC_DECLARE(0x6ef5f64, internal_6ef5f64, public_6ef5f64);
extern "C" NAKED register_t __cdecl internal_6ef5f64()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f02664]
        mov ecx, dword ptr ds : [public_6f02654]
        push esi
        push edi
        xor edi, edi
        cmp eax, ecx
        jne public_6ef5fa7
        lea eax, ds:[ecx+ecx*4+0x50]
        shl eax, 2
        push eax
        push dword ptr ds : [public_6f02668]
        push edi
        push dword ptr ds : [public_6f02670]
        call dword ptr ds : [public_6efc0b4]
        cmp eax, edi
        je public_6ef5ff7
        add dword ptr ds : [public_6f02654], 0x10
        mov dword ptr ds : [public_6f02668], eax
        mov eax, dword ptr ds : [public_6f02664]
        public_6ef5fa7 : nop
        mov ecx, dword ptr ds : [public_6f02668]
        push 0x41C4
        push 8
        lea eax, ds:[eax+eax*4]
        push dword ptr ds : [public_6f02670]
        lea esi, ds:[ecx+eax*4]
        call dword ptr ds : [public_6efc080]
        cmp eax, edi
        mov dword ptr ds : [esi+0x10], eax
        je public_6ef5ff7
        push 4
        push 0x2000
        push 0x100000
        push edi
        call dword ptr ds : [public_6efc0b0]
        cmp eax, edi
        mov dword ptr ds : [esi+0xC], eax
        jne public_6ef5ffb
        push dword ptr ds : [esi+0x10]
        push edi
        push dword ptr ds : [public_6f02670]
        call dword ptr ds : [public_6efc07c]
        public_6ef5ff7 : nop
        xor eax, eax
        jmp public_6ef6012
        public_6ef5ffb : nop
        or dword ptr ds : [esi+8], 0xFFFFFFFF
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], edi
        inc dword ptr ds : [public_6f02664]
        mov eax, dword ptr ds : [esi+0x10]
        or dword ptr ds : [eax], 0xFFFFFFFF
        mov eax, esi
        public_6ef6012 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef5f64)
    }
}

#undef public_6ef5fa7
#undef public_6ef5ff7
#undef public_6ef5ffb
#undef public_6ef6012
