#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fff80);
CLANG_FORWARD_JUMP_SYMBOL(public_6700e98);

#define public_66fffc0 _public_66fffc0
#define public_670001e _public_670001e
#define public_6700031 _public_6700031
#define public_6700049 _public_6700049
#define public_6700061 _public_6700061

PROC_DECLARE(0x66fff80, internal_66fff80, public_66fff80);
extern "C" NAKED register_t __cdecl internal_66fff80()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6700e98 @0x66fff88*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700e98
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x70]
        test eax, eax
        push edi
        je public_66fffc0
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        push 4
        push eax
        call dword ptr ds : [ecx+0x64]
        test eax, eax
        jl public_66fffc0
        cmp dword ptr ss : [esp+0xC], 1
        sbb al, al
        inc al
        mov byte ptr ds : [esi+0x6C], al
        public_66fffc0 : nop
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
/*FIXUP push offset public_6702458 @0x66fffd2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702458
        push eax
        mov dword ptr ss : [esp+0x2C], 0
        call dword ptr ds : [ecx]
        test eax, eax
        jl public_6700049
        mov al, byte ptr ds : [esi+0x6C]
        test al, al
        je public_6700031
        mov eax, dword ptr ds : [esi+0x68]
        test eax, eax
        lea edi, ds:[esi+0x68]
        jne public_6700049
        mov esi, dword ptr ds : [esi+0x14]
        push esi
        mov dword ptr ss : [esp+0x14], esi
        call dword ptr ds : [public_6701004]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [edi]
        add esp, 4
        test eax, eax
        je public_670001e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        public_670001e : nop
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        push edi
        lea eax, ss:[esp+0x14]
        push eax
        push 0xFFFFFFFF
        call dword ptr ds : [edx+0x14]
        jmp public_6700049
        public_6700031 : nop
        mov eax, dword ptr ds : [esi+0x68]
        test eax, eax
        je public_6700049
        test eax, eax
        je public_6700049
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x68], 0
        public_6700049 : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        pop edi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        pop esi
        je public_6700061
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6700061 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x66fff80)
    }
}

#undef public_66fffc0
#undef public_670001e
#undef public_6700031
#undef public_6700049
#undef public_6700061
