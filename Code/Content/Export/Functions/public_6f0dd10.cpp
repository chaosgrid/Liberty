#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0dd10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f0dd50 _public_6f0dd50
#define public_6f0dd65 _public_6f0dd65
#define public_6f0dd87 _public_6f0dd87
#define public_6f0dd98 _public_6f0dd98

PROC_DECLARE(0x6f0dd10, internal_6f0dd10, public_6f0dd10);
extern "C" NAKED register_t __cdecl internal_6f0dd10()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov al, byte ptr ds : [edi]
        mov esi, ecx
        push 0x2C
        mov dword ptr ss : [esp+0x14], esi
        mov byte ptr ds : [esi], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ecx, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [ecx]
        mov ebp, dword ptr ds : [eax]
        add esp, 4
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x18], ecx
        je public_6f0dd98
        nop 
        lea esp, ss:[esp]
        public_6f0dd50 : nop
        mov edi, dword ptr ss : [ebp+4]
        push 0x2C
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebp
        jne public_6f0dd65
        mov edi, eax
        public_6f0dd65 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f0dd87
        mov ecx, 9
        lea esi, ds:[ebx+8]
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x10]
        public_6f0dd87 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x18]
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6f0dd50
        public_6f0dd98 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f0dd10)
    }
}

#undef public_6f0dd50
#undef public_6f0dd65
#undef public_6f0dd87
#undef public_6f0dd98
