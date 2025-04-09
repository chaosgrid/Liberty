#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_489410);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_489427 _public_489427
#define public_489430 _public_489430
#define public_48944f _public_48944f
#define public_489474 _public_489474
#define public_48948a _public_48948a
#define public_4894a9 _public_4894a9
#define public_4894b5 _public_4894b5
#define public_4894c9 _public_4894c9
#define public_4894dc _public_4894dc
#define public_4894f9 _public_4894f9
#define public_489510 _public_489510
#define public_48952a _public_48952a
#define public_48954c _public_48954c
#define public_489562 _public_489562
#define public_489582 _public_489582
#define public_489590 _public_489590
#define public_4895a5 _public_4895a5
#define public_4895b9 _public_4895b9
#define public_4895db _public_4895db
#define public_4895f2 _public_4895f2
#define public_489610 _public_489610

PROC_DECLARE(0x489410, internal_489410, public_489410);
extern "C" NAKED register_t __cdecl internal_489410()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ss : [esp+8]
        je public_489610
        push ebx
        push ebp
        push esi
        push edi
        lea esi, ds:[eax+8]
        jmp public_489430
        public_489427 : nop
        mov eax, dword ptr ss : [esp+0x14]
        nop 
        lea esp, ss:[esp]
        public_489430 : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [public_5c705c]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx]
        add ebp, 4
        mov edi, ecx
        cmp eax, edi
        jae public_48944f
        mov edi, eax
        public_48944f : nop
        lea edx, ds:[esi-4]
        cmp edx, ebp
        jne public_489474
        push eax
        lea ebp, ds:[esi-4]
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_5c6f8c]
        push 0
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_5c6f8c]
        jmp public_489510
        public_489474 : nop
        xor ebx, ebx
        cmp edi, ebx
        jbe public_4894dc
        cmp edi, ecx
        jne public_4894dc
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, ebx
        jne public_48948a
        mov eax, dword ptr ds : [public_5c700c]
        public_48948a : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_4894dc
        mov eax, dword ptr ds : [esi]
        cmp eax, ebx
        je public_4894b5
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_4894a9
        cmp cl, 0xFF
        je public_4894a9
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_4894b5
        public_4894a9 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        public_4894b5 : nop
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, ebx
        jne public_4894c9
        mov eax, dword ptr ds : [public_5c700c]
        public_4894c9 : nop
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+8], edx
        inc byte ptr ds : [eax-1]
        jmp public_489510
        public_4894dc : nop
        push 1
        lea ecx, ds:[esi-4]
        push edi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_489510
        mov ebp, dword ptr ss : [ebp+4]
        test ebp, ebp
        jne public_4894f9
        mov ebp, dword ptr ds : [public_5c700c]
        public_4894f9 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        push ebp
        push eax
        call public_41d8a0
        add esp, 0xC
        push edi
        lea ecx, ds:[esi-4]
        call dword ptr ds : [public_5c7054]
        public_489510 : nop
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edx+0x1C]
        lea ebx, ds:[edx+0x14]
        mov edi, ecx
        cmp eax, edi
        jae public_48952a
        mov edi, eax
        public_48952a : nop
        lea ebp, ds:[esi+0xC]
        cmp ebp, ebx
        jne public_48954c
        push eax
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_5c6f8c]
        push 0
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_5c6f8c]
        jmp public_4895f2
        public_48954c : nop
        xor edx, edx
        cmp edi, edx
        jbe public_4895b9
        cmp edi, ecx
        jne public_4895b9
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, edx
        jne public_489562
        mov eax, dword ptr ds : [public_5c700c]
        public_489562 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_4895b9
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, edx
        je public_489590
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_489582
        cmp cl, 0xFF
        je public_489582
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_489590
        public_489582 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        xor edx, edx
        public_489590 : nop
        mov dword ptr ds : [esi+0x10], edx
        mov dword ptr ds : [esi+0x14], edx
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, edx
        jne public_4895a5
        mov eax, dword ptr ds : [public_5c700c]
        public_4895a5 : nop
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+0x14], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0x18], edx
        inc byte ptr ds : [eax-1]
        jmp public_4895f2
        public_4895b9 : nop
        push 1
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_4895f2
        mov eax, dword ptr ss : [esp+0x1C]
        add eax, 0x14
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_4895db
        mov eax, dword ptr ds : [public_5c700c]
        public_4895db : nop
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        push eax
        push ecx
        call public_41d8a0
        add esp, 0xC
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_5c7054]
        public_4895f2 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        add eax, 0x24
        add esi, 0x24
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_489427
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_489610 : nop
        ret 
        UNREACHABLE_TRAP(0x489410)
    }
}

#undef public_489427
#undef public_489430
#undef public_48944f
#undef public_489474
#undef public_48948a
#undef public_4894a9
#undef public_4894b5
#undef public_4894c9
#undef public_4894dc
#undef public_4894f9
#undef public_489510
#undef public_48952a
#undef public_48954c
#undef public_489562
#undef public_489582
#undef public_489590
#undef public_4895a5
#undef public_4895b9
#undef public_4895db
#undef public_4895f2
#undef public_489610
