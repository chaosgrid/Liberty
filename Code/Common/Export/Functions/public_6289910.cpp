#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628f320);
CLANG_FORWARD_PROC_SYMBOL(public_62fd030);
CLANG_FORWARD_PROC_SYMBOL(public_634c6f0);
CLANG_FORWARD_PROC_SYMBOL(public_636c7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6289944 _public_6289944
#define public_628994c _public_628994c
#define public_628996f _public_628996f
#define public_6289977 _public_6289977
#define public_628998e _public_628998e
#define public_62899a9 _public_62899a9
#define public_62899bb _public_62899bb

PROC_DECLARE(0x6289910, internal_6289910, public_6289910);
extern "C" NAKED register_t __cdecl internal_6289910()
{
    __asm
    {
        sub esp, 8
        push esi
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, offset public_63fc098
        call public_62fd030
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [public_63fc09c]
        cmp ecx, eax
        je public_6289944
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_6289944
        lea ecx, ss:[esp+4]
        jmp public_628994c
        public_6289944 : nop
        mov dword ptr ss : [esp+8], eax
        lea ecx, ss:[esp+8]
        public_628994c : nop
        mov esi, dword ptr ds : [ecx]
        cmp esi, eax
        je public_628998e
        dec dword ptr ds : [esi+0x50]
        jne public_6289977
        push edi
        mov edi, dword ptr ds : [esi+0x28]
        test edi, edi
        je public_628996f
        mov ecx, edi
        call public_634c6f0
        push edi
        call public_6391d5a
        add esp, 4
        public_628996f : nop
        mov dword ptr ds : [esi+0x28], 0
        pop edi
        public_6289977 : nop
        mov eax, dword ptr ds : [esi+0x50]
        test eax, eax
        jne public_628998e
        push esi
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_63fc098
        call public_628f320
        public_628998e : nop
        mov eax, dword ptr ds : [public_63fc0a8]
        test eax, eax
        pop esi
        jne public_62899bb
        mov ecx, dword ptr ds : [public_63fc0bc]
        test ecx, ecx
        je public_62899a9
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x14]
        public_62899a9 : nop
        mov dword ptr ds : [public_63fc0bc], 0
        add esp, 8
        jmp public_636c7e0
        public_62899bb : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6289910)
    }
}

#undef public_6289944
#undef public_628994c
#undef public_628996f
#undef public_6289977
#undef public_628998e
#undef public_62899a9
#undef public_62899bb
