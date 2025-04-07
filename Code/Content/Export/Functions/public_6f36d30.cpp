#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f36d30);

#define public_6f36d45 _public_6f36d45
#define public_6f36d69 _public_6f36d69

PROC_DECLARE(0x6f36d30, internal_6f36d30, public_6f36d30);
extern "C" NAKED register_t __cdecl internal_6f36d30()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+8]
        cmp edx, edi
        mov esi, eax
        je public_6f36d69
        push ebx
        push ebp
        public_6f36d45 : nop
        mov eax, edx
        mov ebp, dword ptr ds : [eax]
        mov ebx, esi
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        add edx, 0xC
        add esi, 0xC
        cmp edx, edi
        mov dword ptr ds : [ebx+8], eax
        jne public_6f36d45
        mov eax, dword ptr ss : [esp+0x14]
        pop ebp
        pop ebx
        public_6f36d69 : nop
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f36d30)
    }
}

#undef public_6f36d45
#undef public_6f36d69
