#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6271bb0 _public_6271bb0
#define public_6271bc5 _public_6271bc5
#define public_6271be2 _public_6271be2
#define public_6271bf7 _public_6271bf7

PROC_DECLARE(0x6271b90, internal_6271b90, public_6271b90);
extern "C" NAKED register_t __cdecl internal_6271b90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        push ebx
        mov ebx, ecx
        jbe public_6271bf7
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        lea ebx, ds:[ebx]
        public_6271bb0 : nop
        mov esi, dword ptr ds : [edi+4]
        push 0x10
        call public_6391d9c
        add esp, 4
        test esi, esi
        mov dword ptr ds : [eax], edi
        jne public_6271bc5
        mov esi, eax
        public_6271bc5 : nop
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6271be2
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [eax+4], ecx
        public_6271be2 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x18]
        inc ecx
        dec eax
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ss : [esp+0x18], eax
        jne public_6271bb0
        pop edi
        pop esi
        pop ebp
        public_6271bf7 : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6271b90)
    }
}

#undef public_6271bb0
#undef public_6271bc5
#undef public_6271be2
#undef public_6271bf7
