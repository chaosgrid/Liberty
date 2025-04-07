#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ebc167 _public_6ebc167
#define public_6ebc186 _public_6ebc186
#define public_6ebc191 _public_6ebc191
#define public_6ebc1b0 _public_6ebc1b0
#define public_6ebc1c8 _public_6ebc1c8
#define public_6ebc1d1 _public_6ebc1d1
#define public_6ebc203 _public_6ebc203

PROC_DECLARE(0x6ebc150, internal_6ebc150, public_6ebc150);
extern "C" NAKED register_t __cdecl internal_6ebc150()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x1C]
        xor ebp, ebp
        test eax, eax
        mov dword ptr ds : [edi], offset public_6ed1298
        jbe public_6ebc191
        xor ebx, ebx
        public_6ebc167 : nop
        mov esi, dword ptr ds : [edi+0x18]
        mov eax, dword ptr ds : [esi+ebx+4]
        mov ecx, dword ptr ds : [edi+8]
        add esi, ebx
        cmp eax, 0xFFFFFFFF
        je public_6ebc186
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        public_6ebc186 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        inc ebp
        add ebx, 0x2C
        cmp ebp, eax
        jb public_6ebc167
        public_6ebc191 : nop
        mov ecx, dword ptr ds : [edi+0x18]
        test ecx, ecx
        je public_6ebc1d1
        mov eax, dword ptr ds : [ecx-4]
        lea ebp, ds:[ecx-4]
        mov esi, eax
        imul esi, 0x2C
        add esi, ecx
        dec eax
        js public_6ebc1c8
        lea ebx, ds:[eax+1]
        nop 
        lea esp, ss:[esp]
        public_6ebc1b0 : nop
        mov eax, dword ptr ds : [esi-0x2C]
        sub esi, 0x2C
        push eax
        call public_6ed0c50
        add esp, 4
        dec ebx
        mov dword ptr ds : [esi], 0
        jne public_6ebc1b0
        public_6ebc1c8 : nop
        push ebp
        call public_6ed0c50
        add esp, 4
        public_6ebc1d1 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        xor eax, eax
        push ecx
        mov dword ptr ds : [edi+0x18], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+0xC], eax
        call public_6ed0c50
        mov al, byte ptr ss : [esp+0x18]
        add esp, 4
        test al, 1
        mov dword ptr ds : [edi+0x14], 0
        je public_6ebc203
        push edi
        call public_6ed0c50
        add esp, 4
        public_6ebc203 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ebc150)
    }
}

#undef public_6ebc167
#undef public_6ebc186
#undef public_6ebc191
#undef public_6ebc1b0
#undef public_6ebc1c8
#undef public_6ebc1d1
#undef public_6ebc203
