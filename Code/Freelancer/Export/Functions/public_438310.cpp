#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42ca00);
CLANG_FORWARD_PROC_SYMBOL(public_42ca20);
CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_438310);
CLANG_FORWARD_PROC_SYMBOL(public_438980);
CLANG_FORWARD_PROC_SYMBOL(public_4b2b50);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_438330 _public_438330
#define public_438343 _public_438343
#define public_438346 _public_438346
#define public_43834a _public_43834a
#define public_4383a9 _public_4383a9
#define public_4383c1 _public_4383c1
#define public_4383cb _public_4383cb
#define public_4383cf _public_4383cf
#define public_4383e0 _public_4383e0
#define public_43841b _public_43841b
#define public_43842a _public_43842a
#define public_43844b _public_43844b
#define public_43846c _public_43846c
#define public_43847a _public_43847a
#define public_438499 _public_438499
#define public_4384a5 _public_4384a5
#define public_4384c1 _public_4384c1
#define public_4384dc _public_4384dc
#define public_4384e3 _public_4384e3
#define public_438506 _public_438506

PROC_DECLARE(0x438310, internal_438310, public_438310);
extern "C" NAKED register_t __cdecl internal_438310()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_43834a
        lea esp, ss:[esp]
        public_438330 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_438343
        mov ebp, dword ptr ss : [ebp]
        jmp public_438346
        public_438343 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_438346 : nop
        cmp ebp, edx
        jne public_438330
        public_43834a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_4384c1
        push 0
        push esi
        mov ecx, edi
        call public_42ca00
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_4b2b50
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_4383a9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_4383a9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_4383a9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_4383cf
        mov dword ptr ds : [eax+8], ebx
        jmp public_4383cf
        public_4383a9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_4383c1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_4383cb
        public_4383c1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_4383cb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_4383cb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_4383cf : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_4384a5
        lea ecx, ds:[ecx]
        public_4383e0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x38]
        test cl, cl
        jne public_4384a5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_43844b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x38]
        test dl, dl
        jne public_43841b
        mov byte ptr ds : [eax+0x38], 1
        mov byte ptr ds : [ecx+0x38], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x38], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_438499
        public_43841b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_43842a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_43842a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x38], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x38], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_438499
        public_43844b : nop
        mov dl, byte ptr ds : [ecx+0x38]
        test dl, dl
        jne public_43846c
        mov byte ptr ds : [eax+0x38], 1
        mov byte ptr ds : [ecx+0x38], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x38], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_438499
        public_43846c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_43847a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_43847a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x38], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x38], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_438499 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_4383e0
        public_4384a5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x38], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_4384c1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_4384dc
        cmp esi, dword ptr ds : [ecx]
        je public_4384e3
        lea ecx, ss:[esp+0x10]
        call public_42ca20
        mov edx, dword ptr ss : [esp+0x10]
        public_4384dc : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_438506
        public_4384e3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_438980
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_438506 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x438310)
    }
}

#undef public_438330
#undef public_438343
#undef public_438346
#undef public_43834a
#undef public_4383a9
#undef public_4383c1
#undef public_4383cb
#undef public_4383cf
#undef public_4383e0
#undef public_43841b
#undef public_43842a
#undef public_43844b
#undef public_43846c
#undef public_43847a
#undef public_438499
#undef public_4384a5
#undef public_4384c1
#undef public_4384dc
#undef public_4384e3
#undef public_438506
