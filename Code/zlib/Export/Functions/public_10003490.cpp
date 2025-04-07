#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001a80);
CLANG_FORWARD_PROC_SYMBOL(public_10001d60);
CLANG_FORWARD_PROC_SYMBOL(public_10003490);
CLANG_FORWARD_PROC_SYMBOL(public_1000a400);

#define public_100034b2 _public_100034b2
#define public_100034dd _public_100034dd
#define public_100034f5 _public_100034f5
#define public_100034fc _public_100034fc
#define public_10003517 _public_10003517

PROC_DECLARE(0x10003490, internal_10003490, public_10003490);
extern "C" NAKED register_t __cdecl internal_10003490()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        je public_10003517
        cmp byte ptr ds : [esi+0x5C], 0x77
        jne public_10003517
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        test edi, edi
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], edi
        je public_100034fc
        public_100034b2 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_100034dd
        mov ecx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [esi+0x48]
        push ecx
        push 0x4000
        push 1
        push eax
        mov dword ptr ds : [esi+0xC], eax
        call public_1000a400
        add esp, 0x10
        cmp eax, 0x4000
        jne public_100034f5
        mov dword ptr ds : [esi+0x10], eax
        public_100034dd : nop
        push 0
        push esi
        call public_10001d60
        test eax, eax
        mov dword ptr ds : [esi+0x38], eax
        jne public_100034fc
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_100034b2
        jmp public_100034fc
        public_100034f5 : nop
        mov dword ptr ds : [esi+0x38], 0xFFFFFFFF
        public_100034fc : nop
        mov edx, dword ptr ds : [esi+0x4C]
        push edi
        push ebp
        push edx
        call public_10001a80
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x4C], eax
        mov eax, edi
        pop edi
        pop ebp
        sub eax, ecx
        pop esi
        ret 0xC
        public_10003517 : nop
        mov eax, 0xFFFFFFFE
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x10003490)
    }
}

#undef public_100034b2
#undef public_100034dd
#undef public_100034f5
#undef public_100034fc
#undef public_10003517
