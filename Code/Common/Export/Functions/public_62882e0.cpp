#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62882e0);
CLANG_FORWARD_PROC_SYMBOL(public_628f320);
CLANG_FORWARD_PROC_SYMBOL(public_6290020);
CLANG_FORWARD_PROC_SYMBOL(public_6290480);
CLANG_FORWARD_PROC_SYMBOL(public_6290840);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62882f0 _public_62882f0
#define public_6288320 _public_6288320
#define public_6288348 _public_6288348
#define public_628836d _public_628836d
#define public_6288371 _public_6288371
#define public_6288391 _public_6288391

PROC_DECLARE(0x62882e0, internal_62882e0, public_62882e0);
extern "C" NAKED register_t __cdecl internal_62882e0()
{
    __asm
    {
        mov ecx, offset public_63fc098
        jmp public_62882f0
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_62882f0 : nop
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
        je public_628836d
        mov ecx, eax
        cmp eax, ecx
        jne public_628836d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6288348
        nop 
        lea esp, ss:[esp]
        public_6288320 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6290020
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6290840
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6288320
        public_6288348 : nop
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
        call public_632c410
        jmp public_6288391
        public_628836d : nop
        cmp eax, edi
        je public_6288391
        public_6288371 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6290480
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_628f320
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6288371
        public_6288391 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6391d5a
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62882e0)
    }
}

#undef public_62882f0
#undef public_6288320
#undef public_6288348
#undef public_628836d
#undef public_6288371
#undef public_6288391
