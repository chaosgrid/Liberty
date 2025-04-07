#include "Server-PCH.h"


#define public_6d353d9 _public_6d353d9
#define public_6d353f2 _public_6d353f2
#define public_6d35400 _public_6d35400
#define public_6d35410 _public_6d35410
#define public_6d35420 _public_6d35420
#define public_6d3543d _public_6d3543d
#define public_6d35448 _public_6d35448
#define public_6d35456 _public_6d35456
#define public_6d3545f _public_6d3545f

PROC_DECLARE(0x6d35390, internal_6d35390, public_6d35390);
extern "C" NAKED register_t __cdecl internal_6d35390()
{
    __asm
    {
        push ecx
        push ebx
        mov edx, ecx
        mov eax, dword ptr ds : [edx+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        xor edi, edi
        xor ebx, ebx
        test eax, eax
        mov dword ptr ss : [esp+0xC], edx
        mov ecx, esi
        je public_6d35410
        cmp word ptr ds : [esi], bx
        je public_6d35410
        add esi, 2
        mov edi, esi
        sub edi, ecx
        sar edi, 1
        neg edi
        jne public_6d35400
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d353d9
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        movzx eax, al
        pop ebx
        pop ecx
        ret 8
        public_6d353d9 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d353f2
        cmp dword ptr ds : [eax+8], esi
        jne public_6d353f2
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        public_6d353f2 : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        pop ecx
        ret 8
        mov edi, edi
        public_6d35400 : nop
        inc ebx
        cmp ebx, eax
        jae public_6d35410
        cmp word ptr ds : [esi], 0
        je public_6d35410
        add esi, 2
        jmp public_6d35400
        public_6d35410 : nop
        cmp dword ptr ds : [edx+0xC], ebx
        ja public_6d3545f
        mov eax, dword ptr ss : [esp+0x14]
        lea esp, ss:[esp]
        public_6d35420 : nop
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d35448
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        jne public_6d35456
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0xC]
        public_6d3543d : nop
        cmp dword ptr ds : [edx+0xC], ebx
        je public_6d3545f
        dec ebx
        lea esi, ds:[esi+edi*2]
        jmp public_6d35420
        public_6d35448 : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d35456
        cmp dword ptr ds : [eax+8], esi
        jne public_6d35456
        jmp public_6d3543d
        public_6d35456 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6d3545f : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d35390)
    }
}

#undef public_6d353d9
#undef public_6d353f2
#undef public_6d35400
#undef public_6d35410
#undef public_6d35420
#undef public_6d3543d
#undef public_6d35448
#undef public_6d35456
#undef public_6d3545f
