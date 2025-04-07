#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10005890);
CLANG_FORWARD_PROC_SYMBOL(public_100059e0);
CLANG_FORWARD_PROC_SYMBOL(public_10005a00);

#define public_100083ac _public_100083ac
#define public_100083bc _public_100083bc
#define public_100083bd _public_100083bd

PROC_DECLARE(0x10008330, internal_10008330, public_10008330);
extern "C" NAKED register_t __cdecl internal_10008330()
{
    __asm
    {
        sub esp, 0x38
        mov ecx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x3C]
        push edi
        mov edi, dword ptr ss : [esp+0x44]
        push 0x38
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_1000b068 @0x10008350*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_1000b068
        lea ecx, ss:[esp+0xC]
        push ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        call public_100059e0
        test eax, eax
        jne public_100083bd
        push esi
        push 4
        lea edx, ss:[esp+0xC]
        push edx
        call public_10005a00
        mov esi, eax
        cmp esi, 1
        je public_100083ac
        lea eax, ss:[esp+8]
        push eax
        call public_10005890
        test esi, esi
        mov eax, 0xFFFFFFFB
        je public_100083bc
        mov eax, esi
        pop esi
        pop edi
        add esp, 0x38
        ret 0x10
        public_100083ac : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+8]
        push edx
        mov dword ptr ds : [edi], ecx
        call public_10005890
        public_100083bc : nop
        pop esi
        public_100083bd : nop
        pop edi
        add esp, 0x38
        ret 0x10
        UNREACHABLE_TRAP(0x10008330)
    }
}

#undef public_100083ac
#undef public_100083bc
#undef public_100083bd
