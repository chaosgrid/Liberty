#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612b20);
CLANG_FORWARD_PROC_SYMBOL(public_66134d0);
CLANG_FORWARD_PROC_SYMBOL(public_6614f70);
CLANG_FORWARD_PROC_SYMBOL(public_6619c40);

#define public_661696e _public_661696e
#define public_6616979 _public_6616979
#define public_661698a _public_661698a
#define public_6616996 _public_6616996
#define public_661699d _public_661699d
#define public_66169a6 _public_66169a6

PROC_DECLARE(0x66168f0, internal_66168f0, public_66168f0);
extern "C" NAKED register_t __cdecl internal_66168f0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        xor bl, bl
        push ebp
        cmp eax, 0xFFFFFFFF
        push esi
        je public_661699d
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        lea ecx, ss:[esp+0x14]
        push eax
        push ecx
        lea ecx, ds:[esi+0x20]
        call public_66134d0
        mov ecx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        je public_661699d
        mov ebp, dword ptr ds : [eax+0xC]
        lea ecx, ds:[esi-8]
        mov eax, dword ptr ss : [ebp+0x18]
        push eax
        call public_6614f70
        mov esi, eax
        test esi, esi
        je public_661699d
        push edi
        lea edi, ss:[ebp+8]
        lea edx, ss:[esp+0x1C]
        push edi
        push edx
        mov ecx, esi
        call public_6619c40
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ecx
        je public_661696e
        add eax, 0xC
        mov ecx, edi
        push eax
        call public_6612b20
        test al, al
        jne public_661696e
        lea eax, ss:[esp+0x1C]
        jmp public_6616979
        public_661696e : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        public_6616979 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        pop edi
        je public_661699d
        mov eax, dword ptr ds : [eax+0x1C]
        test eax, eax
        je public_661699d
        public_661698a : nop
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_6616996
        cmp dword ptr ds : [eax+0x14], ebp
        je public_66169a6
        public_6616996 : nop
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        jne public_661698a
        public_661699d : nop
        pop esi
        mov al, bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_66169a6 : nop
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x66168f0)
    }
}

#undef public_661696e
#undef public_6616979
#undef public_661698a
#undef public_6616996
#undef public_661699d
#undef public_66169a6
