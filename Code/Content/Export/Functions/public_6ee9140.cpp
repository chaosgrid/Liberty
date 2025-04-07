#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee9140);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ee9182 _public_6ee9182
#define public_6ee9198 _public_6ee9198
#define public_6ee91a2 _public_6ee91a2
#define public_6ee91a8 _public_6ee91a8

PROC_DECLARE(0x6ee9140, internal_6ee9140, public_6ee9140);
extern "C" NAKED register_t __cdecl internal_6ee9140()
{
    __asm
    {
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+4]
        test al, al
        push edi
        je public_6ee91a8
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x14]
        mov edi, eax
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+8]
        test al, al
        mov ecx, edi
        je public_6ee91a2
        mov eax, dword ptr ds : [edi]
        push ebx
        push esi
        call dword ptr ds : [eax+4]
        mov esi, dword ptr ss : [ebp+0xC]
        mov ebx, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_6ee9182
        mov ebx, eax
        public_6ee9182 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        pop esi
        pop ebx
        je public_6ee9198
        mov dword ptr ds : [eax], edi
        public_6ee9198 : nop
        inc dword ptr ss : [ebp+0x10]
        pop edi
        mov al, 1
        pop ebp
        ret 4
        public_6ee91a2 : nop
        mov edx, dword ptr ds : [edi]
        push 1
        call dword ptr ds : [edx]
        public_6ee91a8 : nop
        pop edi
        xor al, al
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6ee9140)
    }
}

#undef public_6ee9182
#undef public_6ee9198
#undef public_6ee91a2
#undef public_6ee91a8
