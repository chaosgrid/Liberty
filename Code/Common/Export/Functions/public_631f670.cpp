#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_631f670);

#define public_631f6ea _public_631f6ea
#define public_631f6f2 _public_631f6f2
#define public_631f71e _public_631f71e
#define public_631f728 _public_631f728
#define public_631f751 _public_631f751
#define public_631f759 _public_631f759
#define public_631f76e _public_631f76e
#define public_631f77e _public_631f77e
#define public_631f78e _public_631f78e

PROC_DECLARE(0x631f670, internal_631f670, public_631f670);
extern "C" NAKED register_t __cdecl internal_631f670()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 0xC
        push ebx
        push ebp
        or eax, 0xFFFFFFFF
        cmp ecx, eax
        push esi
        push edi
        mov esi, eax
        je public_631f77e
        cmp dword ptr ss : [esp+0x24], eax
        je public_631f77e
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_64018ec
        call public_6301640
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [public_64018f0]
        cmp ebp, eax
        je public_631f78e
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, offset public_64018ec
        mov edi, 0xFFFFFFFE
        mov esi, eax
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_64018f0]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x14], eax
        je public_631f6ea
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_631f6ea
        lea eax, ss:[esp+0x14]
        jmp public_631f6f2
        public_631f6ea : nop
        mov dword ptr ss : [esp+0x18], ecx
        lea eax, ss:[esp+0x18]
        public_631f6f2 : nop
        cmp dword ptr ds : [eax], esi
        je public_631f71e
        mov ebx, dword ptr ss : [esp+0x28]
        lea eax, ss:[ebp+0x10]
        xor edi, edi
        test eax, eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ss : [esp+0x28], edx
        je public_631f76e
        cmp edx, 0xFFFFFFFF
        je public_631f76e
        cmp dword ptr ss : [esp+0x20], edx
        jne public_631f728
        mov dword ptr ds : [ebx], 0x3F800000
        public_631f71e : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        public_631f728 : nop
        lea esi, ds:[eax+0x20]
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        call public_62fcfb0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], eax
        je public_631f751
        mov ecx, dword ptr ss : [esp+0x28]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_631f751
        lea eax, ss:[esp+0x18]
        jmp public_631f759
        public_631f751 : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_631f759 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        je public_631f71e
        mov edx, dword ptr ds : [eax+0x10]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx], edx
        pop ebx
        add esp, 0xC
        ret 
        public_631f76e : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx], 0
        pop ebx
        add esp, 0xC
        ret 
        public_631f77e : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        mov dword ptr ds : [ecx], eax
        pop ebx
        add esp, 0xC
        ret 
        public_631f78e : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x631f670)
    }
}

#undef public_631f6ea
#undef public_631f6f2
#undef public_631f71e
#undef public_631f728
#undef public_631f751
#undef public_631f759
#undef public_631f76e
#undef public_631f77e
#undef public_631f78e
