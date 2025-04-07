#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8140);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8a80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa8ad0 _public_6fa8ad0
#define public_6fa8ae8 _public_6fa8ae8
#define public_6fa8af0 _public_6fa8af0
#define public_6fa8b1b _public_6fa8b1b
#define public_6fa8b20 _public_6fa8b20
#define public_6fa8b35 _public_6fa8b35
#define public_6fa8b52 _public_6fa8b52
#define public_6fa8b63 _public_6fa8b63
#define public_6fa8b6b _public_6fa8b6b

PROC_DECLARE(0x6fa8a80, internal_6fa8a80, public_6fa8a80);
extern "C" NAKED register_t __cdecl internal_6fa8a80()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        mov dl, byte ptr ds : [edi+8]
        mov byte ptr ds : [esi+8], dl
        mov al, byte ptr ds : [edi+9]
        mov byte ptr ds : [esi+9], al
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        lea ecx, ds:[edi+0x10]
        lea ebp, ds:[esi+0x10]
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x14], esi
        je public_6fa8b6b
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6fa8ae8
        lea ecx, ds:[ecx]
        public_6fa8ad0 : nop
        cmp ebx, ecx
        je public_6fa8ae8
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_6fa8ad0
        public_6fa8ae8 : nop
        cmp eax, esi
        mov edi, eax
        je public_6fa8b1b
        mov edi, edi
        public_6fa8af0 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6fa8af0
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa8b1b : nop
        cmp ebx, ecx
        je public_6fa8b63
        nop 
        public_6fa8b20 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0x10
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6fa8b35
        mov edi, eax
        public_6fa8b35 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6fa8b52
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+4], ecx
        public_6fa8b52 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6fa8b20
        public_6fa8b63 : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x1C]
        public_6fa8b6b : nop
        mov edx, dword ptr ds : [edi+0x1C]
        lea eax, ds:[edi+0x20]
        push eax
        lea ecx, ds:[esi+0x20]
        mov dword ptr ds : [esi+0x1C], edx
        call public_6fa8140
        mov ecx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [esi+0x30], ecx
        mov dl, byte ptr ds : [edi+0x34]
        mov byte ptr ds : [esi+0x34], dl
        mov eax, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [esi+0x38], eax
        mov ecx, dword ptr ds : [edi+0x3C]
        mov dword ptr ds : [esi+0x3C], ecx
        mov edx, dword ptr ds : [edi+0x40]
        pop edi
        mov dword ptr ds : [esi+0x40], edx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6fa8a80)
    }
}

#undef public_6fa8ad0
#undef public_6fa8ae8
#undef public_6fa8af0
#undef public_6fa8b1b
#undef public_6fa8b20
#undef public_6fa8b35
#undef public_6fa8b52
#undef public_6fa8b63
#undef public_6fa8b6b
