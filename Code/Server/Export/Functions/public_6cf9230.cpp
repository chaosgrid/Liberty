#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);
CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0db30);

#define public_6cf927c _public_6cf927c
#define public_6cf9280 _public_6cf9280
#define public_6cf9288 _public_6cf9288
#define public_6cf92b5 _public_6cf92b5
#define public_6cf92b9 _public_6cf92b9
#define public_6cf92c5 _public_6cf92c5
#define public_6cf9312 _public_6cf9312
#define public_6cf9320 _public_6cf9320
#define public_6cf9322 _public_6cf9322
#define public_6cf9332 _public_6cf9332
#define public_6cf936e _public_6cf936e
#define public_6cf9377 _public_6cf9377

PROC_DECLARE(0x6cf9230, internal_6cf9230, public_6cf9230);
extern "C" NAKED register_t __cdecl internal_6cf9230()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x18]
        sub esp, 8
        test eax, eax
        push ebx
        push esi
        push edi
        je public_6cf9377
        mov eax, dword ptr ss : [esp+0x30]
        test eax, eax
        jle public_6cf9377
        test dword ptr ss : [esp+0x1C], 0x3FFFFFFF
        mov esi, 0xFFFFFFFC
        je public_6cf9288
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        call public_6d006c0
        add esp, 0xC
        test al, al
        jne public_6cf927c
        xor eax, eax
        jmp public_6cf9280
        public_6cf927c : nop
        mov eax, dword ptr ss : [esp+0xC]
        public_6cf9280 : nop
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        jne public_6cf92c5
        public_6cf9288 : nop
        test dword ptr ss : [esp+0x18], 0x3FFFFFFF
        je public_6cf936e
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        call public_6d006c0
        add esp, 0xC
        test al, al
        jne public_6cf92b5
        xor eax, eax
        jmp public_6cf92b9
        public_6cf92b5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        public_6cf92b9 : nop
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        je public_6cf936e
        public_6cf92c5 : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, 0x3FFFFFFF
        mov ebx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x28]
        je public_6cf9322
        push eax
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cf9322
        add eax, 0xC
        test eax, eax
        je public_6cf9322
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6cf9322
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_6cf9322
        test ebx, ebx
        jne public_6cf9312
        mov ebx, dword ptr ds : [eax+0x13C]
        public_6cf9312 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        test ecx, ecx
        jne public_6cf9320
        lea esi, ds:[eax+0x108]
        public_6cf9320 : nop
        xor edi, edi
        public_6cf9322 : nop
        test esi, esi
        jne public_6cf9332
        mov eax, 0xFFFFFFFE
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_6cf9332 : nop
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x34]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        push eax
        mov eax, dword ptr ss : [esp+0x34]
        push ecx
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push eax
        push edi
        sub esp, 0x34
        mov edi, esp
        mov ecx, 0xD
        rep movsd
        mov ecx, dword ptr ss : [esp+0x68]
        push ebx
        push ecx
        mov ecx, dword ptr ss : [esp+0x60]
        push edx
        call public_6d0db30
        xor esi, esi
        public_6cf936e : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_6cf9377 : nop
        pop edi
        pop esi
        mov eax, 0xFFFFFFFC
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6cf9230)
    }
}

#undef public_6cf927c
#undef public_6cf9280
#undef public_6cf9288
#undef public_6cf92b5
#undef public_6cf92b9
#undef public_6cf92c5
#undef public_6cf9312
#undef public_6cf9320
#undef public_6cf9322
#undef public_6cf9332
#undef public_6cf936e
#undef public_6cf9377
