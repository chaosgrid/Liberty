#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d01e80);

#define public_6d01ebc _public_6d01ebc
#define public_6d01ece _public_6d01ece
#define public_6d01ed0 _public_6d01ed0
#define public_6d01f22 _public_6d01f22

PROC_DECLARE(0x6d01e80, internal_6d01e80, public_6d01e80);
extern "C" NAKED register_t __cdecl internal_6d01e80()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x9C]
        xor ebx, ebx
        cmp ecx, ebx
        je public_6d01ebc
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        call dword ptr ds : [eax]
        test al, al
        jne public_6d01f22
        mov dword ptr ds : [esi+0x9C], ebx
        mov byte ptr ds : [esi+0x98], bl
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6d01ebc : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        je public_6d01ece
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6d01ed0
        public_6d01ece : nop
        xor eax, eax
        public_6d01ed0 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax+0xB4]
        mov ebp, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [public_6d8fb14]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        push ecx
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [eax]
        push ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [public_6d8fb14]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [ebx+0x14C]
        test edi, edi
        mov byte ptr ds : [esi+0x98], 0
        pop edi
        jne public_6d01f22
        cmp ebp, 3
        jne public_6d01f22
        mov byte ptr ds : [esi+0x98], 1
        public_6d01f22 : nop
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6d01e80)
    }
}

#undef public_6d01ebc
#undef public_6d01ece
#undef public_6d01ed0
#undef public_6d01f22
