#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001840);
CLANG_FORWARD_PROC_SYMBOL(public_10001d60);
CLANG_FORWARD_PROC_SYMBOL(public_10001ff0);
CLANG_FORWARD_PROC_SYMBOL(public_10003000);

#define public_100018c9 _public_100018c9
#define public_100018d9 _public_100018d9
#define public_100018da _public_100018da

PROC_DECLARE(0x10001840, internal_10001840, public_10001840);
extern "C" NAKED register_t __cdecl internal_10001840()
{
    __asm
    {
        sub esp, 0x38
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x44]
        push ebx
        mov ebx, dword ptr ss : [esp+0x44]
        push 0x38
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ss : [esp+0x54]
/*FIXUP push offset public_1000b068 @0x1000185e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_1000b068
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [ebx]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        call public_10003000
        test eax, eax
        jne public_100018da
        push esi
        push 4
        lea eax, ss:[esp+0xC]
        push eax
        call public_10001d60
        mov esi, eax
        cmp esi, 1
        je public_100018c9
        lea ecx, ss:[esp+8]
        push ecx
        call public_10001ff0
        test esi, esi
        mov eax, 0xFFFFFFFB
        je public_100018d9
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0x38
        ret 0x14
        public_100018c9 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+8]
        push eax
        mov dword ptr ds : [ebx], edx
        call public_10001ff0
        public_100018d9 : nop
        pop esi
        public_100018da : nop
        pop ebx
        add esp, 0x38
        ret 0x14
        UNREACHABLE_TRAP(0x10001840)
    }
}

#undef public_100018c9
#undef public_100018d9
#undef public_100018da
