#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce9350);

#define public_6ce936e _public_6ce936e
#define public_6ce9370 _public_6ce9370
#define public_6ce9397 _public_6ce9397
#define public_6ce9403 _public_6ce9403
#define public_6ce9450 _public_6ce9450
#define public_6ce946b _public_6ce946b
#define public_6ce9484 _public_6ce9484
#define public_6ce9499 _public_6ce9499

PROC_DECLARE(0x6ce9350, internal_6ce9350, public_6ce9350);
extern "C" NAKED register_t __cdecl internal_6ce9350()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr ds : [esi+0x10]
        test ebx, ebx
        push edi
        je public_6ce936e
        mov eax, dword ptr ds : [ebx+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        je public_6ce9370
        public_6ce936e : nop
        xor ebx, ebx
        public_6ce9370 : nop
        mov ecx, ebx
        call dword ptr ds : [public_6d6422c]
        test eax, eax
        mov edi, dword ptr ss : [esp+0x18]
        je public_6ce9397
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x10], 1
        mov dword ptr ss : [esp+0x14], edi
        call dword ptr ds : [edx]
        public_6ce9397 : nop
        mov edx, dword ptr ds : [public_6d6401c]
        xor eax, eax
        mov ax, word ptr ds : [edi+8]
        cmp ax, word ptr ds : [edx]
        je public_6ce946b
        mov ecx, dword ptr ds : [public_6d6402c]
        cmp ax, word ptr ds : [ecx]
        je public_6ce946b
        push eax
        call dword ptr ds : [public_6d64268]
        xor edx, edx
        mov dx, word ptr ds : [edi+8]
        add esp, 4
        test al, al
        push edx
        je public_6ce9403
        lea ecx, ds:[ebx+0x144]
        call dword ptr ds : [public_6d64264]
        test eax, eax
        je public_6ce9499
        mov ecx, dword ptr ds : [edi+4]
        mov ebx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ecx+0x80]
        mov edx, dword ptr ds : [esi]
        push ebx
        push ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x218]
        jmp public_6ce9484
        public_6ce9403 : nop
        call dword ptr ds : [public_6d64260]
        add esp, 4
        test al, al
        je public_6ce9499
        xor eax, eax
        mov ax, word ptr ds : [edi+8]
        lea ecx, ds:[ebx+0xE4]
        push eax
        call dword ptr ds : [public_6d641c4]
        test eax, eax
        je public_6ce9499
        cmp dword ptr ds : [eax+0x14], 0x100
        mov edx, dword ptr ds : [esi]
        je public_6ce9450
        mov ecx, dword ptr ds : [edi+4]
        mov ebx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ecx+0x80]
        push ebx
        push ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x210]
        jmp public_6ce9484
        public_6ce9450 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x20C]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8
        public_6ce946b : nop
        mov eax, dword ptr ds : [edi+4]
        mov ebx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+0x80]
        mov edx, dword ptr ds : [esi]
        push ebx
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x1B0]
        public_6ce9484 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [esi]
        push ebx
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x21C]
        public_6ce9499 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6ce9350)
    }
}

#undef public_6ce936e
#undef public_6ce9370
#undef public_6ce9397
#undef public_6ce9403
#undef public_6ce9450
#undef public_6ce946b
#undef public_6ce9484
#undef public_6ce9499
