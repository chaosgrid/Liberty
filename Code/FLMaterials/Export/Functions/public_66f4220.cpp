#include "FLMaterials-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6700b78);

#define public_66f4269 _public_66f4269
#define public_66f42a2 _public_66f42a2
#define public_66f42ac _public_66f42ac
#define public_66f42c4 _public_66f42c4
#define public_66f42c6 _public_66f42c6

PROC_DECLARE(0x66f4220, internal_66f4220, public_66f4220);
extern "C" NAKED register_t __cdecl internal_66f4220()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6700b78 @0x66f4228*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700b78
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        xor eax, eax
        test esi, esi
        push edi
        je public_66f42c6
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        je public_66f42c6
        mov dword ptr ss : [esp+0x1C], eax
        mov edi, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dl, byte ptr ds : [eax+0x64]
        test dl, dl
        je public_66f4269
        or edi, 0x400
        public_66f4269 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x1C]
        push eax
/*FIXUP push offset public_67013f0 @0x66f4270*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013f0
        push ecx
        call dword ptr ds : [edx]
        test eax, eax
        mov edx, dword ptr ss : [esp+0x30]
        push edi
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        push esi
        jge public_66f42a2
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x28]
        jmp public_66f42ac
        public_66f42a2 : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        public_66f42ac : nop
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        je public_66f42c4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_66f42c4 : nop
        mov eax, esi
        public_66f42c6 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 0x20
        UNREACHABLE_TRAP(0x66f4220)
    }
}

#undef public_66f4269
#undef public_66f42a2
#undef public_66f42ac
#undef public_66f42c4
#undef public_66f42c6
