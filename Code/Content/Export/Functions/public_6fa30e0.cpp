#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f956a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa30e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5600);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6040);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa3132 _public_6fa3132
#define public_6fa3134 _public_6fa3134
#define public_6fa313c _public_6fa313c
#define public_6fa314f _public_6fa314f
#define public_6fa315c _public_6fa315c
#define public_6fa3180 _public_6fa3180
#define public_6fa3198 _public_6fa3198
#define public_6fa31a2 _public_6fa31a2
#define public_6fa31c2 _public_6fa31c2
#define public_6fa31da _public_6fa31da
#define public_6fa31e0 _public_6fa31e0
#define public_6fa31f3 _public_6fa31f3
#define public_6fa3200 _public_6fa3200
#define public_6fa320e _public_6fa320e
#define public_6fa324c _public_6fa324c
#define public_6fa327a _public_6fa327a
#define public_6fa32b5 _public_6fa32b5
#define public_6fa32c0 _public_6fa32c0
#define public_6fa32d7 _public_6fa32d7
#define public_6fa3300 _public_6fa3300
#define public_6fa3310 _public_6fa3310
#define public_6fa3325 _public_6fa3325
#define public_6fa335c _public_6fa335c
#define public_6fa3372 _public_6fa3372
#define public_6fa3390 _public_6fa3390
#define public_6fa33ac _public_6fa33ac
#define public_6fa33b7 _public_6fa33b7
#define public_6fa33d1 _public_6fa33d1
#define public_6fa33e6 _public_6fa33e6
#define public_6fa3421 _public_6fa3421
#define public_6fa3424 _public_6fa3424

