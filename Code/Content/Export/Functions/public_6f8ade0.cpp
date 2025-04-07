#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f8ade0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f8ae39 _public_6f8ae39
#define public_6f8ae4d _public_6f8ae4d

PROC_DECLARE(0x6f8ade0, internal_6f8ade0, public_6f8ade0);
extern "C" NAKED register_t __cdecl internal_6f8ade0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        mov dword ptr ds : [eax+0x34], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0x88]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        call dword ptr ds : [edx+0x18]
        mov ebx, eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0xC]
        mov edx, dword ptr ds : [esi+0x80]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ds:[esi+0x78]
        push 1
        push edx
        call public_6f937c0
        mov edi, dword ptr ds : [esi+0x6C]
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_6f8ae39
        mov ebp, eax
        public_6f8ae39 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f8ae4d
        mov dword ptr ds : [eax], ebx
        public_6f8ae4d : nop
        inc dword ptr ds : [esi+0x70]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov byte ptr ds : [esi+0x74], 1
        call dword ptr ds : [edx+0x40]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f8ade0)
    }
}

#undef public_6f8ae39
#undef public_6f8ae4d
