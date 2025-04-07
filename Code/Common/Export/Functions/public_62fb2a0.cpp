#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272b50);
CLANG_FORWARD_PROC_SYMBOL(public_6272bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6272d90);
CLANG_FORWARD_PROC_SYMBOL(public_6272db0);
CLANG_FORWARD_PROC_SYMBOL(public_62fb2a0);
CLANG_FORWARD_PROC_SYMBOL(public_62fb540);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62fb2c2 _public_62fb2c2
#define public_62fb2da _public_62fb2da
#define public_62fb2e5 _public_62fb2e5
#define public_62fb2fb _public_62fb2fb
#define public_62fb310 _public_62fb310
#define public_62fb322 _public_62fb322
#define public_62fb330 _public_62fb330
#define public_62fb344 _public_62fb344
#define public_62fb35f _public_62fb35f
#define public_62fb38d _public_62fb38d
#define public_62fb395 _public_62fb395
#define public_62fb3ad _public_62fb3ad
#define public_62fb3b5 _public_62fb3b5
#define public_62fb3cb _public_62fb3cb
#define public_62fb3db _public_62fb3db
#define public_62fb3f1 _public_62fb3f1
#define public_62fb400 _public_62fb400
#define public_62fb41a _public_62fb41a
#define public_62fb430 _public_62fb430
#define public_62fb44c _public_62fb44c
#define public_62fb467 _public_62fb467
#define public_62fb495 _public_62fb495
#define public_62fb4a0 _public_62fb4a0
#define public_62fb4ae _public_62fb4ae
#define public_62fb4c5 _public_62fb4c5
#define public_62fb4db _public_62fb4db
#define public_62fb4e3 _public_62fb4e3
#define public_62fb501 _public_62fb501
#define public_62fb515 _public_62fb515
#define public_62fb527 _public_62fb527