PROC_DECLARE(0x6fa30e0, internal_6fa30e0, public_6fa30e0);
extern "C" NAKED register_t __cdecl internal_6fa30e0()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub edx, esi
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        add edx, eax
        cmp edx, edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6fa327a
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6fa3132
        mov edx, esi
        sub edx, ecx
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edi, edx
        mov ebx, edx
        jb public_6fa3134
        public_6fa3132 : nop
        mov ebx, edi
        public_6fa3134 : nop
        test ecx, ecx
        jne public_6fa313c
        xor edx, edx
        jmp public_6fa314f
        public_6fa313c : nop
        sub esi, ecx
        mov eax, 0x38E38E39
        imul esi
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6fa314f : nop
        lea eax, ds:[edx+ebx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6fa315c
        xor eax, eax
        public_6fa315c : nop
        lea edx, ds:[eax+eax*8]
        shl edx, 2
        push edx
        call public_6fa912a
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6fa3198
        public_6fa3180 : nop
        push esi
        push ebp
        call public_6fa4790
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x24
        add esp, 8
        add ebp, 0x24
        cmp esi, eax
        jne public_6fa3180
        public_6fa3198 : nop
        test edi, edi
        mov esi, ebp
        jbe public_6fa31c2
        mov dword ptr ss : [esp+0x24], edi
        public_6fa31a2 : nop
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        push esi
        call public_6fa4790
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x24
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6fa31a2
        mov eax, dword ptr ss : [esp+0x20]
        public_6fa31c2 : nop
        lea ecx, ds:[edi+edi*8]
        lea ecx, ss:[ebp+ecx*4]
        mov ebp, dword ptr ds : [ebx+8]
        cmp eax, ebp
        mov esi, eax
        je public_6fa31f3
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6fa31e0
        public_6fa31da : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_6fa31e0 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6fa4790
        add esi, 0x24
        add esp, 8
        cmp esi, ebp
        jne public_6fa31da
        public_6fa31f3 : nop
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, ebp
        je public_6fa320e
        lea ecx, ds:[ecx]
        public_6fa3200 : nop
        mov ecx, esi
        call public_6f956a0
        add esi, 0x24
        cmp esi, ebp
        jne public_6fa3200
        public_6fa320e : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[eax+eax*8]
        lea ecx, ds:[esi+eax*4]
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0xC], ecx
        jne public_6fa324c
        xor edx, edx
        add edi, edx
        lea ecx, ds:[edi+edi*8]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6fa324c : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edi, edx
        lea ecx, ds:[edi+edi*8]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6fa327a : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, edi
        jae public_6fa3372
        lea eax, ds:[edi+edi*8]
        shl eax, 2
        mov dword ptr ss : [esp+0x20], eax
        add eax, ebx
        cmp ebx, esi
        mov ebp, ebx
        je public_6fa32d7
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6fa32c0
        public_6fa32b5 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6fa32c0 : nop
        add eax, ebp
        push ebp
        push eax
        call public_6fa4790
        add ebp, 0x24
        add esp, 8
        cmp ebp, esi
        jne public_6fa32b5
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa32d7 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub edi, edx
        mov eax, edi
        mov edi, dword ptr ss : [esp+0x28]
        je public_6fa3310
        mov ebp, eax
        nop 
        lea esp, ss:[esp]
        public_6fa3300 : nop
        push edi
        push esi
        call public_6fa4790
        add esp, 8
        add esi, 0x24
        dec ebp
        jne public_6fa3300
        public_6fa3310 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+8]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x28], eax
        je public_6fa335c
        lea ebp, ds:[edi+0x14]
        lea esi, ds:[ebx+8]
        public_6fa3325 : nop
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [esi-8], edx
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi-4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [edi+0x10]
        push ebp
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi+8], eax
        call public_6fa6040
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x24
        lea ecx, ds:[esi-8]
        cmp ecx, eax
        jne public_6fa3325
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa335c : nop
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6fa3372 : nop
        test edi, edi
        jbe public_6fa3424
        lea eax, ds:[edi+edi*8]
        shl eax, 2
        mov edi, esi
        sub edi, eax
        cmp edi, esi
        mov ebp, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_6fa33ac
        mov edi, edi
        public_6fa3390 : nop
        push edi
        push ebp
        call public_6fa4790
        add edi, 0x24
        add esp, 8
        add ebp, 0x24
        cmp edi, esi
        jne public_6fa3390
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_6fa33ac : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, eax
        cmp ebx, esi
        je public_6fa33d1
        public_6fa33b7 : nop
        sub esi, 0x24
        sub edi, 0x24
        push esi
        mov ecx, edi
        call public_6fa5600
        cmp esi, ebx
        jne public_6fa33b7
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_6fa33d1 : nop
        lea edx, ds:[eax+ebx]
        cmp ebx, edx
        mov dword ptr ss : [esp+0x24], edx
        je public_6fa3421
        mov edi, dword ptr ss : [esp+0x28]
        lea ebp, ds:[edi+0x14]
        lea esi, ds:[ebx+8]
        public_6fa33e6 : nop
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi-8], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi-4], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+8], ecx
        push ebp
        lea ecx, ds:[esi+0xC]
        call public_6fa6040
        mov eax, dword ptr ss : [esp+0x24]
        add esi, 0x24
        lea edx, ds:[esi-8]
        cmp edx, eax
        jne public_6fa33e6
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_6fa3421 : nop
        add dword ptr ds : [ecx+8], eax
        public_6fa3424 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6fa30e0)
    }
}

#undef public_6fa3132
#undef public_6fa3134
#undef public_6fa313c
#undef public_6fa314f
#undef public_6fa315c
#undef public_6fa3180
#undef public_6fa3198
#undef public_6fa31a2
#undef public_6fa31c2
#undef public_6fa31da
#undef public_6fa31e0
#undef public_6fa31f3
#undef public_6fa3200
#undef public_6fa320e
#undef public_6fa324c
#undef public_6fa327a
#undef public_6fa32b5
#undef public_6fa32c0
#undef public_6fa32d7
#undef public_6fa3300
#undef public_6fa3310
#undef public_6fa3325
#undef public_6fa335c
#undef public_6fa3372
#undef public_6fa3390
#undef public_6fa33ac
#undef public_6fa33b7
#undef public_6fa33d1
#undef public_6fa33e6
#undef public_6fa3421
#undef public_6fa3424
