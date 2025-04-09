#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57b1b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb8cb);

#define public_46c173 _public_46c173
#define public_46c175 _public_46c175
#define public_46c1b5 _public_46c1b5

PROC_DECLARE(0x46c110, internal_46c110, public_46c110);
extern "C" NAKED register_t __cdecl internal_46c110()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bb8cb @0x46c112*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb8cb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push 0x4A0
        mov ebx, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_46c173
        mov ecx, esi
        call public_57b1b0
        mov dword ptr ds : [esi], offset public_5cffc4
        mov dword ptr ds : [esi+0x7C], offset public_5cffb8
        mov dword ptr ds : [esi+0x49C], 0
        mov dword ptr ds : [esi+0x498], 0
        jmp public_46c175
        public_46c173 : nop
        xor esi, esi
        public_46c175 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi]
        push ecx
        add ebx, 0xC
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], ebx
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_46c1b5
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_46c1b5 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x46c110)
    }
}

#undef public_46c173
#undef public_46c175
#undef public_46c1b5
