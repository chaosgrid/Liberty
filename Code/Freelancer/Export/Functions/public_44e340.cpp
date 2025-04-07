#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44e340);
CLANG_FORWARD_PROC_SYMBOL(public_453d70);
CLANG_FORWARD_PROC_SYMBOL(public_453e60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9d2b);

#define public_44e396 _public_44e396
#define public_44e398 _public_44e398
#define public_44e3ad _public_44e3ad

PROC_DECLARE(0x44e340, internal_44e340, public_44e340);
extern "C" NAKED register_t __cdecl internal_44e340()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b9d2b @0x44e348*/
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
        jne public_44e3ad
        push 0xAC
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_44e396
        push edi
        push esi
        push esi
        mov ecx, eax
        call public_453d70
        mov esi, eax
        jmp public_44e398
        public_44e396 : nop
        xor esi, esi
        public_44e398 : nop
        mov edx, dword ptr ds : [edi+0x3C]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_453e60
        mov eax, esi
        public_44e3ad : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x44e340)
    }
}

#undef public_44e396
#undef public_44e398
#undef public_44e3ad
