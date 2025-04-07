#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1cbc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f1cbe0 _public_6f1cbe0
#define public_6f1cc06 _public_6f1cc06
#define public_6f1cc1a _public_6f1cc1a
#define public_6f1cc33 _public_6f1cc33

PROC_DECLARE(0x6f1cbc0, internal_6f1cbc0, public_6f1cbc0);
extern "C" NAKED register_t __cdecl internal_6f1cbc0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+8]
        push ebx
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6f1cc33
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea ebx, ds:[ebx]
        public_6f1cbe0 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [ebp+0x14], eax
        mov esi, dword ptr ds : [edi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test esi, esi
        mov dword ptr ds : [eax], edi
        jne public_6f1cc06
        mov esi, eax
        public_6f1cc06 : nop
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f1cc1a
        mov dword ptr ds : [eax], ebp
        public_6f1cc1a : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [esp+0x1C]
        inc ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [edx+8]
        jne public_6f1cbe0
        pop edi
        pop esi
        pop ebp
        public_6f1cc33 : nop
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6f1cbc0)
    }
}

#undef public_6f1cbe0
#undef public_6f1cc06
#undef public_6f1cc1a
#undef public_6f1cc33
