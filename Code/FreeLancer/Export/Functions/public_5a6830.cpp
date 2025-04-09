#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a6830);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c5274);

#define public_5a6880 _public_5a6880
#define public_5a688b _public_5a688b

PROC_DECLARE(0x5a6830, internal_5a6830, public_5a6830);
extern "C" NAKED register_t __cdecl internal_5a6830()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c5274 @0x5a6832*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c5274
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov ebp, dword ptr ds : [public_5c6098]
        lea ecx, ds:[edi+0x28]
        mov dword ptr ss : [esp+0x1C], 1
        call ebp
        lea ecx, ds:[edi+0x10]
        mov byte ptr ss : [esp+0x1C], 0
        call ebp
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        je public_5a688b
        nop 
        public_5a6880 : nop
        mov ecx, esi
        call ebp
        add esi, 0x1C
        cmp esi, ebx
        jne public_5a6880
        public_5a688b : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5a6830)
    }
}

#undef public_5a6880
#undef public_5a688b
