#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c1a10);

#define public_4c2c9a _public_4c2c9a
#define public_4c2cc4 _public_4c2cc4
#define public_4c2cc8 _public_4c2cc8
#define public_4c2cec _public_4c2cec
#define public_4c2d15 _public_4c2d15
#define public_4c2d47 _public_4c2d47

PROC_DECLARE(0x4c2c70, internal_4c2c70, public_4c2c70);
extern "C" NAKED register_t __cdecl internal_4c2c70()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x390]
        xor bl, bl
        cmp eax, 3
        jne public_4c2d47
        mov eax, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [eax]
        mov al, cl
        and al, 1
        jne public_4c2c9a
        test cl, 2
        je public_4c2d47
        public_4c2c9a : nop
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, 8
        jne public_4c2cc8
        test al, al
        je public_4c2cc4
        mov ecx, dword ptr ds : [esi+0x364]
        mov eax, 0x66666667
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov dword ptr ds : [esi+0x364], edx
        public_4c2cc4 : nop
        mov bl, 1
        jmp public_4c2d15
        public_4c2cc8 : nop
        cmp ecx, 0x30
        jl public_4c2d15
        cmp ecx, 0x39
        jg public_4c2d15
        test al, al
        mov bl, 1
        je public_4c2d15
        mov al, byte ptr ds : [esi+0x360]
        test al, al
        jne public_4c2cec
        mov dword ptr ds : [esi+0x364], 0
        public_4c2cec : nop
        mov eax, dword ptr ds : [esi+0x364]
        lea edx, ds:[eax+eax*4]
        lea eax, ds:[ecx+edx*2-0x30]
        mov ecx, dword ptr ds : [esi+0x34C]
        cmp eax, dword ptr ds : [ecx+0x658]
        jl public_4c2d15
        cmp eax, dword ptr ds : [ecx+0x65C]
        jg public_4c2d15
        mov dword ptr ds : [esi+0x364], eax
        public_4c2d15 : nop
        test bl, bl
        mov byte ptr ds : [esi+0x360], 1
        je public_4c2d47
        mov edx, dword ptr ds : [esi+0x364]
        mov ecx, dword ptr ds : [esi+0x34C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        push 0x38
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [esi+0x364]
        push eax
        mov ecx, esi
        call public_4c1a10
        public_4c2d47 : nop
        pop esi
        mov al, bl
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x4c2c70)
    }
}

#undef public_4c2c9a
#undef public_4c2cc4
#undef public_4c2cc8
#undef public_4c2cec
#undef public_4c2d15
#undef public_4c2d47
