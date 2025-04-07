#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f05c1d _public_6f05c1d
#define public_6f05c35 _public_6f05c35

PROC_DECLARE(0x6f05c00, internal_6f05c00, public_6f05c00);
extern "C" NAKED register_t __cdecl internal_6f05c00()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x1C]
        mov ebx, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_6f05c1d
        mov ebx, eax
        public_6f05c1d : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f05c35
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        public_6f05c35 : nop
        inc dword ptr ds : [edi+0x20]
        mov eax, dword ptr ds : [edi+0x14]
        inc eax
        mov dword ptr ds : [edi+0x14], eax
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f05c00)
    }
}

#undef public_6f05c1d
#undef public_6f05c35
