#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a0280);
CLANG_FORWARD_PROC_SYMBOL(public_62a15f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62a9526 _public_62a9526
#define public_62a954a _public_62a954a
#define public_62a9569 _public_62a9569
#define public_62a9583 _public_62a9583

PROC_DECLARE(0x62a9500, internal_62a9500, public_62a9500);
extern "C" NAKED register_t __cdecl internal_62a9500()
{
    __asm
    {
        sub esp, 0x10
        push ebp
        lea ebp, ds:[ecx+0x144]
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0x10], 1
        call public_62a15f0
        test eax, eax
        je public_62a9583
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        public_62a9526 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, eax
        call public_62a0280
        mov esi, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [esi+4]
        push 0x10
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_62a954a
        mov edi, eax
        public_62a954a : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_62a9569
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        public_62a9569 : nop
        mov esi, dword ptr ds : [ebx+8]
        lea eax, ss:[esp+0x18]
        inc esi
        push eax
        mov ecx, ebp
        mov dword ptr ds : [ebx+8], esi
        call public_62a15f0
        test eax, eax
        jne public_62a9526
        pop edi
        pop esi
        pop ebx
        public_62a9583 : nop
        pop ebp
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62a9500)
    }
}

#undef public_62a9526
#undef public_62a954a
#undef public_62a9569
#undef public_62a9583
