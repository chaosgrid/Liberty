#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f03550);
CLANG_FORWARD_PROC_SYMBOL(public_6f036c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f03564 _public_6f03564
#define public_6f03597 _public_6f03597
#define public_6f035c9 _public_6f035c9
#define public_6f035d2 _public_6f035d2
#define public_6f035e3 _public_6f035e3
#define public_6f035ec _public_6f035ec
#define public_6f035f4 _public_6f035f4
#define public_6f03604 _public_6f03604
#define public_6f03632 _public_6f03632
#define public_6f0363b _public_6f0363b
#define public_6f03654 _public_6f03654
#define public_6f03659 _public_6f03659
#define public_6f03661 _public_6f03661

PROC_DECLARE(0x6f03550, internal_6f03550, public_6f03550);
extern "C" NAKED register_t __cdecl internal_6f03550()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, 0xFFFFFFFD
        mov esi, ecx
        jbe public_6f03564
        call dword ptr ds : [public_6fb32dc]
        public_6f03564 : nop
        mov eax, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp eax, ebx
        je public_6f03597
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6f03597
        cmp cl, 0xFF
        je public_6f03597
        cmp edi, ebx
        jne public_6f03659
        dec cl
        mov byte ptr ds : [eax-1], cl
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_6f03597 : nop
        cmp edi, ebx
        mov cl, byte ptr ss : [esp+0x14]
        jne public_6f035f4
        cmp cl, bl
        je public_6f035e3
        cmp eax, ebx
        je public_6f035d2
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f035c9
        cmp cl, 0xFF
        je public_6f035c9
        dec cl
        mov byte ptr ds : [eax], cl
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_6f035c9 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f035d2 : nop
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_6f035e3 : nop
        cmp eax, ebx
        je public_6f035ec
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ds : [eax], bl
        public_6f035ec : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_6f035f4 : nop
        cmp cl, bl
        je public_6f03654
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, 0x1F
        ja public_6f03604
        cmp ecx, edi
        jae public_6f03661
        public_6f03604 : nop
        cmp eax, ebx
        je public_6f0363b
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f03632
        cmp cl, 0xFF
        je public_6f03632
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, esi
        push edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        call public_6f036c0
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_6f03632 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f0363b : nop
        mov ecx, esi
        push edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        call public_6f036c0
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_6f03654 : nop
        cmp dword ptr ds : [esi+0xC], edi
        jae public_6f03661
        public_6f03659 : nop
        mov ecx, esi
        push edi
        call public_6f036c0
        public_6f03661 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f03550)
    }
}

#undef public_6f03564
#undef public_6f03597
#undef public_6f035c9
#undef public_6f035d2
#undef public_6f035e3
#undef public_6f035ec
#undef public_6f035f4
#undef public_6f03604
#undef public_6f03632
#undef public_6f0363b
#undef public_6f03654
#undef public_6f03659
#undef public_6f03661
