#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_6600a47 _public_6600a47
#define public_6600a66 _public_6600a66
#define public_6600a71 _public_6600a71
#define public_6600a90 _public_6600a90
#define public_6600aa8 _public_6600aa8
#define public_6600ab1 _public_6600ab1
#define public_6600ae3 _public_6600ae3

PROC_DECLARE(0x6600a30, internal_6600a30, public_6600a30);
extern "C" NAKED register_t __cdecl internal_6600a30()
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
        mov dword ptr ds : [edi], offset public_6601598
        jbe public_6600a71
        xor ebx, ebx
        public_6600a47 : nop
        mov esi, dword ptr ds : [edi+0x18]
        mov eax, dword ptr ds : [esi+ebx+4]
        mov ecx, dword ptr ds : [edi+8]
        add esi, ebx
        cmp eax, 0xFFFFFFFF
        je public_6600a66
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        public_6600a66 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        inc ebp
        add ebx, 0x2C
        cmp ebp, eax
        jb public_6600a47
        public_6600a71 : nop
        mov ecx, dword ptr ds : [edi+0x18]
        test ecx, ecx
        je public_6600ab1
        mov eax, dword ptr ds : [ecx-4]
        lea ebp, ds:[ecx-4]
        mov esi, eax
        imul esi, 0x2C
        add esi, ecx
        dec eax
        js public_6600aa8
        lea ebx, ds:[eax+1]
        nop 
        lea esp, ss:[esp]
        public_6600a90 : nop
        mov eax, dword ptr ds : [esi-0x2C]
        sub esi, 0x2C
        push eax
        call public_6600bb0
        add esp, 4
        dec ebx
        mov dword ptr ds : [esi], 0
        jne public_6600a90
        public_6600aa8 : nop
        push ebp
        call public_6600bb0
        add esp, 4
        public_6600ab1 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        xor eax, eax
        push ecx
        mov dword ptr ds : [edi+0x18], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+0xC], eax
        call public_6600bb0
        mov al, byte ptr ss : [esp+0x18]
        add esp, 4
        test al, 1
        mov dword ptr ds : [edi+0x14], 0
        je public_6600ae3
        push edi
        call public_6600bb0
        add esp, 4
        public_6600ae3 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6600a30)
    }
}

#undef public_6600a47
#undef public_6600a66
#undef public_6600a71
#undef public_6600a90
#undef public_6600aa8
#undef public_6600ab1
#undef public_6600ae3
