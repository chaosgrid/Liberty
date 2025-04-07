#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344260);

#define public_634427c _public_634427c
#define public_6344288 _public_6344288
#define public_6344299 _public_6344299
#define public_63442ae _public_63442ae

PROC_DECLARE(0x6344260, internal_6344260, public_6344260);
extern "C" NAKED register_t __cdecl internal_6344260()
{
    __asm
    {
        push esi
        xor esi, esi
        mov si, word ptr ds : [ecx+0xA]
        push edi
        mov eax, esi
        and eax, 0xFFFF
        dec eax
        js public_6344288
        mov edx, dword ptr ds : [ecx+0xC]
        mov edi, dword ptr ss : [esp+0xC]
        lea edx, ds:[edx+eax*4]
        public_634427c : nop
        cmp dword ptr ds : [edx], edi
        je public_6344288
        dec eax
        sub edx, 4
        test eax, eax
        jge public_634427c
        public_6344288 : nop
        lea edx, ds:[esi-1]
        mov word ptr ds : [ecx+0xA], dx
        and edx, 0xFFFF
        cmp eax, edx
        jge public_63442ae
        public_6344299 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        mov esi, dword ptr ds : [edx+eax*4+4]
        mov dword ptr ds : [edx+eax*4], esi
        xor edx, edx
        mov dx, word ptr ds : [ecx+0xA]
        inc eax
        cmp eax, edx
        jl public_6344299
        public_63442ae : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6344260)
    }
}

#undef public_634427c
#undef public_6344288
#undef public_6344299
#undef public_63442ae
