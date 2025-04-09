#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d95b0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1340);

#define public_4d95f4 _public_4d95f4
#define public_4d95f6 _public_4d95f6
#define public_4d960e _public_4d960e
#define public_4d9627 _public_4d9627
#define public_4d9635 _public_4d9635
#define public_4d9658 _public_4d9658
#define public_4d9663 _public_4d9663
#define public_4d9667 _public_4d9667
#define public_4d9688 _public_4d9688
#define public_4d9742 _public_4d9742

PROC_DECLARE(0x4d95b0, internal_4d95b0, public_4d95b0);
extern "C" NAKED register_t __cdecl internal_4d95b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x10
        cmp eax, 0xFFFFFFFF
        push esi
        push edi
        mov esi, ecx
        jne public_4d9667
        xor edi, edi
        mov dword ptr ss : [esp+0x1C], edi
        call public_54baf0
        cmp eax, edi
        je public_4d9742
        add eax, 0xC
        cmp eax, edi
        je public_4d95f4
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, edi
        je public_4d95f4
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        je public_4d95f6
        public_4d95f4 : nop
        xor ecx, ecx
        public_4d95f6 : nop
        call dword ptr ds : [public_5c62e8]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [esi+0x380]
        cmp eax, edi
        jne public_4d960e
        xor edx, edx
        jmp public_4d9627
        public_4d960e : nop
        mov ecx, dword ptr ds : [esi+0x384]
        sub ecx, eax
        mov eax, 0x63E7063F
        imul ecx
        sar edx, 7
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_4d9627 : nop
        cmp edx, edi
        jle public_4d9663
        push ebx
        mov ebx, dword ptr ds : [public_5c6514]
        push ebp
        mov ebp, edx
        public_4d9635 : nop
        mov eax, dword ptr ds : [esi+0x380]
        add eax, edi
        mov eax, dword ptr ds : [eax+0x138]
        cmp eax, 0xFFFFFFFF
        je public_4d9658
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        call ebx
        cmp eax, 2
        je public_4d9658
        inc dword ptr ss : [esp+0x24]
        public_4d9658 : nop
        add edi, 0x148
        dec ebp
        jne public_4d9635
        pop ebp
        pop ebx
        public_4d9663 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_4d9667 : nop
        cmp dword ptr ds : [esi+0x3B4], eax
        je public_4d9742
        cmp eax, 9
        mov dword ptr ds : [esi+0x3B4], eax
        jle public_4d9688
        mov dword ptr ds : [esi+0x3B4], 9
        public_4d9688 : nop
        mov eax, dword ptr ds : [esi+0x3B4]
        mov eax, dword ptr ds : [eax*4+public_612654]
        mov ecx, dword ptr ds : [esi+0x3B8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 4
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x3B8]
        add ecx, 0x80
        lea edi, ds:[esi+0x3D0]
        push ecx
        mov ecx, edi
        call public_5a1340
        fld dword ptr ds : [esi+0x3D4]
        fmul dword ptr ds : [public_5d74c8]
        lea edx, ds:[esi+0xEC]
        mov dword ptr ss : [esp+0xC], 0x3E322D0E
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], eax
        fstp dword ptr ds : [esi+0x3D4]
        fld dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], 0x3D1374BC
        mov ecx, dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5d8468]
        mov dword ptr ss : [esp+0x14], 0
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], ecx
        fstp dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], 0x3B03126F
        mov ecx, dword ptr ss : [esp+0xC]
        add esi, 0xF8
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ss : [esp+0x10], 0x3EB3B646
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], ecx
        mov dword ptr ss : [esp+0x14], 0
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        public_4d9742 : nop
        pop edi
        pop esi
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x4d95b0)
    }
}

#undef public_4d95f4
#undef public_4d95f6
#undef public_4d960e
#undef public_4d9627
#undef public_4d9635
#undef public_4d9658
#undef public_4d9663
#undef public_4d9667
#undef public_4d9688
#undef public_4d9742
