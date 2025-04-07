#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6380d90);
CLANG_FORWARD_PROC_SYMBOL(public_6380e30);
CLANG_FORWARD_PROC_SYMBOL(public_638d930);
CLANG_FORWARD_PROC_SYMBOL(public_638d9f0);

#define public_638da59 _public_638da59
#define public_638da7d _public_638da7d
#define public_638da92 _public_638da92
#define public_638da94 _public_638da94
#define public_638daaf _public_638daaf
#define public_638dab8 _public_638dab8
#define public_638dad8 _public_638dad8
#define public_638db04 _public_638db04
#define public_638db23 _public_638db23
#define public_638db43 _public_638db43
#define public_638db47 _public_638db47
#define public_638db91 _public_638db91

PROC_DECLARE(0x638d9f0, internal_638d9f0, public_638d9f0);
extern "C" NAKED register_t __cdecl internal_638d9f0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+0x34]
        push edi
        xor ebp, ebp
        push eax
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x1C], 1
        mov dword ptr ss : [esp+0x18], ebp
        call public_636ec10
        mov ebx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ebx], 0xFFFFFFFF
        mov dword ptr ds : [ebx+4], 0x7FEFFFFF
        mov ecx, dword ptr ds : [public_658b24c]
        mov edi, eax
        lea edx, ds:[ecx+ecx+0x14]
        add esp, 4
        cmp edi, edx
        jle public_638da59
        inc dword ptr ds : [public_658ba50]
        cmp dword ptr ds : [esi+0x28], ebp
        mov dword ptr ss : [esp+0x14], 1
        jne public_638da59
        push esi
        call public_6380d90
        add esp, 4
        mov dword ptr ds : [esi+0x28], eax
        public_638da59 : nop
        mov eax, dword ptr ds : [public_658b24c]
        mov ebp, dword ptr ss : [esp+0x2C]
        add eax, 0xF
        cmp edi, eax
        jle public_638dab8
        mov edi, dword ptr ds : [esi+0x38]
        test edi, edi
        je public_638dab8
        mov eax, dword ptr ds : [edi+4]
        add edi, 4
        add edi, 4
        test eax, eax
        je public_638dab8
        public_638da7d : nop
        test dword ptr ds : [eax+0xC], 0x4000000
        je public_638daaf
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, esi
        jne public_638da92
        mov eax, dword ptr ds : [eax+8]
        jmp public_638da94
        public_638da92 : nop
        mov eax, ecx
        public_638da94 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ebp
        push ecx
        push ebx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push esi
        push eax
        call public_638d930
        add esp, 0x1C
        public_638daaf : nop
        mov eax, dword ptr ds : [edi]
        add edi, 4
        test eax, eax
        jne public_638da7d
        public_638dab8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_638db23
        mov edi, dword ptr ds : [esi+0x3C]
        test edi, edi
        mov dword ptr ss : [esp+0x18], eax
        je public_638db04
        mov eax, dword ptr ds : [edi+4]
        add edi, 4
        add edi, 4
        test eax, eax
        je public_638db04
        public_638dad8 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ebp
        push ecx
        push ebx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push esi
        push eax
        call public_638d930
        mov eax, dword ptr ds : [edi]
        add esp, 0x1C
        add edi, 4
        test eax, eax
        jne public_638dad8
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_638db23
        public_638db04 : nop
        mov ecx, dword ptr ds : [esi+0x4C]
        push ecx
/*FIXUP push offset public_63fa568 @0x638db08*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa568
        call public_6356960
        push 0
        push esi
        push 5
        call public_6378600
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0x14
        public_638db23 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        je public_638db43
        mov edi, dword ptr ss : [esp+0x28]
        push ebp
        push edi
        push eax
        push esi
        call public_6380e30
        fstp st(0)
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0x10
        jmp public_638db47
        public_638db43 : nop
        mov edi, dword ptr ss : [esp+0x28]
        public_638db47 : nop
        cmp dword ptr ds : [public_658b078], 3
        jl public_638db91
        mov edx, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [eax+0x4C]
        push edx
        mov edx, dword ptr ds : [edi+4]
        push ecx
        mov ecx, dword ptr ds : [edi]
        push edx
        mov edx, dword ptr ds : [ebx+4]
        push ecx
        mov ecx, dword ptr ds : [ebx]
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        push edx
        mov edx, dword ptr ds : [esi+0x4C]
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
        push edx
        push eax
/*FIXUP push offset public_63fa4f8 @0x638db7e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa4f8
        push ecx
        call dword ptr ds : [public_63991e8]
        mov eax, dword ptr ss : [esp+0x40]
        add esp, 0x30
        public_638db91 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x638d9f0)
    }
}

#undef public_638da59
#undef public_638da7d
#undef public_638da92
#undef public_638da94
#undef public_638daaf
#undef public_638dab8
#undef public_638dad8
#undef public_638db04
#undef public_638db23
#undef public_638db43
#undef public_638db47
#undef public_638db91
