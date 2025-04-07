#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2e220);
CLANG_FORWARD_PROC_SYMBOL(public_6f8c3c0);

#define public_6f8c400 _public_6f8c400
#define public_6f8c408 _public_6f8c408
#define public_6f8c44a _public_6f8c44a
#define public_6f8c44f _public_6f8c44f

PROC_DECLARE(0x6f8c3c0, internal_6f8c3c0, public_6f8c3c0);
extern "C" NAKED register_t __cdecl internal_6f8c3c0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x88]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x78]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov edi, eax
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, edi
        call public_6f2e220
        mov edi, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        je public_6f8c400
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6f8c400
        lea eax, ss:[esp+0xC]
        jmp public_6f8c408
        public_6f8c400 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea eax, ss:[esp+0x10]
        public_6f8c408 : nop
        mov ebx, dword ptr ds : [eax]
        cmp ebx, edi
        je public_6f8c44f
        mov edx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [edx+0x10]
        test eax, eax
        je public_6f8c44f
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        cmp dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [esi+0xB0]
        mov edx, dword ptr ds : [eax+0xB8]
        lea ecx, ds:[eax+0xB8]
        mov eax, dword ptr ds : [ebx+0x10]
        push eax
        push esi
        jne public_6f8c44a
        push 1
        call dword ptr ds : [edx+0x14]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8
        public_6f8c44a : nop
        push 2
        call dword ptr ds : [edx+0x14]
        public_6f8c44f : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f8c3c0)
    }
}

#undef public_6f8c400
#undef public_6f8c408
#undef public_6f8c44a
#undef public_6f8c44f
