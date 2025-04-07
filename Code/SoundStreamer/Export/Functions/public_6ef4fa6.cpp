#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4fa6);
CLANG_FORWARD_PROC_SYMBOL(public_6ef57ba);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5817);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8447);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8485);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8608);
CLANG_FORWARD_PROC_SYMBOL(public_6ef87b3);
CLANG_FORWARD_PROC_SYMBOL(public_6ef87d6);
CLANG_FORWARD_PROC_SYMBOL(public_6ef888f);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8adc);

#define public_6ef5025 _public_6ef5025
#define public_6ef5028 _public_6ef5028
#define public_6ef502b _public_6ef502b
#define public_6ef504e _public_6ef504e
#define public_6ef505a _public_6ef505a

PROC_DECLARE(0x6ef4fa6, internal_6ef4fa6, public_6ef4fa6);
extern "C" NAKED register_t __cdecl internal_6ef4fa6()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 1
        jne public_6ef502b
        call dword ptr ds : [public_6efc08c]
        push 0
        mov dword ptr ds : [public_6f010fc], eax
        call public_6ef57ba
        test eax, eax
        pop ecx
        je public_6ef505a
        mov eax, dword ptr ds : [public_6f010fc]
        xor ecx, ecx
        mov cl, byte ptr ds : [public_6f010fd]
        and eax, 0xFF
        shr dword ptr ds : [public_6f010fc], 0x10
        mov dword ptr ds : [public_6f01104], eax
        mov dword ptr ds : [public_6f01108], ecx
        shl eax, 8
        add eax, ecx
        mov dword ptr ds : [public_6f01100], eax
        call dword ptr ds : [public_6efc088]
        mov dword ptr ds : [public_6f02678], eax
        call public_6ef8adc
        mov dword ptr ds : [public_6f010b4], eax
        call public_6ef8608
        call public_6ef888f
        call public_6ef87d6
        call public_6ef8447
        inc dword ptr ds : [public_6f010b0]
        public_6ef5025 : nop
        push 1
        pop eax
        public_6ef5028 : nop
        ret 0xC
        public_6ef502b : nop
        xor eax, eax
        cmp dword ptr ss : [esp+8], eax
        jne public_6ef5025
        cmp dword ptr ds : [public_6f010b0], eax
        jle public_6ef505a
        dec dword ptr ds : [public_6f010b0]
        cmp dword ptr ds : [public_6f01134], eax
        jne public_6ef504e
        call public_6ef8485
        public_6ef504e : nop
        call public_6ef87b3
        call public_6ef5817
        jmp public_6ef5025
        public_6ef505a : nop
        xor eax, eax
        jmp public_6ef5028
        UNREACHABLE_TRAP(0x6ef4fa6)
    }
}

#undef public_6ef5025
#undef public_6ef5028
#undef public_6ef502b
#undef public_6ef504e
#undef public_6ef505a
