#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6613210);

#define public_661322e _public_661322e
#define public_6613240 _public_6613240
#define public_6613264 _public_6613264
#define public_6613267 _public_6613267
#define public_6613280 _public_6613280

PROC_DECLARE(0x6613210, internal_6613210, public_6613210);
extern "C" NAKED register_t __cdecl internal_6613210()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebp, ebp
        push edi
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov eax, dword ptr ds : [esi]
        cmp eax, ebp
        je public_661322e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], ebp
        public_661322e : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        cmp eax, ebp
        mov dword ptr ds : [esi], eax
        je public_6613240
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_6613240 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [public_662906c]
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, ebp
        je public_6613264
        push eax
        call ebx
        add esp, 4
        mov dword ptr ds : [esi+0xC], eax
        jmp public_6613267
        public_6613264 : nop
        mov dword ptr ds : [esi+0xC], ebp
        public_6613267 : nop
        mov edi, dword ptr ds : [edi+0x10]
        cmp edi, ebp
        je public_6613280
        push edi
        call ebx
        add esp, 4
        mov dword ptr ds : [esi+0x10], eax
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6613280 : nop
        mov dword ptr ds : [esi+0x10], ebp
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6613210)
    }
}

#undef public_661322e
#undef public_6613240
#undef public_6613264
#undef public_6613267
#undef public_6613280
