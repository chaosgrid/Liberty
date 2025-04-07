#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23230);

#define public_6f22d85 _public_6f22d85
#define public_6f22d9f _public_6f22d9f

PROC_DECLARE(0x6f22d70, internal_6f22d70, public_6f22d70);
extern "C" NAKED register_t __cdecl internal_6f22d70()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x54]
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+0x58]
        xor ebx, ebx
        cmp edx, esi
        push edi
        jae public_6f22d9f
        mov eax, dword ptr ds : [ecx+0x38]
        lea edi, ds:[eax+edx*4]
        public_6f22d85 : nop
        fld dword ptr ds : [edi]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        je public_6f22d9f
        cmp esi, edx
        je public_6f22d9f
        inc ebx
        inc edx
        add edi, 4
        cmp edx, esi
        jb public_6f22d85
        public_6f22d9f : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        push edx
        push eax
        push ebx
        call public_6f23230
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f22d70)
    }
}

#undef public_6f22d85
#undef public_6f22d9f
