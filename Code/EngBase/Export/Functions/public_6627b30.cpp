#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6627b30);

#define public_6627bcf _public_6627bcf
#define public_6627bda _public_6627bda
#define public_6627bf2 _public_6627bf2

PROC_DECLARE(0x6627b30, internal_6627b30, public_6627b30);
extern "C" NAKED register_t __cdecl internal_6627b30()
{
    __asm
    {
        sub esp, 0x58
        push ebx
        mov ebx, dword ptr ss : [esp+0x60]
        push ebp
        push esi
        push edi
        mov ecx, 0xB
        xor eax, eax
        lea edi, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x38], offset public_662a030
        lea edx, ss:[esp+0x34]
        rep stosd
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ds : [ebx]
        mov edi, 1
        push edx
        push ebx
        mov dword ptr ss : [esp+0x4C], 0x80000000
        mov dword ptr ss : [esp+0x50], edi
        mov dword ptr ss : [esp+0x58], 3
        mov dword ptr ss : [esp+0x5C], 0x8000080
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x3C], 0x34
        mov dword ptr ss : [esp+0x6C], 0xFFFFFFFF
        xor esi, esi
        call dword ptr ds : [ecx+0x7C]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_6627bda
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x6C]
        push esi
        push ecx
        lea edx, ss:[esp+0x18]
        push 0x24
        push edx
        push ebp
        push ebx
        call dword ptr ds : [eax+0x14]
        test eax, eax
        je public_6627bf2
        cmp dword ptr ss : [esp+0x6C], 0x24
        jne public_6627bf2
        mov dword ptr ss : [esp+0x70], edi
        mov edi, dword ptr ss : [esp+0x74]
        mov ecx, 9
        lea esi, ss:[esp+0x10]
        rep movsd
        public_6627bcf : nop
        mov eax, dword ptr ds : [ebx]
        push ebp
        push ebx
        call dword ptr ds : [eax+0x10]
        mov esi, dword ptr ss : [esp+0x70]
        public_6627bda : nop
        mov eax, esi
        pop edi
        neg eax
        sbb eax, eax
        pop esi
        and eax, 0x7FFFBFFB
        pop ebp
        add eax, 0x80004005
        pop ebx
        add esp, 0x58
        ret 
        public_6627bf2 : nop
        mov dword ptr ss : [esp+0x70], esi
        jmp public_6627bcf
        UNREACHABLE_TRAP(0x6627b30)
    }
}

#undef public_6627bcf
#undef public_6627bda
#undef public_6627bf2
