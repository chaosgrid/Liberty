#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3840);

#define public_6eb38e3 _public_6eb38e3
#define public_6eb38e5 _public_6eb38e5
#define public_6eb38ec _public_6eb38ec

PROC_DECLARE(0x6eb3840, internal_6eb3840, public_6eb3840);
extern "C" NAKED register_t __cdecl internal_6eb3840()
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
        je public_6eb38ec
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [esi]
        push 0
        lea edx, ss:[esp+0x4C]
        push edx
        lea ebx, ds:[eax*4]
        mov eax, dword ptr ss : [esp+0x58]
        push ebx
        push eax
        push edi
        push esi
        call dword ptr ds : [ecx+0x18]
        test eax, eax
        je public_6eb38e3
        cmp dword ptr ss : [esp+0x48], ebx
        jne public_6eb38e3
        mov ebx, 1
        jmp public_6eb38e5
        public_6eb38e3 : nop
        xor ebx, ebx
        public_6eb38e5 : nop
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x10]
        public_6eb38ec : nop
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
        UNREACHABLE_TRAP(0x6eb3840)
    }
}

#undef public_6eb38e3
#undef public_6eb38e5
#undef public_6eb38ec
