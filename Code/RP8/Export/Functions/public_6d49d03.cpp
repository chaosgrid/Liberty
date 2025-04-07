#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d49b31);
CLANG_FORWARD_PROC_SYMBOL(public_6d49c05);

#define public_6d49d39 _public_6d49d39
#define public_6d49d89 _public_6d49d89
#define public_6d49da9 _public_6d49da9
#define public_6d49db0 _public_6d49db0
#define public_6d49de6 _public_6d49de6
#define public_6d49e06 _public_6d49e06
#define public_6d49e07 _public_6d49e07

PROC_DECLARE(0x6d49d03, internal_6d49d03, public_6d49d03);
extern "C" NAKED register_t __cdecl internal_6d49d03()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [edi+0x180]
        cmp byte ptr ds : [ebx+0x30], 0
        jne public_6d49d39
        mov ecx, dword ptr ds : [ebx+0x40]
        push dword ptr ds : [ebx+ecx*4+0x38]
        mov eax, dword ptr ds : [edi+0x184]
        push edi
        call dword ptr ds : [eax+0xC]
        test eax, eax
        pop ecx
        pop ecx
        je public_6d49e07
        inc dword ptr ds : [ebx+0x4C]
        mov byte ptr ds : [ebx+0x30], 1
        public_6d49d39 : nop
        mov eax, dword ptr ds : [ebx+0x44]
        sub eax, 0
        push esi
        je public_6d49d89
        dec eax
        je public_6d49db0
        dec eax
        jne public_6d49e06
        push dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [ebx+0x40]
        push dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edi+0x188]
        push dword ptr ss : [ebp+0xC]
        lea esi, ds:[ebx+0x34]
        push dword ptr ds : [ebx+0x48]
        push esi
        push dword ptr ds : [ebx+ecx*4+0x38]
        push edi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi]
        add esp, 0x1C
        cmp eax, dword ptr ds : [ebx+0x48]
        jb public_6d49e06
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+0x10]
        and dword ptr ds : [ebx+0x44], 0
        cmp dword ptr ds : [ecx], eax
        jae public_6d49e06
        public_6d49d89 : nop
        and dword ptr ds : [ebx+0x34], 0
        mov eax, dword ptr ds : [edi+0x114]
        dec eax
        mov dword ptr ds : [ebx+0x48], eax
        mov eax, dword ptr ds : [ebx+0x4C]
        cmp eax, dword ptr ds : [edi+0x118]
        jne public_6d49da9
        mov esi, edi
        call public_6d49c05
        public_6d49da9 : nop
        mov dword ptr ds : [ebx+0x44], 1
        public_6d49db0 : nop
        push dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [ebx+0x40]
        push dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edi+0x188]
        push dword ptr ss : [ebp+0xC]
        lea esi, ds:[ebx+0x34]
        push dword ptr ds : [ebx+0x48]
        push esi
        push dword ptr ds : [ebx+ecx*4+0x38]
        push edi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi]
        add esp, 0x1C
        cmp eax, dword ptr ds : [ebx+0x48]
        jb public_6d49e06
        cmp dword ptr ds : [ebx+0x4C], 1
        jne public_6d49de6
        call public_6d49b31
        public_6d49de6 : nop
        xor dword ptr ds : [ebx+0x40], 1
        and byte ptr ds : [ebx+0x30], 0
        lea eax, ds:[edi+0x114]
        mov ecx, dword ptr ds : [eax]
        inc ecx
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ds : [eax]
        push 2
        pop eax
        add ecx, eax
        mov dword ptr ds : [ebx+0x48], ecx
        mov dword ptr ds : [ebx+0x44], eax
        public_6d49e06 : nop
        pop esi
        public_6d49e07 : nop
        pop edi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d49d03)
    }
}

#undef public_6d49d39
#undef public_6d49d89
#undef public_6d49da9
#undef public_6d49db0
#undef public_6d49de6
#undef public_6d49e06
#undef public_6d49e07
