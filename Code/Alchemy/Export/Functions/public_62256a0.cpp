#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62256a0);
CLANG_FORWARD_PROC_SYMBOL(public_62258d0);
CLANG_FORWARD_PROC_SYMBOL(public_62258f0);
CLANG_FORWARD_JUMP_SYMBOL(public_6248ec0);

#define public_62256f3 _public_62256f3
#define public_6225715 _public_6225715

PROC_DECLARE(0x62256a0, internal_62256a0, public_62256a0);
extern "C" NAKED register_t __cdecl internal_62256a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248ec0 @0x62256a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248ec0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        lea ecx, ss:[esp+4]
        lea esi, ds:[eax+0xB4]
        push ecx
        mov ecx, esi
        call public_62258f0
        lea edx, ss:[esp+0x18]
        mov ecx, esi
        push edx
        mov dword ptr ss : [esp+0x14], 0
        call public_62258d0
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+4]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x10], 1
        pop esi
        je public_6225715
        public_62256f3 : nop
        mov eax, dword ptr ds : [eax+0x30]
        mov edx, dword ptr ds : [public_6257908]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_62256f3
        public_6225715 : nop
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62256a0)
    }
}

#undef public_62256f3
#undef public_6225715
