#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5a770);

#define public_6d5a792 _public_6d5a792
#define public_6d5a7a7 _public_6d5a7a7
#define public_6d5a7b2 _public_6d5a7b2
#define public_6d5a7cc _public_6d5a7cc
#define public_6d5a7ce _public_6d5a7ce
#define public_6d5a7d3 _public_6d5a7d3
#define public_6d5a7d9 _public_6d5a7d9
#define public_6d5a7e9 _public_6d5a7e9

PROC_DECLARE(0x6d5a770, internal_6d5a770, public_6d5a770);
extern "C" NAKED register_t __cdecl internal_6d5a770()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx+8]
        push esi
        mov esi, dword ptr ds : [eax+4]
        cmp esi, edx
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], eax
        je public_6d5a7e9
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6d64cb0]
        push edi
        public_6d5a792 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov edx, offset public_6d64efc
        je public_6d5a7a7
        mov edx, eax
        public_6d5a7a7 : nop
        mov edi, dword ptr ds : [esi+0x14]
        cmp edi, ebx
        mov ecx, edi
        jb public_6d5a7b2
        mov ecx, ebx
        public_6d5a7b2 : nop
        mov eax, dword ptr ds : [esi+0x10]
        push ecx
        push edx
        push eax
        call ebp
        add esp, 0xC
        test eax, eax
        jne public_6d5a7cc
        cmp edi, ebx
        jb public_6d5a7ce
        cmp edi, ebx
        setne al
        test eax, eax
        public_6d5a7cc : nop
        jge public_6d5a7d3
        public_6d5a7ce : nop
        mov esi, dword ptr ds : [esi+8]
        jmp public_6d5a7d9
        public_6d5a7d3 : nop
        mov dword ptr ss : [esp+0x10], esi
        mov esi, dword ptr ds : [esi]
        public_6d5a7d9 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d5a792
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop ebp
        pop ebx
        public_6d5a7e9 : nop
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d5a770)
    }
}

#undef public_6d5a792
#undef public_6d5a7a7
#undef public_6d5a7b2
#undef public_6d5a7cc
#undef public_6d5a7ce
#undef public_6d5a7d3
#undef public_6d5a7d9
#undef public_6d5a7e9
