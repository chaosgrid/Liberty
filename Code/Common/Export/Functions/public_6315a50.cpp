#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628ffd0);
CLANG_FORWARD_PROC_SYMBOL(public_62b5ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6315a50);
CLANG_FORWARD_PROC_SYMBOL(public_6318550);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6315a80 _public_6315a80
#define public_6315a9f _public_6315a9f
#define public_6315ab8 _public_6315ab8
#define public_6315ac0 _public_6315ac0
#define public_6315ae0 _public_6315ae0

PROC_DECLARE(0x6315a50, internal_6315a50, public_6315a50);
extern "C" NAKED register_t __cdecl internal_6315a50()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6315ab8
        mov ecx, eax
        cmp eax, ecx
        jne public_6315ab8
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6315a9f
        nop 
        lea esp, ss:[esp]
        public_6315a80 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6318550
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6315a80
        public_6315a9f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6315ae0
        public_6315ab8 : nop
        cmp eax, edi
        je public_6315ae0
        lea esp, ss:[esp]
        public_6315ac0 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_628ffd0
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_62b5ff0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6315ac0
        public_6315ae0 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6391d5a
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6315a50)
    }
}

#undef public_6315a80
#undef public_6315a9f
#undef public_6315ab8
#undef public_6315ac0
#undef public_6315ae0
