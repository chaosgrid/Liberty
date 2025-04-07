#include "Server-PCH.h"


#define public_6d5eba2 _public_6d5eba2
#define public_6d5ebac _public_6d5ebac
#define public_6d5ebae _public_6d5ebae

PROC_DECLARE(0x6d5eb60, internal_6d5eb60, public_6d5eb60);
extern "C" NAKED register_t __cdecl internal_6d5eb60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push esi
        push ecx
        xor ebx, ebx
        call dword ptr ds : [public_6d644f4]
        add esp, 4
        test eax, eax
        je public_6d5ebac
        mov edx, dword ptr ds : [eax]
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+8]
        mov esi, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        inc eax
        cmp ecx, eax
        pop edi
        jb public_6d5ebae
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, esi
        sub edx, esi
        public_6d5eba2 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_6d5eba2
        public_6d5ebac : nop
        mov eax, ebx
        public_6d5ebae : nop
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d5eb60)
    }
}

#undef public_6d5eba2
#undef public_6d5ebac
#undef public_6d5ebae
