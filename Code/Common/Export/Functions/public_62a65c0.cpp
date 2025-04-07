#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a65c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62a65dc _public_62a65dc
#define public_62a65f7 _public_62a65f7
#define public_62a6601 _public_62a6601
#define public_62a6625 _public_62a6625
#define public_62a6627 _public_62a6627
#define public_62a666e _public_62a666e
#define public_62a6675 _public_62a6675
#define public_62a6681 _public_62a6681

PROC_DECLARE(0x62a65c0, internal_62a65c0, public_62a65c0);
extern "C" NAKED register_t __cdecl internal_62a65c0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x54]
        xor ebx, ebx
        xor ebp, ebp
        cmp al, bl
        je public_62a65dc
        pop edi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 
        public_62a65dc : nop
        mov eax, dword ptr ds : [edi+0x40]
        dec eax
        mov ecx, dword ptr ds : [edi+0x48]
        push esi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ecx
        je public_62a65f7
        sub eax, 2
        jne public_62a6681
        public_62a65f7 : nop
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        je public_62a6681
        public_62a6601 : nop
        push 0x14
        call public_6391d9c
        add esp, 4
        cmp eax, ebx
        je public_62a6625
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov byte ptr ds : [eax+0xC], bl
        mov byte ptr ds : [eax+0xD], bl
        mov byte ptr ds : [eax+0xE], bl
        jmp public_62a6627
        public_62a6625 : nop
        xor eax, eax
        public_62a6627 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [edx+0xE8]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [edx+0xB0]
        mov dword ptr ds : [eax+8], ecx
        cmp dword ptr ds : [edi+0x40], 1
        sete dl
        cmp ebp, ebx
        mov byte ptr ds : [eax+0xC], dl
        mov ecx, dword ptr ds : [esi+8]
        mov dl, byte ptr ds : [ecx+0xF0]
        mov byte ptr ds : [eax+0xD], dl
        mov ecx, dword ptr ds : [esi+8]
        mov dl, byte ptr ds : [ecx+0xF1]
        mov byte ptr ds : [eax+0xE], dl
        jne public_62a666e
        mov ebp, eax
        jmp public_62a6675
        public_62a666e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x10], eax
        public_62a6675 : nop
        mov esi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x10], eax
        cmp esi, dword ptr ss : [esp+0x14]
        jne public_62a6601
        public_62a6681 : nop
        pop esi
        pop edi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62a65c0)
    }
}

#undef public_62a65dc
#undef public_62a65f7
#undef public_62a6601
#undef public_62a6625
#undef public_62a6627
#undef public_62a666e
#undef public_62a6675
#undef public_62a6681
