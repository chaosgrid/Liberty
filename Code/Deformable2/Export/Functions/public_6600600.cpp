#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6600600);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_660067e _public_660067e
#define public_66006b2 _public_66006b2
#define public_66006b4 _public_66006b4
#define public_66006bc _public_66006bc

PROC_DECLARE(0x6600600, internal_6600600, public_6600600);
extern "C" NAKED register_t __cdecl internal_6600600()
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
        mov dword ptr ss : [esp+0x10], offset public_6602040
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
        je public_66006bc
        push ebx
        mov ebx, dword ptr ss : [esp+0x50]
        test ebx, ebx
        jne public_660067e
        mov eax, dword ptr ds : [esi]
        push ebx
        push edi
        push esi
        call dword ptr ds : [eax+0x28]
        mov ebx, eax
        public_660067e : nop
        push ebx
        call public_6600bb6
        add esp, 4
        test eax, eax
        je public_66006b4
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
        je public_66006b2
        cmp dword ptr ss : [esp+0x4C], ebx
        jne public_66006b2
        mov ebp, 1
        jmp public_66006b4
        public_66006b2 : nop
        xor ebp, ebp
        public_66006b4 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [edx+0x10]
        pop ebx
        public_66006bc : nop
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
        UNREACHABLE_TRAP(0x6600600)
    }
}

#undef public_660067e
#undef public_66006b2
#undef public_66006b4
#undef public_66006bc
