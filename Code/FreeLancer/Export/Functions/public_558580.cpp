#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_558000);
CLANG_FORWARD_PROC_SYMBOL(public_558580);

#define public_558592 _public_558592
#define public_5585a9 _public_5585a9
#define public_5585b0 _public_5585b0
#define public_5585cb _public_5585cb

PROC_DECLARE(0x558580, internal_558580, public_558580);
extern "C" NAKED register_t __cdecl internal_558580()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ecx]
        sub esp, 0x80
        xor edx, edx
        cmp eax, ecx
        je public_5585cb
        push esi
        public_558592 : nop
        cmp edx, 0x20
        jge public_5585a9
        mov esi, dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+edx*4+4], esi
        inc edx
        cmp eax, ecx
        jne public_558592
        jmp public_5585b0
        public_5585a9 : nop
        mov byte ptr ds : [public_6799c8], 1
        public_5585b0 : nop
        test edx, edx
        pop esi
        jle public_5585cb
        mov eax, dword ptr ss : [esp+0x84]
        push eax
        push edx
        lea ecx, ss:[esp+8]
        push ecx
        call public_558000
        add esp, 0xC
        public_5585cb : nop
        add esp, 0x80
        ret 4
        UNREACHABLE_TRAP(0x558580)
    }
}

#undef public_558592
#undef public_5585a9
#undef public_5585b0
#undef public_5585cb
