#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb35d0);

#define public_6eb3659 _public_6eb3659
#define public_6eb365d _public_6eb365d
#define public_6eb3661 _public_6eb3661
#define public_6eb368d _public_6eb368d
#define public_6eb368f _public_6eb368f
#define public_6eb3696 _public_6eb3696

PROC_DECLARE(0x6eb35d0, internal_6eb35d0, public_6eb35d0);
extern "C" NAKED register_t __cdecl internal_6eb35d0()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x40]
        push edi
        xor eax, eax
        lea edx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x10], offset public_6ed4094
        mov ecx, 0xB
        lea edi, ss:[esp+0x14]
        rep stosd
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [esi]
        push edx
        push esi
        mov dword ptr ss : [esp+0x24], 0x80000000
        mov dword ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x30], 3
        mov dword ptr ss : [esp+0x34], 0x8000080
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x14], 0x34
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        xor ebx, ebx
        call dword ptr ds : [ecx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6eb3696
        mov ebx, dword ptr ss : [esp+0x54]
        test ebx, ebx
        je public_6eb365d
        mov eax, dword ptr ds : [esi]
        push 0
        push edi
        push esi
        call dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ss : [esp+0x4C]
        shr eax, 2
        cmp eax, ecx
        jae public_6eb3659
        mov ecx, eax
        public_6eb3659 : nop
        mov dword ptr ds : [ebx], ecx
        jmp public_6eb3661
        public_6eb365d : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        public_6eb3661 : nop
        mov eax, dword ptr ss : [esp+0x50]
        push 0
        lea edx, ss:[esp+0x4C]
        push edx
        lea ebx, ds:[ecx*4]
        mov ecx, dword ptr ds : [esi]
        push ebx
        push eax
        push edi
        push esi
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_6eb368d
        cmp dword ptr ss : [esp+0x48], ebx
        jne public_6eb368d
        mov ebx, 1
        jmp public_6eb368f
        public_6eb368d : nop
        xor ebx, ebx
        public_6eb368f : nop
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x10]
        public_6eb3696 : nop
        xor eax, eax
        test ebx, ebx
        setne al
        pop edi
        pop esi
        pop ebx
        dec eax
        and eax, 0x80004005
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x6eb35d0)
    }
}

#undef public_6eb3659
#undef public_6eb365d
#undef public_6eb3661
#undef public_6eb368d
#undef public_6eb368f
#undef public_6eb3696
