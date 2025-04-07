#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dc2a7);

#define public_65dc2ea _public_65dc2ea
#define public_65dc33a _public_65dc33a
#define public_65dc33e _public_65dc33e
#define public_65dc355 _public_65dc355

PROC_DECLARE(0x65dc2a7, internal_65dc2a7, public_65dc2a7);
extern "C" NAKED register_t __cdecl internal_65dc2a7()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65e7914]
        mov ecx, dword ptr ds : [public_65e7904]
        push esi
        push edi
        xor edi, edi
        cmp eax, ecx
        jne public_65dc2ea
        lea eax, ds:[ecx+ecx*4+0x50]
        shl eax, 2
        push eax
        push dword ptr ds : [public_65e7918]
        push edi
        push dword ptr ds : [public_65e7920]
        call dword ptr ds : [public_65e108c]
        cmp eax, edi
        je public_65dc33a
        add dword ptr ds : [public_65e7904], 0x10
        mov dword ptr ds : [public_65e7918], eax
        mov eax, dword ptr ds : [public_65e7914]
        public_65dc2ea : nop
        mov ecx, dword ptr ds : [public_65e7918]
        push 0x41C4
        push 8
        lea eax, ds:[eax+eax*4]
        push dword ptr ds : [public_65e7920]
        lea esi, ds:[ecx+eax*4]
        call dword ptr ds : [public_65e1060]
        cmp eax, edi
        mov dword ptr ds : [esi+0x10], eax
        je public_65dc33a
        push 4
        push 0x2000
        push 0x100000
        push edi
        call dword ptr ds : [public_65e10d4]
        cmp eax, edi
        mov dword ptr ds : [esi+0xC], eax
        jne public_65dc33e
        push dword ptr ds : [esi+0x10]
        push edi
        push dword ptr ds : [public_65e7920]
        call dword ptr ds : [public_65e1058]
        public_65dc33a : nop
        xor eax, eax
        jmp public_65dc355
        public_65dc33e : nop
        or dword ptr ds : [esi+8], 0xFFFFFFFF
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], edi
        inc dword ptr ds : [public_65e7914]
        mov eax, dword ptr ds : [esi+0x10]
        or dword ptr ds : [eax], 0xFFFFFFFF
        mov eax, esi
        public_65dc355 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65dc2a7)
    }
}

#undef public_65dc2ea
#undef public_65dc33a
#undef public_65dc33e
#undef public_65dc355
