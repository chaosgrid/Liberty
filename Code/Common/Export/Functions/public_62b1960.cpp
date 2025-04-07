#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ff30);
CLANG_FORWARD_PROC_SYMBOL(public_62c1220);
CLANG_FORWARD_PROC_SYMBOL(public_62fd560);
CLANG_FORWARD_JUMP_SYMBOL(public_63945fb);

#define public_62b19bf _public_62b19bf
#define public_62b19c1 _public_62b19c1
#define public_62b19d2 _public_62b19d2
#define public_62b19d4 _public_62b19d4

PROC_DECLARE(0x62b1960, internal_62b1960, public_62b1960);
extern "C" NAKED register_t __cdecl internal_62b1960()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63945fb @0x62b1962*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63945fb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0xFC
        mov byte ptr ds : [esi+0x2BC], 1
        call public_62fd560
        add esp, 4
        mov dword ptr ss : [esp+4], eax
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_62b19bf
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push edx
        push ecx
        mov ecx, eax
        call public_62c1220
        jmp public_62b19c1
        public_62b19bf : nop
        xor eax, eax
        public_62b19c1 : nop
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        je public_62b19d2
        add eax, 0x10
        jmp public_62b19d4
        public_62b19d2 : nop
        xor eax, eax
        public_62b19d4 : nop
        push eax
        lea ecx, ds:[esi+0x2B0]
        call public_629ff30
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0x14
        UNREACHABLE_TRAP(0x62b1960)
    }
}

#undef public_62b19bf
#undef public_62b19c1
#undef public_62b19d2
#undef public_62b19d4
