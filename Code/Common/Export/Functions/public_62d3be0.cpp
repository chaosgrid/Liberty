#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62de160);

#define public_62d3c22 _public_62d3c22
#define public_62d3c41 _public_62d3c41
#define public_62d3c4f _public_62d3c4f

PROC_DECLARE(0x62d3be0, internal_62d3be0, public_62d3be0);
extern "C" NAKED register_t __cdecl internal_62d3be0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC0]
        cmp eax, 0xFFFFFFFF
        push edi
        je public_62d3c4f
        mov edi, dword ptr ds : [esi+eax*4+0x174]
        test edi, edi
        je public_62d3c4f
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_62d3c22
        call public_62de160
        test al, al
        je public_62d3c22
        mov ecx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [esi+0xD8], 1
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x38]
        pop edi
        pop esi
        ret 4
        public_62d3c22 : nop
        mov esi, dword ptr ds : [esi+0xF0]
        test esi, esi
        je public_62d3c41
        lea eax, ds:[esi-8]
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        push 0
        push 4
        call dword ptr ds : [edx+0x6C]
        pop edi
        pop esi
        ret 4
        public_62d3c41 : nop
        xor eax, eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        push eax
        push 4
        call dword ptr ds : [edx+0x6C]
        public_62d3c4f : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62d3be0)
    }
}

#undef public_62d3c22
#undef public_62d3c41
#undef public_62d3c4f
