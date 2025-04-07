#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6600790);

#define public_6600833 _public_6600833
#define public_6600835 _public_6600835
#define public_660083c _public_660083c

PROC_DECLARE(0x6600790, internal_6600790, public_6600790);
extern "C" NAKED register_t __cdecl internal_6600790()
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
        je public_660083c
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
        je public_6600833
        cmp dword ptr ss : [esp+0x48], ebx
        jne public_6600833
        mov ebx, 1
        jmp public_6600835
        public_6600833 : nop
        xor ebx, ebx
        public_6600835 : nop
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x10]
        public_660083c : nop
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
        UNREACHABLE_TRAP(0x6600790)
    }
}

#undef public_6600833
#undef public_6600835
#undef public_660083c
