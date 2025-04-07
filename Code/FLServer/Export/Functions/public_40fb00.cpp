#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fb00);
CLANG_FORWARD_PROC_SYMBOL(public_410750);
CLANG_FORWARD_PROC_SYMBOL(public_410940);
CLANG_FORWARD_PROC_SYMBOL(public_410d10);
CLANG_FORWARD_PROC_SYMBOL(public_411a70);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_40fb30 _public_40fb30
#define public_40fb4f _public_40fb4f
#define public_40fb74 _public_40fb74
#define public_40fb78 _public_40fb78
#define public_40fb98 _public_40fb98

PROC_DECLARE(0x40fb00, internal_40fb00, public_40fb00);
extern "C" NAKED register_t __cdecl internal_40fb00()
{
    __asm
    {
        sub esp, 0xC
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
        je public_40fb74
        mov ecx, eax
        cmp eax, ecx
        jne public_40fb74
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_40fb4f
        nop 
        lea esp, ss:[esp]
        public_40fb30 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_410d10
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_418978
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_40fb30
        public_40fb4f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_410750
        jmp public_40fb98
        public_40fb74 : nop
        cmp eax, edi
        je public_40fb98
        public_40fb78 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_411a70
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_410940
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_40fb78
        public_40fb98 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_418978
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_418978
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x40fb00)
    }
}

#undef public_40fb30
#undef public_40fb4f
#undef public_40fb74
#undef public_40fb78
#undef public_40fb98
