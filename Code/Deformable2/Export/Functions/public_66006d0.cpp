#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66006d0);

#define public_6600769 _public_6600769
#define public_660076b _public_660076b
#define public_6600772 _public_6600772

PROC_DECLARE(0x66006d0, internal_66006d0, public_66006d0);
extern "C" NAKED register_t __cdecl internal_66006d0()
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
        je public_6600772
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [esi]
        push ebx
        lea ecx, ss:[esp+0x4C]
        push ecx
        push 4
        push edx
        push edi
        push esi
        call dword ptr ds : [eax+0x18]
        test eax, eax
        je public_6600769
        cmp dword ptr ss : [esp+0x48], 4
        jne public_6600769
        mov ebx, 1
        jmp public_660076b
        public_6600769 : nop
        xor ebx, ebx
        public_660076b : nop
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x10]
        public_6600772 : nop
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
        UNREACHABLE_TRAP(0x66006d0)
    }
}

#undef public_6600769
#undef public_660076b
#undef public_6600772
