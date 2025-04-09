#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ea670);

#define public_4ea682 _public_4ea682
#define public_4ea6a6 _public_4ea6a6
#define public_4ea6ae _public_4ea6ae

PROC_DECLARE(0x4ea670, internal_4ea670, public_4ea670);
extern "C" NAKED register_t __cdecl internal_4ea670()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi+0x1C], eax
        je public_4ea6ae
        push edi
        mov dword ptr ds : [esi+0x1C], eax
        xor edi, edi
        public_4ea682 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_4ea6a6
        mov eax, dword ptr ds : [esi+0x14]
        sub eax, ecx
        sar eax, 3
        cmp edi, eax
        jae public_4ea6a6
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+edi*8]
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        inc edi
        jmp public_4ea682
        public_4ea6a6 : nop
        mov dword ptr ds : [esi+0x28], 0
        pop edi
        public_4ea6ae : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4ea670)
    }
}

#undef public_4ea682
#undef public_4ea6a6
#undef public_4ea6ae
