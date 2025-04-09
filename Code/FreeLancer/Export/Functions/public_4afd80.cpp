#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4afd80);
CLANG_FORWARD_PROC_SYMBOL(public_5b3770);

#define public_4afdf2 _public_4afdf2
#define public_4afdf6 _public_4afdf6
#define public_4afe28 _public_4afe28

PROC_DECLARE(0x4afd80, internal_4afd80, public_4afd80);
extern "C" NAKED register_t __cdecl internal_4afd80()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, ecx
        mov ecx, edi
        call dword ptr ds : [public_5c6404]
        mov ebx, dword ptr ds : [public_5c6d00]
        mov ebp, eax
        push 0
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], ebp
        call ebx
        cmp ebp, 1
        mov dword ptr ds : [esi], eax
        jle public_4afdf2
        push 1
        mov ecx, edi
        call ebx
        push 2
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        call ebx
        push 3
        mov ecx, edi
        mov dword ptr ds : [esi+8], eax
        call dword ptr ds : [public_5c6034]
        push 4
        mov ecx, edi
        mov byte ptr ds : [esi+0x14], al
        call dword ptr ds : [public_5c6034]
        mov byte ptr ds : [esi+0x15], al
        mov eax, ebp
        cmp eax, 5
        jle public_4afdf6
        push 5
        mov ecx, edi
        call ebx
        push 6
        mov ecx, edi
        mov dword ptr ds : [esi+0xC], eax
        call ebx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_4afdf6
        public_4afdf2 : nop
        mov byte ptr ds : [esi+0x16], 1
        public_4afdf6 : nop
        mov al, byte ptr ss : [esp+0x18]
        test al, al
        je public_4afe28
        mov eax, dword ptr ds : [esi]
        push eax
        call public_5b3770
        add esp, 4
        test eax, eax
        je public_4afe28
        fild dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [eax]
        fmul qword ptr ds : [public_5d5138]
        fst dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [eax+0x10]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx]
        public_4afe28 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x4afd80)
    }
}

#undef public_4afdf2
#undef public_4afdf6
#undef public_4afe28
