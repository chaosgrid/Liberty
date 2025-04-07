#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220e90);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6248b63);

#define public_6220080 _public_6220080
#define public_6220082 _public_6220082
#define public_62200dd _public_62200dd
#define public_62200f3 _public_62200f3
#define public_6220108 _public_6220108
#define public_622011a _public_622011a

PROC_DECLARE(0x6220020, internal_6220020, public_6220020);
extern "C" NAKED register_t __cdecl internal_6220020()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248b63 @0x6220022*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248b63
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push esi
        push 0x24
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        test esi, esi
        mov dword ptr ss : [esp+0x2C], 0
        mov ebx, 1
        je public_6220080
        lea eax, ss:[esp+0xB]
        lea ecx, ds:[esi+8]
        push eax
        mov dword ptr ds : [esi], offset public_624d888
        call public_6220e90
        mov dword ptr ds : [esi+0x1C], 0
        mov dword ptr ds : [esi], offset public_624d838
        mov dword ptr ds : [esi+0x20], ebx
        jmp public_6220082
        public_6220080 : nop
        xor esi, esi
        public_6220082 : nop
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ss : [esp+0x34]
        lea edx, ss:[esp+0xC]
        push edx
        mov edx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [ecx+0x2C]
        test eax, eax
        mov eax, dword ptr ss : [esp+0xC]
        jne public_6220108
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x14]
        push eax
        push esi
        mov dword ptr ss : [esp+0x1C], 8
        mov dword ptr ss : [esp+0x20], offset public_6256054
        mov dword ptr ss : [esp+0x28], ecx
        call dword ptr ds : [edx+0x48]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x40]
        test eax, eax
        je public_62200dd
        mov dword ptr ds : [eax], esi
        public_62200dd : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        test eax, eax
        je public_62200f3
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_62200f3 : nop
        mov eax, ebx
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 0x10
        public_6220108 : nop
        test eax, eax
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_622011a
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_622011a : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop esi
        mov eax, 0xFFFFFFF8
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 0x10
        UNREACHABLE_TRAP(0x6220020)
    }
}

#undef public_6220080
#undef public_6220082
#undef public_62200dd
#undef public_62200f3
#undef public_6220108
#undef public_622011a
