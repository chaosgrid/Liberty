#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb36b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6eb372e _public_6eb372e
#define public_6eb3762 _public_6eb3762
#define public_6eb3764 _public_6eb3764
#define public_6eb376c _public_6eb376c

PROC_DECLARE(0x6eb36b0, internal_6eb36b0, public_6eb36b0);
extern "C" NAKED register_t __cdecl internal_6eb36b0()
{
    __asm
    {
        sub esp, 0x34
        push ebp
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
        xor ebp, ebp
        call dword ptr ds : [ecx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6eb376c
        push ebx
        mov ebx, dword ptr ss : [esp+0x50]
        test ebx, ebx
        jne public_6eb372e
        mov eax, dword ptr ds : [esi]
        push ebx
        push edi
        push esi
        call dword ptr ds : [eax+0x28]
        mov ebx, eax
        public_6eb372e : nop
        push ebx
        call public_6ed0c5c
        add esp, 4
        test eax, eax
        je public_6eb3764
        mov ecx, dword ptr ss : [esp+0x54]
        push 0
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x50]
        push ecx
        push ebx
        push eax
        push edi
        push esi
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_6eb3762
        cmp dword ptr ss : [esp+0x4C], ebx
        jne public_6eb3762
        mov ebp, 1
        jmp public_6eb3764
        public_6eb3762 : nop
        xor ebp, ebp
        public_6eb3764 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [edx+0x10]
        pop ebx
        public_6eb376c : nop
        xor eax, eax
        test ebp, ebp
        setne al
        pop edi
        pop esi
        pop ebp
        dec eax
        and eax, 0x80004005
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x6eb36b0)
    }
}

#undef public_6eb372e
#undef public_6eb3762
#undef public_6eb3764
#undef public_6eb376c
