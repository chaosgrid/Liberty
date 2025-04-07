#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10006920);
CLANG_FORWARD_PROC_SYMBOL(public_10008410);
CLANG_FORWARD_PROC_SYMBOL(public_10008470);
CLANG_FORWARD_PROC_SYMBOL(public_100085a0);
CLANG_FORWARD_PROC_SYMBOL(public_10008b00);
CLANG_FORWARD_PROC_SYMBOL(public_100092c0);
CLANG_FORWARD_PROC_SYMBOL(public_1000a46a);

#define public_100092e5 _public_100092e5
#define public_100092f0 _public_100092f0
#define public_10009317 _public_10009317
#define public_1000932e _public_1000932e
#define public_10009346 _public_10009346
#define public_10009362 _public_10009362
#define public_1000937e _public_1000937e
#define public_1000939a _public_1000939a
#define public_100093b6 _public_100093b6
#define public_100093d2 _public_100093d2
#define public_100093ec _public_100093ec
#define public_100093f1 _public_100093f1
#define public_1000940d _public_1000940d
#define public_10009429 _public_10009429
#define public_10009445 _public_10009445
#define public_10009458 _public_10009458
#define public_10009475 _public_10009475

PROC_DECLARE(0x100092c0, internal_100092c0, public_100092c0);
extern "C" NAKED register_t __cdecl internal_100092c0()
{
    __asm
    {
        sub esp, 0xAC
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xBC]
        xor ebp, ebp
        test esi, esi
        push edi
        jne public_100092e5
        lea eax, ss:[esp+0x18]
        push eax
        call public_10006920
        add esp, 4
        jmp public_100092f0
        public_100092e5 : nop
        mov ecx, 8
        lea edi, ss:[esp+0x18]
        rep movsd
        public_100092f0 : nop
        mov ecx, dword ptr ss : [esp+0xBC]
        mov edx, dword ptr ss : [esp+0x34]
        push 5
        push ecx
        push edx
        call dword ptr ss : [esp+0x24]
        test eax, eax
        mov dword ptr ss : [esp+0x38], eax
        jne public_10009317
        pop edi
        pop esi
        pop ebp
        add esp, 0xAC
        ret 8
        public_10009317 : nop
        push ebx
        push eax
        lea ebx, ss:[esp+0x20]
        call public_100085a0
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_1000932e
        or ebp, 0xFFFFFFFF
        public_1000932e : nop
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x38]
        push 0
        push esi
        push eax
        push ecx
        call dword ptr ss : [esp+0x3C]
        test eax, eax
        je public_10009346
        or ebp, 0xFFFFFFFF
        public_10009346 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ss:[esp+0x20]
        call public_10008470
        add esp, 4
        test eax, eax
        je public_10009362
        or ebp, 0xFFFFFFFF
        public_10009362 : nop
        lea eax, ss:[esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x40]
        lea ecx, ss:[esp+0x20]
        call public_10008410
        add esp, 4
        test eax, eax
        je public_1000937e
        or ebp, 0xFFFFFFFF
        public_1000937e : nop
        mov eax, dword ptr ss : [esp+0x3C]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_10008410
        add esp, 4
        test eax, eax
        je public_1000939a
        or ebp, 0xFFFFFFFF
        public_1000939a : nop
        mov eax, dword ptr ss : [esp+0x3C]
        lea edx, ss:[esp+0x40]
        push edx
        lea ecx, ss:[esp+0x20]
        call public_10008410
        add esp, 4
        test eax, eax
        je public_100093b6
        or ebp, 0xFFFFFFFF
        public_100093b6 : nop
        lea eax, ss:[esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x40]
        lea ecx, ss:[esp+0x20]
        call public_10008410
        add esp, 4
        test eax, eax
        je public_100093d2
        or ebp, 0xFFFFFFFF
        public_100093d2 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ss : [esp+0x40]
        jne public_100093ec
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        jne public_100093ec
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_100093f1
        public_100093ec : nop
        mov ebp, 0xFFFFFF99
        public_100093f1 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        lea edx, ss:[esp+0x5C]
        push edx
        lea ecx, ss:[esp+0x20]
        call public_10008470
        add esp, 4
        test eax, eax
        je public_1000940d
        or ebp, 0xFFFFFFFF
        public_1000940d : nop
        lea eax, ss:[esp+0x60]
        push eax
        mov eax, dword ptr ss : [esp+0x40]
        lea ecx, ss:[esp+0x20]
        call public_10008470
        add esp, 4
        test eax, eax
        je public_10009429
        or ebp, 0xFFFFFFFF
        public_10009429 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        lea ecx, ss:[esp+0x44]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_10008410
        add esp, 4
        test eax, eax
        je public_10009445
        or ebp, 0xFFFFFFFF
        public_10009445 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x60]
        lea edx, ds:[eax+ecx]
        cmp esi, edx
        jb public_10009458
        test ebp, ebp
        je public_10009475
        public_10009458 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x38]
        push eax
        push ecx
        call dword ptr ss : [esp+0x38]
        pop ebx
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0xAC
        ret 8
        public_10009475 : nop
        mov edx, esi
        sub edx, eax
        sub edx, ecx
        push 0xA0
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0x5C], esi
        mov dword ptr ss : [esp+0xBC], 0
        call public_1000a46a
        mov ebx, eax
        add esp, 4
        mov ecx, 0x28
        lea esi, ss:[esp+0x1C]
        mov edi, ebx
        push ebx
        rep movsd
        call public_10008b00
        mov eax, ebx
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 0xAC
        ret 8
        UNREACHABLE_TRAP(0x100092c0)
    }
}

#undef public_100092e5
#undef public_100092f0
#undef public_10009317
#undef public_1000932e
#undef public_10009346
#undef public_10009362
#undef public_1000937e
#undef public_1000939a
#undef public_100093b6
#undef public_100093d2
#undef public_100093ec
#undef public_100093f1
#undef public_1000940d
#undef public_10009429
#undef public_10009445
#undef public_10009458
#undef public_10009475
