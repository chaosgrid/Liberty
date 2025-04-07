#include "Shading-PCH.h"


#define public_6eb2b84 _public_6eb2b84
#define public_6eb2b86 _public_6eb2b86
#define public_6eb2bc5 _public_6eb2bc5
#define public_6eb2bf0 _public_6eb2bf0
#define public_6eb2c17 _public_6eb2c17
#define public_6eb2c31 _public_6eb2c31

PROC_DECLARE(0x6eb2b40, internal_6eb2b40, public_6eb2b40);
extern "C" NAKED register_t __cdecl internal_6eb2b40()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [ebx+0x74]
        test al, al
        je public_6eb2c31
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        lea edx, ds:[ebx+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        mov edi, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        push 0
        push esi
        call dword ptr ds : [eax+0x108]
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, 4
        jb public_6eb2b84
        add eax, 0xFFFFFFFC
        jmp public_6eb2b86
        public_6eb2b84 : nop
        xor eax, eax
        public_6eb2b86 : nop
        mov edx, dword ptr ds : [esi]
        push eax
        push 0xB
        push 0
        push esi
        call dword ptr ds : [edx+0xF8]
        mov ecx, dword ptr ds : [edi+0x20]
        mov eax, dword ptr ds : [esi]
        inc ecx
        push ecx
        push 0xD
        push 0
        push esi
        call dword ptr ds : [eax+0xF8]
        mov eax, dword ptr ds : [edi+0x24]
        mov edx, dword ptr ds : [esi]
        inc eax
        push eax
        push 0xE
        push 0
        push esi
        call dword ptr ds : [edx+0xF8]
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6ed1140
        mov eax, 1
        public_6eb2bc5 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 0
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6eb2bc5
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6ed1178
        mov eax, 1
        lea esp, ss:[esp]
        public_6eb2bf0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 1
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6eb2bf0
        mov ebx, dword ptr ds : [ebx+4]
        mov esi, offset public_6ed1100
        mov eax, 0x89
        public_6eb2c17 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6eb2c17
        pop edi
        pop esi
        public_6eb2c31 : nop
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6eb2b40)
    }
}

#undef public_6eb2b84
#undef public_6eb2b86
#undef public_6eb2bc5
#undef public_6eb2bf0
#undef public_6eb2c17
#undef public_6eb2c31
