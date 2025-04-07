#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1120);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4000);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4512);

#define public_6ef1152 _public_6ef1152
#define public_6ef1168 _public_6ef1168
#define public_6ef1191 _public_6ef1191
#define public_6ef11aa _public_6ef11aa
#define public_6ef11ba _public_6ef11ba
#define public_6ef11d8 _public_6ef11d8
#define public_6ef11eb _public_6ef11eb

PROC_DECLARE(0x6ef1120, internal_6ef1120, public_6ef1120);
extern "C" NAKED register_t __cdecl internal_6ef1120()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xB8]
        xor ebx, ebx
        cmp eax, ebx
        mov byte ptr ds : [esi+0x84], bl
        je public_6ef1168
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x48]
        mov eax, dword ptr ds : [esi+0xB8]
        cmp eax, ebx
        je public_6ef1152
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0xB8], ebx
        public_6ef1152 : nop
        mov eax, dword ptr ds : [esi+0xB8]
        cmp eax, ebx
        je public_6ef1168
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xB8], ebx
        public_6ef1168 : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [esi+0xD4], ebx
        je public_6ef11ba
        mov ecx, dword ptr ds : [esi+0x18]
        cmp ecx, 0xFFFFFFFF
        je public_6ef1191
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0x18], 0xFFFFFFFF
        public_6ef1191 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        cmp ecx, 0xFFFFFFFF
        je public_6ef11aa
        mov eax, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0x14], 0xFFFFFFFF
        public_6ef11aa : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        je public_6ef11ba
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x10], ebx
        public_6ef11ba : nop
        cmp dword ptr ds : [esi+0x28], ebx
        je public_6ef11eb
        mov eax, dword ptr ds : [esi+0xA8]
        cmp eax, ebx
        je public_6ef11d8
        push eax
        call public_6ef4512
        add esp, 4
        mov dword ptr ds : [esi+0xA8], ebx
        public_6ef11d8 : nop
        mov edx, dword ptr ds : [esi+0x28]
        push ebx
        push edx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x48], ebx
        call public_6ef4000
        mov dword ptr ds : [esi+0x28], ebx
        public_6ef11eb : nop
        mov dword ptr ds : [esi+0x80], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ef1120)
    }
}

#undef public_6ef1152
#undef public_6ef1168
#undef public_6ef1191
#undef public_6ef11aa
#undef public_6ef11ba
#undef public_6ef11d8
#undef public_6ef11eb
