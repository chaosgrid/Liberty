#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10008760);
CLANG_FORWARD_PROC_SYMBOL(public_10008b50);

#define public_10008b62 _public_10008b62
#define public_10008b74 _public_10008b74
#define public_10008b7d _public_10008b7d

PROC_DECLARE(0x10008b50, internal_10008b50, public_10008b50);
extern "C" NAKED register_t __cdecl internal_10008b50()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jne public_10008b62
        mov eax, 0xFFFFFF9A
        pop esi
        ret 4
        public_10008b62 : nop
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_10008b74
        mov eax, dword ptr ds : [esi+0x30]
        mov ecx, dword ptr ds : [esi+0x24]
        inc eax
        cmp eax, ecx
        jne public_10008b7d
        public_10008b74 : nop
        mov eax, 0xFFFFFF9C
        pop esi
        ret 4
        public_10008b7d : nop
        mov edx, dword ptr ds : [esi+0x6C]
        mov ecx, dword ptr ds : [esi+0x70]
        push 0
        add ecx, edx
        mov edx, dword ptr ds : [esi+0x68]
        push 0
        push 0
        lea ecx, ds:[ecx+edx+0x2E]
        mov edx, dword ptr ds : [esi+0x34]
        push 0
        add edx, ecx
        push 0
        mov dword ptr ds : [esi+0x34], edx
        mov dword ptr ds : [esi+0x30], eax
        push 0
        lea edx, ds:[esi+0x98]
        push edx
        lea eax, ds:[esi+0x48]
        push eax
        mov eax, esi
        call public_10008760
        xor ecx, ecx
        add esp, 0x20
        test eax, eax
        sete cl
        mov dword ptr ds : [esi+0x38], ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x10008b50)
    }
}

#undef public_10008b62
#undef public_10008b74
#undef public_10008b7d
