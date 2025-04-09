#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44d9b0);
CLANG_FORWARD_PROC_SYMBOL(public_4507a0);
CLANG_FORWARD_PROC_SYMBOL(public_450830);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9d2b);

#define public_44da03 _public_44da03
#define public_44da05 _public_44da05
#define public_44da26 _public_44da26

PROC_DECLARE(0x44d9b0, internal_44d9b0, public_44d9b0);
extern "C" NAKED register_t __cdecl internal_44d9b0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b9d2b @0x44d9b8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9d2b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, ecx
        mov cl, byte ptr ds : [edi+4]
        xor eax, eax
        and cl, 1
        mov byte ptr ss : [esp+0x1C], cl
        jne public_44da26
        push 0x70
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_44da03
        push edi
        push esi
        push esi
        mov ecx, eax
        call public_4507a0
        mov edi, eax
        jmp public_44da05
        public_44da03 : nop
        xor edi, edi
        public_44da05 : nop
        mov edx, dword ptr ds : [esi+0x58]
        mov eax, dword ptr ds : [esi+0x30]
        mov ecx, dword ptr ds : [eax+0x500]
        push 1
        push edx
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_450830
        mov eax, edi
        public_44da26 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x44d9b0)
    }
}

#undef public_44da03
#undef public_44da05
#undef public_44da26
