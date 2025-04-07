#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6600850);

#define public_66008eb _public_66008eb
#define public_66008ed _public_66008ed
#define public_66008f4 _public_66008f4

PROC_DECLARE(0x6600850, internal_6600850, public_6600850);
extern "C" NAKED register_t __cdecl internal_6600850()
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
        mov dword ptr ss : [esp+0x10], offset public_6602040
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
        mov dword ptr ss : [esp+0x1C], offset public_6602c14
        mov dword ptr ss : [esp+0x24], 0xC0000000
        mov dword ptr ss : [esp+0x30], 2
        call dword ptr ds : [ecx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_66008f4
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
        je public_66008eb
        cmp dword ptr ss : [esp+0x48], ebx
        jne public_66008eb
        mov ebx, 1
        jmp public_66008ed
        public_66008eb : nop
        xor ebx, ebx
        public_66008ed : nop
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x10]
        public_66008f4 : nop
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
        UNREACHABLE_TRAP(0x6600850)
    }
}

#undef public_66008eb
#undef public_66008ed
#undef public_66008f4
