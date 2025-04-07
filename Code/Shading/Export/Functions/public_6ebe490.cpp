#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ebe4a8 _public_6ebe4a8
#define public_6ebe4b7 _public_6ebe4b7
#define public_6ebe4d6 _public_6ebe4d6
#define public_6ebe4e3 _public_6ebe4e3
#define public_6ebe500 _public_6ebe500
#define public_6ebe518 _public_6ebe518
#define public_6ebe523 _public_6ebe523
#define public_6ebe54f _public_6ebe54f

PROC_DECLARE(0x6ebe490, internal_6ebe490, public_6ebe490);
extern "C" NAKED register_t __cdecl internal_6ebe490()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x68]
        xor ebx, ebx
        cmp eax, ebx
        je public_6ebe4a8
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x68], ebx
        public_6ebe4a8 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        xor ebp, ebp
        cmp eax, ebx
        mov dword ptr ds : [edi], offset public_6ed1298
        jbe public_6ebe4e3
        public_6ebe4b7 : nop
        mov esi, dword ptr ds : [edi+0x18]
        mov eax, dword ptr ds : [esi+ebx+4]
        mov ecx, dword ptr ds : [edi+8]
        add esi, ebx
        cmp eax, 0xFFFFFFFF
        je public_6ebe4d6
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        public_6ebe4d6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        inc ebp
        add ebx, 0x2C
        cmp ebp, eax
        jb public_6ebe4b7
        xor ebx, ebx
        public_6ebe4e3 : nop
        mov ecx, dword ptr ds : [edi+0x18]
        cmp ecx, ebx
        je public_6ebe523
        mov eax, dword ptr ds : [ecx-4]
        lea ebp, ds:[ecx-4]
        mov esi, eax
        imul esi, 0x2C
        add esi, ecx
        dec eax
        js public_6ebe518
        lea ebx, ds:[eax+1]
        lea ecx, ds:[ecx]
        public_6ebe500 : nop
        mov eax, dword ptr ds : [esi-0x2C]
        sub esi, 0x2C
        push eax
        call public_6ed0c50
        add esp, 4
        dec ebx
        mov dword ptr ds : [esi], 0
        jne public_6ebe500
        public_6ebe518 : nop
        push ebp
        call public_6ed0c50
        add esp, 4
        xor ebx, ebx
        public_6ebe523 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        push ecx
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0xC], ebx
        call public_6ed0c50
        mov al, byte ptr ss : [esp+0x18]
        add esp, 4
        test al, 1
        mov dword ptr ds : [edi+0x14], ebx
        je public_6ebe54f
        push edi
        call public_6ed0c50
        add esp, 4
        public_6ebe54f : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ebe490)
    }
}

#undef public_6ebe4a8
#undef public_6ebe4b7
#undef public_6ebe4d6
#undef public_6ebe4e3
#undef public_6ebe500
#undef public_6ebe518
#undef public_6ebe523
#undef public_6ebe54f
