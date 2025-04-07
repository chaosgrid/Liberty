#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6229e00);

#define public_6229e30 _public_6229e30
#define public_6229e33 _public_6229e33
#define public_6229e40 _public_6229e40
#define public_6229e43 _public_6229e43

PROC_DECLARE(0x6229e00, internal_6229e00, public_6229e00);
extern "C" NAKED register_t __cdecl internal_6229e00()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        push esi
        mov eax, dword ptr ds : [esi]
        mov ebp, ecx
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [eax+0x30]
        mov ecx, dword ptr ds : [esi]
        push esi
        mov ebx, eax
        call dword ptr ds : [ecx+0x34]
        test ebx, ebx
        mov edi, eax
        je public_6229e30
        mov edx, dword ptr ds : [ebx]
        push edi
        push ebx
        call dword ptr ds : [edx+0x54]
        jmp public_6229e33
        public_6229e30 : nop
        mov dword ptr ss : [ebp], edi
        public_6229e33 : nop
        test edi, edi
        je public_6229e40
        mov eax, dword ptr ds : [edi]
        push ebx
        push edi
        call dword ptr ds : [eax+0x50]
        jmp public_6229e43
        public_6229e40 : nop
        mov dword ptr ss : [ebp+4], ebx
        public_6229e43 : nop
        mov ecx, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [ecx+0x50]
        mov edx, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [edx+0x54]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6229e00)
    }
}

#undef public_6229e30
#undef public_6229e33
#undef public_6229e40
#undef public_6229e43
