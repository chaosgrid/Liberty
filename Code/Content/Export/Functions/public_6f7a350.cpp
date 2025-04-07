#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6560);
CLANG_FORWARD_PROC_SYMBOL(public_6f305d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a350);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ec90);

#define public_6f7a388 _public_6f7a388
#define public_6f7a390 _public_6f7a390
#define public_6f7a43e _public_6f7a43e
#define public_6f7a447 _public_6f7a447
#define public_6f7a45c _public_6f7a45c

PROC_DECLARE(0x6f7a350, internal_6f7a350, public_6f7a350);
extern "C" NAKED register_t __cdecl internal_6f7a350()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        cmp edi, ecx
        mov esi, eax
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x10], esi
        je public_6f7a43e
        lea ebp, ds:[edi+0x28]
        sub edi, eax
        lea ebx, ds:[eax+0x10]
        mov dword ptr ss : [esp+0x24], edi
        jmp public_6f7a390
        public_6f7a388 : nop
        mov edi, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6f7a390 : nop
        lea eax, ss:[ebp-0x28]
        push eax
        mov ecx, esi
        call public_6f68ac0
        add edi, ebx
        mov edx, dword ptr ds : [edi]
        mov ecx, ebx
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+8], edx
        lea eax, ss:[ebp-0xC]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0xC]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea edi, ds:[ebx+0x18]
        mov ecx, 0xC
        mov esi, ebp
        rep movsd
        lea ecx, ss:[ebp+0x30]
        push ecx
        lea ecx, ds:[ebx+0x48]
        call public_6eb6560
        lea edx, ss:[ebp+0x40]
        push edx
        lea ecx, ds:[ebx+0x58]
        call public_6eb6560
        mov eax, dword ptr ss : [ebp+0x50]
        mov dword ptr ds : [ebx+0x68], eax
        mov ecx, dword ptr ss : [ebp+0x54]
        mov dword ptr ds : [ebx+0x6C], ecx
        mov edx, dword ptr ss : [ebp+0x58]
        lea ecx, ss:[ebp+0x60]
        mov dword ptr ds : [ebx+0x70], edx
        mov eax, dword ptr ss : [ebp+0x5C]
        push ecx
        lea ecx, ds:[ebx+0x78]
        mov dword ptr ds : [ebx+0x74], eax
        call public_6f7ec90
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        add ebp, 0x98
        add esi, 0x98
        lea edx, ss:[ebp-0x28]
        add ebx, 0x98
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f7a388
        mov ebp, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x20]
        public_6f7a43e : nop
        mov edi, dword ptr ss : [ebp+8]
        cmp esi, edi
        mov ebx, esi
        je public_6f7a45c
        public_6f7a447 : nop
        mov ecx, ebx
        call public_6f305d0
        add ebx, 0x98
        cmp ebx, edi
        jne public_6f7a447
        mov eax, dword ptr ss : [esp+0x20]
        public_6f7a45c : nop
        pop edi
        mov dword ptr ss : [ebp+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6f7a350)
    }
}

#undef public_6f7a388
#undef public_6f7a390
#undef public_6f7a43e
#undef public_6f7a447
#undef public_6f7a45c
