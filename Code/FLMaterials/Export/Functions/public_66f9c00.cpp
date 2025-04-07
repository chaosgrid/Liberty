#include "FLMaterials-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6700c98);

#define public_66f9c6e _public_66f9c6e
#define public_66f9c7f _public_66f9c7f
#define public_66f9cba _public_66f9cba

PROC_DECLARE(0x66f9c00, internal_66f9c00, public_66f9c00);
extern "C" NAKED register_t __cdecl internal_66f9c00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6700c98 @0x66f9c02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700c98
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push esi
        push edi
        mov dword ptr ss : [esp+8], 0
        mov esi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
/*FIXUP push offset public_6702458 @0x66f9c30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702458
        push eax
        mov dword ptr ss : [esp+0x28], 0
        call dword ptr ds : [ecx]
        test eax, eax
        jl public_66f9c7f
        mov eax, dword ptr ds : [esi+0x14]
        push eax
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [public_6701004]
        lea edi, ds:[esi+0x68]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edi]
        add esp, 4
        test eax, eax
        je public_66f9c6e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        public_66f9c6e : nop
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        push 0xFFFFFFFF
        call dword ptr ds : [edx+0x14]
        public_66f9c7f : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [eax+0x20]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x110]
        mov edx, dword ptr ds : [esi]
        push 0
        push esi
        mov edi, eax
        call dword ptr ds : [edx+0x24]
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        je public_66f9cba
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_66f9cba : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x66f9c00)
    }
}

#undef public_66f9c6e
#undef public_66f9c7f
#undef public_66f9cba
