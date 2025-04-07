#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6268150 _public_6268150
#define public_6268165 _public_6268165
#define public_6268192 _public_6268192
#define public_6268194 _public_6268194
#define public_62681bf _public_62681bf

PROC_DECLARE(0x6268130, internal_6268130, public_6268130);
extern "C" NAKED register_t __cdecl internal_6268130()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp edi, eax
        jbe public_6268192
        sub edi, eax
        mov eax, edi
        mov edi, dword ptr ds : [esi+4]
        je public_62681bf
        push ebx
        push ebp
        mov ebp, eax
        lea esp, ss:[esp]
        public_6268150 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x28
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6268165
        mov ebx, eax
        public_6268165 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x18]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_626c1e0
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        inc ecx
        dec ebp
        mov dword ptr ds : [esi+8], ecx
        jne public_6268150
        pop ebp
        pop ebx
        pop edi
        pop esi
        ret 0x24
        public_6268192 : nop
        jae public_62681bf
        public_6268194 : nop
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        dec ecx
        mov eax, ecx
        cmp edi, eax
        mov dword ptr ds : [esi+8], ecx
        jb public_6268194
        public_62681bf : nop
        pop edi
        pop esi
        ret 0x24
        UNREACHABLE_TRAP(0x6268130)
    }
}

#undef public_6268150
#undef public_6268165
#undef public_6268192
#undef public_6268194
#undef public_62681bf
