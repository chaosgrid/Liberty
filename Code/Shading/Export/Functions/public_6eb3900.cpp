#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3900);

#define public_6eb399b _public_6eb399b
#define public_6eb399d _public_6eb399d
#define public_6eb39a4 _public_6eb39a4

PROC_DECLARE(0x6eb3900, internal_6eb3900, public_6eb3900);
extern "C" NAKED register_t __cdecl internal_6eb3900()
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
        mov dword ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x34], 0x8000080
        mov dword ptr ss : [esp+0x14], 0x34
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        xor ebx, ebx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x1C], offset public_6ed4264
        mov dword ptr ss : [esp+0x24], 0xC0000000
        mov dword ptr ss : [esp+0x30], 2
        call dword ptr ds : [ecx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6eb39a4
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [esi]
        push ebx
        mov ebx, dword ptr ss : [esp+0x50]
        lea ecx, ss:[esp+0x4C]
        push ecx
        push ebx
        push edx
        push edi
        push esi
        call dword ptr ds : [eax+0x18]
        test eax, eax
        je public_6eb399b
        cmp dword ptr ss : [esp+0x48], ebx
        jne public_6eb399b
        mov ebx, 1
        jmp public_6eb399d
        public_6eb399b : nop
        xor ebx, ebx
        public_6eb399d : nop
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x10]
        public_6eb39a4 : nop
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
        UNREACHABLE_TRAP(0x6eb3900)
    }
}

#undef public_6eb399b
#undef public_6eb399d
#undef public_6eb39a4
