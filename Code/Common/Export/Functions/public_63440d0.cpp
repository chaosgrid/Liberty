#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);
CLANG_FORWARD_PROC_SYMBOL(public_63440d0);

#define public_63440ea _public_63440ea

PROC_DECLARE(0x63440d0, internal_63440d0, public_63440d0);
extern "C" NAKED register_t __cdecl internal_63440d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        lea esi, ds:[eax+0x1F]
        mov ebx, 0x7FD8
        and esi, 0xFFFFFFE0
        cmp esi, ebx
        push edi
        mov edi, ecx
        jbe public_63440ea
        mov ebx, esi
        public_63440ea : nop
        lea ecx, ds:[ebx+0x28]
        push ecx
        call public_6343f70
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edi+4], eax
        add eax, 0x23
        and eax, 0xFFFFFFE0
        add esp, 4
        lea ecx, ds:[eax+esi]
        lea edx, ds:[eax+ebx]
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], edx
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x63440d0)
    }
}

#undef public_63440ea
