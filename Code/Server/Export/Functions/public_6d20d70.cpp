#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d20dce _public_6d20dce
#define public_6d20dd0 _public_6d20dd0
#define public_6d20de0 _public_6d20de0
#define public_6d20df6 _public_6d20df6

PROC_DECLARE(0x6d20d70, internal_6d20d70, public_6d20d70);
extern "C" NAKED register_t __cdecl internal_6d20d70()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [eax+0x18]
        cmp eax, 0xFFFFFFFF
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ecx
        je public_6d20df6
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [edi+0x14]
        push ebx
        shl eax, 5
        add eax, edx
        push ebp
        push esi
        mov esi, eax
        mov dl, byte ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [esi+4]
        mov byte ptr ss : [esp+0x1C], dl
        mov edx, dword ptr ds : [ecx+0x1008]
        lea eax, ds:[edx+0xC]
        cmp eax, dword ptr ds : [ecx+0x100C]
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d20dce
        add eax, 0xFFFFFFF4
        push 0xC
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d20dd0
        public_6d20dce : nop
        mov eax, edx
        public_6d20dd0 : nop
        test eax, eax
        je public_6d20de0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [eax+8], ecx
        public_6d20de0 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov byte ptr ds : [esi+8], 1
        pop esi
        pop ebp
        pop ebx
        public_6d20df6 : nop
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+0x18], edx
        mov al, 1
        pop edi
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6d20d70)
    }
}

#undef public_6d20dce
#undef public_6d20dd0
#undef public_6d20de0
#undef public_6d20df6
