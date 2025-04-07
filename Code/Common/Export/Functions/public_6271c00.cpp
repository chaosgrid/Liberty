#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6271c16 _public_6271c16
#define public_6271c2b _public_6271c2b
#define public_6271c47 _public_6271c47
#define public_6271c5b _public_6271c5b

PROC_DECLARE(0x6271c00, internal_6271c00, public_6271c00);
extern "C" NAKED register_t __cdecl internal_6271c00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp ebx, eax
        push ebp
        mov ebp, ecx
        je public_6271c5b
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        public_6271c16 : nop
        mov esi, dword ptr ds : [edi+4]
        push 0x10
        call public_6391d9c
        add esp, 4
        test esi, esi
        mov dword ptr ds : [eax], edi
        jne public_6271c2b
        mov esi, eax
        public_6271c2b : nop
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6271c47
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [eax+4], ecx
        public_6271c47 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x1C]
        inc edx
        add ebx, 8
        cmp ebx, eax
        mov dword ptr ss : [ebp+8], edx
        jne public_6271c16
        pop edi
        pop esi
        public_6271c5b : nop
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6271c00)
    }
}

#undef public_6271c16
#undef public_6271c2b
#undef public_6271c47
#undef public_6271c5b