PROC_DECLARE(0x62fb2a0, internal_62fb2a0, public_62fb2a0);
extern "C" NAKED register_t __cdecl internal_62fb2a0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov ebx, ecx
        cmp ebx, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        je public_62fb527
        mov esi, dword ptr ss : [ebp+4]
        test esi, esi
        jne public_62fb2c2
        xor edi, edi
        jmp public_62fb2da
        public_62fb2c2 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_62fb2da : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_62fb2e5
        xor edx, edx
        jmp public_62fb2fb
        public_62fb2e5 : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, ecx
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_62fb2fb : nop
        cmp edi, edx
        ja public_62fb38d
        mov ebx, dword ptr ss : [ebp+8]
        cmp esi, ebx
        mov edi, ecx
        je public_62fb322
        lea esp, ss:[esp]
        public_62fb310 : nop
        push esi
        mov ecx, edi
        call public_6272bf0
        add esi, 0x14
        add edi, 0x14
        cmp esi, ebx
        jne public_62fb310
        public_62fb322 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+8]
        cmp edi, ebx
        mov esi, edi
        je public_62fb344
        nop 
        public_62fb330 : nop
        push 0
        mov ecx, esi
        call public_6272d90
        add esi, 0x14
        cmp esi, ebx
        jne public_62fb330
        mov eax, dword ptr ss : [esp+0x10]
        public_62fb344 : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_62fb35f
        mov ecx, dword ptr ds : [eax+4]
        pop edi
        pop esi
        lea edx, ds:[edx+edx*4]
        lea edx, ds:[ecx+edx*4]
        pop ebp
        mov dword ptr ds : [eax+8], edx
        pop ebx
        pop ecx
        ret 4
        public_62fb35f : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        mov eax, 0x66666667
        imul ecx
        mov eax, dword ptr ss : [esp+0x10]
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov ecx, dword ptr ds : [eax+4]
        pop edi
        pop esi
        lea edx, ds:[edx+edx*4]
        lea edx, ds:[ecx+edx*4]
        pop ebp
        mov dword ptr ds : [eax+8], edx
        pop ebx
        pop ecx
        ret 4
        public_62fb38d : nop
        test esi, esi
        jne public_62fb395
        xor edi, edi
        jmp public_62fb3ad
        public_62fb395 : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, esi
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_62fb3ad : nop
        test ecx, ecx
        jne public_62fb3b5
        xor edx, edx
        jmp public_62fb3cb
        public_62fb3b5 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        sub edx, ecx
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_62fb3cb : nop
        cmp edi, edx
        ja public_62fb495
        test ecx, ecx
        jne public_62fb3db
        xor edx, edx
        jmp public_62fb3f1
        public_62fb3db : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, ecx
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_62fb3f1 : nop
        lea edx, ds:[edx+edx*4]
        lea edi, ds:[esi+edx*4]
        cmp esi, edi
        mov ebx, ecx
        je public_62fb41a
        lea ecx, ds:[ecx]
        public_62fb400 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ds:[esi+4]
        push ecx
        lea ecx, ds:[ebx+4]
        mov dword ptr ds : [ebx], eax
        call public_62fb540
        add esi, 0x14
        add ebx, 0x14
        cmp esi, edi
        jne public_62fb400
        public_62fb41a : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp edi, ecx
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], ecx
        mov esi, edi
        je public_62fb44c
        mov edi, edi
        public_62fb430 : nop
        push esi
        push ebx
        call public_6272b50
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 0x14
        add esp, 8
        add ebx, 0x14
        cmp esi, eax
        jne public_62fb430
        mov eax, dword ptr ss : [esp+0x10]
        public_62fb44c : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_62fb467
        pop edi
        lea ecx, ds:[edx+edx*4]
        mov edx, dword ptr ds : [eax+4]
        pop esi
        lea ecx, ds:[edx+ecx*4]
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        pop ecx
        ret 4
        public_62fb467 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        lea ecx, ds:[edx+edx*4]
        mov edx, dword ptr ds : [eax+4]
        pop esi
        lea ecx, ds:[edx+ecx*4]
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        pop ecx
        ret 4
        public_62fb495 : nop
        mov edi, dword ptr ds : [ebx+8]
        mov esi, ecx
        cmp esi, edi
        je public_62fb4ae
        mov edi, edi
        public_62fb4a0 : nop
        mov ecx, esi
        call public_6272db0
        add esi, 0x14
        cmp esi, edi
        jne public_62fb4a0
        public_62fb4ae : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        test eax, eax
        jne public_62fb4c5
        xor edx, edx
        jmp public_62fb4db
        public_62fb4c5 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_62fb4db : nop
        test edx, edx
        mov eax, edx
        jge public_62fb4e3
        xor eax, eax
        public_62fb4e3 : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        push ecx
        call public_6391d9c
        mov dword ptr ds : [ebx+4], eax
        mov ebx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [ebp+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_62fb515
        public_62fb501 : nop
        push esi
        push edi
        call public_6272b50
        add esi, 0x14
        add esp, 8
        add edi, 0x14
        cmp esi, ebx
        jne public_62fb501
        public_62fb515 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edi
        mov dword ptr ds : [eax+0xC], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_62fb527 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62fb2a0)
    }
}

#undef public_62fb2c2
#undef public_62fb2da
#undef public_62fb2e5
#undef public_62fb2fb
#undef public_62fb310
#undef public_62fb322
#undef public_62fb330
#undef public_62fb344
#undef public_62fb35f
#undef public_62fb38d
#undef public_62fb395
#undef public_62fb3ad
#undef public_62fb3b5
#undef public_62fb3cb
#undef public_62fb3db
#undef public_62fb3f1
#undef public_62fb400
#undef public_62fb41a
#undef public_62fb430
#undef public_62fb44c
#undef public_62fb467
#undef public_62fb495
#undef public_62fb4a0
#undef public_62fb4ae
#undef public_62fb4c5
#undef public_62fb4db
#undef public_62fb4e3
#undef public_62fb501
#undef public_62fb515
#undef public_62fb527
