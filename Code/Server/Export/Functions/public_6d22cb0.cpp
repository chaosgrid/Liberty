#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d22d14 _public_6d22d14
#define public_6d22d16 _public_6d22d16
#define public_6d22d33 _public_6d22d33

PROC_DECLARE(0x6d22cb0, internal_6d22cb0, public_6d22cb0);
extern "C" NAKED register_t __cdecl internal_6d22cb0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ecx+4]
        shl esi, 5
        mov ecx, dword ptr ds : [esi+eax+0x1C]
        mov dl, byte ptr ds : [esi+eax+0x14]
        mov ebp, dword ptr ds : [esi+eax+0x10]
        add esi, eax
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [ebx+0x14]
        mov byte ptr ss : [esp+0x14], dl
        mov edx, dword ptr ds : [ecx+0x1008]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ds:[edx+0x10]
        cmp eax, dword ptr ds : [ecx+0x100C]
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d22d14
        add eax, 0xFFFFFFF0
        push 0x10
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d22d16
        public_6d22d14 : nop
        mov eax, edx
        public_6d22d16 : nop
        xor ecx, ecx
        cmp eax, ecx
        je public_6d22d33
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+0xC], edx
        public_6d22d33 : nop
        mov dword ptr ds : [esi+0x10], ecx
        mov dword ptr ds : [esi+0x18], ecx
        mov dword ptr ds : [esi+0x1C], ecx
        mov al, 1
        mov byte ptr ds : [esi+0x14], al
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx+4]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x18], edx
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6d22cb0)
    }
}

#undef public_6d22d14
#undef public_6d22d16
#undef public_6d22d33
