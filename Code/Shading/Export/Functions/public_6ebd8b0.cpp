#include "Shading-PCH.h"


#define public_6ebd8f1 _public_6ebd8f1
#define public_6ebd915 _public_6ebd915
#define public_6ebd917 _public_6ebd917
#define public_6ebd956 _public_6ebd956
#define public_6ebd980 _public_6ebd980
#define public_6ebd9b0 _public_6ebd9b0
#define public_6ebd9ca _public_6ebd9ca
#define public_6ebd9d0 _public_6ebd9d0
#define public_6ebd9e8 _public_6ebd9e8
#define public_6ebda24 _public_6ebda24

PROC_DECLARE(0x6ebd8b0, internal_6ebd8b0, public_6ebd8b0);
extern "C" NAKED register_t __cdecl internal_6ebd8b0()
{
    __asm
    {
        sub esp, 0x40
        push edi
        mov edi, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[edi+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        mov eax, dword ptr ss : [esp+0x4C]
        test eax, eax
        je public_6ebd8f1
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6ebd8f1
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_6ebd8f1
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x8D
        push eax
        call dword ptr ds : [ecx+0xF0]
        public_6ebd8f1 : nop
        push ebx
        mov ebx, dword ptr ds : [edi+0x18]
        mov eax, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [esi]
        push eax
        push 0
        push esi
        call dword ptr ds : [edx+0x108]
        mov eax, dword ptr ds : [ebx+0x1C]
        cmp eax, 4
        jb public_6ebd915
        add eax, 0xFFFFFFFC
        jmp public_6ebd917
        public_6ebd915 : nop
        xor eax, eax
        public_6ebd917 : nop
        mov ecx, dword ptr ds : [esi]
        push eax
        push 0xB
        push 0
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [ebx+0x20]
        mov edx, dword ptr ds : [esi]
        inc eax
        push eax
        push 0xD
        push 0
        push esi
        call dword ptr ds : [edx+0xF8]
        mov edx, dword ptr ds : [ebx+0x24]
        mov ecx, dword ptr ds : [esi]
        inc edx
        push edx
        push 0xE
        push 0
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov ebx, dword ptr ds : [edi+4]
        mov esi, offset public_6ed26dc
        mov eax, 1
        public_6ebd956 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push 0
        push ebx
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6ebd956
        mov ebx, dword ptr ds : [edi+4]
        mov esi, offset public_6ed2714
        mov eax, 1
        lea ecx, ds:[ecx]
        public_6ebd980 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push 1
        push ebx
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6ebd980
        mov al, byte ptr ds : [edi+0x64]
        mov ebx, dword ptr ds : [edi+4]
        test al, al
        mov eax, 0x89
        je public_6ebd9ca
        mov esi, offset public_6ed26ac
        mov edi, edi
        public_6ebd9b0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6ebd9b0
        jmp public_6ebd9e8
        public_6ebd9ca : nop
        mov esi, offset public_6ed268c
        nop 
        public_6ebd9d0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6ebd9d0
        public_6ebd9e8 : nop
        mov ecx, dword ptr ds : [edi+0x68]
        test ecx, ecx
        pop esi
        pop ebx
        je public_6ebda24
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+4]
        push edx
        call dword ptr ds : [eax+0x18]
        test al, al
        je public_6ebda24
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push 2
        push 0x18
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edi, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+4]
        push eax
        push 0
        push edi
        call dword ptr ds : [edx+0x100]
        public_6ebda24 : nop
        xor eax, eax
        pop edi
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x6ebd8b0)
    }
}

#undef public_6ebd8f1
#undef public_6ebd915
#undef public_6ebd917
#undef public_6ebd956
#undef public_6ebd980
#undef public_6ebd9b0
#undef public_6ebd9ca
#undef public_6ebd9d0
#undef public_6ebd9e8
#undef public_6ebda24
