#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5763b0);
CLANG_FORWARD_PROC_SYMBOL(public_576410);

#define public_5763dd _public_5763dd
#define public_5763e8 _public_5763e8
#define public_5763f3 _public_5763f3
#define public_576402 _public_576402

PROC_DECLARE(0x5763b0, internal_5763b0, public_5763b0);
extern "C" NAKED register_t __cdecl internal_5763b0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        test al, al
        jne public_576402
        push esi
        push edi
        xor eax, eax
        mov ecx, 7
        mov edi, offset public_67c278
        rep stosd
        mov edi, dword ptr ds : [public_5c7280]
        push 0x10
        xor esi, esi
        call edi
        test ah, ah
        jns public_5763dd
        mov esi, 1
        public_5763dd : nop
        push 0x11
        call edi
        test ah, ah
        jns public_5763e8
        or esi, 4
        public_5763e8 : nop
        push 0x12
        call edi
        test ah, ah
        jns public_5763f3
        or esi, 0x10
        public_5763f3 : nop
        pop edi
        mov dword ptr ds : [public_67c280], esi
        mov byte ptr ds : [public_67c290], 1
        pop esi
        public_576402 : nop
        mov dword ptr ss : [esp+8], 0
        jmp public_576410
        UNREACHABLE_TRAP(0x5763b0)
    }
}

#undef public_5763dd
#undef public_5763e8
#undef public_5763f3
#undef public_576402
