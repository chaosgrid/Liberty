#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f0df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f5fe50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f5fe75 _public_6f5fe75
#define public_6f5fe80 _public_6f5fe80
#define public_6f5fe9e _public_6f5fe9e
#define public_6f5fec0 _public_6f5fec0
#define public_6f5fee0 _public_6f5fee0
#define public_6f5fee6 _public_6f5fee6
#define public_6f5fefd _public_6f5fefd
#define public_6f5ff12 _public_6f5ff12
#define public_6f5ff41 _public_6f5ff41

PROC_DECLARE(0x6f5fe50, internal_6f5fe50, public_6f5fe50);
extern "C" NAKED register_t __cdecl internal_6f5fe50()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0xC], edi
        je public_6f5ff41
        mov ecx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ecx]
        jmp public_6f5fe80
        public_6f5fe75 : nop
        mov edi, dword ptr ss : [esp+0xC]
        lea esp, ss:[esp]
        public_6f5fe80 : nop
        mov edx, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [edx+4]
        cmp dword ptr ds : [edx+0x28], ecx
        je public_6f5fe9e
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        mov dword ptr ss : [esp+0xC], edi
        jne public_6f5fe75
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 0xC
        public_6f5fe9e : nop
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[edi+8]
        cmp eax, ecx
        je public_6f5ff12
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebx
        mov ecx, dword ptr ds : [ecx+4]
        push ebp
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6f5fee0
        lea esp, ss:[esp]
        public_6f5fec0 : nop
        cmp ebp, dword ptr ss : [esp+0x1C]
        je public_6f5fee0
        lea edi, ds:[eax+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        lea esi, ss:[ebp+8]
        mov ecx, 9
        rep movsd
        mov ebp, dword ptr ss : [ebp]
        mov edi, dword ptr ss : [esp+0x10]
        jne public_6f5fec0
        public_6f5fee0 : nop
        cmp eax, ebx
        mov esi, eax
        je public_6f5fefd
        public_6f5fee6 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        call public_6ecfe80
        cmp esi, ebx
        jne public_6f5fee6
        public_6f5fefd : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push ebp
        push ebx
        call public_6f0df30
        mov esi, dword ptr ss : [esp+0x14]
        pop ebp
        public_6f5ff12 : nop
        mov al, byte ptr ss : [esp+0x20]
        test al, al
        je public_6f5ff41
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+4], edx
        lea ecx, ds:[edi+8]
        call public_6f15350
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+8], eax
        public_6f5ff41 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6f5fe50)
    }
}

#undef public_6f5fe75
#undef public_6f5fe80
#undef public_6f5fe9e
#undef public_6f5fec0
#undef public_6f5fee0
#undef public_6f5fee6
#undef public_6f5fefd
#undef public_6f5ff12
#undef public_6f5ff41
