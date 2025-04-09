#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c5680);
CLANG_FORWARD_PROC_SYMBOL(public_4c56b0);

#define public_53e287 _public_53e287
#define public_53e2a9 _public_53e2a9

PROC_DECLARE(0x53e270, internal_53e270, public_53e270);
extern "C" NAKED register_t __cdecl internal_53e270()
{
    __asm
    {
        push esi
        push edi
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_53e2a9
        call public_4c5680
        mov edi, dword ptr ss : [esp+0x10]
        xor esi, esi
        public_53e287 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_53e2a9
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        cmp esi, eax
        jae public_53e2a9
        mov eax, dword ptr ds : [ecx+esi*4]
        push eax
        call public_4c56b0
        add esp, 4
        inc esi
        jmp public_53e287
        public_53e2a9 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x53e270)
    }
}

#undef public_53e287
#undef public_53e2a9
