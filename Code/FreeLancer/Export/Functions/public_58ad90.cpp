#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59d8d0);
CLANG_FORWARD_PROC_SYMBOL(public_59d960);

#define public_58addc _public_58addc
#define public_58ae30 _public_58ae30
#define public_58ae39 _public_58ae39
#define public_58ae5c _public_58ae5c

PROC_DECLARE(0x58ad90, internal_58ad90, public_58ad90);
extern "C" NAKED register_t __cdecl internal_58ad90()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x35C]
        test al, al
        push edi
        je public_58ae5c
        mov ebp, dword ptr ss : [esp+0x14]
        cmp dword ptr ss : [ebp], 0xFFFFFFFF
        jne public_58addc
        cmp dword ptr ss : [ebp+4], 3
        jne public_58addc
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_58addc
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edi, eax
        test edi, edi
        je public_58addc
        mov edx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [edi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+8]
        push eax
        push 0x27
        mov ecx, edi
        call dword ptr ds : [ebx+0xA8]
        public_58addc : nop
        mov al, byte ptr ds : [esi+0x39C]
        test al, al
        mov ebx, 1
        je public_58ae39
        push esi
        mov byte ptr ds : [esi+0x39C], 0
        call public_59d960
        mov eax, dword ptr ss : [ebp]
        add esp, 4
        cmp eax, 0xFFFFFFFF
        jne public_58ae5c
        cmp dword ptr ss : [ebp+4], ebx
        jne public_58ae39
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_58ae30
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edi, eax
        test edi, edi
        je public_58ae30
        mov edx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [edi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+8]
        push eax
        push 0x26
        mov ecx, edi
        call dword ptr ss : [ebp+0xA8]
        public_58ae30 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        ret 4
        public_58ae39 : nop
        cmp dword ptr ss : [ebp], 0xFFFFFFFF
        jne public_58ae5c
        cmp dword ptr ss : [ebp+4], ebx
        je public_58ae5c
        push esi
        mov byte ptr ds : [esi+0x39C], bl
        call public_59d8d0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        ret 4
        public_58ae5c : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x58ad90)
    }
}

#undef public_58addc
#undef public_58ae30
#undef public_58ae39
#undef public_58ae5c
