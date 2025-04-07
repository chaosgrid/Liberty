#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c6a0);

#define public_6f4c6ef _public_6f4c6ef
#define public_6f4c70d _public_6f4c70d

PROC_DECLARE(0x6f4c6a0, internal_6f4c6a0, public_6f4c6a0);
extern "C" NAKED register_t __cdecl internal_6f4c6a0()
{
    __asm
    {
        sub esp, 0xC
        mov ecx, dword ptr ds : [public_6f61e28]
        push ebx
        push ebp
        push esi
        lea esi, ds:[ecx+0xC]
        mov eax, esi
        mov ebx, dword ptr ds : [eax]
        mov ebp, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], edx
        sub eax, dword ptr ds : [ecx+4]
        sar eax, 4
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        sub eax, edi
        mov dword ptr ds : [esi+8], eax
        add eax, edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x38]
        test ecx, ecx
        je public_6f4c6ef
        push 0
        push 0
        push edi
        call public_6f4c410
        add esp, 0xC
        public_6f4c6ef : nop
        call dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [ecx+0x38]
        test eax, eax
        je public_6f4c70d
        push 1
        push 0
        push edi
        call public_6f4c410
        add esp, 0xC
        public_6f4c70d : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebp
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f4c6a0)
    }
}

#undef public_6f4c6ef
#undef public_6f4c70d
