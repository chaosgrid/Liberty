#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16a30);
CLANG_FORWARD_PROC_SYMBOL(public_6d17070);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d16a37 _public_6d16a37
#define public_6d16a40 _public_6d16a40
#define public_6d16a43 _public_6d16a43
#define public_6d16a61 _public_6d16a61
#define public_6d16a6c _public_6d16a6c
#define public_6d16a6e _public_6d16a6e
#define public_6d16a86 _public_6d16a86
#define public_6d16a90 _public_6d16a90
#define public_6d16ab9 _public_6d16ab9
#define public_6d16abe _public_6d16abe
#define public_6d16ad4 _public_6d16ad4
#define public_6d16adc _public_6d16adc
#define public_6d16ae7 _public_6d16ae7
#define public_6d16afd _public_6d16afd
#define public_6d16b06 _public_6d16b06

PROC_DECLARE(0x6d16a30, internal_6d16a30, public_6d16a30);
extern "C" NAKED register_t __cdecl internal_6d16a30()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        xor ebp, ebp
        public_6d16a37 : nop
        test ebp, ebp
        jne public_6d16a40
        mov ebp, dword ptr ds : [ebx+8]
        jmp public_6d16a43
        public_6d16a40 : nop
        mov ebp, dword ptr ss : [ebp]
        public_6d16a43 : nop
        test ebp, ebp
        je public_6d16b06
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test al, al
        je public_6d16a37
        push edi
        xor edi, edi
        public_6d16a61 : nop
        test edi, edi
        jne public_6d16a6c
        mov edx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [edx+4]
        jmp public_6d16a6e
        public_6d16a6c : nop
        mov edi, dword ptr ds : [edi]
        public_6d16a6e : nop
        test edi, edi
        je public_6d16a90
        mov eax, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov ecx, dword ptr ds : [esi+4]
        je public_6d16a86
        test ecx, ecx
        je public_6d16a86
        cmp ecx, eax
        jne public_6d16a61
        public_6d16a86 : nop
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        jmp public_6d16a61
        public_6d16a90 : nop
        mov ecx, esi
        call public_6d17070
        push esi
        call public_6d5ffb0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp eax, ebp
        pop edi
        jne public_6d16abe
        mov eax, dword ptr ss : [ebp]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ds : [ebx+8], eax
        jne public_6d16ab9
        mov dword ptr ds : [ebx+0xC], ecx
        jmp public_6d16ae7
        public_6d16ab9 : nop
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d16ae7
        public_6d16abe : nop
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, ebp
        jne public_6d16adc
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov dword ptr ds : [ebx+0xC], eax
        jne public_6d16ad4
        mov dword ptr ds : [ebx+8], eax
        jmp public_6d16ae7
        public_6d16ad4 : nop
        mov dword ptr ds : [eax], 0
        jmp public_6d16ae7
        public_6d16adc : nop
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [ecx+4], eax
        public_6d16ae7 : nop
        mov al, byte ptr ds : [ebx+0x10]
        test al, al
        je public_6d16afd
        mov eax, dword ptr ds : [ebx+0x14]
        mov dword ptr ss : [ebp], eax
        pop esi
        mov dword ptr ds : [ebx+0x14], ebp
        pop ebp
        pop ebx
        ret 4
        public_6d16afd : nop
        push ebp
        call public_6d5ffb0
        add esp, 4
        public_6d16b06 : nop
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d16a30)
    }
}

#undef public_6d16a37
#undef public_6d16a40
#undef public_6d16a43
#undef public_6d16a61
#undef public_6d16a6c
#undef public_6d16a6e
#undef public_6d16a86
#undef public_6d16a90
#undef public_6d16ab9
#undef public_6d16abe
#undef public_6d16ad4
#undef public_6d16adc
#undef public_6d16ae7
#undef public_6d16afd
#undef public_6d16b06
