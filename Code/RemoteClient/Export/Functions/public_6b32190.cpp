#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b32190);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b321a7 _public_6b321a7
#define public_6b321d0 _public_6b321d0
#define public_6b321e2 _public_6b321e2

PROC_DECLARE(0x6b32190, internal_6b32190, public_6b32190);
extern "C" NAKED register_t __cdecl internal_6b32190()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        lea eax, ds:[ebp*4]
        test eax, eax
        push edi
        mov esi, ecx
        jge public_6b321a7
        xor eax, eax
        public_6b321a7 : nop
        push eax
        call public_6b6a134
        mov ecx, dword ptr ds : [esi+0x10]
        mov edi, eax
        mov eax, ebp
        shr eax, 2
        lea ebx, ds:[edi+eax*4]
        mov eax, dword ptr ds : [esi+0x20]
        add eax, 4
        add esp, 4
        cmp ecx, eax
        mov edx, ebx
        je public_6b321e2
        lea esp, ss:[esp]
        public_6b321d0 : nop
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], ebp
        add ecx, 4
        add edx, 4
        cmp ecx, eax
        jne public_6b321d0
        mov ebp, dword ptr ss : [esp+0x14]
        public_6b321e2 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        push ecx
        call public_6b6a092
        add esp, 4
        mov dword ptr ds : [esi+0x24], edi
        pop edi
        mov dword ptr ds : [esi+0x28], ebp
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6b32190)
    }
}

#undef public_6b321a7
#undef public_6b321d0
#undef public_6b321e2
