#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b76be0);
CLANG_FORWARD_PROC_SYMBOL(public_6b782a0);

#define public_6b76bf1 _public_6b76bf1
#define public_6b76c18 _public_6b76c18

PROC_DECLARE(0x6b76be0, internal_6b76be0, public_6b76be0);
extern "C" NAKED register_t __cdecl internal_6b76be0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        cmp esi, ebx
        mov edi, ecx
        je public_6b76c18
        public_6b76bf1 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        call public_6b782a0
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_6b76bf1
        public_6b76c18 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b76be0)
    }
}

#undef public_6b76bf1
#undef public_6b76c18
