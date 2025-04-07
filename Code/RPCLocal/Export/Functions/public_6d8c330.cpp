#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6d98cf0);

#define public_6d8c357 _public_6d8c357
#define public_6d8c36d _public_6d8c36d
#define public_6d8c380 _public_6d8c380

PROC_DECLARE(0x6d8c330, internal_6d8c330, public_6d8c330);
extern "C" NAKED register_t __cdecl internal_6d8c330()
{
    __asm
    {
        push ecx
        push ebx
        lea eax, ss:[esp+4]
        push eax
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        push 0x54
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d8c380
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d8c36d
        public_6d8c357 : nop
        mov ecx, dword ptr ds : [esi]
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        call public_6d98cf0
        mov eax, dword ptr ds : [edi+8]
        add esi, 4
        cmp esi, eax
        jne public_6d8c357
        public_6d8c36d : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx]
        push eax
        push ecx
        mov ecx, ebx
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        public_6d8c380 : nop
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d8c330)
    }
}

#undef public_6d8c357
#undef public_6d8c36d
#undef public_6d8c380
