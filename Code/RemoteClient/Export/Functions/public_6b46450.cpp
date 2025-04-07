#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b46450);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b46486 _public_6b46486
#define public_6b46488 _public_6b46488
#define public_6b46490 _public_6b46490
#define public_6b46495 _public_6b46495
#define public_6b464a1 _public_6b464a1
#define public_6b464c2 _public_6b464c2
#define public_6b464ca _public_6b464ca
#define public_6b464d4 _public_6b464d4
#define public_6b464e0 _public_6b464e0
#define public_6b464ec _public_6b464ec
#define public_6b464f2 _public_6b464f2
#define public_6b46510 _public_6b46510
#define public_6b46518 _public_6b46518
#define public_6b46522 _public_6b46522
#define public_6b4655e _public_6b4655e
#define public_6b4657b _public_6b4657b
#define public_6b465a0 _public_6b465a0
#define public_6b465ac _public_6b465ac
#define public_6b465b6 _public_6b465b6
#define public_6b465c8 _public_6b465c8
#define public_6b465d0 _public_6b465d0
#define public_6b465d6 _public_6b465d6
#define public_6b465e0 _public_6b465e0
#define public_6b465eb _public_6b465eb
#define public_6b465f8 _public_6b465f8
#define public_6b46610 _public_6b46610
#define public_6b46618 _public_6b46618
#define public_6b46622 _public_6b46622
#define public_6b46630 _public_6b46630
#define public_6b4663f _public_6b4663f
#define public_6b46650 _public_6b46650
#define public_6b4665b _public_6b4665b
#define public_6b4665e _public_6b4665e

PROC_DECLARE(0x6b46450, internal_6b46450, public_6b46450);
extern "C" NAKED register_t __cdecl internal_6b46450()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], edi
        jae public_6b4657b
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_6b46486
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ebp, ecx
        jb public_6b46488
        public_6b46486 : nop
        mov ecx, ebp
        public_6b46488 : nop
        test edx, edx
        jne public_6b46490
        xor eax, eax
        jmp public_6b46495
        public_6b46490 : nop
        sub eax, edx
        sar eax, 2
        public_6b46495 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6b464a1
        xor eax, eax
        public_6b464a1 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6b6a134
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6b464d4
        public_6b464c2 : nop
        test ecx, ecx
        je public_6b464ca
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        public_6b464ca : nop
        add eax, 4
        add ecx, 4
        cmp eax, ebx
        jne public_6b464c2
        public_6b464d4 : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_6b464f2
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_6b464e0 : nop
        test eax, eax
        je public_6b464ec
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6b464ec : nop
        add eax, 4
        dec edx
        jne public_6b464e0
        public_6b464f2 : nop
        mov edi, dword ptr ds : [edi+8]
        cmp ebx, edi
        lea esi, ds:[ebp*4]
        lea edx, ds:[esi+ecx]
        je public_6b46522
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        nop 
        lea esp, ss:[esp]
        public_6b46510 : nop
        test edx, edx
        je public_6b46518
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        public_6b46518 : nop
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_6b46510
        public_6b46522 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6b6a092
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6b4655e
        xor eax, eax
        mov eax, ebp
        pop edi
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6b4655e : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        add eax, ebp
        pop edi
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6b4657b : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, ebp
        jae public_6b465f8
        cmp edx, eax
        lea ebx, ds:[ebp*4]
        lea esi, ds:[ebx+edx]
        je public_6b465b6
        mov ecx, esi
        sub ecx, ebx
        lea esp, ss:[esp]
        public_6b465a0 : nop
        test esi, esi
        je public_6b465ac
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6b465ac : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6b465a0
        public_6b465b6 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        sub ebp, ecx
        je public_6b465d6
        public_6b465c8 : nop
        test eax, eax
        je public_6b465d0
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        public_6b465d0 : nop
        add eax, 4
        dec ebp
        jne public_6b465c8
        public_6b465d6 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp edx, ecx
        mov eax, edx
        je public_6b465eb
        nop 
        public_6b465e0 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6b465e0
        public_6b465eb : nop
        add dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6b465f8 : nop
        test ebp, ebp
        jbe public_6b4665e
        shl ebp, 2
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov esi, eax
        je public_6b46622
        lea esp, ss:[esp]
        public_6b46610 : nop
        test esi, esi
        je public_6b46618
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], ebx
        public_6b46618 : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6b46610
        public_6b46622 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp edx, eax
        je public_6b4663f
        lea ecx, ds:[ecx]
        public_6b46630 : nop
        mov esi, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edx
        mov dword ptr ds : [ecx], esi
        jne public_6b46630
        public_6b4663f : nop
        lea ecx, ds:[edx+ebp]
        cmp edx, ecx
        mov eax, edx
        je public_6b4665b
        mov edx, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6b46650 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        cmp eax, ecx
        jne public_6b46650
        public_6b4665b : nop
        add dword ptr ds : [edi+8], ebp
        public_6b4665e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6b46450)
    }
}

#undef public_6b46486
#undef public_6b46488
#undef public_6b46490
#undef public_6b46495
#undef public_6b464a1
#undef public_6b464c2
#undef public_6b464ca
#undef public_6b464d4
#undef public_6b464e0
#undef public_6b464ec
#undef public_6b464f2
#undef public_6b46510
#undef public_6b46518
#undef public_6b46522
#undef public_6b4655e
#undef public_6b4657b
#undef public_6b465a0
#undef public_6b465ac
#undef public_6b465b6
#undef public_6b465c8
#undef public_6b465d0
#undef public_6b465d6
#undef public_6b465e0
#undef public_6b465eb
#undef public_6b465f8
#undef public_6b46610
#undef public_6b46618
#undef public_6b46622
#undef public_6b46630
#undef public_6b4663f
#undef public_6b46650
#undef public_6b4665b
#undef public_6b4665e
