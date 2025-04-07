#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdceb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bdcec4 _public_6bdcec4
#define public_6bdced4 _public_6bdced4
#define public_6bdcedb _public_6bdcedb
#define public_6bdceeb _public_6bdceeb
#define public_6bdcef4 _public_6bdcef4
#define public_6bdcf1b _public_6bdcf1b

PROC_DECLARE(0x6bdceb0, internal_6bdceb0, public_6bdceb0);
extern "C" NAKED register_t __cdecl internal_6bdceb0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C]
        push edi
        mov dword ptr ds : [esi], offset public_6c0bb9c
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6bdcedb
        public_6bdcec4 : nop
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        je public_6bdced4
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bdced4 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0x2C]
        jne public_6bdcec4
        public_6bdcedb : nop
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        je public_6bdceeb
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bdceeb : nop
        mov ebx, dword ptr ds : [esi+0x2C]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_6bdcf1b
        public_6bdcef4 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6c09aaa
        mov ecx, dword ptr ds : [esi+0x30]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0x30], ecx
        jne public_6bdcef4
        public_6bdcf1b : nop
        mov eax, dword ptr ds : [esi+0x2C]
        push eax
        call public_6c09aaa
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+0x2C], 0
        mov dword ptr ds : [esi+0x30], 0
        mov ecx, esi
        pop esi
        pop ebx
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6bdceb0)
    }
}

#undef public_6bdcec4
#undef public_6bdced4
#undef public_6bdcedb
#undef public_6bdceeb
#undef public_6bdcef4
#undef public_6bdcf1b
