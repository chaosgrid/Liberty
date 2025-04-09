#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_444ee0);
CLANG_FORWARD_PROC_SYMBOL(public_5908a0);
CLANG_FORWARD_PROC_SYMBOL(public_591230);

#define public_5908d0 _public_5908d0
#define public_590983 _public_590983
#define public_590990 _public_590990
#define public_5909b3 _public_5909b3

PROC_DECLARE(0x5908a0, internal_5908a0, public_5908a0);
extern "C" NAKED register_t __cdecl internal_5908a0()
{
    __asm
    {
        sub esp, 8
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        cmp ebp, edx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov ebx, eax
        je public_590983
        lea edi, ss:[ebp+0x2C]
        lea esi, ds:[eax+0x18]
        sub ebp, eax
        lea esp, ss:[esp]
        public_5908d0 : nop
        mov eax, dword ptr ds : [edi-0x2C]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [edi-0x28]
        mov dword ptr ds : [esi-0x14], ecx
        mov edx, dword ptr ds : [edi-0x24]
        push 0xFFFFFFFF
        push edx
        lea ecx, ds:[esi-0x10]
        call public_413df0
        mov eax, dword ptr ds : [edi-0x1C]
        push 0xFFFFFFFF
        push eax
        lea ecx, ds:[esi-8]
        call public_413df0
        mov ecx, dword ptr ds : [esi+ebp]
        lea edx, ds:[edi-0x10]
        mov dword ptr ds : [esi], ecx
        push edx
        lea ecx, ds:[esi+4]
        call public_591230
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi+0x14], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+0x18], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+0x1C], edx
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0x20], eax
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x24], ecx
        mov dl, byte ptr ds : [edi+0x14]
        mov byte ptr ds : [esi+0x28], dl
        mov eax, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x2C], eax
        lea ecx, ds:[edi+0x1C]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+0x30]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        lea edx, ds:[edi+0x28]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[esi+0x3C]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov al, byte ptr ds : [edi+0x34]
        add edi, 0x64
        mov byte ptr ds : [esi+0x48], al
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edi-0x2C]
        add ebx, 0x64
        add esi, 0x64
        cmp ecx, eax
        jne public_5908d0
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x1C]
        public_590983 : nop
        mov edi, dword ptr ds : [ecx+8]
        cmp ebx, edi
        mov esi, ebx
        je public_5909b3
        lea esp, ss:[esp]
        public_590990 : nop
        mov ecx, esi
        call public_444ee0
        add esi, 0x64
        cmp esi, edi
        jne public_590990
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx+8], ebx
        pop ebx
        add esp, 8
        ret 8
        public_5909b3 : nop
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+8], ebx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x5908a0)
    }
}

#undef public_5908d0
#undef public_590983
#undef public_590990
#undef public_5909b3
