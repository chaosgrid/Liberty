#include "FLMaterials-PCH.h"


#define public_67000bc _public_67000bc
#define public_67000e0 _public_67000e0
#define public_67000e2 _public_67000e2
#define public_6700121 _public_6700121
#define public_6700148 _public_6700148
#define public_6700176 _public_6700176
#define public_6700190 _public_6700190
#define public_6700195 _public_6700195
#define public_67001ad _public_67001ad
#define public_67001e9 _public_67001e9

PROC_DECLARE(0x6700070, internal_6700070, public_6700070);
extern "C" NAKED register_t __cdecl internal_6700070()
{
    __asm
    {
        sub esp, 0x40
        push edi
        mov edi, dword ptr ss : [esp+0x48]
        mov al, byte ptr ds : [edi+0x6C]
        test al, al
        je public_67001e9
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[edi+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        mov eax, dword ptr ss : [esp+0x4C]
        test eax, eax
        je public_67000bc
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_67000bc
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_67000bc
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x8D
        push eax
        call dword ptr ds : [ecx+0xF0]
        public_67000bc : nop
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
        jb public_67000e0
        add eax, 0xFFFFFFFC
        jmp public_67000e2
        public_67000e0 : nop
        xor eax, eax
        public_67000e2 : nop
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
        mov esi, offset public_67030c4
        mov eax, 1
        public_6700121 : nop
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
        jne public_6700121
        mov ebx, dword ptr ds : [edi+4]
        mov esi, offset public_67030fc
        mov eax, 1
        public_6700148 : nop
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
        jne public_6700148
        mov al, byte ptr ds : [edi+0x64]
        mov ebx, dword ptr ds : [edi+4]
        test al, al
        mov eax, 0x89
        je public_6700190
        mov esi, offset public_6703094
        public_6700176 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6700176
        jmp public_67001ad
        public_6700190 : nop
        mov esi, offset public_6703074
        public_6700195 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6700195
        public_67001ad : nop
        mov ecx, dword ptr ds : [edi+0x68]
        test ecx, ecx
        pop esi
        pop ebx
        je public_67001e9
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+4]
        push edx
        call dword ptr ds : [eax+0x18]
        test al, al
        je public_67001e9
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
        public_67001e9 : nop
        xor eax, eax
        pop edi
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x6700070)
    }
}

#undef public_67000bc
#undef public_67000e0
#undef public_67000e2
#undef public_6700121
#undef public_6700148
#undef public_6700176
#undef public_6700190
#undef public_6700195
#undef public_67001ad
#undef public_67001e9
