#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4247c0);
CLANG_FORWARD_PROC_SYMBOL(public_424870);
CLANG_FORWARD_PROC_SYMBOL(public_424ce0);

#define public_42483e _public_42483e
#define public_42485a _public_42485a

PROC_DECLARE(0x4247c0, internal_4247c0, public_4247c0);
extern "C" NAKED register_t __cdecl internal_4247c0()
{
    __asm
    {
        mov al, byte ptr ds : [public_6679f9]
        sub esp, 0x28
        push ebx
        xor ebx, ebx
        cmp al, bl
        push ebp
        jne public_42485a
        mov ebp, dword ptr ds : [public_6679f4]
        push 0xA
        push 0xA
        push ebx
        push ebp
        mov byte ptr ds : [public_6679f9], 1
        call public_424870
        mov eax, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x10
        cmp ecx, ebx
        je public_42485a
        cmp byte ptr ss : [esp+0x34], bl
        je public_42485a
        cmp dword ptr ds : [public_679bc8], ebx
        jbe public_42483e
        cmp dword ptr ds : [public_679bcc], ebx
        jbe public_42483e
        cmp byte ptr ds : [public_679be5], bl
        je public_42483e
        push esi
        push edi
        mov ecx, 0xA
        mov esi, offset public_679bc0
        lea edi, ss:[esp+0x10]
        rep movsd
        lea ecx, ss:[esp+0x10]
        push ecx
        push ebp
        mov byte ptr ss : [esp+0x3D], bl
        call public_424ce0
        add esp, 8
        pop edi
        pop esi
        public_42483e : nop
        mov edx, dword ptr ds : [public_5c6d80]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x38]
        public_42485a : nop
        pop ebp
        mov byte ptr ds : [public_6679f9], bl
        pop ebx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x4247c0)
    }
}

#undef public_42483e
#undef public_42485a
