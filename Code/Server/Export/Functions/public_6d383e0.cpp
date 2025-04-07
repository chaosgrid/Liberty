#include "Server-PCH.h"


#define public_6d38430 _public_6d38430
#define public_6d38458 _public_6d38458
#define public_6d38477 _public_6d38477
#define public_6d3848f _public_6d3848f
#define public_6d3849e _public_6d3849e
#define public_6d384b3 _public_6d384b3
#define public_6d384c6 _public_6d384c6
#define public_6d384d8 _public_6d384d8
#define public_6d384ee _public_6d384ee
#define public_6d384fd _public_6d384fd
#define public_6d38501 _public_6d38501
#define public_6d38505 _public_6d38505
#define public_6d38518 _public_6d38518
#define public_6d38520 _public_6d38520
#define public_6d38527 _public_6d38527
#define public_6d38533 _public_6d38533
#define public_6d3853f _public_6d3853f
#define public_6d3854b _public_6d3854b
#define public_6d38553 _public_6d38553
#define public_6d38590 _public_6d38590
#define public_6d385a6 _public_6d385a6

PROC_DECLARE(0x6d383e0, internal_6d383e0, public_6d383e0);
extern "C" NAKED register_t __cdecl internal_6d383e0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp]
        mov ebx, dword ptr ds : [eax+4]
        mov edx, ecx
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        mov edi, dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [edi+8]
        shl ecx, 5
        lea eax, ds:[ecx+ebx]
        mov cl, byte ptr ds : [eax+8]
        test cl, cl
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x10], 0
        je public_6d38520
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp edx, eax
        mov ecx, esi
        je public_6d38458
        mov ebp, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x20], ebp
        lea esp, ss:[esp]
        public_6d38430 : nop
        cmp dword ptr ss : [esp+0x20], ecx
        je public_6d38518
        mov bp, word ptr ds : [ecx]
        cmp bp, word ptr ds : [edx]
        jne public_6d38518
        add edx, 2
        add ecx, 2
        cmp edx, eax
        jne public_6d38430
        cmp ecx, esi
        jne public_6d3849e
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6d38458 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d38477
        mov eax, dword ptr ds : [ecx]
        push esi
        push ebp
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 8
        ret 8
        public_6d38477 : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d3848f
        cmp dword ptr ss : [ebp+8], esi
        jne public_6d3848f
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        public_6d3848f : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d3849e : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [edx+0xC]
        test ebp, ebp
        je public_6d384b3
        mov esi, ecx
        mov dword ptr ss : [esp+0x10], 1
        public_6d384b3 : nop
        cmp dword ptr ss : [esp+0x10], ebp
        jae public_6d384fd
        mov eax, dword ptr ds : [edi+8]
        shl eax, 5
        lea edi, ds:[eax+ebx]
        mov ebx, dword ptr ss : [esp+0x20]
        public_6d384c6 : nop
        mov al, byte ptr ds : [edi+8]
        test al, al
        je public_6d38527
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        cmp ecx, edx
        mov eax, esi
        je public_6d384ee
        public_6d384d8 : nop
        cmp ebx, eax
        je public_6d38527
        mov si, word ptr ds : [eax]
        cmp si, word ptr ds : [ecx]
        jne public_6d38527
        add ecx, 2
        add eax, 2
        cmp ecx, edx
        jne public_6d384d8
        public_6d384ee : nop
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], eax
        jb public_6d384c6
        public_6d384fd : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6d38501 : nop
        mov edx, dword ptr ss : [esp+0x14]
        public_6d38505 : nop
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d38533
        mov edx, dword ptr ds : [ecx]
        push esi
        push ebp
        call dword ptr ds : [edx+4]
        movzx eax, al
        jmp public_6d3854b
        public_6d38518 : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        public_6d38520 : nop
        mov eax, dword ptr ds : [edx+0xC]
        test eax, eax
        je public_6d38505
        public_6d38527 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 8
        public_6d38533 : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d3853f
        cmp dword ptr ss : [ebp+8], esi
        je public_6d38553
        public_6d3853f : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d3854b : nop
        test al, al
        jne public_6d3853f
        mov edx, dword ptr ss : [esp+0x14]
        public_6d38553 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [edx+0x10]
        jae public_6d38527
        mov edi, eax
        mov eax, dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edx+4]
        shl ecx, 5
        add ecx, eax
        mov al, byte ptr ds : [ecx+8]
        inc edi
        test al, al
        mov dword ptr ss : [esp+0x10], edi
        je public_6d38527
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, ecx
        mov edx, esi
        je public_6d385a6
        mov esi, dword ptr ss : [ebp+0xC]
        lea esp, ss:[esp]
        public_6d38590 : nop
        cmp esi, edx
        je public_6d38527
        mov di, word ptr ds : [edx]
        cmp di, word ptr ds : [eax]
        jne public_6d38527
        add eax, 2
        add edx, 2
        cmp eax, ecx
        jne public_6d38590
        public_6d385a6 : nop
        mov esi, edx
        jmp public_6d38501
        UNREACHABLE_TRAP(0x6d383e0)
    }
}

#undef public_6d38430
#undef public_6d38458
#undef public_6d38477
#undef public_6d3848f
#undef public_6d3849e
#undef public_6d384b3
#undef public_6d384c6
#undef public_6d384d8
#undef public_6d384ee
#undef public_6d384fd
#undef public_6d38501
#undef public_6d38505
#undef public_6d38518
#undef public_6d38520
#undef public_6d38527
#undef public_6d38533
#undef public_6d3853f
#undef public_6d3854b
#undef public_6d38553
#undef public_6d38590
#undef public_6d385a6
