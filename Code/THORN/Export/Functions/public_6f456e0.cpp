#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2eb20);
CLANG_FORWARD_PROC_SYMBOL(public_6f4aa40);

#define public_6f4576f _public_6f4576f
#define public_6f457f5 _public_6f457f5
#define public_6f457fd _public_6f457fd
#define public_6f45828 _public_6f45828
#define public_6f45846 _public_6f45846
#define public_6f45853 _public_6f45853
#define public_6f4586f _public_6f4586f

PROC_DECLARE(0x6f456e0, internal_6f456e0, public_6f456e0);
extern "C" NAKED register_t __cdecl internal_6f456e0()
{
    __asm
    {
        sub esp, 0x94
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xA0]
        mov ebx, ecx
        push edi
        lea eax, ds:[ebx+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call public_6f4aa40
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+4]
        je public_6f45853
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        cmp eax, 5
        mov eax, dword ptr ss : [esp+0xC]
        jne public_6f457fd
        mov esi, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [esi+0x15C]
        test eax, eax
        je public_6f4576f
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x188]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0x15C]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x180]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [esi+0x15C]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x16C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        add esi, 0x160
        jmp public_6f45846
        public_6f4576f : nop
        mov eax, dword ptr ds : [esi+0x158]
        test eax, eax
        je public_6f457f5
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x160]
        push edi
        push eax
        call dword ptr ds : [ecx+0x24]
        mov eax, dword ptr ds : [esi+0x158]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x16C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi+0x158]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x178]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ds : [esi+0x158]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x17C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x30]
        mov eax, dword ptr ds : [esi+0x158]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x184]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [esi+0x158]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x180]
        push ecx
        push eax
        call dword ptr ds : [edx+0x34]
        lea edx, ds:[esi+0x188]
        push edx
        push edi
        call public_6f2eb20
        add esp, 8
        public_6f457f5 : nop
        add esi, 0x160
        jmp public_6f45846
        public_6f457fd : nop
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        cmp eax, 9
        jne public_6f45853
        mov eax, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [esi+0x104]
        test eax, eax
        je public_6f45828
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x11C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x24]
        public_6f45828 : nop
        add esi, 0x11C
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], edx
        lea esi, ss:[esp+0x10]
        public_6f45846 : nop
        lea edi, ds:[ebx+0xE8]
        mov ecx, 0x24
        rep movsd
        public_6f45853 : nop
        mov cl, byte ptr ds : [ebx+0x30]
        mov al, 1
        test al, cl
        je public_6f4586f
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x1C], 0xFFFFFFFF
        pop ebx
        add esp, 0x94
        ret 8
        public_6f4586f : nop
        mov ecx, dword ptr ds : [ebx+0x40]
        mov edx, dword ptr ds : [ebx+0x2C]
        pop edi
        add ecx, edx
        pop esi
        mov dword ptr ds : [ebx+0x1C], ecx
        pop ebx
        add esp, 0x94
        ret 8
        UNREACHABLE_TRAP(0x6f456e0)
    }
}

#undef public_6f4576f
#undef public_6f457f5
#undef public_6f457fd
#undef public_6f45828
#undef public_6f45846
#undef public_6f45853
#undef public_6f4586f
