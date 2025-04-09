#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a3210);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c511b);

#define public_5a4fbb _public_5a4fbb
#define public_5a4fbd _public_5a4fbd
#define public_5a4ffd _public_5a4ffd

PROC_DECLARE(0x5a4f40, internal_5a4f40, public_5a4f40);
extern "C" NAKED register_t __cdecl internal_5a4f40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c511b @0x5a4f42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c511b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push 0x398
        mov ebx, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_5a4fbb
        mov ecx, esi
        call public_5a3210
        mov al, byte ptr ds : [esi+0x388]
        and al, 0xFE
        or al, 4
        mov byte ptr ds : [esi+0x388], al
        lea eax, ds:[esi+0x390]
        mov dword ptr ds : [esi+0x38C], 0
        mov dword ptr ds : [esi+0x394], eax
        mov dword ptr ds : [esi], offset public_5e622c
        mov dword ptr ds : [esi+0x7C], offset public_5e6220
        mov dword ptr ds : [eax], 0
        jmp public_5a4fbd
        public_5a4fbb : nop
        xor esi, esi
        public_5a4fbd : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        add ebx, 0xC
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], ebx
        call dword ptr ds : [edx+0x24]
        test al, al
        jne public_5a4ffd
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_5a4ffd : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x5a4f40)
    }
}

#undef public_5a4fbb
#undef public_5a4fbd
#undef public_5a4ffd
