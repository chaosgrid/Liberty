#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626ac10);
CLANG_FORWARD_PROC_SYMBOL(public_626b520);
CLANG_FORWARD_PROC_SYMBOL(public_6270090);
CLANG_FORWARD_PROC_SYMBOL(public_6271360);
CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6271370 _public_6271370
#define public_627138c _public_627138c
#define public_6271392 _public_6271392
#define public_62713a0 _public_62713a0
#define public_62713b8 _public_62713b8
#define public_6271438 _public_6271438
#define public_6271440 _public_6271440
#define public_6271463 _public_6271463

PROC_DECLARE(0x6271360, internal_6271360, public_6271360);
extern "C" NAKED register_t __cdecl internal_6271360()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fbb78]
        sub esp, 0xC
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_6271392
        public_6271370 : nop
        mov edi, dword ptr ds : [esi+8]
        test edi, edi
        je public_627138c
        mov ecx, edi
        call public_6270090
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [public_63fbb78]
        add esp, 4
        public_627138c : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6271370
        public_6271392 : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_62713b8
        lea ebx, ds:[ebx]
        public_62713a0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_63fbb74
        call public_6271cc0
        cmp esi, edi
        jne public_62713a0
        public_62713b8 : nop
        mov eax, dword ptr ds : [public_63fbb84]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_63fbb80
        call public_626ac10
        mov ecx, dword ptr ds : [public_63fbb98]
        mov edx, dword ptr ds : [public_63fbba4]
        test edx, edx
        mov eax, dword ptr ds : [ecx]
        mov edi, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6271438
        mov edx, eax
        cmp eax, edx
        jne public_6271438
        mov edx, dword ptr ds : [ecx+4]
        push edx
        mov ecx, offset public_63fbb94
        call public_626b520
        mov eax, dword ptr ds : [public_63fbb98]
        mov ecx, dword ptr ds : [public_63fbb9c]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [public_63fbb98]
        mov dword ptr ds : [public_63fbba4], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_63fbb98]
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, offset public_63fbb94
        mov dword ptr ds : [eax+8], eax
        call public_632c410
        pop edi
        pop esi
        add esp, 0xC
        ret 
        public_6271438 : nop
        cmp eax, ecx
        je public_6271463
        lea esp, ss:[esp]
        public_6271440 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_63429f0
        push esi
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_63fbb94
        call public_62be400
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_6271440
        public_6271463 : nop
        pop edi
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6271360)
    }
}

#undef public_6271370
#undef public_627138c
#undef public_6271392
#undef public_62713a0
#undef public_62713b8
#undef public_6271438
#undef public_6271440
#undef public_6271463
