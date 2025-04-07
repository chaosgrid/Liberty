#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf6cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7140);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7260);

#define public_6cf6d35 _public_6cf6d35
#define public_6cf6d53 _public_6cf6d53

PROC_DECLARE(0x6cf6cf0, internal_6cf6cf0, public_6cf6cf0);
extern "C" NAKED register_t __cdecl internal_6cf6cf0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x28]
        test al, al
        jne public_6cf6d53
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_6cf6d53
        mov eax, dword ptr ds : [eax+8]
        sub eax, esi
        sar eax, 2
        test eax, eax
        je public_6cf6d53
        mov eax, dword ptr ds : [esi]
        push eax
        call public_6cf7140
        mov ebx, eax
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6cf6d35
        mov ecx, dword ptr ds : [esi]
        push ecx
        mov ecx, edi
        call public_6cf7260
        test al, al
        je public_6cf6d53
        public_6cf6d35 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [ebx+0x2F0], 1
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        add edi, 0x38
        push edi
        call dword ptr ds : [edx+0xC8]
        public_6cf6d53 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6cf6cf0)
    }
}

#undef public_6cf6d35
#undef public_6cf6d53
