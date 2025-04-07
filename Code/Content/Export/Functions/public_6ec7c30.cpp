#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ec7ca1 _public_6ec7ca1
#define public_6ec7cbf _public_6ec7cbf

PROC_DECLARE(0x6ec7c30, internal_6ec7c30, public_6ec7c30);
extern "C" NAKED register_t __cdecl internal_6ec7c30()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x94]
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x10], 1
        mov dword ptr ss : [esp+0xC], eax
        mov byte ptr ss : [esp+0x14], 0
        mov eax, dword ptr ds : [edx+0xC]
        lea ecx, ss:[esp+0xC]
        push edi
        push ecx
        mov dword ptr ss : [esp+0x24], eax
        call dword ptr ds : [public_6fb3648]
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x90], eax
        mov edi, dword ptr ss : [ebp+0x314]
        mov ebx, dword ptr ds : [edi+4]
        add ebp, 0x310
        push 0x98
        call public_6fa912a
        add esp, 8
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6ec7ca1
        mov ebx, eax
        public_6ec7ca1 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6ec7cbf
        add esi, 0xC
        mov ecx, 0x24
        mov edi, eax
        rep movsd
        public_6ec7cbf : nop
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        inc eax
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6ec7c30)
    }
}

#undef public_6ec7ca1
#undef public_6ec7cbf
